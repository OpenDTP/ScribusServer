/********************************************************************************
** Form generated from reading UI file 'smstyleimport.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMSTYLEIMPORT_H
#define UI_SMSTYLEIMPORT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QRadioButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SMStyleImport
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *styleWidget;
    QCheckBox *importAllCheckBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *renameButton;
    QRadioButton *replaceButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SMStyleImport)
    {
        if (SMStyleImport->objectName().isEmpty())
            SMStyleImport->setObjectName(QString::fromUtf8("SMStyleImport"));
        SMStyleImport->resize(304, 444);
        verticalLayout = new QVBoxLayout(SMStyleImport);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        styleWidget = new QTreeWidget(SMStyleImport);
        styleWidget->setObjectName(QString::fromUtf8("styleWidget"));
        styleWidget->setSelectionMode(QAbstractItemView::NoSelection);
        styleWidget->setSelectionBehavior(QAbstractItemView::SelectItems);

        verticalLayout->addWidget(styleWidget);

        importAllCheckBox = new QCheckBox(SMStyleImport);
        importAllCheckBox->setObjectName(QString::fromUtf8("importAllCheckBox"));

        verticalLayout->addWidget(importAllCheckBox);

        groupBox = new QGroupBox(SMStyleImport);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        renameButton = new QRadioButton(groupBox);
        renameButton->setObjectName(QString::fromUtf8("renameButton"));
        renameButton->setChecked(true);

        gridLayout->addWidget(renameButton, 0, 0, 1, 1);

        replaceButton = new QRadioButton(groupBox);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));

        gridLayout->addWidget(replaceButton, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(SMStyleImport);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SMStyleImport);
        QObject::connect(buttonBox, SIGNAL(accepted()), SMStyleImport, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SMStyleImport, SLOT(reject()));

        QMetaObject::connectSlotsByName(SMStyleImport);
    } // setupUi

    void retranslateUi(QDialog *SMStyleImport)
    {
        SMStyleImport->setWindowTitle(QApplication::translate("SMStyleImport", "Choose Styles", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = styleWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("SMStyleImport", "Available Styles", 0, QApplication::UnicodeUTF8));
        importAllCheckBox->setText(QApplication::translate("SMStyleImport", "Select or Unselect All", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SMStyleImport", "In case of a name clash", 0, QApplication::UnicodeUTF8));
        renameButton->setText(QApplication::translate("SMStyleImport", "&Rename Imported Style", 0, QApplication::UnicodeUTF8));
        replaceButton->setText(QApplication::translate("SMStyleImport", "R&eplace Existing Style", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SMStyleImport: public Ui_SMStyleImport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMSTYLEIMPORT_H
