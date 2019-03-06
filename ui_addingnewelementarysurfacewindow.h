/********************************************************************************
** Form generated from reading UI file 'addingnewelementarysurfacewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINGNEWELEMENTARYSURFACEWINDOW_H
#define UI_ADDINGNEWELEMENTARYSURFACEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddingNewElementarySurfaceWindow
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *nextPage;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QListWidget *listWidget_2;
    QPushButton *createEP;
    QLabel *label_2;

    void setupUi(QWidget *AddingNewElementarySurfaceWindow)
    {
        if (AddingNewElementarySurfaceWindow->objectName().isEmpty())
            AddingNewElementarySurfaceWindow->setObjectName(QStringLiteral("AddingNewElementarySurfaceWindow"));
        AddingNewElementarySurfaceWindow->setWindowModality(Qt::ApplicationModal);
        AddingNewElementarySurfaceWindow->resize(351, 323);
        AddingNewElementarySurfaceWindow->setLayoutDirection(Qt::RightToLeft);
        gridLayout = new QGridLayout(AddingNewElementarySurfaceWindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(14);
        stackedWidget = new QStackedWidget(AddingNewElementarySurfaceWindow);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        listWidget = new QListWidget(page);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QFont font;
        font.setPointSize(10);
        listWidget->setFont(font);
        listWidget->setLayoutDirection(Qt::LeftToRight);
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setProperty("showDropIndicator", QVariant(false));
        listWidget->setMovement(QListView::Static);
        listWidget->setFlow(QListView::TopToBottom);
        listWidget->setViewMode(QListView::ListMode);

        gridLayout_2->addWidget(listWidget, 1, 0, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        nextPage = new QPushButton(page);
        nextPage->setObjectName(QStringLiteral("nextPage"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nextPage->sizePolicy().hasHeightForWidth());
        nextPage->setSizePolicy(sizePolicy);
        nextPage->setFont(font);
        nextPage->setLayoutDirection(Qt::RightToLeft);

        gridLayout_2->addWidget(nextPage, 2, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        listWidget_2 = new QListWidget(page_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setFont(font);
        listWidget_2->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(listWidget_2, 1, 0, 1, 1);

        createEP = new QPushButton(page_2);
        createEP->setObjectName(QStringLiteral("createEP"));
        sizePolicy.setHeightForWidth(createEP->sizePolicy().hasHeightForWidth());
        createEP->setSizePolicy(sizePolicy);
        createEP->setFont(font);
        createEP->setLayoutDirection(Qt::RightToLeft);

        gridLayout_3->addWidget(createEP, 2, 0, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        createEP->raise();
        listWidget_2->raise();
        label_2->raise();

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(AddingNewElementarySurfaceWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AddingNewElementarySurfaceWindow);
    } // setupUi

    void retranslateUi(QWidget *AddingNewElementarySurfaceWindow)
    {
        AddingNewElementarySurfaceWindow->setWindowTitle(QApplication::translate("AddingNewElementarySurfaceWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\255\320\237", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("AddingNewElementarySurfaceWindow", "\320\235\320\260\321\200\321\203\320\266\320\275\321\213\320\265 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\320\270 \320\262\321\200\320\260\321\211\320\265\320\275\320\270\321\217", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("AddingNewElementarySurfaceWindow", "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\320\270 \320\262\321\200\320\260\321\211\320\265\320\275\320\270\321\217", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("AddingNewElementarySurfaceWindow", "\320\232\321\200\320\265\320\277\320\265\320\266\320\275\321\213\320\265 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\320\270 \320\262\321\200\320\260\321\211\320\265\320\275\320\270\321\217", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("AddingNewElementarySurfaceWindow", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217 \320\255\320\237:", 0));
        nextPage->setText(QApplication::translate("AddingNewElementarySurfaceWindow", "Next", 0));
        createEP->setText(QApplication::translate("AddingNewElementarySurfaceWindow", "Create", 0));
        label_2->setText(QApplication::translate("AddingNewElementarySurfaceWindow", "\320\242\320\270\320\277 \320\255\320\237:", 0));
    } // retranslateUi

};

namespace Ui {
    class AddingNewElementarySurfaceWindow: public Ui_AddingNewElementarySurfaceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINGNEWELEMENTARYSURFACEWINDOW_H
