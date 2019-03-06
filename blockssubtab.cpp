#include "blockssubtab.hpp"
#include "ui_blockssubtab.h"

#include <QToolButton>

blocksSubTab::blocksSubTab(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::blocksSubTab)
{
  ui->setupUi(this);

  QToolButton *tb = new QToolButton();
  tb->setText("+");
  tb->setAutoRaise(true);
  connect(tb, SIGNAL(clicked()), this, SLOT(addTab()));

  QString tabName = "БП" + QString::number(ui->tabWidget->count() + 1);
  QTabWidget *mainTab = new QTabWidget;


}

blocksSubTab::~blocksSubTab()
{
  delete ui;
}
