#include "addingnewelementarysurfacewindow.hpp"
#include "ui_addingnewelementarysurfacewindow.h"

#include <QDebug>
#include <QMessageBox>

#include "mainwindow.h"

int currentToggled1, currentToggled2;
extern std::vector<int> *EPType;

AddingNewElementarySurfaceWindow::AddingNewElementarySurfaceWindow(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::AddingNewElementarySurfaceWindow)
{
  ui->setupUi(this);
  currentToggled1 = -1;
  currentToggled2 = -1;
}

AddingNewElementarySurfaceWindow::~AddingNewElementarySurfaceWindow()
{
  delete ui;
}

void AddingNewElementarySurfaceWindow::on_nextPage_clicked()
{
  if (currentToggled1 == -1) {
    QMessageBox msgBox;
    msgBox.setText("Choose a variant from the list");
    msgBox.exec();
  } else {
    switch (currentToggled1) {
    case 0:
      ui->listWidget_2->addItem("Цилиндрическая поверхность");
      ui->listWidget_2->addItem("Коническая поверхность");
      ui->stackedWidget->setCurrentIndex(1);
      break;
    case 1:
      ui->listWidget_2->addItem("Трубчая поверхность");
      ui->listWidget_2->addItem("Каналовая поверхность");
      ui->stackedWidget->setCurrentIndex(1);
      break;
    case 2:
      ui->listWidget_2->addItem("Винтовая поверхность");
      ui->stackedWidget->setCurrentIndex(1);
      break;
    default:
      break;
    }
  }
}

void AddingNewElementarySurfaceWindow::transferEPParameters()
{
  if (currentToggled2 == -1) {
    QMessageBox msgBox;
    msgBox.setText("Choose a variant from the list");
    msgBox.exec();
  } else {
    EPType->at(0) = currentToggled1;
    EPType->at(1) = currentToggled2;
  }
}

void AddingNewElementarySurfaceWindow::on_listWidget_pressed(const QModelIndex &index)
{
  if (!index.isValid()) return;
  QListWidget *w = dynamic_cast <QListWidget *>(sender());
  if (w) {
    currentToggled1 = index.row();
  }
}

void AddingNewElementarySurfaceWindow::on_listWidget_2_pressed(const QModelIndex &index)
{
  if (!index.isValid()) return;
  QListWidget *w = dynamic_cast <QListWidget *>(sender());
  if (w) {
    currentToggled2 = index.row();
  }
}
