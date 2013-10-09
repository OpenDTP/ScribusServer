/********************************************************************************
** Form generated from reading UI file 'cmsprefsbase.ui'
**
** Created: Sun Feb 24 21:37:25 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMSPREFSBASE_H
#define UI_CMSPREFSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMSPrefsBase
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *checkBox1;
    QGroupBox *sysProfiles;
    QGridLayout *gridLayout;
    QLabel *text1;
    QComboBox *inputPRGBIm;
    QLabel *text1CMYK;
    QComboBox *inputPCMYKIm;
    QLabel *text4;
    QComboBox *inputPRGB;
    QLabel *text5;
    QComboBox *inputPCMYK;
    QLabel *text2;
    QComboBox *monitorP;
    QLabel *text3;
    QComboBox *printerP;
    QGroupBox *renderInt;
    QGridLayout *gridLayout1;
    QLabel *text21;
    QComboBox *imagesI;
    QLabel *text22;
    QComboBox *colorsI;
    QGroupBox *simulate;
    QVBoxLayout *vboxLayout1;
    QCheckBox *convertAll;
    QCheckBox *gamutC;
    QCheckBox *blackP;

    void setupUi(QWidget *CMSPrefsBase)
    {
        if (CMSPrefsBase->objectName().isEmpty())
            CMSPrefsBase->setObjectName(QString::fromUtf8("CMSPrefsBase"));
        CMSPrefsBase->resize(327, 421);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CMSPrefsBase->sizePolicy().hasHeightForWidth());
        CMSPrefsBase->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(CMSPrefsBase);
        vboxLayout->setSpacing(5);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        checkBox1 = new QCheckBox(CMSPrefsBase);
        checkBox1->setObjectName(QString::fromUtf8("checkBox1"));

        vboxLayout->addWidget(checkBox1);

        sysProfiles = new QGroupBox(CMSPrefsBase);
        sysProfiles->setObjectName(QString::fromUtf8("sysProfiles"));
        sysProfiles->setEnabled(false);
        gridLayout = new QGridLayout(sysProfiles);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setVerticalSpacing(5);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        text1 = new QLabel(sysProfiles);
        text1->setObjectName(QString::fromUtf8("text1"));

        gridLayout->addWidget(text1, 0, 0, 1, 1);

        inputPRGBIm = new QComboBox(sysProfiles);
        inputPRGBIm->setObjectName(QString::fromUtf8("inputPRGBIm"));
        inputPRGBIm->setMinimumSize(QSize(190, 0));

        gridLayout->addWidget(inputPRGBIm, 0, 1, 1, 1);

        text1CMYK = new QLabel(sysProfiles);
        text1CMYK->setObjectName(QString::fromUtf8("text1CMYK"));

        gridLayout->addWidget(text1CMYK, 1, 0, 1, 1);

        inputPCMYKIm = new QComboBox(sysProfiles);
        inputPCMYKIm->setObjectName(QString::fromUtf8("inputPCMYKIm"));
        inputPCMYKIm->setMinimumSize(QSize(190, 0));

        gridLayout->addWidget(inputPCMYKIm, 1, 1, 1, 1);

        text4 = new QLabel(sysProfiles);
        text4->setObjectName(QString::fromUtf8("text4"));

        gridLayout->addWidget(text4, 2, 0, 1, 1);

        inputPRGB = new QComboBox(sysProfiles);
        inputPRGB->setObjectName(QString::fromUtf8("inputPRGB"));
        inputPRGB->setMinimumSize(QSize(190, 0));

        gridLayout->addWidget(inputPRGB, 2, 1, 1, 1);

        text5 = new QLabel(sysProfiles);
        text5->setObjectName(QString::fromUtf8("text5"));

        gridLayout->addWidget(text5, 3, 0, 1, 1);

        inputPCMYK = new QComboBox(sysProfiles);
        inputPCMYK->setObjectName(QString::fromUtf8("inputPCMYK"));
        inputPCMYK->setMinimumSize(QSize(190, 0));

        gridLayout->addWidget(inputPCMYK, 3, 1, 1, 1);

        text2 = new QLabel(sysProfiles);
        text2->setObjectName(QString::fromUtf8("text2"));

        gridLayout->addWidget(text2, 4, 0, 1, 1);

        monitorP = new QComboBox(sysProfiles);
        monitorP->setObjectName(QString::fromUtf8("monitorP"));
        monitorP->setMinimumSize(QSize(190, 0));

        gridLayout->addWidget(monitorP, 4, 1, 1, 1);

        text3 = new QLabel(sysProfiles);
        text3->setObjectName(QString::fromUtf8("text3"));

        gridLayout->addWidget(text3, 5, 0, 1, 1);

        printerP = new QComboBox(sysProfiles);
        printerP->setObjectName(QString::fromUtf8("printerP"));
        printerP->setMinimumSize(QSize(190, 0));

        gridLayout->addWidget(printerP, 5, 1, 1, 1);


        vboxLayout->addWidget(sysProfiles);

        renderInt = new QGroupBox(CMSPrefsBase);
        renderInt->setObjectName(QString::fromUtf8("renderInt"));
        renderInt->setEnabled(false);
        gridLayout1 = new QGridLayout(renderInt);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setHorizontalSpacing(5);
        gridLayout1->setVerticalSpacing(5);
        gridLayout1->setContentsMargins(10, 10, 10, 10);
        text21 = new QLabel(renderInt);
        text21->setObjectName(QString::fromUtf8("text21"));

        gridLayout1->addWidget(text21, 0, 0, 1, 1);

        imagesI = new QComboBox(renderInt);
        imagesI->setObjectName(QString::fromUtf8("imagesI"));
        imagesI->setMinimumSize(QSize(190, 0));

        gridLayout1->addWidget(imagesI, 0, 1, 1, 1);

        text22 = new QLabel(renderInt);
        text22->setObjectName(QString::fromUtf8("text22"));

        gridLayout1->addWidget(text22, 1, 0, 1, 1);

        colorsI = new QComboBox(renderInt);
        colorsI->setObjectName(QString::fromUtf8("colorsI"));
        colorsI->setMinimumSize(QSize(190, 0));

        gridLayout1->addWidget(colorsI, 1, 1, 1, 1);


        vboxLayout->addWidget(renderInt);

        simulate = new QGroupBox(CMSPrefsBase);
        simulate->setObjectName(QString::fromUtf8("simulate"));
        simulate->setEnabled(false);
        simulate->setCheckable(true);
        simulate->setChecked(false);
        vboxLayout1 = new QVBoxLayout(simulate);
        vboxLayout1->setSpacing(5);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(10, 10, 10, 10);
        convertAll = new QCheckBox(simulate);
        convertAll->setObjectName(QString::fromUtf8("convertAll"));

        vboxLayout1->addWidget(convertAll);

        gamutC = new QCheckBox(simulate);
        gamutC->setObjectName(QString::fromUtf8("gamutC"));

        vboxLayout1->addWidget(gamutC);


        vboxLayout->addWidget(simulate);

        blackP = new QCheckBox(CMSPrefsBase);
        blackP->setObjectName(QString::fromUtf8("blackP"));
        blackP->setEnabled(false);

        vboxLayout->addWidget(blackP);

#ifndef QT_NO_SHORTCUT
        text1->setBuddy(inputPRGBIm);
        text1CMYK->setBuddy(inputPCMYKIm);
        text4->setBuddy(inputPRGB);
        text5->setBuddy(inputPCMYK);
        text2->setBuddy(monitorP);
        text3->setBuddy(printerP);
        text21->setBuddy(imagesI);
        text22->setBuddy(colorsI);
#endif // QT_NO_SHORTCUT

        retranslateUi(CMSPrefsBase);
        QObject::connect(checkBox1, SIGNAL(clicked(bool)), sysProfiles, SLOT(setEnabled(bool)));
        QObject::connect(checkBox1, SIGNAL(clicked(bool)), renderInt, SLOT(setEnabled(bool)));
        QObject::connect(checkBox1, SIGNAL(clicked(bool)), simulate, SLOT(setEnabled(bool)));
        QObject::connect(checkBox1, SIGNAL(clicked(bool)), blackP, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(CMSPrefsBase);
    } // setupUi

    void retranslateUi(QWidget *CMSPrefsBase)
    {
        CMSPrefsBase->setWindowTitle(QApplication::translate("CMSPrefsBase", "Form", 0, QApplication::UnicodeUTF8));
        checkBox1->setText(QApplication::translate("CMSPrefsBase", "&Activate Color Management", 0, QApplication::UnicodeUTF8));
        sysProfiles->setTitle(QApplication::translate("CMSPrefsBase", "System Profiles", 0, QApplication::UnicodeUTF8));
        text1->setText(QApplication::translate("CMSPrefsBase", "&RGB Images:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        inputPRGBIm->setToolTip(QApplication::translate("CMSPrefsBase", "Default color profile for imported RGB images", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        text1CMYK->setText(QApplication::translate("CMSPrefsBase", "&CMYK Images:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        inputPCMYKIm->setToolTip(QApplication::translate("CMSPrefsBase", "Default color profile for imported CMYK images", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        text4->setText(QApplication::translate("CMSPrefsBase", "&RGB Solid Colors:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        inputPRGB->setToolTip(QApplication::translate("CMSPrefsBase", "Default color profile for solid RGB colors on the page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        text5->setText(QApplication::translate("CMSPrefsBase", "&CMYK Solid Colors:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        inputPCMYK->setToolTip(QApplication::translate("CMSPrefsBase", "Default color profile for solid CMYK colors on the page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        text2->setText(QApplication::translate("CMSPrefsBase", "&Monitor:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        monitorP->setToolTip(QApplication::translate("CMSPrefsBase", "Color profile that you have generated or received from the manufacturer.\n"
"This profile should be specific to your monitor and not a generic profile (i.e. sRGB).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        text3->setText(QApplication::translate("CMSPrefsBase", "P&rinter:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        printerP->setToolTip(QApplication::translate("CMSPrefsBase", "Color profile for your printer model from the manufacturer.\n"
"This profile should be specific to your printer and not a generic profile (i.e. sRGB).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        renderInt->setTitle(QApplication::translate("CMSPrefsBase", "Rendering Intents", 0, QApplication::UnicodeUTF8));
        text21->setText(QApplication::translate("CMSPrefsBase", "Images:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        imagesI->setToolTip(QApplication::translate("CMSPrefsBase", "Default rendering intent for images. Unless you know why to change it,\n"
"Relative Colorimetric or Perceptual should be chosen.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        text22->setText(QApplication::translate("CMSPrefsBase", "Sol&id Colors:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        colorsI->setToolTip(QApplication::translate("CMSPrefsBase", "Default rendering intent for solid colors. Unless you know why to change it,\n"
"Relative Colorimetric or Perceptual should be chosen.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        simulate->setToolTip(QApplication::translate("CMSPrefsBase", "Enable 'soft proofing' of how your document colors will print,\n"
"based on the chosen printer profile.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        simulate->setTitle(QApplication::translate("CMSPrefsBase", "Sim&ulate Printer on the Screen", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        convertAll->setToolTip(QApplication::translate("CMSPrefsBase", "Simulate a full color managed environment :\n"
"all colors, rgb or cmyk, are converted to printer color space.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        convertAll->setText(QApplication::translate("CMSPrefsBase", "Convert all colors to printer space", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        gamutC->setToolTip(QApplication::translate("CMSPrefsBase", "Method of showing colors on the screen which may not print properly.\n"
"This requires very accurate profiles and serves only as a warning.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        gamutC->setText(QApplication::translate("CMSPrefsBase", "Mark Colors out of &Gamut", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        blackP->setToolTip(QApplication::translate("CMSPrefsBase", "Black Point Compensation is a method of improving contrast in photos.\n"
"It is recommended that you enable this if you have photos in your document.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        blackP->setText(QApplication::translate("CMSPrefsBase", "Use &Blackpoint Compensation", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CMSPrefsBase: public Ui_CMSPrefsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMSPREFSBASE_H
