/*
This is base class for Scribus Barcode Generator. Always use designer for this file!
*/

/********************************************************************************
** Form generated from reading UI file 'barcodegenerator.ui'
**
** Created: Sun Feb 24 21:48:53 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BARCODEGENERATOR_H
#define UI_BARCODEGENERATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
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
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_BarcodeGeneratorBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *bcodeBox;
    QGridLayout *gridLayout1;
    QCheckBox *includeCheckInText;
    QCheckBox *includeCheck;
    QCheckBox *guardCheck;
    QCheckBox *textCheck;
    QPushButton *resetButton;
    QLineEdit *codeEdit;
    QLabel *codeLabel;
    QComboBox *bcCombo;
    QLabel *bcLabel;
    QGroupBox *colorBox;
    QGridLayout *gridLayout2;
    QSpacerItem *spacerItem;
    QPushButton *bgColorButton;
    QLabel *bgLabel;
    QPushButton *lnColorButton;
    QLabel *linesLabel;
    QPushButton *txtColorButton;
    QLabel *txtLabel;
    QTextEdit *commentEdit;
    QLabel *sampleLabel;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *BarcodeGeneratorBase)
    {
        if (BarcodeGeneratorBase->objectName().isEmpty())
            BarcodeGeneratorBase->setObjectName(QString::fromUtf8("BarcodeGeneratorBase"));
        BarcodeGeneratorBase->resize(455, 404);
        gridLayout = new QGridLayout(BarcodeGeneratorBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        bcodeBox = new QGroupBox(BarcodeGeneratorBase);
        bcodeBox->setObjectName(QString::fromUtf8("bcodeBox"));
        gridLayout1 = new QGridLayout(bcodeBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        includeCheckInText = new QCheckBox(bcodeBox);
        includeCheckInText->setObjectName(QString::fromUtf8("includeCheckInText"));

        gridLayout1->addWidget(includeCheckInText, 5, 0, 1, 3);

        includeCheck = new QCheckBox(bcodeBox);
        includeCheck->setObjectName(QString::fromUtf8("includeCheck"));

        gridLayout1->addWidget(includeCheck, 4, 0, 1, 3);

        guardCheck = new QCheckBox(bcodeBox);
        guardCheck->setObjectName(QString::fromUtf8("guardCheck"));

        gridLayout1->addWidget(guardCheck, 3, 0, 1, 3);

        textCheck = new QCheckBox(bcodeBox);
        textCheck->setObjectName(QString::fromUtf8("textCheck"));
        textCheck->setChecked(true);

        gridLayout1->addWidget(textCheck, 2, 0, 1, 3);

        resetButton = new QPushButton(bcodeBox);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(resetButton->sizePolicy().hasHeightForWidth());
        resetButton->setSizePolicy(sizePolicy);
        resetButton->setMaximumSize(QSize(24, 32767));

        gridLayout1->addWidget(resetButton, 1, 2, 1, 1);

        codeEdit = new QLineEdit(bcodeBox);
        codeEdit->setObjectName(QString::fromUtf8("codeEdit"));

        gridLayout1->addWidget(codeEdit, 1, 1, 1, 1);

        codeLabel = new QLabel(bcodeBox);
        codeLabel->setObjectName(QString::fromUtf8("codeLabel"));
        codeLabel->setWordWrap(false);

        gridLayout1->addWidget(codeLabel, 1, 0, 1, 1);

        bcCombo = new QComboBox(bcodeBox);
        bcCombo->setObjectName(QString::fromUtf8("bcCombo"));

        gridLayout1->addWidget(bcCombo, 0, 1, 1, 2);

        bcLabel = new QLabel(bcodeBox);
        bcLabel->setObjectName(QString::fromUtf8("bcLabel"));
        bcLabel->setWordWrap(false);

        gridLayout1->addWidget(bcLabel, 0, 0, 1, 1);


        gridLayout->addWidget(bcodeBox, 0, 0, 1, 1);

        colorBox = new QGroupBox(BarcodeGeneratorBase);
        colorBox->setObjectName(QString::fromUtf8("colorBox"));
        gridLayout2 = new QGridLayout(colorBox);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem, 3, 0, 1, 1);

        bgColorButton = new QPushButton(colorBox);
        bgColorButton->setObjectName(QString::fromUtf8("bgColorButton"));

        gridLayout2->addWidget(bgColorButton, 0, 0, 1, 1);

        bgLabel = new QLabel(colorBox);
        bgLabel->setObjectName(QString::fromUtf8("bgLabel"));
        bgLabel->setMinimumSize(QSize(10, 0));
        bgLabel->setFrameShape(QFrame::Box);
        bgLabel->setScaledContents(true);
        bgLabel->setWordWrap(false);

        gridLayout2->addWidget(bgLabel, 0, 1, 1, 1);

        lnColorButton = new QPushButton(colorBox);
        lnColorButton->setObjectName(QString::fromUtf8("lnColorButton"));

        gridLayout2->addWidget(lnColorButton, 1, 0, 1, 1);

        linesLabel = new QLabel(colorBox);
        linesLabel->setObjectName(QString::fromUtf8("linesLabel"));
        linesLabel->setMinimumSize(QSize(10, 0));
        linesLabel->setFrameShape(QFrame::Box);
        linesLabel->setScaledContents(true);
        linesLabel->setWordWrap(false);

        gridLayout2->addWidget(linesLabel, 1, 1, 1, 1);

        txtColorButton = new QPushButton(colorBox);
        txtColorButton->setObjectName(QString::fromUtf8("txtColorButton"));

        gridLayout2->addWidget(txtColorButton, 2, 0, 1, 1);

        txtLabel = new QLabel(colorBox);
        txtLabel->setObjectName(QString::fromUtf8("txtLabel"));
        txtLabel->setMinimumSize(QSize(10, 0));
        txtLabel->setFrameShape(QFrame::Box);
        txtLabel->setScaledContents(true);
        txtLabel->setWordWrap(false);

        gridLayout2->addWidget(txtLabel, 2, 1, 1, 1);


        gridLayout->addWidget(colorBox, 0, 1, 1, 2);

        commentEdit = new QTextEdit(BarcodeGeneratorBase);
        commentEdit->setObjectName(QString::fromUtf8("commentEdit"));
        commentEdit->setReadOnly(true);

        gridLayout->addWidget(commentEdit, 1, 0, 1, 2);

        sampleLabel = new QLabel(BarcodeGeneratorBase);
        sampleLabel->setObjectName(QString::fromUtf8("sampleLabel"));
        sampleLabel->setFrameShape(QFrame::Box);
        sampleLabel->setAlignment(Qt::AlignCenter);
        sampleLabel->setWordWrap(false);

        gridLayout->addWidget(sampleLabel, 1, 2, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        okButton = new QPushButton(BarcodeGeneratorBase);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(BarcodeGeneratorBase);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 3);

#ifndef QT_NO_SHORTCUT
        codeLabel->setBuddy(codeEdit);
        bcLabel->setBuddy(bcCombo);
#endif // QT_NO_SHORTCUT

        retranslateUi(BarcodeGeneratorBase);
        QObject::connect(bcCombo, SIGNAL(activated(QString)), BarcodeGeneratorBase, SLOT(bcComboChanged()));
        QObject::connect(textCheck, SIGNAL(stateChanged(int)), BarcodeGeneratorBase, SLOT(textCheck_changed()));
        QObject::connect(guardCheck, SIGNAL(stateChanged(int)), BarcodeGeneratorBase, SLOT(guardCheck_changed()));
        QObject::connect(bgColorButton, SIGNAL(clicked()), BarcodeGeneratorBase, SLOT(bgColorButton_pressed()));
        QObject::connect(lnColorButton, SIGNAL(clicked()), BarcodeGeneratorBase, SLOT(lnColorButton_pressed()));
        QObject::connect(txtColorButton, SIGNAL(clicked()), BarcodeGeneratorBase, SLOT(txtColorButton_pressed()));
        QObject::connect(okButton, SIGNAL(clicked()), BarcodeGeneratorBase, SLOT(okButton_pressed()));
        QObject::connect(cancelButton, SIGNAL(clicked()), BarcodeGeneratorBase, SLOT(cancelButton_pressed()));
        QObject::connect(codeEdit, SIGNAL(textChanged(QString)), BarcodeGeneratorBase, SLOT(codeEdit_textChanged(QString)));
        QObject::connect(resetButton, SIGNAL(clicked()), BarcodeGeneratorBase, SLOT(resetButton_clicked()));
        QObject::connect(includeCheck, SIGNAL(stateChanged(int)), BarcodeGeneratorBase, SLOT(includeCheck_stateChanged(int)));
        QObject::connect(includeCheckInText, SIGNAL(stateChanged(int)), BarcodeGeneratorBase, SLOT(includeCheckInText_stateChanged(int)));

        QMetaObject::connectSlotsByName(BarcodeGeneratorBase);
    } // setupUi

    void retranslateUi(QDialog *BarcodeGeneratorBase)
    {
        BarcodeGeneratorBase->setWindowTitle(QApplication::translate("BarcodeGeneratorBase", "Insert Barcode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        BarcodeGeneratorBase->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        bcodeBox->setTitle(QApplication::translate("BarcodeGeneratorBase", "Format", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        includeCheckInText->setToolTip(QApplication::translate("BarcodeGeneratorBase", "Include the checksum digit in the barcode text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        includeCheckInText->setText(QApplication::translate("BarcodeGeneratorBase", "Incl&ude Checksum Digit", 0, QApplication::UnicodeUTF8));
        includeCheckInText->setShortcut(QApplication::translate("BarcodeGeneratorBase", "Alt+U", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        includeCheck->setToolTip(QApplication::translate("BarcodeGeneratorBase", "Generate and include a checksum in barcode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        includeCheck->setText(QApplication::translate("BarcodeGeneratorBase", "I&nclude Checksum", 0, QApplication::UnicodeUTF8));
        includeCheck->setShortcut(QApplication::translate("BarcodeGeneratorBase", "Alt+N", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        guardCheck->setToolTip(QApplication::translate("BarcodeGeneratorBase", "Draw arrows to be sure of space next the code", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        guardCheck->setText(QApplication::translate("BarcodeGeneratorBase", "&Guard Whitespace", 0, QApplication::UnicodeUTF8));
        guardCheck->setShortcut(QApplication::translate("BarcodeGeneratorBase", "Alt+G", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        textCheck->setToolTip(QApplication::translate("BarcodeGeneratorBase", "If checked, there will be numbers in the barcode too", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        textCheck->setText(QApplication::translate("BarcodeGeneratorBase", "&Include Text in Barcode", 0, QApplication::UnicodeUTF8));
        textCheck->setShortcut(QApplication::translate("BarcodeGeneratorBase", "Alt+I", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        resetButton->setToolTip(QApplication::translate("BarcodeGeneratorBase", "Reset the barcode samples", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        resetButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        codeEdit->setToolTip(QApplication::translate("BarcodeGeneratorBase", "The numeric representation of the code itself. See the help message below", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        codeLabel->setText(QApplication::translate("BarcodeGeneratorBase", "Co&de:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bcCombo->setToolTip(QApplication::translate("BarcodeGeneratorBase", "Select one of the available barcode type here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bcLabel->setText(QApplication::translate("BarcodeGeneratorBase", "&Type:", 0, QApplication::UnicodeUTF8));
        colorBox->setTitle(QApplication::translate("BarcodeGeneratorBase", "Colors", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bgColorButton->setToolTip(QApplication::translate("BarcodeGeneratorBase", "Background color - under the code lines", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bgColorButton->setText(QApplication::translate("BarcodeGeneratorBase", "&Background", 0, QApplication::UnicodeUTF8));
        bgColorButton->setShortcut(QApplication::translate("BarcodeGeneratorBase", "Alt+B", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lnColorButton->setToolTip(QApplication::translate("BarcodeGeneratorBase", "Color of the lines in barcode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lnColorButton->setText(QApplication::translate("BarcodeGeneratorBase", "&Lines", 0, QApplication::UnicodeUTF8));
        lnColorButton->setShortcut(QApplication::translate("BarcodeGeneratorBase", "Alt+L", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txtColorButton->setToolTip(QApplication::translate("BarcodeGeneratorBase", "Color of the text and numbers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        txtColorButton->setText(QApplication::translate("BarcodeGeneratorBase", "&Text", 0, QApplication::UnicodeUTF8));
        txtColorButton->setShortcut(QApplication::translate("BarcodeGeneratorBase", "Alt+T", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        commentEdit->setToolTip(QApplication::translate("BarcodeGeneratorBase", "Hints and help is shown here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        sampleLabel->setToolTip(QApplication::translate("BarcodeGeneratorBase", "Preview of the result. 72dpi sample.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        okButton->setText(QString());
        cancelButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BarcodeGeneratorBase: public Ui_BarcodeGeneratorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BARCODEGENERATOR_H
