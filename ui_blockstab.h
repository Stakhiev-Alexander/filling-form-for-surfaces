/********************************************************************************
** Form generated from reading UI file 'blockstab.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKSTAB_H
#define UI_BLOCKSTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_blocksTab
{
public:
    QTableWidget *tableWidget;
    QPushButton *newBPButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *blocksTab)
    {
        if (blocksTab->objectName().isEmpty())
            blocksTab->setObjectName(QStringLiteral("blocksTab"));
        blocksTab->resize(1153, 572);
        tableWidget = new QTableWidget(blocksTab);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 0, 551, 481));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setDragEnabled(true);
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setDragDropMode(QAbstractItemView::DragDrop);
        tableWidget->setDefaultDropAction(Qt::CopyAction);
        tableWidget->setShowGrid(true);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setVisible(false);
        newBPButton = new QPushButton(blocksTab);
        newBPButton->setObjectName(QStringLiteral("newBPButton"));
        newBPButton->setGeometry(QRect(40, 80, 118, 46));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(newBPButton->sizePolicy().hasHeightForWidth());
        newBPButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(9);
        newBPButton->setFont(font);
        scrollArea = new QScrollArea(blocksTab);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(570, 20, 91, 271));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 89, 269));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(blocksTab);

        QMetaObject::connectSlotsByName(blocksTab);
    } // setupUi

    void retranslateUi(QWidget *blocksTab)
    {
        blocksTab->setWindowTitle(QApplication::translate("blocksTab", "Form", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("blocksTab", "BlockName", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("blocksTab", "1", 0));
        newBPButton->setText(QApplication::translate("blocksTab", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\321\213\320\271\n"
"\320\261\320\273\320\276\320\272", 0));
    } // retranslateUi

};

namespace Ui {
    class blocksTab: public Ui_blocksTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKSTAB_H
