//TO_DO
// -change columns in DB according to the task
// -specify wrong input
// -in the first combobox after choosing another index
//    remains an empty slot(pressing it crashes the program)

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

#include <QTabWidget>
#include <QtSql>
#include <QMessageBox>
#include <QToolButton>
#include <QLabel>
#include <QLayout>
#include <QFileDialog>
#include <vector>
#include <string>
#include <QTableWidget>

#include "dictionarysearch.hpp"
#include "elementarysurfacetab.hpp"
#include "addingnewelementarysurfacewindow.hpp"
#include "jsonInteractions.hpp"
#include "blockstab.h"

QString currentProjectPath; //var for full absolute path to json file, which is worked on
std::vector<std::string> *TabNames;
std::vector< std::vector< std::string > > *blocksTable;
std::vector<int> *EPType;
QTreeWidgetItem *widgetUnderMenu;
QPoint posOfWidgetUnderMenu;

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  ui->tabWidget->tabBar()->setVisible(false);

  QString tabName = "ЭП" + QString::number(ui->tabWidget->count() + 1);
  ElementarySurfaceTab *mainTab = new ElementarySurfaceTab;
  ui->tabWidget->addTab(mainTab, tabName);

  addChild(ui->treeWidget->topLevelItem(0), tabName);

  QToolButton *tb = new QToolButton();
  tb->setText("+");
  tb->setAutoRaise(true);
  connect(tb, SIGNAL(clicked()), this, SLOT(addTab()));
  ui->tabWidget->addTab(new QLabel(""), QString());
  TabNames = new std::vector<std::string>(1);
  TabNames->at(0) = ui->tabWidget->tabText(0).toStdString();
  blocksTable = new std::vector< std::vector< std::string > >;
  EPType = new std::vector<int>(2);
  ui->tabWidget->setTabEnabled(1, false);
  ui->tabWidget->tabBar()->setTabButton(1, QTabBar::RightSide, tb);
  ui->backButton->hide();

  connect(ui->treeWidget,&QTreeWidget::customContextMenuRequested,this,&MainWindow::prepareMenu);//menu of the tree widget

  blocksTab *w2 = new blocksTab();

  w2->setObjectName("page2BT");
  connect(w2, SIGNAL(cellDoubleClicked(int,int)), this, SLOT(setCurrentTab(int)));
  ui->stackedWidget->addWidget(w2);
}

MainWindow::~MainWindow()
{
  delete ui;
}

MainWindow* MainWindow::mainInstance = 0;

MainWindow* MainWindow::GetInstance(QWidget *parent)
{
  if(mainInstance == NULL) {
    mainInstance = new MainWindow(parent);
  }
  return mainInstance;
}

void MainWindow::setCurrentTab(int row)
{
  ui->tabWidget->setCurrentIndex(row);
}

int MainWindow::getTabCount()
{
  return ui->tabWidget->count();
}

void MainWindow::addTab()
{
  QString tabName = "ЭП" + QString::number(ui->tabWidget->count());
  ElementarySurfaceTab *mainTab = new ElementarySurfaceTab(ui->tabWidget);
  ui->tabWidget->insertTab(ui->tabWidget->count() - 1, mainTab, tabName);
  ui->tabWidget->setCurrentIndex(ui->tabWidget->count() - 2);

  switch (EPType->at(0)) {
  case 0:
    addChild(ui->treeWidget->topLevelItem(0), tabName);
    break;
  case 1:
    addChild(ui->treeWidget->topLevelItem(1), tabName);
    break;
  case 2:
    addChild(ui->treeWidget->topLevelItem(2), tabName);
    break;
  default:
    break;
  }

  TabNames->resize(TabNames->size() + 1);
  TabNames->at(TabNames->size() - 1) = tabName.toStdString();
}

void MainWindow::addEP()
{
  AddingNewElementarySurfaceWindow *addEpWin = new AddingNewElementarySurfaceWindow;
  connect(addEpWin, SIGNAL(on_createEP_clicked()) ,addEpWin,SLOT(transferEPParameters()));
  connect(addEpWin, SIGNAL(on_createEP_clicked()) ,this, SLOT(addTab()));
  connect(addEpWin, SIGNAL(on_createEP_clicked()) ,addEpWin, SLOT(close()));
  addEpWin->show();
}

void MainWindow::deleteEP()
{
  if (widgetUnderMenu) {
    QString tabName = widgetUnderMenu->text(0);
    for (int i = 0; i < ui->tabWidget->count(); i++) {
      if (tabName == ui->tabWidget->tabText(i)) {
         MainWindow::on_tabWidget_tabCloseRequested(i);
         delete ui->treeWidget->itemAt(posOfWidgetUnderMenu);
         return;
      }
    }
  }
}

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
  ui->tabWidget->removeTab(index);
  for (int i = 0; i < ui->tabWidget->count() - 1; i++) {
    QString tabName = "ЭП" + QString::number(i + 1);
    ui->tabWidget->setTabText(i, tabName);
  }
  if (index == ui->tabWidget->count() - 1) {
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count() - 2);
  }

  TabNames->clear();
  TabNames->resize(0);
  for (int i = 0; i < ui->tabWidget->count() - 1; i++) {
    TabNames->resize(TabNames->size() + 1);
    TabNames->at(i) = ui->tabWidget->tabText(i).toStdString();
  }
}



/*
 *    Methods for navigating through different pages of the application
 */

void MainWindow::on_forwardButton_clicked()
{
//  if (ui->stackedWidget->currentIndex() == 0) {
//    for (int i = 0; i < ui->tabWidget->count() - 1; i++) {
//      ElementarySurfaceTab *es = qobject_cast<ElementarySurfaceTab *>(ui->tabWidget->widget(i));
//      if (!es->checkFilledTables()) {
//        QMessageBox msgBox;
//        msgBox.setText("Не все поля заполнены");
//        msgBox.exec();
//        return;
//      }
//    }
//  }
  if (ui->stackedWidget->currentIndex() == 0) {
    blocksTab *bt = ui->stackedWidget->findChild<blocksTab*>("page2BT");
    bt->fillEPList();
    ui->forwardButton->hide();
  }

  if (ui->stackedWidget->currentIndex() == 1) {
    blocksTab *bt = ui->stackedWidget->findChild<blocksTab*>("page2BT");
    bt->fillBlocksTable();
  }

  ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex() + 1);
  ui->backButton->show();
}

void MainWindow::on_backButton_clicked()
{
  ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex() - 1);
  ui->backButton->hide();
  ui->forwardButton->show();
}

void MainWindow::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
  QString tabName = item->text(column);

  for (int i = 0; i < ui->tabWidget->count(); i++) {
    if (tabName == ui->tabWidget->tabText(i)) {
       ui->tabWidget->setCurrentIndex(i);
       return;
    }
  }
}

/*
 *    Methods for menu bar
 */
void MainWindow::on_DicSearch_triggered()
{
  DictionarySearch *dicSearch = new DictionarySearch;
  dicSearch->show();
}

void MainWindow::on_Open_triggered()
{
  QString filePath = QFileDialog::getOpenFileName(this, tr("Open File"),tr("") ,tr("JSON (*.json)"));
  QFile file(filePath);
  if (!file.isOpen()) {
    QMessageBox msgBox;
      msgBox.setText("Не получилось открыть файл");
      msgBox.exec();
      return;
  } else {
    currentProjectPath = filePath;
  }
}

void MainWindow::on_Save_triggered()
{
  jsonInteractions::writeToJson();
}

void MainWindow::on_New_triggered()
{
  currentProjectPath = "";
}

void MainWindow::on_AboutProgram_triggered()
{
  QMessageBox msgBox;
  msgBox.setText("About program info");
  msgBox.exec();
}

void MainWindow::on_Reference_triggered()
{
  QMessageBox msgBox;
  msgBox.setText("Reference info");
  msgBox.exec();
}

void MainWindow::addRoot(QString name)
{
  QTreeWidgetItem *item = new QTreeWidgetItem(ui->treeWidget);
  item->setText(0, name);
  ui->treeWidget->addTopLevelItem(item);
}

void MainWindow::addChild(QTreeWidgetItem *parent, QString name)
{
  QTreeWidgetItem *item = new QTreeWidgetItem();
  item->setText(0, name);
  parent->addChild(item);
}

void MainWindow::prepareMenu(const QPoint & pos)
{
  QTreeWidget *tree = ui->treeWidget;

  widgetUnderMenu = tree->itemAt(pos);
  posOfWidgetUnderMenu = pos;

  QAction *newAct = new QAction(tr("Новая"), this);
  newAct->setStatusTip(tr("Создать новую ЭП"));
  connect(newAct, SIGNAL(triggered()), this, SLOT(addEP()));

  QAction *deleteAct = new QAction(tr("Удалить"), this);
  deleteAct->setStatusTip(tr("Удалить ЭП"));
  connect(deleteAct, SIGNAL(triggered()), this, SLOT(deleteEP()));

  QMenu menu(this);
  menu.addAction(newAct);
  menu.addAction(deleteAct);

  QPoint pt(pos);
  menu.exec(tree->mapToGlobal(pos));
}
