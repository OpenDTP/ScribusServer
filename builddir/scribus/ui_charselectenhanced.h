/********************************************************************************
** Form generated from reading UI file 'charselectenhanced.ui'
**
** Created: Sun Feb 24 21:37:25 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARSELECTENHANCED_H
#define UI_CHARSELECTENHANCED_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include "chartableview.h"
#include "fontcombo.h"
#include "sccombobox.h"

QT_BEGIN_NAMESPACE

class Ui_CharSelectEnhanced
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    FontCombo *fontSelector;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    ScComboBox *rangeSelector;
    QSpacerItem *spacerItem1;
    CharTableView *m_charTable;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *hexLineEdit;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_1;
    QLabel *sample;
    QHBoxLayout *_2;
    QSpacerItem *spacerItem2;
    QPushButton *insertButton;
    QPushButton *deleteButton;

    void setupUi(QDialog *CharSelectEnhanced)
    {
        if (CharSelectEnhanced->objectName().isEmpty())
            CharSelectEnhanced->setObjectName(QString::fromUtf8("CharSelectEnhanced"));
        CharSelectEnhanced->resize(506, 492);
        gridLayout = new QGridLayout(CharSelectEnhanced);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(CharSelectEnhanced);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        fontSelector = new FontCombo(CharSelectEnhanced);
        fontSelector->setObjectName(QString::fromUtf8("fontSelector"));

        gridLayout->addWidget(fontSelector, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        label_2 = new QLabel(CharSelectEnhanced);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        rangeSelector = new ScComboBox(CharSelectEnhanced);
        rangeSelector->setObjectName(QString::fromUtf8("rangeSelector"));

        gridLayout->addWidget(rangeSelector, 0, 4, 1, 1);

        spacerItem1 = new QSpacerItem(66, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 5, 1, 1);

        m_charTable = new CharTableView(CharSelectEnhanced);
        m_charTable->setObjectName(QString::fromUtf8("m_charTable"));
        m_charTable->setMinimumSize(QSize(340, 0));
        m_charTable->setDragDropOverwriteMode(false);
        m_charTable->setDragDropMode(QAbstractItemView::DragOnly);
        m_charTable->setSelectionMode(QAbstractItemView::SingleSelection);

        gridLayout->addWidget(m_charTable, 1, 0, 1, 6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(CharSelectEnhanced);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        hexLineEdit = new QLineEdit(CharSelectEnhanced);
        hexLineEdit->setObjectName(QString::fromUtf8("hexLineEdit"));
        hexLineEdit->setMaxLength(32767);

        horizontalLayout->addWidget(hexLineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 6);

        groupBox = new QGroupBox(CharSelectEnhanced);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_1 = new QGridLayout(groupBox);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        sample = new QLabel(groupBox);
        sample->setObjectName(QString::fromUtf8("sample"));
        sample->setMinimumSize(QSize(460, 48));
        sample->setFrameShape(QFrame::Box);
        sample->setLineWidth(1);

        gridLayout_1->addWidget(sample, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 3, 0, 1, 6);

        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem2);

        insertButton = new QPushButton(CharSelectEnhanced);
        insertButton->setObjectName(QString::fromUtf8("insertButton"));
        insertButton->setAutoDefault(false);

        _2->addWidget(insertButton);

        deleteButton = new QPushButton(CharSelectEnhanced);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setAutoDefault(false);

        _2->addWidget(deleteButton);


        gridLayout->addLayout(_2, 4, 0, 1, 6);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(fontSelector);
        label_2->setBuddy(rangeSelector);
        label_3->setBuddy(hexLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(CharSelectEnhanced);

        QMetaObject::connectSlotsByName(CharSelectEnhanced);
    } // setupUi

    void retranslateUi(QDialog *CharSelectEnhanced)
    {
        CharSelectEnhanced->setWindowTitle(QApplication::translate("CharSelectEnhanced", "Enhanced Character Palette", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CharSelectEnhanced", "&Font:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CharSelectEnhanced", "C&haracter Class:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_charTable->setToolTip(QApplication::translate("CharSelectEnhanced", "You can see a thumbnail if you press and hold down the right mouse button.\n"
"The Insert key inserts a Glyph into the Selection below and the Delete key removes the last inserted one", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("CharSelectEnhanced", "Insert &Code:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        hexLineEdit->setToolTip(QApplication::translate("CharSelectEnhanced", "Type in a four digit Unicode value directly here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("CharSelectEnhanced", "Glyphs to Insert", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        insertButton->setToolTip(QApplication::translate("CharSelectEnhanced", "Insert the characters at the cursor in the text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        insertButton->setText(QApplication::translate("CharSelectEnhanced", "&Insert", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("CharSelectEnhanced", "Delete the current selection(s).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("CharSelectEnhanced", "C&lear", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CharSelectEnhanced: public Ui_CharSelectEnhanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARSELECTENHANCED_H
