/********************************************************************************
** Form generated from reading UI file 'smcstylewidget.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMCSTYLEWIDGET_H
#define UI_SMCSTYLEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "smcolorcombo.h"
#include "smfontcomboh.h"
#include "smsccombobox.h"
#include "smscrspinbox.h"
#include "smshadebutton.h"
#include "smstyleselect.h"

QT_BEGIN_NAMESPACE

class Ui_SMCStyleWidget
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *parentLabel;
    QComboBox *parentCombo;
    QGroupBox *basicGroup;
    QVBoxLayout *vboxLayout1;
    SMFontComboH *fontFace_;
    QHBoxLayout *hboxLayout1;
    QLabel *fontSizeLabel_;
    SMScrSpinBox *fontSize_;
    QLabel *trackingLabel_;
    SMScrSpinBox *tracking_;
    QLabel *widthSpaceLabel;
    SMScrSpinBox *widthSpaceSpin;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout2;
    SMStyleSelect *effects_;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QGroupBox *advGroup;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout3;
    QLabel *hscaleLabel_;
    SMScrSpinBox *fontHScale_;
    QLabel *vscaleLabel_;
    SMScrSpinBox *fontVScale_;
    QLabel *baselineOffsetLabel_;
    SMScrSpinBox *baselineOffset_;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout4;
    QLabel *languageLabel_;
    SMScComboBox *language_;
    QSpacerItem *spacerItem4;
    QSpacerItem *spacerItem5;
    QGroupBox *smColorGroup;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout5;
    QLabel *FillIcon;
    SMColorCombo *fillColor_;
    QLabel *fillShadeLabel;
    SMShadeButton *fillShade_;
    QSpacerItem *spacerItem6;
    QHBoxLayout *hboxLayout6;
    QLabel *StrokeIcon;
    SMColorCombo *strokeColor_;
    QLabel *strokeShadeLabel;
    SMShadeButton *strokeShade_;
    QSpacerItem *spacerItem7;
    QSpacerItem *spacerItem8;

    void setupUi(QWidget *SMCStyleWidget)
    {
        if (SMCStyleWidget->objectName().isEmpty())
            SMCStyleWidget->setObjectName(QString::fromUtf8("SMCStyleWidget"));
        SMCStyleWidget->resize(378, 478);
        vboxLayout = new QVBoxLayout(SMCStyleWidget);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        parentLabel = new QLabel(SMCStyleWidget);
        parentLabel->setObjectName(QString::fromUtf8("parentLabel"));
        parentLabel->setWordWrap(false);

        hboxLayout->addWidget(parentLabel);

        parentCombo = new QComboBox(SMCStyleWidget);
        parentCombo->setObjectName(QString::fromUtf8("parentCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(parentCombo->sizePolicy().hasHeightForWidth());
        parentCombo->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(parentCombo);


        vboxLayout->addLayout(hboxLayout);

        basicGroup = new QGroupBox(SMCStyleWidget);
        basicGroup->setObjectName(QString::fromUtf8("basicGroup"));
        vboxLayout1 = new QVBoxLayout(basicGroup);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        fontFace_ = new SMFontComboH(basicGroup);
        fontFace_->setObjectName(QString::fromUtf8("fontFace_"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fontFace_->sizePolicy().hasHeightForWidth());
        fontFace_->setSizePolicy(sizePolicy1);
        fontFace_->setMinimumSize(QSize(0, 62));

        vboxLayout1->addWidget(fontFace_);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        fontSizeLabel_ = new QLabel(basicGroup);
        fontSizeLabel_->setObjectName(QString::fromUtf8("fontSizeLabel_"));
        fontSizeLabel_->setMinimumSize(QSize(22, 22));

        hboxLayout1->addWidget(fontSizeLabel_);

        fontSize_ = new SMScrSpinBox(basicGroup);
        fontSize_->setObjectName(QString::fromUtf8("fontSize_"));
        fontSize_->setMinimum(1);
        fontSize_->setMaximum(2048);

        hboxLayout1->addWidget(fontSize_);

        trackingLabel_ = new QLabel(basicGroup);
        trackingLabel_->setObjectName(QString::fromUtf8("trackingLabel_"));
        trackingLabel_->setMinimumSize(QSize(22, 22));

        hboxLayout1->addWidget(trackingLabel_);

        tracking_ = new SMScrSpinBox(basicGroup);
        tracking_->setObjectName(QString::fromUtf8("tracking_"));
        tracking_->setMinimum(-300);
        tracking_->setMaximum(300);

        hboxLayout1->addWidget(tracking_);

        widthSpaceLabel = new QLabel(basicGroup);
        widthSpaceLabel->setObjectName(QString::fromUtf8("widthSpaceLabel"));
        widthSpaceLabel->setMinimumSize(QSize(22, 22));
        widthSpaceLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        hboxLayout1->addWidget(widthSpaceLabel);

        widthSpaceSpin = new SMScrSpinBox(basicGroup);
        widthSpaceSpin->setObjectName(QString::fromUtf8("widthSpaceSpin"));
        widthSpaceSpin->setMinimum(1);
        widthSpaceSpin->setMaximum(199);
        widthSpaceSpin->setValue(100);

        hboxLayout1->addWidget(widthSpaceSpin);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        effects_ = new SMStyleSelect(basicGroup);
        effects_->setObjectName(QString::fromUtf8("effects_"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(effects_->sizePolicy().hasHeightForWidth());
        effects_->setSizePolicy(sizePolicy2);
        effects_->setMinimumSize(QSize(30, 0));

        hboxLayout2->addWidget(effects_);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);


        vboxLayout1->addLayout(hboxLayout2);

        spacerItem2 = new QSpacerItem(300, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        vboxLayout1->addItem(spacerItem2);


        vboxLayout->addWidget(basicGroup);

        advGroup = new QGroupBox(SMCStyleWidget);
        advGroup->setObjectName(QString::fromUtf8("advGroup"));
        vboxLayout2 = new QVBoxLayout(advGroup);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(11, 11, 11, 11);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        hscaleLabel_ = new QLabel(advGroup);
        hscaleLabel_->setObjectName(QString::fromUtf8("hscaleLabel_"));
        hscaleLabel_->setMaximumSize(QSize(22, 22));

        hboxLayout3->addWidget(hscaleLabel_);

        fontHScale_ = new SMScrSpinBox(advGroup);
        fontHScale_->setObjectName(QString::fromUtf8("fontHScale_"));
        fontHScale_->setMinimum(10);
        fontHScale_->setMaximum(400);

        hboxLayout3->addWidget(fontHScale_);

        vscaleLabel_ = new QLabel(advGroup);
        vscaleLabel_->setObjectName(QString::fromUtf8("vscaleLabel_"));
        vscaleLabel_->setMaximumSize(QSize(22, 22));

        hboxLayout3->addWidget(vscaleLabel_);

        fontVScale_ = new SMScrSpinBox(advGroup);
        fontVScale_->setObjectName(QString::fromUtf8("fontVScale_"));
        fontVScale_->setMinimum(10);
        fontVScale_->setMaximum(400);

        hboxLayout3->addWidget(fontVScale_);

        baselineOffsetLabel_ = new QLabel(advGroup);
        baselineOffsetLabel_->setObjectName(QString::fromUtf8("baselineOffsetLabel_"));
        baselineOffsetLabel_->setMaximumSize(QSize(22, 22));

        hboxLayout3->addWidget(baselineOffsetLabel_);

        baselineOffset_ = new SMScrSpinBox(advGroup);
        baselineOffset_->setObjectName(QString::fromUtf8("baselineOffset_"));
        baselineOffset_->setMinimum(-100);
        baselineOffset_->setMaximum(100);

        hboxLayout3->addWidget(baselineOffset_);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);


        vboxLayout2->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        languageLabel_ = new QLabel(advGroup);
        languageLabel_->setObjectName(QString::fromUtf8("languageLabel_"));

        hboxLayout4->addWidget(languageLabel_);

        language_ = new SMScComboBox(advGroup);
        language_->setObjectName(QString::fromUtf8("language_"));

        hboxLayout4->addWidget(language_);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem4);


        vboxLayout2->addLayout(hboxLayout4);

        spacerItem5 = new QSpacerItem(300, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        vboxLayout2->addItem(spacerItem5);


        vboxLayout->addWidget(advGroup);

        smColorGroup = new QGroupBox(SMCStyleWidget);
        smColorGroup->setObjectName(QString::fromUtf8("smColorGroup"));
        vboxLayout3 = new QVBoxLayout(smColorGroup);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setContentsMargins(11, 11, 11, 11);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        FillIcon = new QLabel(smColorGroup);
        FillIcon->setObjectName(QString::fromUtf8("FillIcon"));
        FillIcon->setMaximumSize(QSize(22, 22));

        hboxLayout5->addWidget(FillIcon);

        fillColor_ = new SMColorCombo(smColorGroup);
        fillColor_->setObjectName(QString::fromUtf8("fillColor_"));

        hboxLayout5->addWidget(fillColor_);

        fillShadeLabel = new QLabel(smColorGroup);
        fillShadeLabel->setObjectName(QString::fromUtf8("fillShadeLabel"));
        fillShadeLabel->setMaximumSize(QSize(22, 22));

        hboxLayout5->addWidget(fillShadeLabel);

        fillShade_ = new SMShadeButton(smColorGroup);
        fillShade_->setObjectName(QString::fromUtf8("fillShade_"));

        hboxLayout5->addWidget(fillShade_);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem6);


        vboxLayout3->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(6);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        StrokeIcon = new QLabel(smColorGroup);
        StrokeIcon->setObjectName(QString::fromUtf8("StrokeIcon"));
        StrokeIcon->setMaximumSize(QSize(22, 22));

        hboxLayout6->addWidget(StrokeIcon);

        strokeColor_ = new SMColorCombo(smColorGroup);
        strokeColor_->setObjectName(QString::fromUtf8("strokeColor_"));

        hboxLayout6->addWidget(strokeColor_);

        strokeShadeLabel = new QLabel(smColorGroup);
        strokeShadeLabel->setObjectName(QString::fromUtf8("strokeShadeLabel"));
        strokeShadeLabel->setMaximumSize(QSize(22, 22));

        hboxLayout6->addWidget(strokeShadeLabel);

        strokeShade_ = new SMShadeButton(smColorGroup);
        strokeShade_->setObjectName(QString::fromUtf8("strokeShade_"));

        hboxLayout6->addWidget(strokeShade_);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem7);


        vboxLayout3->addLayout(hboxLayout6);

        spacerItem8 = new QSpacerItem(72, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        vboxLayout3->addItem(spacerItem8);


        vboxLayout->addWidget(smColorGroup);

#ifndef QT_NO_SHORTCUT
        parentLabel->setBuddy(parentCombo);
        fontSizeLabel_->setBuddy(fontSize_);
        trackingLabel_->setBuddy(tracking_);
        widthSpaceLabel->setBuddy(widthSpaceSpin);
        hscaleLabel_->setBuddy(fontHScale_);
        vscaleLabel_->setBuddy(fontVScale_);
        baselineOffsetLabel_->setBuddy(baselineOffset_);
        languageLabel_->setBuddy(language_);
        FillIcon->setBuddy(fillColor_);
        fillShadeLabel->setBuddy(fillShade_);
        StrokeIcon->setBuddy(strokeColor_);
        strokeShadeLabel->setBuddy(strokeShade_);
#endif // QT_NO_SHORTCUT

        retranslateUi(SMCStyleWidget);

        QMetaObject::connectSlotsByName(SMCStyleWidget);
    } // setupUi

    void retranslateUi(QWidget *SMCStyleWidget)
    {
        parentLabel->setText(QApplication::translate("SMCStyleWidget", "Based On:", 0, QApplication::UnicodeUTF8));
        basicGroup->setTitle(QApplication::translate("SMCStyleWidget", "Basic Formatting", 0, QApplication::UnicodeUTF8));
        fontSizeLabel_->setText(QString());
        trackingLabel_->setText(QString());
        tracking_->setSuffix(QApplication::translate("SMCStyleWidget", " %", 0, QApplication::UnicodeUTF8));
        widthSpaceSpin->setSuffix(QApplication::translate("SMCStyleWidget", " %", 0, QApplication::UnicodeUTF8));
        advGroup->setTitle(QApplication::translate("SMCStyleWidget", "Advanced Formatting", 0, QApplication::UnicodeUTF8));
        hscaleLabel_->setText(QApplication::translate("SMCStyleWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        fontHScale_->setSuffix(QApplication::translate("SMCStyleWidget", " %", 0, QApplication::UnicodeUTF8));
        vscaleLabel_->setText(QApplication::translate("SMCStyleWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        fontVScale_->setSuffix(QApplication::translate("SMCStyleWidget", " %", 0, QApplication::UnicodeUTF8));
        baselineOffsetLabel_->setText(QApplication::translate("SMCStyleWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        baselineOffset_->setSuffix(QApplication::translate("SMCStyleWidget", " %", 0, QApplication::UnicodeUTF8));
        languageLabel_->setText(QApplication::translate("SMCStyleWidget", "Language:", 0, QApplication::UnicodeUTF8));
        smColorGroup->setTitle(QApplication::translate("SMCStyleWidget", "Colors", 0, QApplication::UnicodeUTF8));
        FillIcon->setText(QApplication::translate("SMCStyleWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        fillShadeLabel->setText(QApplication::translate("SMCStyleWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        fillShade_->setText(QString());
        StrokeIcon->setText(QApplication::translate("SMCStyleWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        strokeShadeLabel->setText(QApplication::translate("SMCStyleWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        strokeShade_->setText(QString());
        Q_UNUSED(SMCStyleWidget);
    } // retranslateUi

};

namespace Ui {
    class SMCStyleWidget: public Ui_SMCStyleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMCSTYLEWIDGET_H
