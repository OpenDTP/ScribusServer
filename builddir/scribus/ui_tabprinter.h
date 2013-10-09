/********************************************************************************
** Form generated from reading UI file 'tabprinter.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABPRINTER_H
#define UI_TABPRINTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_TabPrinter
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QTabWidget *tabOptions;
    QWidget *tab;
    QGridLayout *gridLayout1;
    QGroupBox *groupPage;
    QGridLayout *gridLayout2;
    QCheckBox *mirrorH;
    QCheckBox *mirrorV;
    QCheckBox *setMedia;
    QCheckBox *setClip;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout3;
    QRadioButton *printGray;
    QRadioButton *printColor;
    QComboBox *psLevel;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *buttonNormal;
    QRadioButton *buttonSeparations;
    QCheckBox *usePDFMarks;
    QGroupBox *groupColor;
    QGridLayout *gridLayout4;
    QCheckBox *doGCR;
    QCheckBox *convertSpots;
    QCheckBox *useICC;
    QWidget *TabPage;
    QGridLayout *gridLayout5;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout6;
    ScrSpinBox *bleedTop;
    QLabel *textLabel3;
    QLabel *textLabel4;
    ScrSpinBox *bleedBottom;
    QLabel *textLabel5;
    ScrSpinBox *bleedLeft;
    QLabel *textLabel6;
    ScrSpinBox *bleedRight;
    QGroupBox *groupMarks;
    QGridLayout *gridLayout7;
    QCheckBox *colorMarks;
    ScrSpinBox *offsetValue;
    QLabel *textLabel2;
    QCheckBox *registrationMarks;
    QCheckBox *bleedMarks;
    QCheckBox *cropMarks;
    QGroupBox *destinationGroup;
    QGridLayout *gridLayout8;
    QCheckBox *useAltPrintCommand;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    QLineEdit *printerCommand;
    QComboBox *defaultPrinter;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *TabPrinter)
    {
        if (TabPrinter->objectName().isEmpty())
            TabPrinter->setObjectName(QString::fromUtf8("TabPrinter"));
        TabPrinter->resize(684, 536);
        gridLayout = new QGridLayout(TabPrinter);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(141, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 2, 0, 1, 1);

        tabOptions = new QTabWidget(TabPrinter);
        tabOptions->setObjectName(QString::fromUtf8("tabOptions"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout1 = new QGridLayout(tab);
        gridLayout1->setSpacing(5);
        gridLayout1->setContentsMargins(10, 10, 10, 10);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        groupPage = new QGroupBox(tab);
        groupPage->setObjectName(QString::fromUtf8("groupPage"));
        gridLayout2 = new QGridLayout(groupPage);
        gridLayout2->setSpacing(5);
        gridLayout2->setContentsMargins(10, 10, 10, 10);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        mirrorH = new QCheckBox(groupPage);
        mirrorH->setObjectName(QString::fromUtf8("mirrorH"));

        gridLayout2->addWidget(mirrorH, 0, 0, 1, 1);

        mirrorV = new QCheckBox(groupPage);
        mirrorV->setObjectName(QString::fromUtf8("mirrorV"));

        gridLayout2->addWidget(mirrorV, 1, 0, 1, 1);

        setMedia = new QCheckBox(groupPage);
        setMedia->setObjectName(QString::fromUtf8("setMedia"));

        gridLayout2->addWidget(setMedia, 2, 0, 1, 1);

        setClip = new QCheckBox(groupPage);
        setClip->setObjectName(QString::fromUtf8("setClip"));

        gridLayout2->addWidget(setClip, 3, 0, 1, 1);


        gridLayout1->addWidget(groupPage, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout3 = new QGridLayout(groupBox_2);
        gridLayout3->setSpacing(5);
        gridLayout3->setContentsMargins(10, 10, 10, 10);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        printGray = new QRadioButton(groupBox_2);
        printGray->setObjectName(QString::fromUtf8("printGray"));

        gridLayout3->addWidget(printGray, 2, 0, 1, 2);

        printColor = new QRadioButton(groupBox_2);
        printColor->setObjectName(QString::fromUtf8("printColor"));
        printColor->setChecked(true);

        gridLayout3->addWidget(printColor, 1, 0, 1, 1);

        psLevel = new QComboBox(groupBox_2);
        psLevel->setObjectName(QString::fromUtf8("psLevel"));

        gridLayout3->addWidget(psLevel, 0, 0, 1, 1);


        gridLayout1->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        buttonNormal = new QRadioButton(groupBox);
        buttonNormal->setObjectName(QString::fromUtf8("buttonNormal"));
        buttonNormal->setChecked(true);

        verticalLayout->addWidget(buttonNormal);

        buttonSeparations = new QRadioButton(groupBox);
        buttonSeparations->setObjectName(QString::fromUtf8("buttonSeparations"));

        verticalLayout->addWidget(buttonSeparations);

        usePDFMarks = new QCheckBox(groupBox);
        usePDFMarks->setObjectName(QString::fromUtf8("usePDFMarks"));

        verticalLayout->addWidget(usePDFMarks);


        gridLayout1->addWidget(groupBox, 0, 0, 1, 1);

        groupColor = new QGroupBox(tab);
        groupColor->setObjectName(QString::fromUtf8("groupColor"));
        gridLayout4 = new QGridLayout(groupColor);
        gridLayout4->setSpacing(5);
        gridLayout4->setContentsMargins(10, 10, 10, 10);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        doGCR = new QCheckBox(groupColor);
        doGCR->setObjectName(QString::fromUtf8("doGCR"));

        gridLayout4->addWidget(doGCR, 0, 0, 1, 1);

        convertSpots = new QCheckBox(groupColor);
        convertSpots->setObjectName(QString::fromUtf8("convertSpots"));

        gridLayout4->addWidget(convertSpots, 1, 0, 1, 1);

        useICC = new QCheckBox(groupColor);
        useICC->setObjectName(QString::fromUtf8("useICC"));

        gridLayout4->addWidget(useICC, 2, 0, 1, 1);


        gridLayout1->addWidget(groupColor, 1, 1, 1, 1);

        tabOptions->addTab(tab, QString());
        TabPage = new QWidget();
        TabPage->setObjectName(QString::fromUtf8("TabPage"));
        gridLayout5 = new QGridLayout(TabPage);
        gridLayout5->setSpacing(5);
        gridLayout5->setContentsMargins(10, 10, 10, 10);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        groupBox_3 = new QGroupBox(TabPage);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout6 = new QGridLayout(groupBox_3);
        gridLayout6->setSpacing(6);
        gridLayout6->setContentsMargins(9, 9, 9, 9);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        bleedTop = new ScrSpinBox(groupBox_3);
        bleedTop->setObjectName(QString::fromUtf8("bleedTop"));

        gridLayout6->addWidget(bleedTop, 0, 1, 1, 1);

        textLabel3 = new QLabel(groupBox_3);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(false);

        gridLayout6->addWidget(textLabel3, 0, 0, 1, 1);

        textLabel4 = new QLabel(groupBox_3);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
        textLabel4->setWordWrap(false);

        gridLayout6->addWidget(textLabel4, 1, 0, 1, 1);

        bleedBottom = new ScrSpinBox(groupBox_3);
        bleedBottom->setObjectName(QString::fromUtf8("bleedBottom"));

        gridLayout6->addWidget(bleedBottom, 1, 1, 1, 1);

        textLabel5 = new QLabel(groupBox_3);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
        textLabel5->setWordWrap(false);

        gridLayout6->addWidget(textLabel5, 0, 2, 1, 1);

        bleedLeft = new ScrSpinBox(groupBox_3);
        bleedLeft->setObjectName(QString::fromUtf8("bleedLeft"));

        gridLayout6->addWidget(bleedLeft, 0, 3, 1, 1);

        textLabel6 = new QLabel(groupBox_3);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        textLabel6->setWordWrap(false);

        gridLayout6->addWidget(textLabel6, 1, 2, 1, 1);

        bleedRight = new ScrSpinBox(groupBox_3);
        bleedRight->setObjectName(QString::fromUtf8("bleedRight"));

        gridLayout6->addWidget(bleedRight, 1, 3, 1, 1);


        gridLayout5->addWidget(groupBox_3, 1, 0, 1, 1);

        groupMarks = new QGroupBox(TabPage);
        groupMarks->setObjectName(QString::fromUtf8("groupMarks"));
        gridLayout7 = new QGridLayout(groupMarks);
        gridLayout7->setSpacing(5);
        gridLayout7->setContentsMargins(10, 10, 10, 10);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        colorMarks = new QCheckBox(groupMarks);
        colorMarks->setObjectName(QString::fromUtf8("colorMarks"));

        gridLayout7->addWidget(colorMarks, 0, 1, 1, 2);

        offsetValue = new ScrSpinBox(groupMarks);
        offsetValue->setObjectName(QString::fromUtf8("offsetValue"));

        gridLayout7->addWidget(offsetValue, 1, 2, 1, 1);

        textLabel2 = new QLabel(groupMarks);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        gridLayout7->addWidget(textLabel2, 1, 1, 1, 1);

        registrationMarks = new QCheckBox(groupMarks);
        registrationMarks->setObjectName(QString::fromUtf8("registrationMarks"));

        gridLayout7->addWidget(registrationMarks, 2, 0, 1, 1);

        bleedMarks = new QCheckBox(groupMarks);
        bleedMarks->setObjectName(QString::fromUtf8("bleedMarks"));

        gridLayout7->addWidget(bleedMarks, 1, 0, 1, 1);

        cropMarks = new QCheckBox(groupMarks);
        cropMarks->setObjectName(QString::fromUtf8("cropMarks"));

        gridLayout7->addWidget(cropMarks, 0, 0, 1, 1);


        gridLayout5->addWidget(groupMarks, 0, 0, 1, 1);

        tabOptions->addTab(TabPage, QString());

        gridLayout->addWidget(tabOptions, 1, 0, 1, 1);

        destinationGroup = new QGroupBox(TabPrinter);
        destinationGroup->setObjectName(QString::fromUtf8("destinationGroup"));
        gridLayout8 = new QGridLayout(destinationGroup);
        gridLayout8->setSpacing(5);
        gridLayout8->setContentsMargins(10, 10, 10, 10);
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        useAltPrintCommand = new QCheckBox(destinationGroup);
        useAltPrintCommand->setObjectName(QString::fromUtf8("useAltPrintCommand"));

        gridLayout8->addWidget(useAltPrintCommand, 1, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel1 = new QLabel(destinationGroup);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout->addWidget(textLabel1);

        printerCommand = new QLineEdit(destinationGroup);
        printerCommand->setObjectName(QString::fromUtf8("printerCommand"));

        hboxLayout->addWidget(printerCommand);


        gridLayout8->addLayout(hboxLayout, 2, 0, 1, 2);

        defaultPrinter = new QComboBox(destinationGroup);
        defaultPrinter->setObjectName(QString::fromUtf8("defaultPrinter"));

        gridLayout8->addWidget(defaultPrinter, 0, 0, 1, 1);

        spacerItem1 = new QSpacerItem(191, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout8->addItem(spacerItem1, 0, 1, 1, 1);


        gridLayout->addWidget(destinationGroup, 0, 0, 1, 1);

        QWidget::setTabOrder(defaultPrinter, useAltPrintCommand);
        QWidget::setTabOrder(useAltPrintCommand, printerCommand);
        QWidget::setTabOrder(printerCommand, tabOptions);
        QWidget::setTabOrder(tabOptions, buttonNormal);
        QWidget::setTabOrder(buttonNormal, buttonSeparations);
        QWidget::setTabOrder(buttonSeparations, usePDFMarks);
        QWidget::setTabOrder(usePDFMarks, psLevel);
        QWidget::setTabOrder(psLevel, printColor);
        QWidget::setTabOrder(printColor, printGray);
        QWidget::setTabOrder(printGray, mirrorH);
        QWidget::setTabOrder(mirrorH, mirrorV);
        QWidget::setTabOrder(mirrorV, setMedia);
        QWidget::setTabOrder(setMedia, setClip);
        QWidget::setTabOrder(setClip, doGCR);
        QWidget::setTabOrder(doGCR, convertSpots);
        QWidget::setTabOrder(convertSpots, useICC);
        QWidget::setTabOrder(useICC, cropMarks);
        QWidget::setTabOrder(cropMarks, bleedMarks);
        QWidget::setTabOrder(bleedMarks, registrationMarks);
        QWidget::setTabOrder(registrationMarks, colorMarks);

        retranslateUi(TabPrinter);

        tabOptions->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TabPrinter);
    } // setupUi

    void retranslateUi(QWidget *TabPrinter)
    {
        TabPrinter->setWindowTitle(QApplication::translate("TabPrinter", "TabPrinterBase", 0, QApplication::UnicodeUTF8));
        groupPage->setTitle(QApplication::translate("TabPrinter", "Page", 0, QApplication::UnicodeUTF8));
        mirrorH->setText(QApplication::translate("TabPrinter", "Mirror Page(s) Horizontal", 0, QApplication::UnicodeUTF8));
        mirrorV->setText(QApplication::translate("TabPrinter", "Mirror Page(s) Vertical", 0, QApplication::UnicodeUTF8));
        setMedia->setText(QApplication::translate("TabPrinter", "Set Media Size", 0, QApplication::UnicodeUTF8));
        setClip->setText(QApplication::translate("TabPrinter", "Clip to Printer Margins", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("TabPrinter", "PostScript Options", 0, QApplication::UnicodeUTF8));
        printGray->setText(QApplication::translate("TabPrinter", "Print in Grayscale", 0, QApplication::UnicodeUTF8));
        printColor->setText(QApplication::translate("TabPrinter", "Print in Color if Available", 0, QApplication::UnicodeUTF8));
        psLevel->clear();
        psLevel->insertItems(0, QStringList()
         << QApplication::translate("TabPrinter", "Level 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TabPrinter", "Level 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TabPrinter", "Level 3", 0, QApplication::UnicodeUTF8)
        );
        groupBox->setTitle(QApplication::translate("TabPrinter", "General", 0, QApplication::UnicodeUTF8));
        buttonNormal->setText(QApplication::translate("TabPrinter", "Print Normal", 0, QApplication::UnicodeUTF8));
        buttonSeparations->setText(QApplication::translate("TabPrinter", "Print Separations", 0, QApplication::UnicodeUTF8));
        usePDFMarks->setText(QApplication::translate("TabPrinter", "Include PDF Annotations and Links", 0, QApplication::UnicodeUTF8));
        groupColor->setTitle(QApplication::translate("TabPrinter", "Color", 0, QApplication::UnicodeUTF8));
        doGCR->setText(QApplication::translate("TabPrinter", "Apply Under Color Removal", 0, QApplication::UnicodeUTF8));
        convertSpots->setText(QApplication::translate("TabPrinter", "Convert Spot Colors to Process Colors", 0, QApplication::UnicodeUTF8));
        useICC->setText(QApplication::translate("TabPrinter", "Apply ICC Profiles", 0, QApplication::UnicodeUTF8));
        tabOptions->setTabText(tabOptions->indexOf(tab), QApplication::translate("TabPrinter", "Options", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("TabPrinter", "Bleed Settings", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("TabPrinter", "Top:", 0, QApplication::UnicodeUTF8));
        textLabel4->setText(QApplication::translate("TabPrinter", "Bottom:", 0, QApplication::UnicodeUTF8));
        textLabel5->setText(QApplication::translate("TabPrinter", "Left:", 0, QApplication::UnicodeUTF8));
        textLabel6->setText(QApplication::translate("TabPrinter", "Right:", 0, QApplication::UnicodeUTF8));
        groupMarks->setTitle(QApplication::translate("TabPrinter", "Printer Marks", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        colorMarks->setToolTip(QApplication::translate("TabPrinter", "Add color calibration bars", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        colorMarks->setText(QApplication::translate("TabPrinter", "Color Bars", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("TabPrinter", "Offset:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        registrationMarks->setToolTip(QApplication::translate("TabPrinter", "Add registration marks which are added to each separation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        registrationMarks->setText(QApplication::translate("TabPrinter", "Registration Marks", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bleedMarks->setToolTip(QApplication::translate("TabPrinter", "This creates bleed marks which are indicated by  _ . _ and show the bleed limit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bleedMarks->setText(QApplication::translate("TabPrinter", "Bleed Marks", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cropMarks->setToolTip(QApplication::translate("TabPrinter", "This creates crop marks in the PDF indicating where the paper should be cut or trimmed after printing", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cropMarks->setText(QApplication::translate("TabPrinter", "Crop Marks", 0, QApplication::UnicodeUTF8));
        tabOptions->setTabText(tabOptions->indexOf(TabPage), QApplication::translate("TabPrinter", "Marks && Bleeds", 0, QApplication::UnicodeUTF8));
        destinationGroup->setTitle(QApplication::translate("TabPrinter", "Print Destination", 0, QApplication::UnicodeUTF8));
        useAltPrintCommand->setText(QApplication::translate("TabPrinter", "Alternative Printer Command", 0, QApplication::UnicodeUTF8));
        useAltPrintCommand->setShortcut(QString());
        textLabel1->setText(QApplication::translate("TabPrinter", "Command:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TabPrinter: public Ui_TabPrinter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABPRINTER_H
