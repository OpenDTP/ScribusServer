/*
Base class for color wheel dialog
*/

/********************************************************************************
** Form generated from reading UI file 'cwdialog.ui'
**
** Created: Sun Feb 24 21:48:58 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CWDIALOG_H
#define UI_CWDIALOG_H

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
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "colorlistbox.h"
#include "colorwheelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_CWDialog
{
public:
    QGridLayout *gridLayout;
    ColorWheel *colorWheel;
    QGroupBox *groupBox3;
    QGridLayout *gridLayout1;
    QTableWidget *currentColorTable;
    ColorListBox *colorList;
    QGroupBox *groupBox3_2;
    QGridLayout *gridLayout2;
    QHBoxLayout *hboxLayout;
    QLabel *angleLabel;
    QSpinBox *angleSpin;
    QComboBox *typeCombo;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem;
    QPushButton *addButton;
    QPushButton *replaceButton;
    QPushButton *cancelButton;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout3;
    QLabel *previewLabel;
    QComboBox *defectCombo;
    QLabel *textLabel1;
    QSpacerItem *verticalSpacer;
    QTabWidget *colorspaceTab;
    QWidget *tabCMYK;
    QGridLayout *gridLayout4;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel4;
    QSpinBox *cSpin;
    QHBoxLayout *hboxLayout3;
    QLabel *textLabel5;
    QSpinBox *mSpin;
    QHBoxLayout *hboxLayout4;
    QLabel *textLabel6;
    QSpinBox *ySpin;
    QHBoxLayout *hboxLayout5;
    QLabel *textLabel7;
    QSpinBox *kSpin;
    QHBoxLayout *hboxLayout6;
    QLabel *textLabel1_2;
    QLabel *rgbLabel;
    QHBoxLayout *hboxLayout7;
    QLabel *textLabel1_2_2;
    QLabel *hsvLabel;
    QSpacerItem *spacerItem1;
    QWidget *tabRGB;
    QGridLayout *gridLayout5;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout8;
    QLabel *textLabel8;
    QSpinBox *rSpin;
    QHBoxLayout *hboxLayout9;
    QLabel *textLabel9;
    QSpinBox *gSpin;
    QHBoxLayout *hboxLayout10;
    QLabel *textLabel10;
    QSpinBox *bSpin;
    QHBoxLayout *hboxLayout11;
    QLabel *textLabel3;
    QLabel *cmykLabel;
    QHBoxLayout *hboxLayout12;
    QLabel *textLabel1_2_2_2;
    QLabel *hsvLabel2;
    QSpacerItem *spacerItem2;
    QWidget *tabHSV;
    QGridLayout *gridLayout6;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout13;
    QLabel *textLabel4_2;
    QSpinBox *hSpin;
    QHBoxLayout *hboxLayout14;
    QLabel *textLabel5_2;
    QSpinBox *sSpin;
    QHBoxLayout *hboxLayout15;
    QLabel *textLabel6_2;
    QSpinBox *vSpin;
    QHBoxLayout *hboxLayout16;
    QLabel *textLabel1_2_3;
    QLabel *rgbLabel2;
    QHBoxLayout *hboxLayout17;
    QLabel *textLabel1_2_2_3;
    QLabel *cmykLabel2;
    QSpacerItem *spacerItem3;
    QWidget *tabDocument;
    QGridLayout *gridLayout7;
    ColorListBox *documentColorList;

    void setupUi(QDialog *CWDialog)
    {
        if (CWDialog->objectName().isEmpty())
            CWDialog->setObjectName(QString::fromUtf8("CWDialog"));
        CWDialog->resize(625, 699);
        gridLayout = new QGridLayout(CWDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        colorWheel = new ColorWheel(CWDialog);
        colorWheel->setObjectName(QString::fromUtf8("colorWheel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(colorWheel->sizePolicy().hasHeightForWidth());
        colorWheel->setSizePolicy(sizePolicy);
        colorWheel->setMinimumSize(QSize(300, 300));
        colorWheel->setMaximumSize(QSize(300, 300));

        gridLayout->addWidget(colorWheel, 0, 0, 1, 1);

        groupBox3 = new QGroupBox(CWDialog);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        gridLayout1 = new QGridLayout(groupBox3);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        currentColorTable = new QTableWidget(groupBox3);
        if (currentColorTable->columnCount() < 5)
            currentColorTable->setColumnCount(5);
        if (currentColorTable->rowCount() < 3)
            currentColorTable->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        currentColorTable->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        currentColorTable->setVerticalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        currentColorTable->setVerticalHeaderItem(2, __qtablewidgetitem2);
        currentColorTable->setObjectName(QString::fromUtf8("currentColorTable"));
        currentColorTable->setAlternatingRowColors(true);
        currentColorTable->setSelectionMode(QAbstractItemView::SingleSelection);
        currentColorTable->setRowCount(3);
        currentColorTable->setColumnCount(5);

        gridLayout1->addWidget(currentColorTable, 1, 0, 1, 1);

        colorList = new ColorListBox(groupBox3);
        colorList->setObjectName(QString::fromUtf8("colorList"));
        colorList->setMinimumSize(QSize(240, 160));

        gridLayout1->addWidget(colorList, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox3, 1, 1, 2, 1);

        groupBox3_2 = new QGroupBox(CWDialog);
        groupBox3_2->setObjectName(QString::fromUtf8("groupBox3_2"));
        gridLayout2 = new QGridLayout(groupBox3_2);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        angleLabel = new QLabel(groupBox3_2);
        angleLabel->setObjectName(QString::fromUtf8("angleLabel"));
        angleLabel->setMaximumSize(QSize(100, 32767));
        angleLabel->setWordWrap(false);

        hboxLayout->addWidget(angleLabel);

        angleSpin = new QSpinBox(groupBox3_2);
        angleSpin->setObjectName(QString::fromUtf8("angleSpin"));

        hboxLayout->addWidget(angleSpin);


        gridLayout2->addLayout(hboxLayout, 1, 0, 1, 1);

        typeCombo = new QComboBox(groupBox3_2);
        typeCombo->setObjectName(QString::fromUtf8("typeCombo"));
        typeCombo->setMaximumSize(QSize(280, 32767));

        gridLayout2->addWidget(typeCombo, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox3_2, 1, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        addButton = new QPushButton(CWDialog);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        hboxLayout1->addWidget(addButton);

        replaceButton = new QPushButton(CWDialog);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));

        hboxLayout1->addWidget(replaceButton);

        cancelButton = new QPushButton(CWDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout1->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout1, 3, 0, 1, 2);

        groupBox2 = new QGroupBox(CWDialog);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        gridLayout3 = new QGridLayout(groupBox2);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        previewLabel = new QLabel(groupBox2);
        previewLabel->setObjectName(QString::fromUtf8("previewLabel"));
        previewLabel->setMinimumSize(QSize(280, 100));
        previewLabel->setMaximumSize(QSize(280, 100));
        previewLabel->setFrameShape(QFrame::Box);
        previewLabel->setWordWrap(false);

        gridLayout3->addWidget(previewLabel, 2, 0, 1, 1);

        defectCombo = new QComboBox(groupBox2);
        defectCombo->setObjectName(QString::fromUtf8("defectCombo"));
        defectCombo->setMinimumSize(QSize(280, 0));

        gridLayout3->addWidget(defectCombo, 1, 0, 1, 1);

        textLabel1 = new QLabel(groupBox2);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout3->addWidget(textLabel1, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(verticalSpacer, 3, 0, 1, 1);


        gridLayout->addWidget(groupBox2, 2, 0, 1, 1);

        colorspaceTab = new QTabWidget(CWDialog);
        colorspaceTab->setObjectName(QString::fromUtf8("colorspaceTab"));
        tabCMYK = new QWidget();
        tabCMYK->setObjectName(QString::fromUtf8("tabCMYK"));
        gridLayout4 = new QGridLayout(tabCMYK);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(11, 11, 11, 11);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        textLabel4 = new QLabel(tabCMYK);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
        textLabel4->setWordWrap(false);

        hboxLayout2->addWidget(textLabel4);

        cSpin = new QSpinBox(tabCMYK);
        cSpin->setObjectName(QString::fromUtf8("cSpin"));
        cSpin->setMaximum(100);

        hboxLayout2->addWidget(cSpin);


        gridLayout4->addLayout(hboxLayout2, 0, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        textLabel5 = new QLabel(tabCMYK);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
        textLabel5->setWordWrap(false);

        hboxLayout3->addWidget(textLabel5);

        mSpin = new QSpinBox(tabCMYK);
        mSpin->setObjectName(QString::fromUtf8("mSpin"));
        mSpin->setMaximum(100);

        hboxLayout3->addWidget(mSpin);


        gridLayout4->addLayout(hboxLayout3, 1, 0, 1, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        textLabel6 = new QLabel(tabCMYK);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        textLabel6->setWordWrap(false);

        hboxLayout4->addWidget(textLabel6);

        ySpin = new QSpinBox(tabCMYK);
        ySpin->setObjectName(QString::fromUtf8("ySpin"));
        ySpin->setMaximum(100);

        hboxLayout4->addWidget(ySpin);


        gridLayout4->addLayout(hboxLayout4, 2, 0, 1, 1);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        textLabel7 = new QLabel(tabCMYK);
        textLabel7->setObjectName(QString::fromUtf8("textLabel7"));
        textLabel7->setWordWrap(false);

        hboxLayout5->addWidget(textLabel7);

        kSpin = new QSpinBox(tabCMYK);
        kSpin->setObjectName(QString::fromUtf8("kSpin"));
        kSpin->setMaximum(100);

        hboxLayout5->addWidget(kSpin);


        gridLayout4->addLayout(hboxLayout5, 3, 0, 1, 1);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(6);
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        textLabel1_2 = new QLabel(tabCMYK);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setWordWrap(false);

        hboxLayout6->addWidget(textLabel1_2);

        rgbLabel = new QLabel(tabCMYK);
        rgbLabel->setObjectName(QString::fromUtf8("rgbLabel"));
        rgbLabel->setFrameShape(QFrame::Box);
        rgbLabel->setFrameShadow(QFrame::Plain);
        rgbLabel->setWordWrap(false);

        hboxLayout6->addWidget(rgbLabel);


        gridLayout4->addLayout(hboxLayout6, 4, 0, 1, 1);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setSpacing(6);
        hboxLayout7->setContentsMargins(0, 0, 0, 0);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        textLabel1_2_2 = new QLabel(tabCMYK);
        textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));
        textLabel1_2_2->setWordWrap(false);

        hboxLayout7->addWidget(textLabel1_2_2);

        hsvLabel = new QLabel(tabCMYK);
        hsvLabel->setObjectName(QString::fromUtf8("hsvLabel"));
        hsvLabel->setFrameShape(QFrame::Box);
        hsvLabel->setFrameShadow(QFrame::Plain);
        hsvLabel->setWordWrap(false);

        hboxLayout7->addWidget(hsvLabel);


        gridLayout4->addLayout(hboxLayout7, 5, 0, 1, 1);

        spacerItem1 = new QSpacerItem(254, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(spacerItem1, 6, 0, 1, 1);

        colorspaceTab->addTab(tabCMYK, QString());
        tabRGB = new QWidget();
        tabRGB->setObjectName(QString::fromUtf8("tabRGB"));
        gridLayout5 = new QGridLayout(tabRGB);
        gridLayout5->setSpacing(6);
        gridLayout5->setContentsMargins(11, 11, 11, 11);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setSpacing(6);
        hboxLayout8->setContentsMargins(0, 0, 0, 0);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        textLabel8 = new QLabel(tabRGB);
        textLabel8->setObjectName(QString::fromUtf8("textLabel8"));
        textLabel8->setWordWrap(false);

        hboxLayout8->addWidget(textLabel8);

        rSpin = new QSpinBox(tabRGB);
        rSpin->setObjectName(QString::fromUtf8("rSpin"));
        rSpin->setMaximum(255);

        hboxLayout8->addWidget(rSpin);


        vboxLayout->addLayout(hboxLayout8);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setSpacing(6);
        hboxLayout9->setContentsMargins(0, 0, 0, 0);
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        textLabel9 = new QLabel(tabRGB);
        textLabel9->setObjectName(QString::fromUtf8("textLabel9"));
        textLabel9->setWordWrap(false);

        hboxLayout9->addWidget(textLabel9);

        gSpin = new QSpinBox(tabRGB);
        gSpin->setObjectName(QString::fromUtf8("gSpin"));
        gSpin->setMaximum(255);

        hboxLayout9->addWidget(gSpin);


        vboxLayout->addLayout(hboxLayout9);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setSpacing(6);
        hboxLayout10->setContentsMargins(0, 0, 0, 0);
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        textLabel10 = new QLabel(tabRGB);
        textLabel10->setObjectName(QString::fromUtf8("textLabel10"));
        textLabel10->setWordWrap(false);

        hboxLayout10->addWidget(textLabel10);

        bSpin = new QSpinBox(tabRGB);
        bSpin->setObjectName(QString::fromUtf8("bSpin"));
        bSpin->setMaximum(255);

        hboxLayout10->addWidget(bSpin);


        vboxLayout->addLayout(hboxLayout10);

        hboxLayout11 = new QHBoxLayout();
        hboxLayout11->setSpacing(6);
        hboxLayout11->setContentsMargins(0, 0, 0, 0);
        hboxLayout11->setObjectName(QString::fromUtf8("hboxLayout11"));
        textLabel3 = new QLabel(tabRGB);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(false);

        hboxLayout11->addWidget(textLabel3);

        cmykLabel = new QLabel(tabRGB);
        cmykLabel->setObjectName(QString::fromUtf8("cmykLabel"));
        cmykLabel->setFrameShape(QFrame::Box);
        cmykLabel->setWordWrap(false);

        hboxLayout11->addWidget(cmykLabel);


        vboxLayout->addLayout(hboxLayout11);

        hboxLayout12 = new QHBoxLayout();
        hboxLayout12->setSpacing(6);
        hboxLayout12->setContentsMargins(0, 0, 0, 0);
        hboxLayout12->setObjectName(QString::fromUtf8("hboxLayout12"));
        textLabel1_2_2_2 = new QLabel(tabRGB);
        textLabel1_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2"));
        textLabel1_2_2_2->setWordWrap(false);

        hboxLayout12->addWidget(textLabel1_2_2_2);

        hsvLabel2 = new QLabel(tabRGB);
        hsvLabel2->setObjectName(QString::fromUtf8("hsvLabel2"));
        hsvLabel2->setFrameShape(QFrame::Box);
        hsvLabel2->setFrameShadow(QFrame::Plain);
        hsvLabel2->setWordWrap(false);

        hboxLayout12->addWidget(hsvLabel2);


        vboxLayout->addLayout(hboxLayout12);


        gridLayout5->addLayout(vboxLayout, 0, 0, 1, 1);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout5->addItem(spacerItem2, 1, 0, 1, 1);

        colorspaceTab->addTab(tabRGB, QString());
        tabHSV = new QWidget();
        tabHSV->setObjectName(QString::fromUtf8("tabHSV"));
        gridLayout6 = new QGridLayout(tabHSV);
        gridLayout6->setSpacing(6);
        gridLayout6->setContentsMargins(11, 11, 11, 11);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout13 = new QHBoxLayout();
        hboxLayout13->setSpacing(6);
        hboxLayout13->setContentsMargins(0, 0, 0, 0);
        hboxLayout13->setObjectName(QString::fromUtf8("hboxLayout13"));
        textLabel4_2 = new QLabel(tabHSV);
        textLabel4_2->setObjectName(QString::fromUtf8("textLabel4_2"));
        textLabel4_2->setWordWrap(false);

        hboxLayout13->addWidget(textLabel4_2);

        hSpin = new QSpinBox(tabHSV);
        hSpin->setObjectName(QString::fromUtf8("hSpin"));
        hSpin->setMaximum(359);

        hboxLayout13->addWidget(hSpin);


        vboxLayout1->addLayout(hboxLayout13);

        hboxLayout14 = new QHBoxLayout();
        hboxLayout14->setSpacing(6);
        hboxLayout14->setContentsMargins(0, 0, 0, 0);
        hboxLayout14->setObjectName(QString::fromUtf8("hboxLayout14"));
        textLabel5_2 = new QLabel(tabHSV);
        textLabel5_2->setObjectName(QString::fromUtf8("textLabel5_2"));
        textLabel5_2->setWordWrap(false);

        hboxLayout14->addWidget(textLabel5_2);

        sSpin = new QSpinBox(tabHSV);
        sSpin->setObjectName(QString::fromUtf8("sSpin"));
        sSpin->setMaximum(255);

        hboxLayout14->addWidget(sSpin);


        vboxLayout1->addLayout(hboxLayout14);

        hboxLayout15 = new QHBoxLayout();
        hboxLayout15->setSpacing(6);
        hboxLayout15->setContentsMargins(0, 0, 0, 0);
        hboxLayout15->setObjectName(QString::fromUtf8("hboxLayout15"));
        textLabel6_2 = new QLabel(tabHSV);
        textLabel6_2->setObjectName(QString::fromUtf8("textLabel6_2"));
        textLabel6_2->setWordWrap(false);

        hboxLayout15->addWidget(textLabel6_2);

        vSpin = new QSpinBox(tabHSV);
        vSpin->setObjectName(QString::fromUtf8("vSpin"));
        vSpin->setMaximum(255);

        hboxLayout15->addWidget(vSpin);


        vboxLayout1->addLayout(hboxLayout15);

        hboxLayout16 = new QHBoxLayout();
        hboxLayout16->setSpacing(6);
        hboxLayout16->setContentsMargins(0, 0, 0, 0);
        hboxLayout16->setObjectName(QString::fromUtf8("hboxLayout16"));
        textLabel1_2_3 = new QLabel(tabHSV);
        textLabel1_2_3->setObjectName(QString::fromUtf8("textLabel1_2_3"));
        textLabel1_2_3->setWordWrap(false);

        hboxLayout16->addWidget(textLabel1_2_3);

        rgbLabel2 = new QLabel(tabHSV);
        rgbLabel2->setObjectName(QString::fromUtf8("rgbLabel2"));
        rgbLabel2->setFrameShape(QFrame::Box);
        rgbLabel2->setFrameShadow(QFrame::Plain);
        rgbLabel2->setWordWrap(false);

        hboxLayout16->addWidget(rgbLabel2);


        vboxLayout1->addLayout(hboxLayout16);

        hboxLayout17 = new QHBoxLayout();
        hboxLayout17->setSpacing(6);
        hboxLayout17->setContentsMargins(0, 0, 0, 0);
        hboxLayout17->setObjectName(QString::fromUtf8("hboxLayout17"));
        textLabel1_2_2_3 = new QLabel(tabHSV);
        textLabel1_2_2_3->setObjectName(QString::fromUtf8("textLabel1_2_2_3"));
        textLabel1_2_2_3->setWordWrap(false);

        hboxLayout17->addWidget(textLabel1_2_2_3);

        cmykLabel2 = new QLabel(tabHSV);
        cmykLabel2->setObjectName(QString::fromUtf8("cmykLabel2"));
        cmykLabel2->setFrameShape(QFrame::Box);
        cmykLabel2->setFrameShadow(QFrame::Plain);
        cmykLabel2->setWordWrap(false);

        hboxLayout17->addWidget(cmykLabel2);


        vboxLayout1->addLayout(hboxLayout17);


        gridLayout6->addLayout(vboxLayout1, 0, 0, 1, 1);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout6->addItem(spacerItem3, 1, 0, 1, 1);

        colorspaceTab->addTab(tabHSV, QString());
        tabDocument = new QWidget();
        tabDocument->setObjectName(QString::fromUtf8("tabDocument"));
        gridLayout7 = new QGridLayout(tabDocument);
        gridLayout7->setSpacing(6);
        gridLayout7->setContentsMargins(11, 11, 11, 11);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        documentColorList = new ColorListBox(tabDocument);
        documentColorList->setObjectName(QString::fromUtf8("documentColorList"));

        gridLayout7->addWidget(documentColorList, 0, 0, 1, 1);

        colorspaceTab->addTab(tabDocument, QString());

        gridLayout->addWidget(colorspaceTab, 0, 1, 1, 1);


        retranslateUi(CWDialog);

        colorspaceTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CWDialog);
    } // setupUi

    void retranslateUi(QDialog *CWDialog)
    {
        CWDialog->setWindowTitle(QApplication::translate("CWDialog", "Color Wheel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        colorWheel->setToolTip(QApplication::translate("CWDialog", "Click the wheel to get the base color. Its color model depends on the chosen tab.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox3->setTitle(QApplication::translate("CWDialog", "Result Colors", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = currentColorTable->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CWDialog", "CMYK", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = currentColorTable->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CWDialog", "RGB", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = currentColorTable->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CWDialog", "HSV", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        colorList->setToolTip(QApplication::translate("CWDialog", "Colors of your chosen color scheme.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox3_2->setTitle(QApplication::translate("CWDialog", "Color Scheme Method", 0, QApplication::UnicodeUTF8));
        angleLabel->setText(QApplication::translate("CWDialog", "Angle:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        angleSpin->setToolTip(QApplication::translate("CWDialog", "Difference between the selected value and the counted ones. Refer to documentation for more information.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        typeCombo->setToolTip(QApplication::translate("CWDialog", "Select one of the methods to create a color scheme. Refer to documentation for more information.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("CWDialog", "Merge created colors into the document colors", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addButton->setText(QApplication::translate("CWDialog", "&Merge", 0, QApplication::UnicodeUTF8));
        addButton->setShortcut(QApplication::translate("CWDialog", "Alt+M", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        replaceButton->setToolTip(QApplication::translate("CWDialog", "Replace created colors in the document colors", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        replaceButton->setText(QApplication::translate("CWDialog", "&Replace", 0, QApplication::UnicodeUTF8));
        replaceButton->setShortcut(QApplication::translate("CWDialog", "Alt+R", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cancelButton->setToolTip(QApplication::translate("CWDialog", "Leave colors untouched", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cancelButton->setText(QApplication::translate("CWDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
        cancelButton->setShortcut(QApplication::translate("CWDialog", "Alt+C", 0, QApplication::UnicodeUTF8));
        groupBox2->setTitle(QApplication::translate("CWDialog", "Preview:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        previewLabel->setToolTip(QApplication::translate("CWDialog", "Sample color scheme.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        defectCombo->setToolTip(QApplication::translate("CWDialog", "Simulate common vision defects here. Select type of the defect.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        textLabel1->setText(QApplication::translate("CWDialog", "Vision Defect Type:", 0, QApplication::UnicodeUTF8));
        textLabel4->setText(QApplication::translate("CWDialog", "C:", 0, QApplication::UnicodeUTF8));
        cSpin->setSuffix(QApplication::translate("CWDialog", " %", 0, QApplication::UnicodeUTF8));
        textLabel5->setText(QApplication::translate("CWDialog", "M:", 0, QApplication::UnicodeUTF8));
        mSpin->setSuffix(QApplication::translate("CWDialog", " %", 0, QApplication::UnicodeUTF8));
        textLabel6->setText(QApplication::translate("CWDialog", "Y:", 0, QApplication::UnicodeUTF8));
        ySpin->setSuffix(QApplication::translate("CWDialog", " %", 0, QApplication::UnicodeUTF8));
        textLabel7->setText(QApplication::translate("CWDialog", "K:", 0, QApplication::UnicodeUTF8));
        kSpin->setSuffix(QApplication::translate("CWDialog", " %", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("CWDialog", "RGB:", 0, QApplication::UnicodeUTF8));
        rgbLabel->setText(QString());
        textLabel1_2_2->setText(QApplication::translate("CWDialog", "HSV:", 0, QApplication::UnicodeUTF8));
        hsvLabel->setText(QString());
        colorspaceTab->setTabText(colorspaceTab->indexOf(tabCMYK), QApplication::translate("CWDialog", "CMYK", 0, QApplication::UnicodeUTF8));
        textLabel8->setText(QApplication::translate("CWDialog", "R:", 0, QApplication::UnicodeUTF8));
        textLabel9->setText(QApplication::translate("CWDialog", "G:", 0, QApplication::UnicodeUTF8));
        textLabel10->setText(QApplication::translate("CWDialog", "B:", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("CWDialog", "CMYK:", 0, QApplication::UnicodeUTF8));
        cmykLabel->setText(QString());
        textLabel1_2_2_2->setText(QApplication::translate("CWDialog", "HSV:", 0, QApplication::UnicodeUTF8));
        hsvLabel2->setText(QString());
        colorspaceTab->setTabText(colorspaceTab->indexOf(tabRGB), QApplication::translate("CWDialog", "RGB", 0, QApplication::UnicodeUTF8));
        textLabel4_2->setText(QApplication::translate("CWDialog", "H:", 0, QApplication::UnicodeUTF8));
        textLabel5_2->setText(QApplication::translate("CWDialog", "S:", 0, QApplication::UnicodeUTF8));
        textLabel6_2->setText(QApplication::translate("CWDialog", "V:", 0, QApplication::UnicodeUTF8));
        textLabel1_2_3->setText(QApplication::translate("CWDialog", "RGB:", 0, QApplication::UnicodeUTF8));
        rgbLabel2->setText(QString());
        textLabel1_2_2_3->setText(QApplication::translate("CWDialog", "CMYK:", 0, QApplication::UnicodeUTF8));
        cmykLabel2->setText(QString());
        colorspaceTab->setTabText(colorspaceTab->indexOf(tabHSV), QApplication::translate("CWDialog", "HSV", 0, QApplication::UnicodeUTF8));
        colorspaceTab->setTabText(colorspaceTab->indexOf(tabDocument), QApplication::translate("CWDialog", "Document", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CWDialog: public Ui_CWDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CWDIALOG_H
