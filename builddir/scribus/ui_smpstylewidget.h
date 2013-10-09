/********************************************************************************
** Form generated from reading UI file 'smpstylewidget.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMPSTYLEWIDGET_H
#define UI_SMPSTYLEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "smalignselect.h"
#include "smcstylewidget.h"
#include "smradiobutton.h"
#include "smsccombobox.h"
#include "smscrspinbox.h"
#include "smspinbox.h"
#include "smtabruler.h"

QT_BEGIN_NAMESPACE

class Ui_SMPStyleWidget
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *hboxLayout;
    QLabel *parentLabel;
    QComboBox *parentCombo;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *distancesBox;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout1;
    QLabel *lineSpacingLabel;
    SMScComboBox *lineSpacingMode_;
    SMScrSpinBox *lineSpacing_;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout2;
    QLabel *spaceAboveLabel;
    SMScrSpinBox *spaceAbove_;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout3;
    QLabel *spaceBelowLabel;
    SMScrSpinBox *spaceBelow_;
    QSpacerItem *spacerItem2;
    QHBoxLayout *hboxLayout4;
    SMAlignSelect *alignement_;
    QSpacerItem *spacerItem3;
    QGroupBox *dropCapsBox;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout5;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout6;
    QLabel *dropCapsLineLabel;
    SMSpinBox *dropCapLines_;
    QHBoxLayout *hboxLayout7;
    QLabel *distFromTextLabel;
    SMScrSpinBox *dropCapOffset_;
    QSpacerItem *spacerItem4;
    QToolButton *parentDropCapButton;
    QSpacerItem *spacerItem5;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *opticalMarginsGroupBox;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *optMarginDefaultButton;
    QPushButton *optMarginParentButton;
    SMRadioButton *optMarginRadioNone;
    SMRadioButton *optMarginRadioBoth;
    SMRadioButton *optMarginRadioLeft;
    SMRadioButton *optMarginRadioRight;
    QGroupBox *advSettingsGroupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *minSpaceLabel;
    SMScrSpinBox *minSpaceSpin;
    QSpacerItem *horizontalSpacer;
    QLabel *glyphExtensionLabel;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *minGlyphExtLabel;
    SMScrSpinBox *minGlyphExtSpin;
    QHBoxLayout *horizontalLayout_3;
    QLabel *maxGlyphExtLabel;
    SMScrSpinBox *maxGlyphExtSpin;
    QSpacerItem *spacerItem6;
    QGroupBox *tabsBox;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout8;
    SMTabruler *tabList_;
    QSpacerItem *spacerItem7;
    QSpacerItem *verticalSpacer;
    QWidget *TabPage;
    QVBoxLayout *vboxLayout5;
    QFrame *characterBox;
    QGridLayout *gridLayout1;
    SMCStyleWidget *cpage;

    void setupUi(QWidget *SMPStyleWidget)
    {
        if (SMPStyleWidget->objectName().isEmpty())
            SMPStyleWidget->setObjectName(QString::fromUtf8("SMPStyleWidget"));
        SMPStyleWidget->resize(714, 547);
        vboxLayout = new QVBoxLayout(SMPStyleWidget);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(5, 5, 5, 5);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(SMPStyleWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setContentsMargins(5, 5, 5, 5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        parentLabel = new QLabel(tab);
        parentLabel->setObjectName(QString::fromUtf8("parentLabel"));
        parentLabel->setWordWrap(false);

        hboxLayout->addWidget(parentLabel);

        parentCombo = new QComboBox(tab);
        parentCombo->setObjectName(QString::fromUtf8("parentCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(parentCombo->sizePolicy().hasHeightForWidth());
        parentCombo->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(parentCombo);


        verticalLayout_4->addLayout(hboxLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        distancesBox = new QGroupBox(tab);
        distancesBox->setObjectName(QString::fromUtf8("distancesBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(distancesBox->sizePolicy().hasHeightForWidth());
        distancesBox->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        distancesBox->setFont(font);
        vboxLayout1 = new QVBoxLayout(distancesBox);
        vboxLayout1->setSpacing(5);
        vboxLayout1->setContentsMargins(5, 5, 5, 5);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        lineSpacingLabel = new QLabel(distancesBox);
        lineSpacingLabel->setObjectName(QString::fromUtf8("lineSpacingLabel"));
        lineSpacingLabel->setMaximumSize(QSize(22, 22));

        hboxLayout1->addWidget(lineSpacingLabel);

        lineSpacingMode_ = new SMScComboBox(distancesBox);
        lineSpacingMode_->setObjectName(QString::fromUtf8("lineSpacingMode_"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineSpacingMode_->sizePolicy().hasHeightForWidth());
        lineSpacingMode_->setSizePolicy(sizePolicy2);

        hboxLayout1->addWidget(lineSpacingMode_);

        lineSpacing_ = new SMScrSpinBox(distancesBox);
        lineSpacing_->setObjectName(QString::fromUtf8("lineSpacing_"));
        lineSpacing_->setMinimum(1);
        lineSpacing_->setMaximum(300);

        hboxLayout1->addWidget(lineSpacing_);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(5);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spaceAboveLabel = new QLabel(distancesBox);
        spaceAboveLabel->setObjectName(QString::fromUtf8("spaceAboveLabel"));
        spaceAboveLabel->setMaximumSize(QSize(22, 22));

        hboxLayout2->addWidget(spaceAboveLabel);

        spaceAbove_ = new SMScrSpinBox(distancesBox);
        spaceAbove_->setObjectName(QString::fromUtf8("spaceAbove_"));
        spaceAbove_->setMaximum(300);

        hboxLayout2->addWidget(spaceAbove_);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);


        vboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(5);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spaceBelowLabel = new QLabel(distancesBox);
        spaceBelowLabel->setObjectName(QString::fromUtf8("spaceBelowLabel"));
        spaceBelowLabel->setMaximumSize(QSize(22, 22));

        hboxLayout3->addWidget(spaceBelowLabel);

        spaceBelow_ = new SMScrSpinBox(distancesBox);
        spaceBelow_->setObjectName(QString::fromUtf8("spaceBelow_"));
        spaceBelow_->setMaximum(300);

        hboxLayout3->addWidget(spaceBelow_);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem2);


        vboxLayout1->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(5);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        alignement_ = new SMAlignSelect(distancesBox);
        alignement_->setObjectName(QString::fromUtf8("alignement_"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(alignement_->sizePolicy().hasHeightForWidth());
        alignement_->setSizePolicy(sizePolicy3);

        hboxLayout4->addWidget(alignement_);

        spacerItem3 = new QSpacerItem(211, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem3);


        vboxLayout1->addLayout(hboxLayout4);


        verticalLayout_2->addWidget(distancesBox);

        dropCapsBox = new QGroupBox(tab);
        dropCapsBox->setObjectName(QString::fromUtf8("dropCapsBox"));
        sizePolicy1.setHeightForWidth(dropCapsBox->sizePolicy().hasHeightForWidth());
        dropCapsBox->setSizePolicy(sizePolicy1);
        dropCapsBox->setCheckable(true);
        dropCapsBox->setChecked(true);
        vboxLayout2 = new QVBoxLayout(dropCapsBox);
        vboxLayout2->setSpacing(5);
        vboxLayout2->setContentsMargins(5, 5, 5, 5);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(5);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(5);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(5);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        dropCapsLineLabel = new QLabel(dropCapsBox);
        dropCapsLineLabel->setObjectName(QString::fromUtf8("dropCapsLineLabel"));

        hboxLayout6->addWidget(dropCapsLineLabel);

        dropCapLines_ = new SMSpinBox(dropCapsBox);
        dropCapLines_->setObjectName(QString::fromUtf8("dropCapLines_"));
        dropCapLines_->setMinimum(2);
        dropCapLines_->setMaximum(20);

        hboxLayout6->addWidget(dropCapLines_);


        vboxLayout3->addLayout(hboxLayout6);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setSpacing(5);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        distFromTextLabel = new QLabel(dropCapsBox);
        distFromTextLabel->setObjectName(QString::fromUtf8("distFromTextLabel"));

        hboxLayout7->addWidget(distFromTextLabel);

        dropCapOffset_ = new SMScrSpinBox(dropCapsBox);
        dropCapOffset_->setObjectName(QString::fromUtf8("dropCapOffset_"));
        dropCapOffset_->setMinimum(-3000);
        dropCapOffset_->setMaximum(3000);

        hboxLayout7->addWidget(dropCapOffset_);


        vboxLayout3->addLayout(hboxLayout7);


        hboxLayout5->addLayout(vboxLayout3);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem4);


        vboxLayout2->addLayout(hboxLayout5);


        verticalLayout_2->addWidget(dropCapsBox);

        parentDropCapButton = new QToolButton(tab);
        parentDropCapButton->setObjectName(QString::fromUtf8("parentDropCapButton"));
        parentDropCapButton->setEnabled(true);

        verticalLayout_2->addWidget(parentDropCapButton);

        spacerItem5 = new QSpacerItem(272, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(spacerItem5);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        opticalMarginsGroupBox = new QGroupBox(tab);
        opticalMarginsGroupBox->setObjectName(QString::fromUtf8("opticalMarginsGroupBox"));
        opticalMarginsGroupBox->setFont(font);
        formLayout = new QFormLayout(opticalMarginsGroupBox);
        formLayout->setSpacing(5);
        formLayout->setContentsMargins(5, 5, 5, 5);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        optMarginDefaultButton = new QPushButton(opticalMarginsGroupBox);
        optMarginDefaultButton->setObjectName(QString::fromUtf8("optMarginDefaultButton"));

        horizontalLayout_4->addWidget(optMarginDefaultButton);

        optMarginParentButton = new QPushButton(opticalMarginsGroupBox);
        optMarginParentButton->setObjectName(QString::fromUtf8("optMarginParentButton"));

        horizontalLayout_4->addWidget(optMarginParentButton);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_4);

        optMarginRadioNone = new SMRadioButton(opticalMarginsGroupBox);
        optMarginRadioNone->setObjectName(QString::fromUtf8("optMarginRadioNone"));
        optMarginRadioNone->setChecked(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, optMarginRadioNone);

        optMarginRadioBoth = new SMRadioButton(opticalMarginsGroupBox);
        optMarginRadioBoth->setObjectName(QString::fromUtf8("optMarginRadioBoth"));

        formLayout->setWidget(1, QFormLayout::FieldRole, optMarginRadioBoth);

        optMarginRadioLeft = new SMRadioButton(opticalMarginsGroupBox);
        optMarginRadioLeft->setObjectName(QString::fromUtf8("optMarginRadioLeft"));

        formLayout->setWidget(2, QFormLayout::FieldRole, optMarginRadioLeft);

        optMarginRadioRight = new SMRadioButton(opticalMarginsGroupBox);
        optMarginRadioRight->setObjectName(QString::fromUtf8("optMarginRadioRight"));

        formLayout->setWidget(3, QFormLayout::FieldRole, optMarginRadioRight);


        verticalLayout_3->addWidget(opticalMarginsGroupBox);

        advSettingsGroupBox = new QGroupBox(tab);
        advSettingsGroupBox->setObjectName(QString::fromUtf8("advSettingsGroupBox"));
        advSettingsGroupBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(advSettingsGroupBox->sizePolicy().hasHeightForWidth());
        advSettingsGroupBox->setSizePolicy(sizePolicy1);
        advSettingsGroupBox->setMinimumSize(QSize(0, 163));
        gridLayout = new QGridLayout(advSettingsGroupBox);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        minSpaceLabel = new QLabel(advSettingsGroupBox);
        minSpaceLabel->setObjectName(QString::fromUtf8("minSpaceLabel"));

        horizontalLayout->addWidget(minSpaceLabel);

        minSpaceSpin = new SMScrSpinBox(advSettingsGroupBox);
        minSpaceSpin->setObjectName(QString::fromUtf8("minSpaceSpin"));
        minSpaceSpin->setMinimumSize(QSize(0, 32));
        minSpaceSpin->setBaseSize(QSize(0, 0));

        horizontalLayout->addWidget(minSpaceSpin);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        glyphExtensionLabel = new QLabel(advSettingsGroupBox);
        glyphExtensionLabel->setObjectName(QString::fromUtf8("glyphExtensionLabel"));

        gridLayout->addWidget(glyphExtensionLabel, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        minGlyphExtLabel = new QLabel(advSettingsGroupBox);
        minGlyphExtLabel->setObjectName(QString::fromUtf8("minGlyphExtLabel"));

        horizontalLayout_2->addWidget(minGlyphExtLabel);

        minGlyphExtSpin = new SMScrSpinBox(advSettingsGroupBox);
        minGlyphExtSpin->setObjectName(QString::fromUtf8("minGlyphExtSpin"));
        minGlyphExtSpin->setMinimumSize(QSize(0, 32));

        horizontalLayout_2->addWidget(minGlyphExtSpin);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        maxGlyphExtLabel = new QLabel(advSettingsGroupBox);
        maxGlyphExtLabel->setObjectName(QString::fromUtf8("maxGlyphExtLabel"));

        horizontalLayout_3->addWidget(maxGlyphExtLabel);

        maxGlyphExtSpin = new SMScrSpinBox(advSettingsGroupBox);
        maxGlyphExtSpin->setObjectName(QString::fromUtf8("maxGlyphExtSpin"));
        maxGlyphExtSpin->setMinimumSize(QSize(0, 32));

        horizontalLayout_3->addWidget(maxGlyphExtSpin);


        horizontalLayout_6->addLayout(horizontalLayout_3);


        gridLayout->addLayout(horizontalLayout_6, 2, 0, 1, 1);


        verticalLayout_3->addWidget(advSettingsGroupBox);

        spacerItem6 = new QSpacerItem(270, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(spacerItem6);


        horizontalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_5);

        tabsBox = new QGroupBox(tab);
        tabsBox->setObjectName(QString::fromUtf8("tabsBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tabsBox->sizePolicy().hasHeightForWidth());
        tabsBox->setSizePolicy(sizePolicy4);
        vboxLayout4 = new QVBoxLayout(tabsBox);
        vboxLayout4->setSpacing(5);
        vboxLayout4->setContentsMargins(5, 5, 5, 5);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setSpacing(5);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        tabList_ = new SMTabruler(tabsBox);
        tabList_->setObjectName(QString::fromUtf8("tabList_"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(tabList_->sizePolicy().hasHeightForWidth());
        tabList_->setSizePolicy(sizePolicy5);

        hboxLayout8->addWidget(tabList_);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem7);


        vboxLayout4->addLayout(hboxLayout8);


        verticalLayout_4->addWidget(tabsBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        TabPage = new QWidget();
        TabPage->setObjectName(QString::fromUtf8("TabPage"));
        vboxLayout5 = new QVBoxLayout(TabPage);
        vboxLayout5->setSpacing(5);
        vboxLayout5->setContentsMargins(0, 0, 0, 0);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        characterBox = new QFrame(TabPage);
        characterBox->setObjectName(QString::fromUtf8("characterBox"));
        characterBox->setEnabled(true);
        characterBox->setFrameShape(QFrame::NoFrame);
        characterBox->setFrameShadow(QFrame::Plain);
        characterBox->setLineWidth(0);
        gridLayout1 = new QGridLayout(characterBox);
        gridLayout1->setSpacing(5);
        gridLayout1->setContentsMargins(5, 5, 5, 5);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        cpage = new SMCStyleWidget(characterBox);
        cpage->setObjectName(QString::fromUtf8("cpage"));

        gridLayout1->addWidget(cpage, 0, 0, 1, 1);


        vboxLayout5->addWidget(characterBox);

        tabWidget->addTab(TabPage, QString());

        vboxLayout->addWidget(tabWidget);

#ifndef QT_NO_SHORTCUT
        lineSpacingLabel->setBuddy(lineSpacingMode_);
        spaceAboveLabel->setBuddy(spaceAbove_);
        spaceBelowLabel->setBuddy(spaceBelow_);
        dropCapsLineLabel->setBuddy(dropCapLines_);
        distFromTextLabel->setBuddy(dropCapOffset_);
        minSpaceLabel->setBuddy(minSpaceSpin);
        minGlyphExtLabel->setBuddy(minGlyphExtSpin);
        maxGlyphExtLabel->setBuddy(maxGlyphExtSpin);
#endif // QT_NO_SHORTCUT

        retranslateUi(SMPStyleWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SMPStyleWidget);
    } // setupUi

    void retranslateUi(QWidget *SMPStyleWidget)
    {
        parentLabel->setText(QApplication::translate("SMPStyleWidget", "Based On:", 0, QApplication::UnicodeUTF8));
        distancesBox->setTitle(QApplication::translate("SMPStyleWidget", "Distances and Alignment", 0, QApplication::UnicodeUTF8));
        lineSpacingLabel->setText(QApplication::translate("SMPStyleWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        spaceAboveLabel->setText(QApplication::translate("SMPStyleWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        spaceBelowLabel->setText(QApplication::translate("SMPStyleWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        dropCapsBox->setTitle(QApplication::translate("SMPStyleWidget", "Drop Caps", 0, QApplication::UnicodeUTF8));
        dropCapsLineLabel->setText(QApplication::translate("SMPStyleWidget", "&Lines:", 0, QApplication::UnicodeUTF8));
        distFromTextLabel->setText(QApplication::translate("SMPStyleWidget", "Distance from Text:", 0, QApplication::UnicodeUTF8));
        parentDropCapButton->setText(QApplication::translate("SMPStyleWidget", "Use Parent Value", 0, QApplication::UnicodeUTF8));
        opticalMarginsGroupBox->setTitle(QApplication::translate("SMPStyleWidget", "Optical Margins", 0, QApplication::UnicodeUTF8));
        optMarginDefaultButton->setText(QApplication::translate("SMPStyleWidget", "Reset to Default", 0, QApplication::UnicodeUTF8));
        optMarginParentButton->setText(QApplication::translate("SMPStyleWidget", "Use Parent Value", 0, QApplication::UnicodeUTF8));
        optMarginRadioNone->setText(QApplication::translate("SMPStyleWidget", "None", 0, QApplication::UnicodeUTF8));
        optMarginRadioBoth->setText(QApplication::translate("SMPStyleWidget", "Both Sides", 0, QApplication::UnicodeUTF8));
        optMarginRadioLeft->setText(QApplication::translate("SMPStyleWidget", "Left Only", 0, QApplication::UnicodeUTF8));
        optMarginRadioRight->setText(QApplication::translate("SMPStyleWidget", "Right Only", 0, QApplication::UnicodeUTF8));
        advSettingsGroupBox->setTitle(QApplication::translate("SMPStyleWidget", "Advanced Settings", 0, QApplication::UnicodeUTF8));
        minSpaceLabel->setText(QApplication::translate("SMPStyleWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        glyphExtensionLabel->setText(QApplication::translate("SMPStyleWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        minGlyphExtLabel->setText(QApplication::translate("SMPStyleWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        maxGlyphExtLabel->setText(QApplication::translate("SMPStyleWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        tabsBox->setTitle(QApplication::translate("SMPStyleWidget", "Tabulators and Indentation", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SMPStyleWidget", "Properties", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(TabPage), QApplication::translate("SMPStyleWidget", "Ch&aracter Style", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SMPStyleWidget);
    } // retranslateUi

};

namespace Ui {
    class SMPStyleWidget: public Ui_SMPStyleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMPSTYLEWIDGET_H
