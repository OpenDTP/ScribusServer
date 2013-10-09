/********************************************************************************
** Form generated from reading UI file 'smreplacedia.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMREPLACEDIA_H
#define UI_SMREPLACEDIA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SMReplaceDia
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *mainFrame;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *SMReplaceDia)
    {
        if (SMReplaceDia->objectName().isEmpty())
            SMReplaceDia->setObjectName(QString::fromUtf8("SMReplaceDia"));
        SMReplaceDia->resize(235, 271);
        SMReplaceDia->setSizeGripEnabled(false);
        vboxLayout = new QVBoxLayout(SMReplaceDia);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(5, 5, 5, 5);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        mainFrame = new QFrame(SMReplaceDia);
        mainFrame->setObjectName(QString::fromUtf8("mainFrame"));
        mainFrame->setFrameShape(QFrame::NoFrame);
        mainFrame->setFrameShadow(QFrame::Plain);
        mainFrame->setLineWidth(0);

        vboxLayout->addWidget(mainFrame);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonOk = new QPushButton(SMReplaceDia);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setAutoDefault(true);
        buttonOk->setDefault(true);

        hboxLayout->addWidget(buttonOk);

        buttonCancel = new QPushButton(SMReplaceDia);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout->addWidget(buttonCancel);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(SMReplaceDia);
        QObject::connect(buttonOk, SIGNAL(clicked()), SMReplaceDia, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), SMReplaceDia, SLOT(reject()));

        QMetaObject::connectSlotsByName(SMReplaceDia);
    } // setupUi

    void retranslateUi(QDialog *SMReplaceDia)
    {
        SMReplaceDia->setWindowTitle(QApplication::translate("SMReplaceDia", "Delete Styles", 0, QApplication::UnicodeUTF8));
        buttonOk->setText(QApplication::translate("SMReplaceDia", "&OK", 0, QApplication::UnicodeUTF8));
        buttonOk->setShortcut(QString());
        buttonCancel->setText(QApplication::translate("SMReplaceDia", "Ca&ncel", 0, QApplication::UnicodeUTF8));
        buttonCancel->setShortcut(QApplication::translate("SMReplaceDia", "Alt+N", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SMReplaceDia: public Ui_SMReplaceDia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMREPLACEDIA_H
