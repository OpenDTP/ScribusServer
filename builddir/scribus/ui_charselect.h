/********************************************************************************
** Form generated from reading UI file 'charselect.ui'
**
** Created: Sun Feb 24 21:37:25 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARSELECT_H
#define UI_CHARSELECT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include "chartableview.h"
#include "unicodesearch.h"

QT_BEGIN_NAMESPACE

class Ui_CharSelect
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *hideButton;
    UnicodeChooseButton *unicodeButton;
    QPushButton *uniLoadButton;
    QPushButton *uniSaveButton;
    QPushButton *uniClearButton;
    CharTableView *m_userTable;

    void setupUi(QDialog *CharSelect)
    {
        if (CharSelect->objectName().isEmpty())
            CharSelect->setObjectName(QString::fromUtf8("CharSelect"));
        CharSelect->resize(394, 319);
        gridLayout = new QGridLayout(CharSelect);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(1);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hideButton = new QPushButton(CharSelect);
        hideButton->setObjectName(QString::fromUtf8("hideButton"));
        hideButton->setCheckable(true);

        hboxLayout->addWidget(hideButton);

        unicodeButton = new UnicodeChooseButton(CharSelect);
        unicodeButton->setObjectName(QString::fromUtf8("unicodeButton"));

        hboxLayout->addWidget(unicodeButton);

        uniLoadButton = new QPushButton(CharSelect);
        uniLoadButton->setObjectName(QString::fromUtf8("uniLoadButton"));

        hboxLayout->addWidget(uniLoadButton);

        uniSaveButton = new QPushButton(CharSelect);
        uniSaveButton->setObjectName(QString::fromUtf8("uniSaveButton"));

        hboxLayout->addWidget(uniSaveButton);

        uniClearButton = new QPushButton(CharSelect);
        uniClearButton->setObjectName(QString::fromUtf8("uniClearButton"));

        hboxLayout->addWidget(uniClearButton);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        m_userTable = new CharTableView(CharSelect);
        m_userTable->setObjectName(QString::fromUtf8("m_userTable"));
        m_userTable->setDragDropOverwriteMode(false);
        m_userTable->setDragDropMode(QAbstractItemView::DropOnly);
        m_userTable->setSelectionMode(QAbstractItemView::SingleSelection);

        gridLayout->addWidget(m_userTable, 1, 0, 1, 1);

        QWidget::setTabOrder(hideButton, unicodeButton);
        QWidget::setTabOrder(unicodeButton, uniLoadButton);
        QWidget::setTabOrder(uniLoadButton, uniSaveButton);
        QWidget::setTabOrder(uniSaveButton, uniClearButton);
        QWidget::setTabOrder(uniClearButton, m_userTable);

        retranslateUi(CharSelect);

        QMetaObject::connectSlotsByName(CharSelect);
    } // setupUi

    void retranslateUi(QDialog *CharSelect)
    {
        CharSelect->setWindowTitle(QApplication::translate("CharSelect", "Character Palette", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        hideButton->setToolTip(QApplication::translate("CharSelect", "Hide/Show Enhanced Palette", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        uniLoadButton->setText(QString());
        uniSaveButton->setText(QString());
        uniClearButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CharSelect: public Ui_CharSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARSELECT_H
