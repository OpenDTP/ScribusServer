/********************************************************************************
** Form generated from reading UI file 'patterndialog.ui'
**
** Created: Sun Feb 24 21:37:26 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATTERNDIALOG_H
#define UI_PATTERNDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PatternDialog
{
public:
    QHBoxLayout *hboxLayout;
    QListWidget *patternView;
    QVBoxLayout *vboxLayout;
    QPushButton *buttonLoad;
    QPushButton *buttonLoadDir;
    QPushButton *buttonRename;
    QPushButton *buttonRemove;
    QPushButton *buttonRemoveAll;
    QSpacerItem *spacerItem;
    QPushButton *buttonOK;
    QPushButton *buttonCancel;

    void setupUi(QDialog *PatternDialog)
    {
        if (PatternDialog->objectName().isEmpty())
            PatternDialog->setObjectName(QString::fromUtf8("PatternDialog"));
        PatternDialog->resize(332, 296);
        hboxLayout = new QHBoxLayout(PatternDialog);
        hboxLayout->setSpacing(5);
        hboxLayout->setContentsMargins(10, 10, 10, 10);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        patternView = new QListWidget(PatternDialog);
        patternView->setObjectName(QString::fromUtf8("patternView"));
        patternView->setFlow(QListView::LeftToRight);
        patternView->setProperty("isWrapping", QVariant(true));
        patternView->setResizeMode(QListView::Adjust);
        patternView->setViewMode(QListView::IconMode);

        hboxLayout->addWidget(patternView);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(5);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        buttonLoad = new QPushButton(PatternDialog);
        buttonLoad->setObjectName(QString::fromUtf8("buttonLoad"));

        vboxLayout->addWidget(buttonLoad);

        buttonLoadDir = new QPushButton(PatternDialog);
        buttonLoadDir->setObjectName(QString::fromUtf8("buttonLoadDir"));

        vboxLayout->addWidget(buttonLoadDir);

        buttonRename = new QPushButton(PatternDialog);
        buttonRename->setObjectName(QString::fromUtf8("buttonRename"));

        vboxLayout->addWidget(buttonRename);

        buttonRemove = new QPushButton(PatternDialog);
        buttonRemove->setObjectName(QString::fromUtf8("buttonRemove"));

        vboxLayout->addWidget(buttonRemove);

        buttonRemoveAll = new QPushButton(PatternDialog);
        buttonRemoveAll->setObjectName(QString::fromUtf8("buttonRemoveAll"));

        vboxLayout->addWidget(buttonRemoveAll);

        spacerItem = new QSpacerItem(75, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonOK = new QPushButton(PatternDialog);
        buttonOK->setObjectName(QString::fromUtf8("buttonOK"));

        vboxLayout->addWidget(buttonOK);

        buttonCancel = new QPushButton(PatternDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        vboxLayout->addWidget(buttonCancel);


        hboxLayout->addLayout(vboxLayout);


        retranslateUi(PatternDialog);

        QMetaObject::connectSlotsByName(PatternDialog);
    } // setupUi

    void retranslateUi(QDialog *PatternDialog)
    {
        PatternDialog->setWindowTitle(QApplication::translate("PatternDialog", "Patterns", 0, QApplication::UnicodeUTF8));
        buttonLoad->setText(QApplication::translate("PatternDialog", "Load File", 0, QApplication::UnicodeUTF8));
        buttonLoadDir->setText(QApplication::translate("PatternDialog", "Load Set", 0, QApplication::UnicodeUTF8));
        buttonRename->setText(QApplication::translate("PatternDialog", "Rename", 0, QApplication::UnicodeUTF8));
        buttonRemove->setText(QApplication::translate("PatternDialog", "Remove", 0, QApplication::UnicodeUTF8));
        buttonRemoveAll->setText(QApplication::translate("PatternDialog", "Remove All", 0, QApplication::UnicodeUTF8));
        buttonOK->setText(QApplication::translate("PatternDialog", "OK", 0, QApplication::UnicodeUTF8));
        buttonCancel->setText(QApplication::translate("PatternDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PatternDialog: public Ui_PatternDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATTERNDIALOG_H
