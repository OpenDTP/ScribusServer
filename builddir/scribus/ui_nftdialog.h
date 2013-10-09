/********************************************************************************
** Form generated from reading UI file 'nftdialog.ui'
**
** Created: Sun Feb 24 21:37:26 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NFTDIALOG_H
#define UI_NFTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include "nftwidget.h"

QT_BEGIN_NAMESPACE

class Ui_nftdialog
{
public:
    QVBoxLayout *verticalLayout;
    nftwidget *nftGui;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *nftdialog)
    {
        if (nftdialog->objectName().isEmpty())
            nftdialog->setObjectName(QString::fromUtf8("nftdialog"));
        nftdialog->resize(659, 480);
        verticalLayout = new QVBoxLayout(nftdialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        nftGui = new nftwidget(nftdialog);
        nftGui->setObjectName(QString::fromUtf8("nftGui"));

        verticalLayout->addWidget(nftGui);

        buttonBox = new QDialogButtonBox(nftdialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(nftdialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), nftdialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), nftdialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(nftdialog);
    } // setupUi

    void retranslateUi(QDialog *nftdialog)
    {
        nftdialog->setWindowTitle(QApplication::translate("nftdialog", "New From Template", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class nftdialog: public Ui_nftdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NFTDIALOG_H
