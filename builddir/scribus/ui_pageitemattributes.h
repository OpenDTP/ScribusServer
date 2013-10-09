/********************************************************************************
** Form generated from reading UI file 'pageitemattributes.ui'
**
** Created: Sun Feb 24 21:37:26 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEITEMATTRIBUTES_H
#define UI_PAGEITEMATTRIBUTES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "pagestructs.h"
#include "sctablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_PageItemAttributes
{
public:
    QVBoxLayout *vboxLayout;
    ScTableWidget *attributesTable;
    QHBoxLayout *hboxLayout;
    QPushButton *addButton;
    QPushButton *copyButton;
    QPushButton *deleteButton;
    QPushButton *clearButton;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *PageItemAttributes)
    {
        if (PageItemAttributes->objectName().isEmpty())
            PageItemAttributes->setObjectName(QString::fromUtf8("PageItemAttributes"));
        PageItemAttributes->resize(576, 188);
        PageItemAttributes->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(PageItemAttributes);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        attributesTable = new ScTableWidget(PageItemAttributes);
        if (attributesTable->columnCount() < 6)
            attributesTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        attributesTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        attributesTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        attributesTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        attributesTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        attributesTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        attributesTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        attributesTable->setObjectName(QString::fromUtf8("attributesTable"));

        vboxLayout->addWidget(attributesTable);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        addButton = new QPushButton(PageItemAttributes);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        hboxLayout->addWidget(addButton);

        copyButton = new QPushButton(PageItemAttributes);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));

        hboxLayout->addWidget(copyButton);

        deleteButton = new QPushButton(PageItemAttributes);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        hboxLayout->addWidget(deleteButton);

        clearButton = new QPushButton(PageItemAttributes);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        hboxLayout->addWidget(clearButton);

        spacerItem = new QSpacerItem(90, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(PageItemAttributes);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setAutoDefault(true);
        okButton->setDefault(true);

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(PageItemAttributes);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setAutoDefault(true);

        hboxLayout->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(PageItemAttributes);

        QMetaObject::connectSlotsByName(PageItemAttributes);
    } // setupUi

    void retranslateUi(QDialog *PageItemAttributes)
    {
        PageItemAttributes->setWindowTitle(QApplication::translate("PageItemAttributes", "Attributes", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = attributesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PageItemAttributes", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = attributesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PageItemAttributes", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = attributesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PageItemAttributes", "Value", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = attributesTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PageItemAttributes", "Parameter", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = attributesTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("PageItemAttributes", "Relationship", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = attributesTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("PageItemAttributes", "Relationship To", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("PageItemAttributes", "&Add", 0, QApplication::UnicodeUTF8));
        addButton->setShortcut(QApplication::translate("PageItemAttributes", "Alt+A", 0, QApplication::UnicodeUTF8));
        copyButton->setText(QApplication::translate("PageItemAttributes", "&Copy", 0, QApplication::UnicodeUTF8));
        copyButton->setShortcut(QApplication::translate("PageItemAttributes", "Alt+C", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("PageItemAttributes", "&Delete", 0, QApplication::UnicodeUTF8));
        deleteButton->setShortcut(QApplication::translate("PageItemAttributes", "Alt+D", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("PageItemAttributes", "C&lear", 0, QApplication::UnicodeUTF8));
        clearButton->setShortcut(QApplication::translate("PageItemAttributes", "Alt+L", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("PageItemAttributes", "&OK", 0, QApplication::UnicodeUTF8));
        okButton->setShortcut(QString());
        cancelButton->setText(QApplication::translate("PageItemAttributes", "&Cancel", 0, QApplication::UnicodeUTF8));
        cancelButton->setShortcut(QString());
    } // retranslateUi

};

namespace Ui {
    class PageItemAttributes: public Ui_PageItemAttributes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEITEMATTRIBUTES_H
