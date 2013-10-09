/*
Display/view prefs panel
*/

/********************************************************************************
** Form generated from reading UI file 'tabdisplay.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABDISPLAY_H
#define UI_TABDISPLAY_H

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
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_TabDisplay
{
public:
    QGridLayout *gridLayout;
    QTabWidget *displayTabWidget;
    QWidget *displayGeneral;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox3;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkPictures;
    QCheckBox *checkControl;
    QCheckBox *checkRuler;
    QCheckBox *checkLink;
    QCheckBox *checkFrame;
    QCheckBox *checkLayerM;
    QCheckBox *checkUnprintable;
    QCheckBox *checkBleed;
    QCheckBox *checkShowPageShadow;
    QGroupBox *groupBox4;
    QGridLayout *gridLayout2;
    ScrSpinBox *bottomScratch;
    QLabel *textLabel12_2;
    ScrSpinBox *topScratch;
    QLabel *textLabel12;
    ScrSpinBox *rightScratch;
    QLabel *textLabel12_4;
    ScrSpinBox *leftScratch;
    QLabel *textLabel12_3;
    QGroupBox *groupBox5;
    QGridLayout *gridLayout3;
    ScrSpinBox *gapVertical;
    QLabel *textLabel14;
    ScrSpinBox *gapHorizontal;
    QLabel *textLabel13;
    QGroupBox *CaliGroup;
    QGridLayout *gridLayout4;
    QLabel *CaliText;
    QHBoxLayout *hboxLayout;
    QSlider *CaliSlider;
    QLabel *CaliAnz;
    QToolButton *buttonRestoreDPI;
    QLabel *CaliRuler;
    QComboBox *rulerUnitCombo;
    QSpacerItem *spacerItem;
    QWidget *displayColors;
    QGridLayout *gridLayout5;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBox4_2;
    QGridLayout *gridLayout6;
    QHBoxLayout *hboxLayout1;
    QLabel *selectedPageBorderLabel;
    QPushButton *buttonSelectedPage;
    QSpacerItem *spacerItem2;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel11;
    QPushButton *backColor;
    QGroupBox *groupObjFrame;
    QGridLayout *gridLayout7;
    QGridLayout *gridLayout8;
    QLabel *textLabel3;
    QPushButton *buttonFrameGrouped;
    QLabel *textLabel8;
    QPushButton *buttonFrameAnnotation;
    QSpacerItem *spacerItem3;
    QGridLayout *gridLayout9;
    QPushButton *buttonFrameSelected;
    QPushButton *buttonFrameLinked;
    QLabel *textLabel2;
    QLabel *textLabel5;
    QSpacerItem *spacerItem4;
    QGridLayout *gridLayout10;
    QLabel *textLabel4;
    QPushButton *buttonFrameLocked;
    QPushButton *buttonFrameNormal;
    QLabel *textLabel1_2;
    QGroupBox *textColorGroup;
    QGridLayout *gridLayout11;
    QSpacerItem *spacerItem5;
    QPushButton *buttonControlChars;
    QLabel *textLabel7;

    void setupUi(QWidget *TabDisplay)
    {
        if (TabDisplay->objectName().isEmpty())
            TabDisplay->setObjectName(QString::fromUtf8("TabDisplay"));
        TabDisplay->resize(623, 505);
        gridLayout = new QGridLayout(TabDisplay);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        displayTabWidget = new QTabWidget(TabDisplay);
        displayTabWidget->setObjectName(QString::fromUtf8("displayTabWidget"));
        displayGeneral = new QWidget();
        displayGeneral->setObjectName(QString::fromUtf8("displayGeneral"));
        gridLayout1 = new QGridLayout(displayGeneral);
        gridLayout1->setSpacing(5);
        gridLayout1->setContentsMargins(10, 10, 10, 10);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        groupBox3 = new QGroupBox(displayGeneral);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        verticalLayout = new QVBoxLayout(groupBox3);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkPictures = new QCheckBox(groupBox3);
        checkPictures->setObjectName(QString::fromUtf8("checkPictures"));

        verticalLayout->addWidget(checkPictures);

        checkControl = new QCheckBox(groupBox3);
        checkControl->setObjectName(QString::fromUtf8("checkControl"));

        verticalLayout->addWidget(checkControl);

        checkRuler = new QCheckBox(groupBox3);
        checkRuler->setObjectName(QString::fromUtf8("checkRuler"));

        verticalLayout->addWidget(checkRuler);

        checkLink = new QCheckBox(groupBox3);
        checkLink->setObjectName(QString::fromUtf8("checkLink"));

        verticalLayout->addWidget(checkLink);

        checkFrame = new QCheckBox(groupBox3);
        checkFrame->setObjectName(QString::fromUtf8("checkFrame"));

        verticalLayout->addWidget(checkFrame);

        checkLayerM = new QCheckBox(groupBox3);
        checkLayerM->setObjectName(QString::fromUtf8("checkLayerM"));

        verticalLayout->addWidget(checkLayerM);

        checkUnprintable = new QCheckBox(groupBox3);
        checkUnprintable->setObjectName(QString::fromUtf8("checkUnprintable"));

        verticalLayout->addWidget(checkUnprintable);

        checkBleed = new QCheckBox(groupBox3);
        checkBleed->setObjectName(QString::fromUtf8("checkBleed"));

        verticalLayout->addWidget(checkBleed);

        checkShowPageShadow = new QCheckBox(groupBox3);
        checkShowPageShadow->setObjectName(QString::fromUtf8("checkShowPageShadow"));

        verticalLayout->addWidget(checkShowPageShadow);


        gridLayout1->addWidget(groupBox3, 0, 0, 2, 1);

        groupBox4 = new QGroupBox(displayGeneral);
        groupBox4->setObjectName(QString::fromUtf8("groupBox4"));
        gridLayout2 = new QGridLayout(groupBox4);
        gridLayout2->setSpacing(5);
        gridLayout2->setContentsMargins(10, 10, 10, 10);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        bottomScratch = new ScrSpinBox(groupBox4);
        bottomScratch->setObjectName(QString::fromUtf8("bottomScratch"));

        gridLayout2->addWidget(bottomScratch, 3, 1, 1, 1);

        textLabel12_2 = new QLabel(groupBox4);
        textLabel12_2->setObjectName(QString::fromUtf8("textLabel12_2"));
        textLabel12_2->setWordWrap(false);

        gridLayout2->addWidget(textLabel12_2, 3, 0, 1, 1);

        topScratch = new ScrSpinBox(groupBox4);
        topScratch->setObjectName(QString::fromUtf8("topScratch"));

        gridLayout2->addWidget(topScratch, 2, 1, 1, 1);

        textLabel12 = new QLabel(groupBox4);
        textLabel12->setObjectName(QString::fromUtf8("textLabel12"));
        textLabel12->setWordWrap(false);

        gridLayout2->addWidget(textLabel12, 2, 0, 1, 1);

        rightScratch = new ScrSpinBox(groupBox4);
        rightScratch->setObjectName(QString::fromUtf8("rightScratch"));

        gridLayout2->addWidget(rightScratch, 1, 1, 1, 1);

        textLabel12_4 = new QLabel(groupBox4);
        textLabel12_4->setObjectName(QString::fromUtf8("textLabel12_4"));
        textLabel12_4->setWordWrap(false);

        gridLayout2->addWidget(textLabel12_4, 1, 0, 1, 1);

        leftScratch = new ScrSpinBox(groupBox4);
        leftScratch->setObjectName(QString::fromUtf8("leftScratch"));
        leftScratch->setMinimumSize(QSize(0, 0));

        gridLayout2->addWidget(leftScratch, 0, 1, 1, 1);

        textLabel12_3 = new QLabel(groupBox4);
        textLabel12_3->setObjectName(QString::fromUtf8("textLabel12_3"));
        textLabel12_3->setWordWrap(false);

        gridLayout2->addWidget(textLabel12_3, 0, 0, 1, 1);


        gridLayout1->addWidget(groupBox4, 0, 1, 1, 1);

        groupBox5 = new QGroupBox(displayGeneral);
        groupBox5->setObjectName(QString::fromUtf8("groupBox5"));
        gridLayout3 = new QGridLayout(groupBox5);
        gridLayout3->setSpacing(5);
        gridLayout3->setContentsMargins(10, 10, 10, 10);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gapVertical = new ScrSpinBox(groupBox5);
        gapVertical->setObjectName(QString::fromUtf8("gapVertical"));

        gridLayout3->addWidget(gapVertical, 1, 1, 1, 1);

        textLabel14 = new QLabel(groupBox5);
        textLabel14->setObjectName(QString::fromUtf8("textLabel14"));
        textLabel14->setWordWrap(false);

        gridLayout3->addWidget(textLabel14, 1, 0, 1, 1);

        gapHorizontal = new ScrSpinBox(groupBox5);
        gapHorizontal->setObjectName(QString::fromUtf8("gapHorizontal"));

        gridLayout3->addWidget(gapHorizontal, 0, 1, 1, 1);

        textLabel13 = new QLabel(groupBox5);
        textLabel13->setObjectName(QString::fromUtf8("textLabel13"));
        textLabel13->setWordWrap(false);

        gridLayout3->addWidget(textLabel13, 0, 0, 1, 1);


        gridLayout1->addWidget(groupBox5, 1, 1, 1, 1);

        CaliGroup = new QGroupBox(displayGeneral);
        CaliGroup->setObjectName(QString::fromUtf8("CaliGroup"));
        gridLayout4 = new QGridLayout(CaliGroup);
        gridLayout4->setSpacing(5);
        gridLayout4->setContentsMargins(10, 10, 10, 10);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        CaliText = new QLabel(CaliGroup);
        CaliText->setObjectName(QString::fromUtf8("CaliText"));
        CaliText->setWordWrap(false);

        gridLayout4->addWidget(CaliText, 0, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        CaliSlider = new QSlider(CaliGroup);
        CaliSlider->setObjectName(QString::fromUtf8("CaliSlider"));
        CaliSlider->setMinimum(-150);
        CaliSlider->setMaximum(150);
        CaliSlider->setOrientation(Qt::Horizontal);
        CaliSlider->setTickInterval(10);

        hboxLayout->addWidget(CaliSlider);

        CaliAnz = new QLabel(CaliGroup);
        CaliAnz->setObjectName(QString::fromUtf8("CaliAnz"));
        CaliAnz->setWordWrap(false);

        hboxLayout->addWidget(CaliAnz);


        gridLayout4->addLayout(hboxLayout, 1, 0, 1, 1);

        buttonRestoreDPI = new QToolButton(CaliGroup);
        buttonRestoreDPI->setObjectName(QString::fromUtf8("buttonRestoreDPI"));

        gridLayout4->addWidget(buttonRestoreDPI, 1, 1, 1, 1);

        CaliRuler = new QLabel(CaliGroup);
        CaliRuler->setObjectName(QString::fromUtf8("CaliRuler"));
        CaliRuler->setMinimumSize(QSize(20, 20));
        CaliRuler->setFrameShape(QFrame::Box);
        CaliRuler->setFrameShadow(QFrame::Sunken);
        CaliRuler->setWordWrap(false);

        gridLayout4->addWidget(CaliRuler, 2, 0, 1, 1);

        rulerUnitCombo = new QComboBox(CaliGroup);
        rulerUnitCombo->setObjectName(QString::fromUtf8("rulerUnitCombo"));

        gridLayout4->addWidget(rulerUnitCombo, 2, 1, 1, 1);


        gridLayout1->addWidget(CaliGroup, 2, 0, 1, 2);

        spacerItem = new QSpacerItem(581, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 3, 0, 1, 2);

        displayTabWidget->addTab(displayGeneral, QString());
        displayColors = new QWidget();
        displayColors->setObjectName(QString::fromUtf8("displayColors"));
        gridLayout5 = new QGridLayout(displayColors);
        gridLayout5->setSpacing(5);
        gridLayout5->setContentsMargins(10, 10, 10, 10);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        spacerItem1 = new QSpacerItem(41, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout5->addItem(spacerItem1, 3, 0, 1, 1);

        groupBox4_2 = new QGroupBox(displayColors);
        groupBox4_2->setObjectName(QString::fromUtf8("groupBox4_2"));
        gridLayout6 = new QGridLayout(groupBox4_2);
        gridLayout6->setSpacing(5);
        gridLayout6->setContentsMargins(10, 10, 10, 10);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        selectedPageBorderLabel = new QLabel(groupBox4_2);
        selectedPageBorderLabel->setObjectName(QString::fromUtf8("selectedPageBorderLabel"));
        selectedPageBorderLabel->setWordWrap(false);

        hboxLayout1->addWidget(selectedPageBorderLabel);

        buttonSelectedPage = new QPushButton(groupBox4_2);
        buttonSelectedPage->setObjectName(QString::fromUtf8("buttonSelectedPage"));
        buttonSelectedPage->setMinimumSize(QSize(60, 20));
        buttonSelectedPage->setMaximumSize(QSize(60, 20));

        hboxLayout1->addWidget(buttonSelectedPage);


        gridLayout6->addLayout(hboxLayout1, 0, 2, 1, 1);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout6->addItem(spacerItem2, 0, 1, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(5);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        textLabel11 = new QLabel(groupBox4_2);
        textLabel11->setObjectName(QString::fromUtf8("textLabel11"));
        textLabel11->setWordWrap(false);

        hboxLayout2->addWidget(textLabel11);

        backColor = new QPushButton(groupBox4_2);
        backColor->setObjectName(QString::fromUtf8("backColor"));
        backColor->setMinimumSize(QSize(60, 20));
        backColor->setMaximumSize(QSize(60, 20));

        hboxLayout2->addWidget(backColor);


        gridLayout6->addLayout(hboxLayout2, 0, 0, 1, 1);


        gridLayout5->addWidget(groupBox4_2, 0, 0, 1, 1);

        groupObjFrame = new QGroupBox(displayColors);
        groupObjFrame->setObjectName(QString::fromUtf8("groupObjFrame"));
        gridLayout7 = new QGridLayout(groupObjFrame);
        gridLayout7->setSpacing(5);
        gridLayout7->setContentsMargins(10, 10, 10, 10);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        gridLayout8 = new QGridLayout();
        gridLayout8->setSpacing(5);
        gridLayout8->setContentsMargins(0, 0, 0, 0);
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        textLabel3 = new QLabel(groupObjFrame);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(false);

        gridLayout8->addWidget(textLabel3, 0, 0, 1, 1);

        buttonFrameGrouped = new QPushButton(groupObjFrame);
        buttonFrameGrouped->setObjectName(QString::fromUtf8("buttonFrameGrouped"));
        buttonFrameGrouped->setMinimumSize(QSize(60, 20));
        buttonFrameGrouped->setMaximumSize(QSize(60, 20));

        gridLayout8->addWidget(buttonFrameGrouped, 0, 1, 1, 1);

        textLabel8 = new QLabel(groupObjFrame);
        textLabel8->setObjectName(QString::fromUtf8("textLabel8"));
        textLabel8->setWordWrap(false);

        gridLayout8->addWidget(textLabel8, 1, 0, 1, 1);

        buttonFrameAnnotation = new QPushButton(groupObjFrame);
        buttonFrameAnnotation->setObjectName(QString::fromUtf8("buttonFrameAnnotation"));
        buttonFrameAnnotation->setMinimumSize(QSize(60, 20));
        buttonFrameAnnotation->setMaximumSize(QSize(60, 20));

        gridLayout8->addWidget(buttonFrameAnnotation, 1, 1, 1, 1);


        gridLayout7->addLayout(gridLayout8, 0, 4, 1, 1);

        spacerItem3 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout7->addItem(spacerItem3, 0, 3, 1, 1);

        gridLayout9 = new QGridLayout();
        gridLayout9->setSpacing(5);
        gridLayout9->setContentsMargins(0, 0, 0, 0);
        gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
        buttonFrameSelected = new QPushButton(groupObjFrame);
        buttonFrameSelected->setObjectName(QString::fromUtf8("buttonFrameSelected"));
        buttonFrameSelected->setMinimumSize(QSize(60, 20));
        buttonFrameSelected->setMaximumSize(QSize(60, 20));

        gridLayout9->addWidget(buttonFrameSelected, 0, 1, 1, 1);

        buttonFrameLinked = new QPushButton(groupObjFrame);
        buttonFrameLinked->setObjectName(QString::fromUtf8("buttonFrameLinked"));
        buttonFrameLinked->setMinimumSize(QSize(60, 20));
        buttonFrameLinked->setMaximumSize(QSize(60, 20));

        gridLayout9->addWidget(buttonFrameLinked, 1, 1, 1, 1);

        textLabel2 = new QLabel(groupObjFrame);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        gridLayout9->addWidget(textLabel2, 0, 0, 1, 1);

        textLabel5 = new QLabel(groupObjFrame);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
        textLabel5->setWordWrap(false);

        gridLayout9->addWidget(textLabel5, 1, 0, 1, 1);


        gridLayout7->addLayout(gridLayout9, 0, 2, 1, 1);

        spacerItem4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout7->addItem(spacerItem4, 0, 1, 1, 1);

        gridLayout10 = new QGridLayout();
        gridLayout10->setSpacing(5);
        gridLayout10->setContentsMargins(0, 0, 0, 0);
        gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
        textLabel4 = new QLabel(groupObjFrame);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
        textLabel4->setWordWrap(false);

        gridLayout10->addWidget(textLabel4, 1, 0, 1, 1);

        buttonFrameLocked = new QPushButton(groupObjFrame);
        buttonFrameLocked->setObjectName(QString::fromUtf8("buttonFrameLocked"));
        buttonFrameLocked->setMinimumSize(QSize(60, 20));
        buttonFrameLocked->setMaximumSize(QSize(60, 20));

        gridLayout10->addWidget(buttonFrameLocked, 1, 1, 1, 1);

        buttonFrameNormal = new QPushButton(groupObjFrame);
        buttonFrameNormal->setObjectName(QString::fromUtf8("buttonFrameNormal"));
        buttonFrameNormal->setMinimumSize(QSize(60, 20));
        buttonFrameNormal->setMaximumSize(QSize(60, 20));

        gridLayout10->addWidget(buttonFrameNormal, 0, 1, 1, 1);

        textLabel1_2 = new QLabel(groupObjFrame);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setWordWrap(false);

        gridLayout10->addWidget(textLabel1_2, 0, 0, 1, 1);


        gridLayout7->addLayout(gridLayout10, 0, 0, 1, 1);


        gridLayout5->addWidget(groupObjFrame, 1, 0, 1, 1);

        textColorGroup = new QGroupBox(displayColors);
        textColorGroup->setObjectName(QString::fromUtf8("textColorGroup"));
        gridLayout11 = new QGridLayout(textColorGroup);
        gridLayout11->setSpacing(5);
        gridLayout11->setContentsMargins(10, 10, 10, 10);
        gridLayout11->setObjectName(QString::fromUtf8("gridLayout11"));
        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout11->addItem(spacerItem5, 0, 2, 1, 1);

        buttonControlChars = new QPushButton(textColorGroup);
        buttonControlChars->setObjectName(QString::fromUtf8("buttonControlChars"));
        buttonControlChars->setMinimumSize(QSize(60, 20));
        buttonControlChars->setMaximumSize(QSize(60, 20));

        gridLayout11->addWidget(buttonControlChars, 0, 1, 1, 1);

        textLabel7 = new QLabel(textColorGroup);
        textLabel7->setObjectName(QString::fromUtf8("textLabel7"));
        textLabel7->setWordWrap(false);

        gridLayout11->addWidget(textLabel7, 0, 0, 1, 1);


        gridLayout5->addWidget(textColorGroup, 2, 0, 1, 1);

        displayTabWidget->addTab(displayColors, QString());

        gridLayout->addWidget(displayTabWidget, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabel12_2->setBuddy(bottomScratch);
        textLabel12->setBuddy(topScratch);
        textLabel12_4->setBuddy(rightScratch);
        textLabel12_3->setBuddy(leftScratch);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(displayTabWidget, checkPictures);
        QWidget::setTabOrder(checkPictures, checkControl);
        QWidget::setTabOrder(checkControl, checkRuler);
        QWidget::setTabOrder(checkRuler, checkLink);
        QWidget::setTabOrder(checkLink, checkFrame);
        QWidget::setTabOrder(checkFrame, checkLayerM);
        QWidget::setTabOrder(checkLayerM, checkUnprintable);
        QWidget::setTabOrder(checkUnprintable, checkBleed);
        QWidget::setTabOrder(checkBleed, checkShowPageShadow);
        QWidget::setTabOrder(checkShowPageShadow, leftScratch);
        QWidget::setTabOrder(leftScratch, rightScratch);
        QWidget::setTabOrder(rightScratch, topScratch);
        QWidget::setTabOrder(topScratch, bottomScratch);
        QWidget::setTabOrder(bottomScratch, gapHorizontal);
        QWidget::setTabOrder(gapHorizontal, gapVertical);
        QWidget::setTabOrder(gapVertical, CaliSlider);
        QWidget::setTabOrder(CaliSlider, buttonRestoreDPI);
        QWidget::setTabOrder(buttonRestoreDPI, rulerUnitCombo);
        QWidget::setTabOrder(rulerUnitCombo, backColor);
        QWidget::setTabOrder(backColor, buttonSelectedPage);
        QWidget::setTabOrder(buttonSelectedPage, buttonFrameNormal);
        QWidget::setTabOrder(buttonFrameNormal, buttonFrameSelected);
        QWidget::setTabOrder(buttonFrameSelected, buttonFrameGrouped);
        QWidget::setTabOrder(buttonFrameGrouped, buttonFrameLocked);
        QWidget::setTabOrder(buttonFrameLocked, buttonFrameLinked);
        QWidget::setTabOrder(buttonFrameLinked, buttonFrameAnnotation);
        QWidget::setTabOrder(buttonFrameAnnotation, buttonControlChars);

        retranslateUi(TabDisplay);

        displayTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TabDisplay);
    } // setupUi

    void retranslateUi(QWidget *TabDisplay)
    {
        TabDisplay->setWindowTitle(QApplication::translate("TabDisplay", "TabDisplayBase", 0, QApplication::UnicodeUTF8));
        groupBox3->setTitle(QApplication::translate("TabDisplay", "Page Display", 0, QApplication::UnicodeUTF8));
        checkPictures->setText(QApplication::translate("TabDisplay", "Show Images", 0, QApplication::UnicodeUTF8));
        checkControl->setText(QApplication::translate("TabDisplay", "Show Text Control Characters", 0, QApplication::UnicodeUTF8));
        checkRuler->setText(QApplication::translate("TabDisplay", "Rulers Relative to Page", 0, QApplication::UnicodeUTF8));
        checkLink->setText(QApplication::translate("TabDisplay", "Show Text Chains", 0, QApplication::UnicodeUTF8));
        checkLink->setShortcut(QString());
        checkFrame->setText(QApplication::translate("TabDisplay", "Show Frames", 0, QApplication::UnicodeUTF8));
        checkFrame->setShortcut(QString());
        checkLayerM->setText(QApplication::translate("TabDisplay", "Show Layer Indicators", 0, QApplication::UnicodeUTF8));
        checkLayerM->setShortcut(QString());
        checkUnprintable->setText(QApplication::translate("TabDisplay", "Display &Unprintable Area in Margin Color", 0, QApplication::UnicodeUTF8));
        checkUnprintable->setShortcut(QApplication::translate("TabDisplay", "Alt+U", 0, QApplication::UnicodeUTF8));
        checkBleed->setText(QApplication::translate("TabDisplay", "Show Bleed Area", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkShowPageShadow->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        checkShowPageShadow->setText(QApplication::translate("TabDisplay", "Show Page Shadow", 0, QApplication::UnicodeUTF8));
        groupBox4->setTitle(QApplication::translate("TabDisplay", "Scratch Space", 0, QApplication::UnicodeUTF8));
        textLabel12_2->setText(QApplication::translate("TabDisplay", "&Bottom:", 0, QApplication::UnicodeUTF8));
        textLabel12->setText(QApplication::translate("TabDisplay", "&Top:", 0, QApplication::UnicodeUTF8));
        textLabel12_4->setText(QApplication::translate("TabDisplay", "&Right:", 0, QApplication::UnicodeUTF8));
        textLabel12_3->setText(QApplication::translate("TabDisplay", "&Left:", 0, QApplication::UnicodeUTF8));
        groupBox5->setTitle(QApplication::translate("TabDisplay", "Gaps Between Pages", 0, QApplication::UnicodeUTF8));
        textLabel14->setText(QApplication::translate("TabDisplay", "Vertical:", 0, QApplication::UnicodeUTF8));
        textLabel13->setText(QApplication::translate("TabDisplay", "Horizontal:", 0, QApplication::UnicodeUTF8));
        CaliGroup->setTitle(QApplication::translate("TabDisplay", "Adjust Display Size", 0, QApplication::UnicodeUTF8));
        CaliText->setText(QApplication::translate("TabDisplay", "To adjust the display drag the ruler below with the slider.", 0, QApplication::UnicodeUTF8));
        CaliAnz->setText(QApplication::translate("TabDisplay", "Scale%", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonRestoreDPI->setToolTip(QApplication::translate("TabDisplay", "Resets the scale to the default dpi of your display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonRestoreDPI->setText(QString());
        displayTabWidget->setTabText(displayTabWidget->indexOf(displayGeneral), QApplication::translate("TabDisplay", "General", 0, QApplication::UnicodeUTF8));
        groupBox4_2->setTitle(QApplication::translate("TabDisplay", "Pages:", 0, QApplication::UnicodeUTF8));
        selectedPageBorderLabel->setText(QApplication::translate("TabDisplay", "Selected Page Border:", 0, QApplication::UnicodeUTF8));
        buttonSelectedPage->setText(QString());
        textLabel11->setText(QApplication::translate("TabDisplay", "Fill Color:", 0, QApplication::UnicodeUTF8));
        backColor->setText(QString());
        groupObjFrame->setTitle(QApplication::translate("TabDisplay", "Frames", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("TabDisplay", "Grouped:", 0, QApplication::UnicodeUTF8));
        buttonFrameGrouped->setText(QString());
        textLabel8->setText(QApplication::translate("TabDisplay", "Annotation:", 0, QApplication::UnicodeUTF8));
        buttonFrameAnnotation->setText(QString());
        buttonFrameSelected->setText(QString());
        buttonFrameLinked->setText(QString());
        textLabel2->setText(QApplication::translate("TabDisplay", "Selected:", 0, QApplication::UnicodeUTF8));
        textLabel5->setText(QApplication::translate("TabDisplay", "Linked:", 0, QApplication::UnicodeUTF8));
        textLabel4->setText(QApplication::translate("TabDisplay", "Locked:", 0, QApplication::UnicodeUTF8));
        buttonFrameLocked->setText(QString());
        buttonFrameNormal->setText(QString());
        textLabel1_2->setText(QApplication::translate("TabDisplay", "Normal:", 0, QApplication::UnicodeUTF8));
        textColorGroup->setTitle(QApplication::translate("TabDisplay", "Text:", 0, QApplication::UnicodeUTF8));
        buttonControlChars->setText(QString());
        textLabel7->setText(QApplication::translate("TabDisplay", "Control Characters:", 0, QApplication::UnicodeUTF8));
        displayTabWidget->setTabText(displayTabWidget->indexOf(displayColors), QApplication::translate("TabDisplay", "Colors", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TabDisplay: public Ui_TabDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABDISPLAY_H
