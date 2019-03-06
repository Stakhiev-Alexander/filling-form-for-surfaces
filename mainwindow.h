#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <vector>
#include <QTreeWidgetItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  static MainWindow* GetInstance(QWidget* parent = 0);

public slots:

  void addEP();

  void deleteEP();

  void prepareMenu(const QPoint & pos);

  int getTabCount();

  void setCurrentTab(int row);

  void on_backButton_clicked();

  void addTab();

private slots:

  void on_tabWidget_tabCloseRequested(int index);

  //void on_actionInseartIntoDB_triggered();

  void on_forwardButton_clicked();

  void on_DicSearch_triggered();

  void on_Open_triggered();

  void on_Save_triggered();

  void on_New_triggered();

  void on_AboutProgram_triggered();

  void on_Reference_triggered();

  //void on_treeWidget_doubleClicked(const QModelIndex &index);

  void on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);

private:
  Ui::MainWindow *ui;
  static MainWindow* mainInstance;
  void addRoot(QString name);
  void addChild(QTreeWidgetItem *parent, QString name);
};

#endif // MAINWINDOW_H
