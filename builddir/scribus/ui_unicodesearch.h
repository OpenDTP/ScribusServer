/********************************************************************************
** Form generated from reading UI file 'unicodesearch.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNICODESEARCH_H
#define UI_UNICODESEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_UnicodeSearch
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLineEdit *searchEdit;
    QTableView *tableView;

    void setupUi(QDialog *UnicodeSearch)
    {
        if (UnicodeSearch->objectName().isEmpty())
            UnicodeSearch->setObjectName(QString::fromUtf8("UnicodeSearch"));
        UnicodeSearch->resize(369, 208);
        gridLayout = new QGridLayout(UnicodeSearch);
        gridLayout->setSpacing(1);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1 = new QLabel(UnicodeSearch);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        searchEdit = new QLineEdit(UnicodeSearch);
        searchEdit->setObjectName(QString::fromUtf8("searchEdit"));

        gridLayout->addWidget(searchEdit, 0, 1, 1, 1);

        tableView = new QTableView(UnicodeSearch);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(tableView, 1, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        textLabel1->setBuddy(searchEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(UnicodeSearch);

        QMetaObject::connectSlotsByName(UnicodeSearch);
    } // setupUi

    void retranslateUi(QDialog *UnicodeSearch)
    {
        UnicodeSearch->setWindowTitle(QApplication::translate("UnicodeSearch", "Unicode Search", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("UnicodeSearch", "&Search:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        searchEdit->setToolTip(QApplication::translate("UnicodeSearch", "Enter the search phrase. Then press Enter.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class UnicodeSearch: public Ui_UnicodeSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNICODESEARCH_H
