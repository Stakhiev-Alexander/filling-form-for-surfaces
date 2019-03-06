#ifndef DICTIONARYSEARCH_HPP
#define DICTIONARYSEARCH_HPP

#include <QDialog>

namespace Ui {
class DictionarySearch;
}

class DictionarySearch : public QDialog
{
  Q_OBJECT

public:
  explicit DictionarySearch(QWidget *parent = 0);
  ~DictionarySearch();

private slots:

  void listOutDicsWithCheckboxes();

  void on_buttonBox_accepted();

  void on_Find_clicked();

  void on_Cancel_clicked();

  void on_addDic_clicked();

private:
  Ui::DictionarySearch *ui;
};

#endif // DICTIONARYSEARCH_HPP
