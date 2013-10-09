/********************************************************************************
** Form generated from reading UI file 'multiprogressdialog.ui'
**
** Created: Sun Feb 24 21:37:26 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIPROGRESSDIALOG_H
#define UI_MULTIPROGRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "scribusapi.h"

QT_BEGIN_NAMESPACE

class Ui_MultiProgressDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *overallProgressLabel;
    QProgressBar *overallProgressBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *buttonCancel;

    void setupUi(QDialog *MultiProgressDialog)
    {
        if (MultiProgressDialog->objectName().isEmpty())
            MultiProgressDialog->setObjectName(QString::fromUtf8("MultiProgressDialog"));
        MultiProgressDialog->resize(230, 84);
        MultiProgressDialog->setSizeGripEnabled(false);
        vboxLayout = new QVBoxLayout(MultiProgressDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        overallProgressLabel = new QLabel(MultiProgressDialog);
        overallProgressLabel->setObjectName(QString::fromUtf8("overallProgressLabel"));
        overallProgressLabel->setWordWrap(false);

        gridLayout->addWidget(overallProgressLabel, 0, 0, 1, 1);

        overallProgressBar = new QProgressBar(MultiProgressDialog);
        overallProgressBar->setObjectName(QString::fromUtf8("overallProgressBar"));
        overallProgressBar->setValue(0);

        gridLayout->addWidget(overallProgressBar, 0, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonCancel = new QPushButton(MultiProgressDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout->addWidget(buttonCancel);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(MultiProgressDialog);
        QObject::connect(buttonCancel, SIGNAL(clicked()), MultiProgressDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MultiProgressDialog);
    } // setupUi

    void retranslateUi(QDialog *MultiProgressDialog)
    {
        MultiProgressDialog->setWindowTitle(QApplication::translate("MultiProgressDialog", "Progress", 0, QApplication::UnicodeUTF8));
        overallProgressLabel->setText(QApplication::translate("MultiProgressDialog", "Overall Progress:", 0, QApplication::UnicodeUTF8));
        buttonCancel->setText(QApplication::translate("MultiProgressDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
        buttonCancel->setShortcut(QString());
    } // retranslateUi

};

namespace Ui {
    class MultiProgressDialog: public Ui_MultiProgressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPROGRESSDIALOG_H
