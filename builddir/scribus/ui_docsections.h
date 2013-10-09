/********************************************************************************
** Form generated from reading UI file 'docsections.ui'
**
** Created: Sun Feb 24 21:37:25 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCSECTIONS_H
#define UI_DOCSECTIONS_H

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

class Ui_DocSections
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *sectionsGroupBox;
    QVBoxLayout *vboxLayout1;
    ScTableWidget *sectionsTable;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *addButton;
    QPushButton *deleteButton;

    void setupUi(QWidget *DocSections)
    {
        if (DocSections->objectName().isEmpty())
            DocSections->setObjectName(QString::fromUtf8("DocSections"));
        DocSections->resize(461, 190);
        vboxLayout = new QVBoxLayout(DocSections);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        sectionsGroupBox = new QGroupBox(DocSections);
        sectionsGroupBox->setObjectName(QString::fromUtf8("sectionsGroupBox"));
        vboxLayout1 = new QVBoxLayout(sectionsGroupBox);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        sectionsTable = new ScTableWidget(sectionsGroupBox);
        if (sectionsTable->columnCount() < 6)
            sectionsTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        sectionsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        sectionsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        sectionsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        sectionsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        sectionsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        sectionsTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        sectionsTable->setObjectName(QString::fromUtf8("sectionsTable"));
        sectionsTable->setProperty("numRows", QVariant(0));
        sectionsTable->setProperty("numCols", QVariant(6));

        vboxLayout1->addWidget(sectionsTable);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(192, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        addButton = new QPushButton(sectionsGroupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        hboxLayout->addWidget(addButton);

        deleteButton = new QPushButton(sectionsGroupBox);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        hboxLayout->addWidget(deleteButton);


        vboxLayout1->addLayout(hboxLayout);


        vboxLayout->addWidget(sectionsGroupBox);


        retranslateUi(DocSections);

        QMetaObject::connectSlotsByName(DocSections);
    } // setupUi

    void retranslateUi(QWidget *DocSections)
    {
        DocSections->setWindowTitle(QApplication::translate("DocSections", "Document Sections", 0, QApplication::UnicodeUTF8));
        sectionsGroupBox->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = sectionsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DocSections", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = sectionsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DocSections", "Shown", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = sectionsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DocSections", "From", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = sectionsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DocSections", "To", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = sectionsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DocSections", "Style", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = sectionsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("DocSections", "Start", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("DocSections", "&Add", 0, QApplication::UnicodeUTF8));
        addButton->setShortcut(QApplication::translate("DocSections", "Alt+A", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("DocSections", "&Delete", 0, QApplication::UnicodeUTF8));
        deleteButton->setShortcut(QApplication::translate("DocSections", "Alt+D", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DocSections: public Ui_DocSections {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCSECTIONS_H
