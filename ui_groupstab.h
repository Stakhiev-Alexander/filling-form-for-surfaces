/********************************************************************************
** Form generated from reading UI file 'groupstab.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPSTAB_H
#define UI_GROUPSTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_groupsTab
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;

    void setupUi(QWidget *groupsTab)
    {
        if (groupsTab->objectName().isEmpty())
            groupsTab->setObjectName(QStringLiteral("groupsTab"));
        groupsTab->resize(1122, 640);
        gridLayout = new QGridLayout(groupsTab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(groupsTab);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QFont font;
        font.setPointSize(10);
        tabWidget->setFont(font);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(groupsTab);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(groupsTab);
    } // setupUi

    void retranslateUi(QWidget *groupsTab)
    {
        groupsTab->setWindowTitle(QApplication::translate("groupsTab", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class groupsTab: public Ui_groupsTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPSTAB_H
