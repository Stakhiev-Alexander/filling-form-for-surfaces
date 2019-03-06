#include "newdictionaryadd.hpp"
#include "ui_newdictionaryadd.h"

NewDictionaryAdd::NewDictionaryAdd(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::NewDictionaryAdd)
{
  ui->setupUi(this);
}

NewDictionaryAdd::~NewDictionaryAdd()
{
  delete ui;
}
