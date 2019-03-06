#include "blockstab.h"
#include "ui_blockstab.h"
#include "elementarysurfacetab.hpp"
#include "mainwindow.h"

#include <QTableWidget>
#include <QCheckBox>
#include <QVBoxLayout>
#include <QWidget>
#include <ui_mainwindow.h>
#include <iostream>
#include <QDebug>

extern std::vector<std::string> *TabNames;
extern std::vector< std::vector< std::string > > *blocksTable;

blocksTab::blocksTab(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::blocksTab)
{
  ui->setupUi(this);

  //Uncommenting this causes very strange endless cycle
  //MainWindow* instance = MainWindow::GetInstance();
  //connect(ui->tableWidget, SIGNAL(cellDoubleClicked(int,int)), instance, SLOT(setCurrentTab(int)));

  ui->tableWidget->setCellWidget(0, 0, ui->newBPButton);
  ui->tableWidget->setRowHeight(0, ui->newBPButton->height());
  ui->tableWidget->setColumnWidth(0, ui->newBPButton->width());
  ui->tableWidget->setColumnWidth(ui->tableWidget->rowCount() - 1, ui->newBPButton->width() + 1);
  ui->tableWidget->setRowHeight(ui->tableWidget->rowCount() - 1, ui->newBPButton->height() + 1);
  ui->scrollArea->hide();

  QVBoxLayout *vb = new QVBoxLayout;
  vb->setAlignment(Qt::AlignTop);

  QWidget *CBContainer = new QWidget();
  CBContainer->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);

  CBContainer->setLayout(vb);
  ui->scrollArea->setWidget(CBContainer);
}

blocksTab::~blocksTab()
{
  delete ui;
}

void blocksTab::on_newBPButton_clicked()
{
  ui->tableWidget->insertRow(ui->tableWidget->rowCount() - 1);
  ui->tableWidget->setRowHeight(ui->tableWidget->rowCount() - 2, ui->newBPButton->height() + 1);
  ui->tableWidget->setItem(ui->tableWidget->rowCount() - 2, 0,
                           new QTableWidgetItem(QString::fromStdString(std::string("Блок_") + std::to_string(ui->tableWidget->rowCount() - 1))));
  ui->scrollArea->hide();
}

void blocksTab::on_tableWidget_cellClicked(int row, int column)
{
  QVBoxLayout *vbl = qobject_cast <QVBoxLayout*> (ui->scrollArea->widget()->layout());
  if (column == 0 && row != ui->tableWidget->rowCount() - 1) {
    ui->scrollArea->show();
    for (int i = 0; i < vbl->count(); i++) {
      QCheckBox *cb = qobject_cast <QCheckBox*>(vbl->itemAt(i)->widget());
      bool good = false;
      for (int j = 0; j < ui->tableWidget->columnCount(); j++) {
        if (ui->tableWidget->item(ui->tableWidget->currentRow(), j)) {        //item exists
          if (ui->tableWidget->item(ui->tableWidget->currentRow(), j)->text() == cb->text()) {     //names are equal
            if (!cb->isChecked()) {
              cb->setChecked(true);                      //set checked
            }
            good = true;
            break;
          }
        }
      }
      if (!good && cb->isChecked()) {             //no such item in this row
        cb->setChecked(false);                    //set unchecked
      }
    }
  } else {
    ui->scrollArea->hide();
  }
}

void blocksTab::fillEPList()
{
  QVBoxLayout *vbl = qobject_cast <QVBoxLayout*> (ui->scrollArea->widget()->layout());
  if (vbl->count() > TabNames->size()) {
    while (vbl->count() != TabNames->size()) {
      QCheckBox *cb = qobject_cast <QCheckBox*>(vbl->itemAt(vbl->count() - 1)->widget());
      cb->setChecked(false);

      QLayoutItem* item = vbl->takeAt(vbl->count() - 1);
      if (QWidget* widget = item->widget()) {
        widget->deleteLater();
      }
      delete item;
    }
  } else if (vbl->count() < TabNames->size()) {
    int i = vbl->count();
    while (vbl->count() != TabNames->size()) {
      QCheckBox *cb = new QCheckBox;
      cb->setText(QString::fromStdString(TabNames->at(i)));
      vbl->addWidget(cb);
      connect(cb, SIGNAL(toggled(bool)), this, SLOT(checkbox_toggled(bool)));
      i++;
    }
  }
  ui->scrollArea->hide();
}

void blocksTab::checkbox_toggled(bool check)
{
  QCheckBox *cb = qobject_cast <QCheckBox*>(QObject::sender());
  if (check) {
    for (int i = 0; i < ui->tableWidget->columnCount(); i++) {            //check, if there is already such item in the table
      if (ui->tableWidget->item(ui->tableWidget->currentRow(), i)) {      //item exists
        if (ui->tableWidget->item(ui->tableWidget->currentRow(), i)->text() == cb->text()) { //names are equal
          return;
        }
      }
    }
    for (int col = 0; col < ui->tableWidget->columnCount(); col++) {      //insert item
      if (!ui->tableWidget->item(ui->tableWidget->currentRow(), col)) {   //in last free space
        ui->tableWidget->setItem(ui->tableWidget->currentRow(), col, new QTableWidgetItem(cb->text()));
        return;
      }
    }
    ui->tableWidget->insertColumn(ui->tableWidget->columnCount());        //no free space, so create it
    ui->tableWidget->setItem(ui->tableWidget->currentRow(), ui->tableWidget->columnCount() - 1, new QTableWidgetItem(cb->text()));
  }
  else {
    for (int col = 0; col < ui->tableWidget->columnCount(); col++) {
      if (ui->tableWidget->item(ui->tableWidget->currentRow(), col)) {    //item exists
        if (ui->tableWidget->item(ui->tableWidget->currentRow(), col)->text() == cb->text()) {  //found match
          int col2 = col + 1;
          for (; col2 < ui->tableWidget->columnCount() && (ui->tableWidget->item(ui->tableWidget->currentRow(), col2) != 0); col2++) {
            ui->tableWidget->item(ui->tableWidget->currentRow(), col2 - 1)->setText(ui->tableWidget->item(ui->tableWidget->currentRow(), col2)->text());
          }
          delete ui->tableWidget->item(ui->tableWidget->currentRow(), col2 - 1);
          break;
        }
      }
    }
  }
}

void blocksTab::fillBlocksTable()
{
  blocksTable->resize(ui->tableWidget->rowCount() - 1);
  for(int i = 0; i < ui->tableWidget->rowCount() - 1; i++) {
    for (int j = 0; j < ui->tableWidget->columnCount(); j++) {
      if (ui->tableWidget->item(i, j)) {
        blocksTable->at(i).resize(blocksTable->at(i).size() + 1);
        blocksTable->at(i).at(j) = ui->tableWidget->itemAt(i, j)->text().toStdString();
      } else {
        break;
      }
    }
  }
}
