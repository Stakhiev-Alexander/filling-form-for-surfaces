#ifndef BLOCKSTAB_H
#define BLOCKSTAB_H

#include <QWidget>
#include <string>
#include <vector>
#include <QTableWidgetItem>

namespace Ui {
class blocksTab;
}

class blocksTab : public QWidget
{
  Q_OBJECT

public:
  explicit blocksTab(QWidget *parent = 0);
  ~blocksTab();

signals:
  void on_tableWidget_cellDoubleClicked(int row, int column);

private slots:

  void on_newBPButton_clicked();

  void on_tableWidget_cellClicked(int row, int column);

  void checkbox_toggled(bool check);

public slots:

  void fillEPList();

  void fillBlocksTable();

private:
  Ui::blocksTab *ui;
};

#endif // BLOCKSTAB_H
