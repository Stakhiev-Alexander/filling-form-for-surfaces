/********************************************************************************
** Form generated from reading UI file 'dictionarysearch.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DICTIONARYSEARCH_H
#define UI_DICTIONARYSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DictionarySearch
{
public:
    QFrame *TextEntry;
    QTextEdit *textEdit;
    QLabel *label;
    QFrame *buttonFrame;
    QPushButton *Find;
    QPushButton *Cancel;
    QFrame *frame;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *addDic;

    void setupUi(QDialog *DictionarySearch)
    {
        if (DictionarySearch->objectName().isEmpty())
            DictionarySearch->setObjectName(QStringLiteral("DictionarySearch"));
        DictionarySearch->resize(622, 340);
        TextEntry = new QFrame(DictionarySearch);
        TextEntry->setObjectName(QStringLiteral("TextEntry"));
        TextEntry->setGeometry(QRect(20, 0, 381, 101));
        TextEntry->setFrameShape(QFrame::StyledPanel);
        TextEntry->setFrameShadow(QFrame::Raised);
        textEdit = new QTextEdit(TextEntry);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 50, 341, 31));
        QFont font;
        font.setPointSize(10);
        textEdit->setFont(font);
        label = new QLabel(TextEntry);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 351, 31));
        label->setFont(font);
        buttonFrame = new QFrame(DictionarySearch);
        buttonFrame->setObjectName(QStringLiteral("buttonFrame"));
        buttonFrame->setGeometry(QRect(420, 20, 181, 31));
        buttonFrame->setFrameShape(QFrame::StyledPanel);
        buttonFrame->setFrameShadow(QFrame::Raised);
        Find = new QPushButton(buttonFrame);
        Find->setObjectName(QStringLiteral("Find"));
        Find->setGeometry(QRect(10, 0, 75, 23));
        Cancel = new QPushButton(buttonFrame);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(100, 0, 75, 23));
        frame = new QFrame(DictionarySearch);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(20, 100, 381, 221));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 10, 341, 211));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 339, 209));
        scrollArea->setWidget(scrollAreaWidgetContents);
        addDic = new QPushButton(DictionarySearch);
        addDic->setObjectName(QStringLiteral("addDic"));
        addDic->setGeometry(QRect(410, 110, 181, 31));

        retranslateUi(DictionarySearch);

        QMetaObject::connectSlotsByName(DictionarySearch);
    } // setupUi

    void retranslateUi(QDialog *DictionarySearch)
    {
        DictionarySearch->setWindowTitle(QApplication::translate("DictionarySearch", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \321\201\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272\321\203", 0));
        label->setText(QApplication::translate("DictionarySearch", "\320\247\321\202\320\276 \320\262\321\213 \321\205\320\276\321\202\320\270\321\202\320\265 \320\275\320\260\320\271\321\202\320\270:", 0));
        Find->setText(QApplication::translate("DictionarySearch", "\320\237\320\276\320\270\321\201\320\272", 0));
        Cancel->setText(QApplication::translate("DictionarySearch", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
        addDic->setText(QApplication::translate("DictionarySearch", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272", 0));
    } // retranslateUi

};

namespace Ui {
    class DictionarySearch: public Ui_DictionarySearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DICTIONARYSEARCH_H
