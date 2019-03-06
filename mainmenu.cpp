#include "mainmenu.hpp"

#include "mainwindow.h"
#include "dictionarysearch.hpp"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainMenu)
{
  ui->setupUi(this);
}

MainMenu::~MainMenu()
{
  delete ui;
}

void MainMenu::on_AddButton_clicked()
{

}

void MainMenu::on_DicButton_clicked()
{
  DictionarySearch *dicSearch = new DictionarySearch;
  dicSearch->show();
}
