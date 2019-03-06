/********************************************************************************
** Form generated from reading UI file 'blockssubtab.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKSSUBTAB_H
#define UI_BLOCKSSUBTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_blocksSubTab
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;

    void setupUi(QWidget *blocksSubTab)
    {
        if (blocksSubTab->objectName().isEmpty())
            blocksSubTab->setObjectName(QStringLiteral("blocksSubTab"));
        blocksSubTab->resize(1019, 608);
        gridLayout = new QGridLayout(blocksSubTab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(blocksSubTab);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QFont font;
        font.setPointSize(10);
        tabWidget->setFont(font);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(blocksSubTab);

        QMetaObject::connectSlotsByName(blocksSubTab);
    } // setupUi

    void retranslateUi(QWidget *blocksSubTab)
    {
        blocksSubTab->setWindowTitle(QApplication::translate("blocksSubTab", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class blocksSubTab: public Ui_blocksSubTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKSSUBTAB_H
