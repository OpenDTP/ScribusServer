/********************************************************************************
** Form generated from reading UI file 'runscriptdialog.ui'
**
** Created: Sun Feb 24 21:57:38 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNSCRIPTDIALOG_H
#define UI_RUNSCRIPTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include "scfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_RunScriptDialog
{
public:
    QGridLayout *gridLayout;
    ScFileWidget *fileWidget;
    QCheckBox *extChk;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RunScriptDialog)
    {
        if (RunScriptDialog->objectName().isEmpty())
            RunScriptDialog->setObjectName(QString::fromUtf8("RunScriptDialog"));
        RunScriptDialog->resize(400, 300);
        gridLayout = new QGridLayout(RunScriptDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        fileWidget = new ScFileWidget(RunScriptDialog);
        fileWidget->setObjectName(QString::fromUtf8("fileWidget"));

        gridLayout->addWidget(fileWidget, 0, 0, 1, 1);

        extChk = new QCheckBox(RunScriptDialog);
        extChk->setObjectName(QString::fromUtf8("extChk"));

        gridLayout->addWidget(extChk, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(RunScriptDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(RunScriptDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RunScriptDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RunScriptDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RunScriptDialog);
    } // setupUi

    void retranslateUi(QDialog *RunScriptDialog)
    {
        RunScriptDialog->setWindowTitle(QApplication::translate("RunScriptDialog", "Run Script", 0, QApplication::UnicodeUTF8));
        extChk->setText(QApplication::translate("RunScriptDialog", "Run as Extension Script", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RunScriptDialog: public Ui_RunScriptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNSCRIPTDIALOG_H
