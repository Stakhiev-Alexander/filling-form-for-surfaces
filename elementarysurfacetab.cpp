#include "elementarysurfacetab.hpp"
#include "ui_elementarysurfacetab.h"

#include <fstream>
#include <iostream>

#include <QComboBox>
#include <QtSql>
#include <QDialog>
#include <QCheckBox>
#include <QLayout>
#include <QLayoutItem>
#include <QPushButton>
#include <QMessageBox>
#include <QPainter>

#include "nlohmann\json.hpp"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dictionarysearch.hpp"
#include "elementarysurfacetab.hpp"

void resizeTable(QTableWidget *table);
void addValuesToDB(int number, int row1value, int row2value);

using json = nlohmann::json;
json j;
json j2;

ElementarySurfaceTab::ElementarySurfaceTab(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::ElementarySurfaceTab)
{
  ui->setupUi(this);

  ui->comboBox_2->setEnabled(0);
  ui->tableWidget->hide();
  ui->tableWidget_2->hide();
  ui->tableWidget_3->hide();
  ui->tableWidget_4->hide();
  ui->tableWidget_5->hide();
  ui->label_3->hide();
  ui->label_4->hide();
  ui->label_5->hide();
  ui->label_6->hide();

  std::ifstream i("table1.json");
  i >> j;
  std::ifstream i2("table2.json");
  i2 >> j2;

  for (json::iterator it = j.begin(); it != j.end(); ++it) {
    ui->comboBox->addItem(QString::fromStdString(it.key()));
  }
  ui->comboBox->setItemData(0, QSize(0,0), Qt::SizeHintRole);

  for (int col = 0; col < ui->tableWidget_2->columnCount(); col++) {
    ui->tableWidget_2->setHorizontalHeaderItem(col, new QTableWidgetItem(QString::fromStdString(j2["tab2Headers"][col])));
  }

  //ui->gridLayout->addWidget(createHHTable1());
  ui->tableWidget_4->setHorizontalHeaderItem(0, new QTableWidgetItem(QString("Режущий\nинструмент")));
  ui->tableWidget_4->setHorizontalHeaderItem(2, new QTableWidgetItem(QString("Режимы резания\n")));
  ui->tableWidget_4->setHorizontalHeaderItem(3, new QTableWidgetItem(QString("Стойкость РИ\n")));
  ui->tableWidget_4->setColumnWidth(2, 240);
  ui->tableWidget_4->horizontalHeaderItem(2)->setSizeHint(QSize(240, 43));
  ui->tableWidget_4->setColumnWidth(3, 120);

  ui->tableWidget_5->setColumnWidth(6, 60);
  ui->tableWidget_5->setColumnWidth(7, 60);
  ui->tableWidget_5->horizontalHeaderItem(5)->setSizeHint(QSize(40, 20));
  ui->tableWidget_5->setGeometry(ui->tableWidget_5->x() + 1, ui->tableWidget_5->y() + 4, ui->tableWidget_5->width(), ui->tableWidget_5->height());
  ui->tableWidget_5->setFrameStyle(QFrame::NoFrame);

  ui->tableWidget_4->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
  ui->tableWidget_5->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
  ui->tableWidget_4->setSelectionMode(QAbstractItemView::NoSelection);
  ui->tableWidget_5->setSelectionMode(QAbstractItemView::NoSelection);
  ui->tableWidget_4->resize(ui->tableWidget_4->width(), 74);
}

ElementarySurfaceTab::~ElementarySurfaceTab()
{
  delete ui;
}

void resizeTable(QTableWidget *table)
{
  unsigned int tableHeight = 0;
  for (int i = 0; i < table->rowCount(); i++) {
    tableHeight += table->rowHeight(i);
  }
  if (table->horizontalHeader()->isVisible()) {
    tableHeight += table->horizontalHeader()->height() + table->rowCount();
    table->resizeColumnsToContents();
  } else {
    tableHeight += table->rowCount() - 1;
  }

  unsigned int tableWidth = 0;
  for (int i = 0; i < table->columnCount(); i++) {
    tableWidth += table->columnWidth(i);
  }

  if (table->verticalHeader()->isVisible()) {
    tableWidth += table->columnCount();
  } else {
    tableWidth += table->columnCount() - 1;
  }

  table->resize(tableWidth, tableHeight);
}

void ElementarySurfaceTab::on_comboBox_currentIndexChanged(int)
{
  if (j[ui->comboBox->currentText().toStdString()].size() != ui->comboBox_2->count()) {
    if (j[ui->comboBox->currentText().toStdString()].size() > ui->comboBox_2->count()) {
      while (j[ui->comboBox->currentText().toStdString()].size() != ui->comboBox_2->count()) {
        ui->comboBox_2->addItem(QString::number(ui->comboBox_2->count() + 1));
      }
    } else {
      while (j[ui->comboBox->currentText().toStdString()].size() != ui->comboBox_2->count()) {
        ui->comboBox_2->removeItem(ui->comboBox_2->count() - 1);
      }
    }
  }

  ui->comboBox_2->setEnabled(1);
  ui->comboBox_2->setCurrentIndex(0);

  ElementarySurfaceTab::on_comboBox_2_currentIndexChanged(0);
}

void ElementarySurfaceTab::on_comboBox_2_currentIndexChanged(int)
{
  ui->tableWidget->show();
  ui->tableWidget_2->show();
  ui->tableWidget_3->show();
  ui->tableWidget_4->show();
  ui->tableWidget_5->show();
  ui->label_3->show();
  ui->label_4->show();
  ui->label_5->show();
  ui->label_6->show();
  ui->picLabel->show();
 // clearTables();

  std::string picId = ui->comboBox->currentText().toStdString();
  picId.replace(picId.find('/'), 1, ".");
  std::string picWay = "./pics/" + picId + '_' + ui->comboBox_2->currentText().toStdString() + ".jpg";

  QPixmap pix;
  pix.load(picWay.c_str());
  ui->picLabel->setPixmap(pix);

  ElementarySurfaceTab::tableFill();

  resizeTable(ui->tableWidget);
  resizeTable(ui->tableWidget_2);
  ui->tableWidget_2->resize((ui->tableWidget_2->width() - 3), ui->tableWidget_2->height());
}

void ElementarySurfaceTab::tableFill()
{
  std::ifstream i("table1.json");
  i >> j;
  std::ifstream i2("table2.json");
  i2 >> j2;

  ui->tableWidget->setRowCount(j[ui->comboBox->currentText().toStdString()][ui->comboBox_2->currentText().toStdString()]["rowCount"]);
  ui->tableWidget_2->setRowCount(j[ui->comboBox->currentText().toStdString()][ui->comboBox_2->currentText().toStdString()]["stageCount"]);

  for (int row = 0; row < ui->tableWidget->rowCount(); row++) {
    ui->tableWidget->setVerticalHeaderItem(row, new QTableWidgetItem(QString::fromStdString(
                                                                     j[ui->comboBox->currentText().toStdString()]
                                                                     [ui->comboBox_2->currentText().toStdString()]["row" + std::to_string(row)])));
  }

  for (int row = 0; row < ui->tableWidget_2->rowCount(); row++) {
    ui->tableWidget_2->setItem(row, 0, new QTableWidgetItem(QString::number(row + 1)));

    ui->tableWidget_2->setCellWidget(row, 1, new QComboBox);
    QComboBox *cb1 = qobject_cast<QComboBox *>(ui->tableWidget_2->cellWidget(row, 1));
    for (unsigned int n = 0; n < j2[ui->comboBox->currentText().toStdString()][ui->comboBox_2->currentText().toStdString()]["MetObr" + std::to_string(row)].size(); n++) {
      cb1->addItem(QString::fromStdString(j2[ui->comboBox->currentText().toStdString()]
                                                   [ui->comboBox_2->currentText().toStdString()]["MetObr" + std::to_string(row)][n]));
    }

    //rules for 2 and 3 are in MainWindow::on_tableWidget_2_cellChanged
    ui->tableWidget_2->setCellWidget(row, 4, new QComboBox);
    QComboBox *cb2 = qobject_cast<QComboBox *>(ui->tableWidget_2->cellWidget(row, 4));
    for (int n = 0; n < j2[ui->comboBox->currentText().toStdString()][ui->comboBox_2->currentText().toStdString()]["VelPrip" + std::to_string(row)].size(); n++) {
      cb2->addItem(QString::fromStdString(j2[ui->comboBox->currentText().toStdString()]
                                                   [ui->comboBox_2->currentText().toStdString()]["VelPrip" + std::to_string(row)][n]));
    }

    ui->tableWidget_2->setItem(row, 5, new QTableWidgetItem(QString::fromStdString(j2[ui->comboBox->currentText().toStdString()]
                                                            [ui->comboBox_2->currentText().toStdString()]["Primen" + std::to_string(row)])));
  }

  ui->tableWidget_2->item(0, 2)->setToolTip("Введите названия, разделяя их запятой и пробелом");
  ui->tableWidget_2->item(0, 3)->setToolTip("Введите названия, разделяя их запятой и пробелом");

  ui->tableWidget_3->setVerticalHeaderItem(0, new QTableWidgetItem(QString::fromStdString(j[ui->comboBox->currentText().toStdString()]
                                                                     [ui->comboBox_2->currentText().toStdString()]["q"])));
  ui->tableWidget_3->setCellWidget(0, 0, new QComboBox);
  //ui->tableWidget_3->setSizeAdjustPolicy();
  QComboBox *cb3 = qobject_cast<QComboBox *>(ui->tableWidget_3->cellWidget(0, 0));
  for (int i = j[ui->comboBox->currentText().toStdString()][ui->comboBox_2->currentText().toStdString()]["qmin"];
       i <= j[ui->comboBox->currentText().toStdString()][ui->comboBox_2->currentText().toStdString()]["qmax"]; i++) {
    cb3->addItem(QString::number(i));
  }

  for (int i = 0; i < ui->tableWidget_4->rowCount(); i++) {
    ui->tableWidget_4->setItem(i, 0, new QTableWidgetItem(QString::number(i + 1)));
  }
}

void ElementarySurfaceTab::on_tableWidget_2_cellChanged(int row, int column)
{
  if (column == 2 || column == 3) {
    std::string text = ui->tableWidget_2->item(row, column)->text().toStdString();

    auto it = text.begin();
    while (it < text.end()) {
      if (*it != ',') {
        it++;
      } else {
        if (*(++it) != ' ') {
          ui->tableWidget_2->item(row, column)->setText("");
          QMessageBox msgBox;
          msgBox.setText("Неверный ввод.");
          msgBox.exec();
        }
      }
    }
  }
}

void ElementarySurfaceTab::on_tableWidget_cellChanged(int row, int column)
{
  std::string rci = "row" + std::to_string(row) + std::string("Min");
  std::string rcx = "row" + std::to_string(row) + std::string("Max");
  double min = j[ui->comboBox->currentText().toStdString()][ui->comboBox_2->currentText().toStdString()][rci];
  double max = j[ui->comboBox->currentText().toStdString()][ui->comboBox_2->currentText().toStdString()][rcx];
  if (ui->tableWidget->item(row, column)->text().toDouble() < min
      || ui->tableWidget->item(row, column)->text().toDouble() > max) {
    if (ui->tableWidget->item(row, column)->text() != "") {
      QMessageBox msgBox;
      msgBox.setText("Неверный ввод.");
      msgBox.exec();
    }
    ui->tableWidget->item(row, column)->setText("");
  }
}

bool ElementarySurfaceTab::checkFilledTables()
{
  for (int row = 0; row < ui->tableWidget->rowCount(); row++) {
    for (int column = 0; column < ui->tableWidget->columnCount(); column++) {
      if (ui->tableWidget->item(row, column)->text() == "") {
        return 0;
      }
    }
  }
  for (int row = 0; row < ui->tableWidget_2->rowCount(); row++) {
    for (int column = 0; column < ui->tableWidget_2->columnCount(); column++) {
      if (column == 2 || column == 3) {
        if (ui->tableWidget_2->item(row, column)->text() == "") {
          return 0;
        }
      }
    }
  }
  return 1;
}

void ElementarySurfaceTab::clearTables()
{
  ui->tableWidget->clearContents();

  for (int currentRow = 0; currentRow < ui->tableWidget_2->rowCount(); currentRow++) {
    for (int currentColumn = 0; currentColumn < ui->tableWidget_2->columnCount(); currentColumn++) {
      if (currentColumn == 2 || currentColumn == 3) {
         ui->tableWidget_2->item(currentRow, currentColumn)->setText("");
      }
    }
  }
}



