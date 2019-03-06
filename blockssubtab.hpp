#ifndef BLOCKSSUBTAB_HPP
#define BLOCKSSUBTAB_HPP

#include <QWidget>

namespace Ui {
class blocksSubTab;
}

class blocksSubTab : public QWidget
{
  Q_OBJECT

public:
  explicit blocksSubTab(QWidget *parent = 0);
  ~blocksSubTab();

private:
  Ui::blocksSubTab *ui;
};

#endif // BLOCKSSUBTAB_HPP
