#ifndef ADDINGNEWELEMENTARYSURFACEWINDOW_HPP
#define ADDINGNEWELEMENTARYSURFACEWINDOW_HPP

#include <QWidget>

namespace Ui {
class AddingNewElementarySurfaceWindow;
}

class AddingNewElementarySurfaceWindow : public QWidget
{
  Q_OBJECT

public:
  explicit AddingNewElementarySurfaceWindow(QWidget *parent = 0);
  ~AddingNewElementarySurfaceWindow();

signals:
  void on_createEP_clicked();

public slots:
  void transferEPParameters();

private slots:
  void on_nextPage_clicked();

  void on_listWidget_pressed(const QModelIndex &index);

  void on_listWidget_2_pressed(const QModelIndex &index);

private:
  Ui::AddingNewElementarySurfaceWindow *ui;
};

#endif // ADDINGNEWELEMENTARYSURFACEWINDOW_HPP
