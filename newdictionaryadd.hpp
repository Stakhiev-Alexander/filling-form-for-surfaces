#ifndef NEWDICTIONARYADD_HPP
#define NEWDICTIONARYADD_HPP

#include <QDialog>

namespace Ui {
class NewDictionaryAdd;
}

class NewDictionaryAdd : public QDialog
{
  Q_OBJECT

public:
  explicit NewDictionaryAdd(QWidget *parent = 0);
  ~NewDictionaryAdd();

private:
  Ui::NewDictionaryAdd *ui;
};

#endif // NEWDICTIONARYADD_HPP
