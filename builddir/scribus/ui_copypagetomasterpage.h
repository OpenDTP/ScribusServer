/********************************************************************************
** Form generated from reading UI file 'copypagetomasterpage.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPYPAGETOMASTERPAGE_H
#define UI_COPYPAGETOMASTERPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CopyPageToMasterPageBase
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QComboBox *pagePositionComboBox;
    QCheckBox *copyMasterItemsCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CopyPageToMasterPageBase)
    {
        if (CopyPageToMasterPageBase->objectName().isEmpty())
            CopyPageToMasterPageBase->setObjectName(QString::fromUtf8("CopyPageToMasterPageBase"));
        CopyPageToMasterPageBase->setWindowModality(Qt::WindowModal);
        CopyPageToMasterPageBase->resize(252, 139);
        vboxLayout = new QVBoxLayout(CopyPageToMasterPageBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        nameLabel = new QLabel(CopyPageToMasterPageBase);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        hboxLayout->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(CopyPageToMasterPageBase);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        hboxLayout->addWidget(nameLineEdit);


        vboxLayout->addLayout(hboxLayout);

        pagePositionComboBox = new QComboBox(CopyPageToMasterPageBase);
        pagePositionComboBox->setObjectName(QString::fromUtf8("pagePositionComboBox"));

        vboxLayout->addWidget(pagePositionComboBox);

        copyMasterItemsCheckBox = new QCheckBox(CopyPageToMasterPageBase);
        copyMasterItemsCheckBox->setObjectName(QString::fromUtf8("copyMasterItemsCheckBox"));

        vboxLayout->addWidget(copyMasterItemsCheckBox);

        buttonBox = new QDialogButtonBox(CopyPageToMasterPageBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(CopyPageToMasterPageBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), CopyPageToMasterPageBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CopyPageToMasterPageBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(CopyPageToMasterPageBase);
    } // setupUi

    void retranslateUi(QDialog *CopyPageToMasterPageBase)
    {
        CopyPageToMasterPageBase->setWindowTitle(QApplication::translate("CopyPageToMasterPageBase", "Convert Page to Master Page", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("CopyPageToMasterPageBase", "Name:", 0, QApplication::UnicodeUTF8));
        copyMasterItemsCheckBox->setText(QApplication::translate("CopyPageToMasterPageBase", "Copy Applied Master Page Items", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CopyPageToMasterPageBase: public Ui_CopyPageToMasterPageBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPYPAGETOMASTERPAGE_H
