#ifndef ELEMENTARYSURFACETAB_HPP
#define ELEMENTARYSURFACETAB_HPP

#include <QWidget>

namespace Ui {
class ElementarySurfaceTab;
}

class ElementarySurfaceTab : public QWidget
{
  Q_OBJECT

public:
  explicit ElementarySurfaceTab(QWidget *parent = 0);
  ~ElementarySurfaceTab();

public slots:

  void clearTables();

  bool checkFilledTables();

private slots:

  void on_comboBox_currentIndexChanged(int index);

  void on_tableWidget_cellChanged(int row, int column);

  void on_comboBox_2_currentIndexChanged(int index);

  void tableFill();

  void on_tableWidget_2_cellChanged(int row, int column);

private:
  Ui::ElementarySurfaceTab *ui;
};

#endif // ELEMENTARYSURFACETAB_HPP
