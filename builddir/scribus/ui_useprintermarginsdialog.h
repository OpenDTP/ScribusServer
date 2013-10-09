/********************************************************************************
** Form generated from reading UI file 'useprintermarginsdialog.ui'
**
** Created: Sun Feb 24 21:37:02 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USEPRINTERMARGINSDIALOG_H
#define UI_USEPRINTERMARGINSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UsePrinterMarginsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *selectPrinterLabel;
    QComboBox *printerComboBox;
    QGroupBox *marginsGroupBox;
    QVBoxLayout *vboxLayout1;
    QGridLayout *gridLayout;
    QLineEdit *bottomLineEdit;
    QLabel *rightLabel;
    QSpacerItem *spacerItem;
    QLineEdit *rightLineEdit;
    QLineEdit *leftLineEdit;
    QLabel *topLabel;
    QLabel *bottomLabel;
    QLabel *leftLabel;
    QLineEdit *topLineEdit;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *UsePrinterMarginsDialog)
    {
        if (UsePrinterMarginsDialog->objectName().isEmpty())
            UsePrinterMarginsDialog->setObjectName(QString::fromUtf8("UsePrinterMarginsDialog"));
        UsePrinterMarginsDialog->resize(350, 185);
        vboxLayout = new QVBoxLayout(UsePrinterMarginsDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        selectPrinterLabel = new QLabel(UsePrinterMarginsDialog);
        selectPrinterLabel->setObjectName(QString::fromUtf8("selectPrinterLabel"));
        selectPrinterLabel->setWordWrap(false);

        hboxLayout->addWidget(selectPrinterLabel);

        printerComboBox = new QComboBox(UsePrinterMarginsDialog);
        printerComboBox->setObjectName(QString::fromUtf8("printerComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(printerComboBox->sizePolicy().hasHeightForWidth());
        printerComboBox->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(printerComboBox);


        vboxLayout->addLayout(hboxLayout);

        marginsGroupBox = new QGroupBox(UsePrinterMarginsDialog);
        marginsGroupBox->setObjectName(QString::fromUtf8("marginsGroupBox"));
        vboxLayout1 = new QVBoxLayout(marginsGroupBox);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        bottomLineEdit = new QLineEdit(marginsGroupBox);
        bottomLineEdit->setObjectName(QString::fromUtf8("bottomLineEdit"));
        bottomLineEdit->setReadOnly(true);

        gridLayout->addWidget(bottomLineEdit, 0, 4, 1, 1);

        rightLabel = new QLabel(marginsGroupBox);
        rightLabel->setObjectName(QString::fromUtf8("rightLabel"));
        rightLabel->setWordWrap(false);

        gridLayout->addWidget(rightLabel, 1, 3, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 1, 1);

        rightLineEdit = new QLineEdit(marginsGroupBox);
        rightLineEdit->setObjectName(QString::fromUtf8("rightLineEdit"));
        rightLineEdit->setReadOnly(true);

        gridLayout->addWidget(rightLineEdit, 1, 4, 1, 1);

        leftLineEdit = new QLineEdit(marginsGroupBox);
        leftLineEdit->setObjectName(QString::fromUtf8("leftLineEdit"));
        leftLineEdit->setReadOnly(true);

        gridLayout->addWidget(leftLineEdit, 1, 1, 1, 1);

        topLabel = new QLabel(marginsGroupBox);
        topLabel->setObjectName(QString::fromUtf8("topLabel"));
        topLabel->setWordWrap(false);

        gridLayout->addWidget(topLabel, 0, 0, 1, 1);

        bottomLabel = new QLabel(marginsGroupBox);
        bottomLabel->setObjectName(QString::fromUtf8("bottomLabel"));
        bottomLabel->setWordWrap(false);

        gridLayout->addWidget(bottomLabel, 0, 3, 1, 1);

        leftLabel = new QLabel(marginsGroupBox);
        leftLabel->setObjectName(QString::fromUtf8("leftLabel"));
        leftLabel->setWordWrap(false);

        gridLayout->addWidget(leftLabel, 1, 0, 1, 1);

        topLineEdit = new QLineEdit(marginsGroupBox);
        topLineEdit->setObjectName(QString::fromUtf8("topLineEdit"));
        topLineEdit->setReadOnly(true);

        gridLayout->addWidget(topLineEdit, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 2, 1, 1);


        vboxLayout1->addLayout(gridLayout);


        vboxLayout->addWidget(marginsGroupBox);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem2 = new QSpacerItem(212, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        okButton = new QPushButton(UsePrinterMarginsDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout1->addWidget(okButton);

        cancelButton = new QPushButton(UsePrinterMarginsDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout1->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout1);

#ifndef QT_NO_SHORTCUT
        selectPrinterLabel->setBuddy(printerComboBox);
        rightLabel->setBuddy(rightLineEdit);
        topLabel->setBuddy(topLineEdit);
        bottomLabel->setBuddy(bottomLineEdit);
        leftLabel->setBuddy(leftLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(UsePrinterMarginsDialog);

        QMetaObject::connectSlotsByName(UsePrinterMarginsDialog);
    } // setupUi

    void retranslateUi(QDialog *UsePrinterMarginsDialog)
    {
        UsePrinterMarginsDialog->setWindowTitle(QApplication::translate("UsePrinterMarginsDialog", "Use Printer Margins", 0, QApplication::UnicodeUTF8));
        selectPrinterLabel->setText(QApplication::translate("UsePrinterMarginsDialog", "Select &Printer:", 0, QApplication::UnicodeUTF8));
        marginsGroupBox->setTitle(QApplication::translate("UsePrinterMarginsDialog", "Margins", 0, QApplication::UnicodeUTF8));
        rightLabel->setText(QApplication::translate("UsePrinterMarginsDialog", "Right:", 0, QApplication::UnicodeUTF8));
        topLabel->setText(QApplication::translate("UsePrinterMarginsDialog", "&Top:", 0, QApplication::UnicodeUTF8));
        bottomLabel->setText(QApplication::translate("UsePrinterMarginsDialog", "&Bottom:", 0, QApplication::UnicodeUTF8));
        leftLabel->setText(QApplication::translate("UsePrinterMarginsDialog", "&Left:", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("UsePrinterMarginsDialog", "&OK", 0, QApplication::UnicodeUTF8));
        okButton->setShortcut(QApplication::translate("UsePrinterMarginsDialog", "Alt+O", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("UsePrinterMarginsDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
        cancelButton->setShortcut(QApplication::translate("UsePrinterMarginsDialog", "Alt+C", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UsePrinterMarginsDialog: public Ui_UsePrinterMarginsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEPRINTERMARGINSDIALOG_H
