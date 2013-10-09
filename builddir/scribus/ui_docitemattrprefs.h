/********************************************************************************
** Form generated from reading UI file 'docitemattrprefs.ui'
**
** Created: Sun Feb 24 21:37:25 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCITEMATTRPREFS_H
#define UI_DOCITEMATTRPREFS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "sctablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_DocumentItemAttributes
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *attributesGroupBox;
    QVBoxLayout *vboxLayout1;
    ScTableWidget *attributesTable;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *addButton;
    QPushButton *copyButton;
    QPushButton *deleteButton;
    QPushButton *clearButton;

    void setupUi(QWidget *DocumentItemAttributes)
    {
        if (DocumentItemAttributes->objectName().isEmpty())
            DocumentItemAttributes->setObjectName(QString::fromUtf8("DocumentItemAttributes"));
        DocumentItemAttributes->resize(737, 194);
        vboxLayout = new QVBoxLayout(DocumentItemAttributes);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        attributesGroupBox = new QGroupBox(DocumentItemAttributes);
        attributesGroupBox->setObjectName(QString::fromUtf8("attributesGroupBox"));
        vboxLayout1 = new QVBoxLayout(attributesGroupBox);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        attributesTable = new ScTableWidget(attributesGroupBox);
        if (attributesTable->columnCount() < 7)
            attributesTable->setColumnCount(7);
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
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        attributesTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        attributesTable->setObjectName(QString::fromUtf8("attributesTable"));

        vboxLayout1->addWidget(attributesTable);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(192, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        addButton = new QPushButton(attributesGroupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        hboxLayout->addWidget(addButton);

        copyButton = new QPushButton(attributesGroupBox);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));

        hboxLayout->addWidget(copyButton);

        deleteButton = new QPushButton(attributesGroupBox);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        hboxLayout->addWidget(deleteButton);

        clearButton = new QPushButton(attributesGroupBox);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        hboxLayout->addWidget(clearButton);


        vboxLayout1->addLayout(hboxLayout);


        vboxLayout->addWidget(attributesGroupBox);


        retranslateUi(DocumentItemAttributes);

        QMetaObject::connectSlotsByName(DocumentItemAttributes);
    } // setupUi

    void retranslateUi(QWidget *DocumentItemAttributes)
    {
        DocumentItemAttributes->setWindowTitle(QApplication::translate("DocumentItemAttributes", "Document Item Attributes", 0, QApplication::UnicodeUTF8));
        attributesGroupBox->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = attributesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DocumentItemAttributes", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = attributesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DocumentItemAttributes", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = attributesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DocumentItemAttributes", "Value", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = attributesTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DocumentItemAttributes", "Parameter", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = attributesTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DocumentItemAttributes", "Relationship", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = attributesTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("DocumentItemAttributes", "Relationship To", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = attributesTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("DocumentItemAttributes", "Auto Add To", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("DocumentItemAttributes", "&Add", 0, QApplication::UnicodeUTF8));
        addButton->setShortcut(QApplication::translate("DocumentItemAttributes", "Alt+A", 0, QApplication::UnicodeUTF8));
        copyButton->setText(QApplication::translate("DocumentItemAttributes", "&Copy", 0, QApplication::UnicodeUTF8));
        copyButton->setShortcut(QApplication::translate("DocumentItemAttributes", "Alt+C", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("DocumentItemAttributes", "&Delete", 0, QApplication::UnicodeUTF8));
        deleteButton->setShortcut(QApplication::translate("DocumentItemAttributes", "Alt+D", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("DocumentItemAttributes", "C&lear", 0, QApplication::UnicodeUTF8));
        clearButton->setShortcut(QApplication::translate("DocumentItemAttributes", "Alt+L", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DocumentItemAttributes: public Ui_DocumentItemAttributes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCITEMATTRPREFS_H
