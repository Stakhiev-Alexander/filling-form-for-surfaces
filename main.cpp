#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MainWindow mainWindow;
  mainWindow.setFixedSize(1490, 686);
  mainWindow.show();
  return a.exec();
}
