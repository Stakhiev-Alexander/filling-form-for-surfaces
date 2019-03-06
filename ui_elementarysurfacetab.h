/********************************************************************************
** Form generated from reading UI file 'elementarysurfacetab.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELEMENTARYSURFACETAB_H
#define UI_ELEMENTARYSURFACETAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ElementarySurfaceTab
{
public:
    QLabel *label_4;
    QLabel *label_2;
    QTableWidget *tableWidget_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label;
    QTableWidget *tableWidget;
    QLabel *picLabel;
    QTableWidget *tableWidget_3;
    QLabel *label_3;
    QLabel *label_5;
    QTableWidget *tableWidget_4;
    QTableWidget *tableWidget_5;
    QLabel *label_6;

    void setupUi(QWidget *ElementarySurfaceTab)
    {
        if (ElementarySurfaceTab->objectName().isEmpty())
            ElementarySurfaceTab->setObjectName(QStringLiteral("ElementarySurfaceTab"));
        ElementarySurfaceTab->resize(1254, 651);
        label_4 = new QLabel(ElementarySurfaceTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(370, 210, 291, 31));
        QFont font;
        font.setPointSize(10);
        label_4->setFont(font);
        label_2 = new QLabel(ElementarySurfaceTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 10, 91, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setItalic(true);
        label_2->setFont(font1);
        tableWidget_2 = new QTableWidget(ElementarySurfaceTab);
        if (tableWidget_2->columnCount() < 6)
            tableWidget_2->setColumnCount(6);
        QFont font2;
        font2.setPointSize(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font2);
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget_2->rowCount() < 1)
            tableWidget_2->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(0, 2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(0, 3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(0, 4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(0, 5, __qtablewidgetitem11);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(370, 240, 831, 121));
        tableWidget_2->setFont(font2);
        tableWidget_2->setLineWidth(3);
        tableWidget_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_2->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget_2->setTabKeyNavigation(true);
        tableWidget_2->setAlternatingRowColors(false);
        tableWidget_2->setTextElideMode(Qt::ElideMiddle);
        tableWidget_2->setShowGrid(true);
        tableWidget_2->setSortingEnabled(false);
        tableWidget_2->setWordWrap(true);
        tableWidget_2->setCornerButtonEnabled(true);
        tableWidget_2->setRowCount(1);
        tableWidget_2->horizontalHeader()->setVisible(true);
        tableWidget_2->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(130);
        tableWidget_2->horizontalHeader()->setHighlightSections(false);
        tableWidget_2->horizontalHeader()->setMinimumSectionSize(44);
        tableWidget_2->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_2->horizontalHeader()->setStretchLastSection(false);
        tableWidget_2->verticalHeader()->setVisible(false);
        tableWidget_2->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget_2->verticalHeader()->setDefaultSectionSize(30);
        tableWidget_2->verticalHeader()->setHighlightSections(false);
        tableWidget_2->verticalHeader()->setStretchLastSection(false);
        comboBox = new QComboBox(ElementarySurfaceTab);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setGeometry(QRect(90, 10, 69, 22));
        comboBox->setFont(font);
        comboBox->setToolTipDuration(0);
        comboBox->setEditable(false);
        comboBox_2 = new QComboBox(ElementarySurfaceTab);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(270, 10, 69, 22));
        comboBox_2->setFont(font);
        label = new QLabel(ElementarySurfaceTab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 71, 21));
        label->setFont(font1);
        tableWidget = new QTableWidget(ElementarySurfaceTab);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget->setItem(0, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget->setItem(1, 0, __qtablewidgetitem16);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(370, 90, 171, 61));
        tableWidget->setFont(font2);
        tableWidget->setInputMethodHints(Qt::ImhDigitsOnly);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->setCornerButtonEnabled(true);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(150);
        tableWidget->verticalHeader()->setVisible(true);
        picLabel = new QLabel(ElementarySurfaceTab);
        picLabel->setObjectName(QStringLiteral("picLabel"));
        picLabel->setGeometry(QRect(30, 100, 291, 351));
        picLabel->setScaledContents(true);
        tableWidget_3 = new QTableWidget(ElementarySurfaceTab);
        if (tableWidget_3->columnCount() < 1)
            tableWidget_3->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem17);
        if (tableWidget_3->rowCount() < 1)
            tableWidget_3->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(0, __qtablewidgetitem18);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(630, 90, 81, 31));
        tableWidget_3->setAcceptDrops(false);
        tableWidget_3->setAutoFillBackground(false);
        tableWidget_3->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget_3->setGridStyle(Qt::SolidLine);
        tableWidget_3->setWordWrap(true);
        tableWidget_3->setCornerButtonEnabled(true);
        tableWidget_3->horizontalHeader()->setVisible(false);
        tableWidget_3->horizontalHeader()->setDefaultSectionSize(52);
        tableWidget_3->horizontalHeader()->setHighlightSections(true);
        tableWidget_3->verticalHeader()->setVisible(true);
        tableWidget_3->verticalHeader()->setStretchLastSection(false);
        label_3 = new QLabel(ElementarySurfaceTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(370, 60, 91, 31));
        label_3->setFont(font);
        label_5 = new QLabel(ElementarySurfaceTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(630, 60, 121, 31));
        label_5->setFont(font);
        tableWidget_4 = new QTableWidget(ElementarySurfaceTab);
        if (tableWidget_4->columnCount() < 4)
            tableWidget_4->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        tableWidget_4->setHorizontalHeaderItem(3, __qtablewidgetitem22);
        if (tableWidget_4->rowCount() < 1)
            tableWidget_4->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(0, __qtablewidgetitem23);
        tableWidget_4->setObjectName(QStringLiteral("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(370, 430, 601, 111));
        tableWidget_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_4->horizontalHeader()->setDefaultSectionSize(120);
        tableWidget_4->verticalHeader()->setVisible(false);
        tableWidget_4->verticalHeader()->setDefaultSectionSize(30);
        tableWidget_5 = new QTableWidget(ElementarySurfaceTab);
        if (tableWidget_5->columnCount() < 8)
            tableWidget_5->setColumnCount(8);
        QFont font3;
        font3.setPointSize(7);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setFont(font3);
        tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setFont(font3);
        tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setFont(font3);
        tableWidget_5->setHorizontalHeaderItem(2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setFont(font3);
        tableWidget_5->setHorizontalHeaderItem(3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setFont(font3);
        tableWidget_5->setHorizontalHeaderItem(4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setFont(font3);
        tableWidget_5->setHorizontalHeaderItem(5, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setFont(font3);
        tableWidget_5->setHorizontalHeaderItem(6, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setFont(font3);
        tableWidget_5->setHorizontalHeaderItem(7, __qtablewidgetitem31);
        if (tableWidget_5->rowCount() < 1)
            tableWidget_5->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(0, __qtablewidgetitem32);
        tableWidget_5->setObjectName(QStringLiteral("tableWidget_5"));
        tableWidget_5->setGeometry(QRect(610, 450, 361, 51));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget_5->sizePolicy().hasHeightForWidth());
        tableWidget_5->setSizePolicy(sizePolicy);
        tableWidget_5->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_5->setShowGrid(true);
        tableWidget_5->horizontalHeader()->setDefaultSectionSize(40);
        tableWidget_5->verticalHeader()->setVisible(false);
        tableWidget_5->verticalHeader()->setDefaultSectionSize(30);
        label_6 = new QLabel(ElementarySurfaceTab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(370, 399, 241, 31));
        label_6->setFont(font);

        retranslateUi(ElementarySurfaceTab);

        comboBox->setCurrentIndex(0);
        comboBox_2->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ElementarySurfaceTab);
    } // setupUi

    void retranslateUi(QWidget *ElementarySurfaceTab)
    {
        ElementarySurfaceTab->setWindowTitle(QApplication::translate("ElementarySurfaceTab", "Form", 0));
        label_4->setText(QApplication::translate("ElementarySurfaceTab", "\320\255\321\202\320\260\320\277\321\213 \320\276\320\261\321\200\320\260\320\261\320\276\321\202\320\272\320\270", 0));
        label_2->setText(QApplication::translate("ElementarySurfaceTab", "\320\235\320\276\320\274\320\265\321\200 \320\255\320\237", 0));

        const bool __sortingEnabled = tableWidget_2->isSortingEnabled();
        tableWidget_2->setSortingEnabled(false);
        tableWidget_2->setSortingEnabled(__sortingEnabled);

        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QString()
        );
        comboBox->setCurrentText(QString());
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("ElementarySurfaceTab", "1", 0)
        );
        comboBox_2->setCurrentText(QString());
        label->setText(QApplication::translate("ElementarySurfaceTab", "\320\242\320\270\320\277 \320\255\320\237", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ElementarySurfaceTab", "123456", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("ElementarySurfaceTab", "s1", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("ElementarySurfaceTab", "s2", 0));

        const bool __sortingEnabled1 = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled1);

        picLabel->setText(QString());
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("ElementarySurfaceTab", "123456", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_3->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("ElementarySurfaceTab", "s1", 0));
        label_3->setText(QApplication::translate("ElementarySurfaceTab", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\255\320\237", 0));
        label_5->setText(QApplication::translate("ElementarySurfaceTab", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\255\320\237", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("ElementarySurfaceTab", "\320\240\320\230", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("ElementarySurfaceTab", "\320\242\320\270\320\277 \320\240\320\230", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("ElementarySurfaceTab", "\320\240\320\265\320\266\320\270\320\274\321\213 \321\200\320\265\320\267\320\260\320\275\320\270\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_4->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("ElementarySurfaceTab", "\320\241\321\202\320\276\320\271\320\272\320\276\321\201\321\202\321\214 \320\240\320\230", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_4->verticalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("ElementarySurfaceTab", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("ElementarySurfaceTab", "Vmin", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("ElementarySurfaceTab", "Vmax", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_5->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("ElementarySurfaceTab", "Smin", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_5->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("ElementarySurfaceTab", "Smax", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_5->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("ElementarySurfaceTab", "tmax", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_5->horizontalHeaderItem(5);
        ___qtablewidgetitem15->setText(QApplication::translate("ElementarySurfaceTab", "tmax", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_5->horizontalHeaderItem(6);
        ___qtablewidgetitem16->setText(QApplication::translate("ElementarySurfaceTab", "min", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_5->horizontalHeaderItem(7);
        ___qtablewidgetitem17->setText(QApplication::translate("ElementarySurfaceTab", "max", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_5->verticalHeaderItem(0);
        ___qtablewidgetitem18->setText(QApplication::translate("ElementarySurfaceTab", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", 0));
        label_6->setText(QApplication::translate("ElementarySurfaceTab", "\320\240\320\265\320\266\320\270\320\274\321\213 \321\200\320\265\320\267\320\260\320\275\320\270\321\217", 0));
    } // retranslateUi

};

namespace Ui {
    class ElementarySurfaceTab: public Ui_ElementarySurfaceTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELEMENTARYSURFACETAB_H
