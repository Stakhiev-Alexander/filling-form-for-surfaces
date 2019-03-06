#include "dictionarysearch.hpp"
#include "ui_dictionarysearch.h"

#include <QDir>
#include <iostream>
#include <fstream>
#include <QListWidgetItem>
#include <QFormLayout>
#include <QCheckBox>
#include <QMessageBox>
#include <QFileDialog>

#include "nlohmann\json.hpp"

using json = nlohmann::json;

QStringList listOutDictionaries()
{
  QDir dir("./handbooks/");
  QStringList nameFilter;
  QStringList listOut;
  nameFilter << "*.pdf";
  QFileInfoList list = dir.entryInfoList( nameFilter, QDir::Files );

  if (QFile::exists("./handbooks/external_handbooks.txt")){
    std::ifstream i("./handbooks/external_handbooks.txt");
    if (i.peek() != std::ifstream::traits_type::eof()) {
      std::string tmp;
      unsigned int n = 0;
      while (getline(i, tmp)) {
        if (QFile::exists(QString::fromStdString(tmp))) {
          list << QString::fromStdString(tmp);
        }
      }
    }
  }

  QFileInfo fileinfo;
  foreach (fileinfo, list) {
    listOut << fileinfo.fileName();
  }

  return listOut;
}

void DictionarySearch::listOutDicsWithCheckboxes()
{

  QStringList listOut = listOutDictionaries();
  QGridLayout *layout = new QGridLayout;
  unsigned int i = 0;
  foreach (QString out, listOut) {
    QLabel *label = new QLabel;
    label->setText(out);
    layout->addWidget(label, i, 0);
    layout->addWidget(new QCheckBox, i, 1);
    i++;
  }

  ui->scrollArea->setLayout(layout);
}

DictionarySearch::DictionarySearch(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DictionarySearch)
{
  ui->setupUi(this);
  listOutDicsWithCheckboxes();
}

DictionarySearch::~DictionarySearch()
{
  delete ui;
}

void DictionarySearch::on_buttonBox_accepted()
{
  delete ui;
}

void DictionarySearch::on_Find_clicked()
{
  std::string dirStr;
//  for (auto i = 0; i < ui->scrollArea->layout()->count(); i++) {
//    if (layout->itemAt(i, QFormLayout::LabelRole)) {
//      dirStr += ui->scrollArea->layout()->itemAt(i, QFormLayout::LabelRole)->text();
//    }
//  }

  std::string str = "Поиск выполнен по запросу " + ui->textEdit->toPlainText().toStdString()
      + " в справочниках" + dirStr;
  QMessageBox msgBox;
  msgBox.setText(QString::fromStdString(str));
  msgBox.exec();
}

void DictionarySearch::on_Cancel_clicked()
{
  this->~DictionarySearch();
}

void clearLayout(QLayout *layout)
{
    if (layout) {
        while(layout->count() > 0){
            QLayoutItem *item = layout->takeAt(0);
            delete item->widget();
            delete item;
        }
    }
}

void DictionarySearch::on_addDic_clicked()
{
  std::string pathToNewDic = (QFileDialog::getOpenFileName(this, tr("Open File"),tr("") ,tr("PDF (*.pdf)"))).toStdString();

  if (QFile::exists(QString::fromStdString(pathToNewDic))) {
    std::ifstream i("./handbooks/external_handbooks.txt");

    if (i.peek() != std::ifstream::traits_type::eof()) {
      std::string tmp;
      std::string str;
      while (getline(i, tmp)) {
        str += tmp;
        str += '\n';
      }


      std::cout << str << std::endl;

      str += pathToNewDic;

      std::cout << str << std::endl;

      std::ofstream o("./handbooks/external_handbooks.txt");
      o << str;
    }

   // clearLayout(ui->scrollArea->layout());
    listOutDicsWithCheckboxes();
  }
}
