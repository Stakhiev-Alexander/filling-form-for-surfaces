/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *New;
    QAction *Open;
    QAction *Save;
    QAction *SaveAs;
    QAction *DicSearch;
    QAction *Reference;
    QAction *AboutProgram;
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_0;
    QTabWidget *tabWidget;
    QTreeWidget *treeWidget;
    QPushButton *forwardButton;
    QPushButton *backButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1490, 686);
        New = new QAction(MainWindow);
        New->setObjectName(QStringLiteral("New"));
        Open = new QAction(MainWindow);
        Open->setObjectName(QStringLiteral("Open"));
        Save = new QAction(MainWindow);
        Save->setObjectName(QStringLiteral("Save"));
        SaveAs = new QAction(MainWindow);
        SaveAs->setObjectName(QStringLiteral("SaveAs"));
        DicSearch = new QAction(MainWindow);
        DicSearch->setObjectName(QStringLiteral("DicSearch"));
        Reference = new QAction(MainWindow);
        Reference->setObjectName(QStringLiteral("Reference"));
        AboutProgram = new QAction(MainWindow);
        AboutProgram->setObjectName(QStringLiteral("AboutProgram"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1491, 591));
        page_0 = new QWidget();
        page_0->setObjectName(QStringLiteral("page_0"));
        tabWidget = new QTabWidget(page_0);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(190, 0, 1301, 581));
        QFont font;
        font.setPointSize(10);
        tabWidget->setFont(font);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        treeWidget = new QTreeWidget(page_0);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 171, 331));
        treeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        treeWidget->setDragDropMode(QAbstractItemView::InternalMove);
        treeWidget->header()->setCascadingSectionResizes(true);
        treeWidget->header()->setHighlightSections(false);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(false));
        stackedWidget->addWidget(page_0);
        forwardButton = new QPushButton(centralWidget);
        forwardButton->setObjectName(QStringLiteral("forwardButton"));
        forwardButton->setGeometry(QRect(1380, 610, 81, 31));
        backButton = new QPushButton(centralWidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(30, 610, 81, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1490, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(New);
        menu->addAction(Open);
        menu->addSeparator();
        menu->addAction(Save);
        menu_2->addAction(DicSearch);
        menu_2->addAction(Reference);
        menu_2->addSeparator();
        menu_2->addAction(AboutProgram);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260\321\200\320\275\321\213\321\205 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\320\265\320\271", 0));
        New->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", 0));
        Open->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0));
        Save->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        SaveAs->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272...", 0));
        DicSearch->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \321\201\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272\320\260\320\274", 0));
        Reference->setText(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
        AboutProgram->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\320\255\320\273\320\265\320\274\320\265\320\275\321\202\320\260\321\200\320\275\321\213\320\265 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\320\270", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "\320\235\320\260\321\200\321\203\320\266\320\275\321\213\320\265 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\320\270 \320\262\321\200\320\260\321\211\320\265\320\275\320\270\321\217", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\320\270 \320\262\321\200\320\260\321\211\320\265\320\275\320\270\321\217", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "\320\232\321\200\320\265\320\277\320\265\320\266\320\275\321\213\320\265 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\320\270 \320\262\321\200\320\260\321\211\320\265\320\275\320\270\321\217", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        forwardButton->setText(QApplication::translate("MainWindow", "\320\222\320\277\320\265\321\200\320\265\320\264", 0));
        backButton->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\274\320\276\321\211\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
