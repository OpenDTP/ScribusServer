/********************************************************************************
** Form generated from reading UI file 'aligndistribute.ui'
**
** Created: Sun Feb 24 21:37:25 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALIGNDISTRIBUTE_H
#define UI_ALIGNDISTRIBUTE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "scrpalettebase.h"
#include "scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_AlignDistribute
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tabAlign;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QGridLayout *gridLayout;
    QLabel *alignGuideLabel;
    QLabel *alignRelativeToLabel;
    QLineEdit *alignGuideLineEdit;
    QComboBox *alignRelativeToCombo;
    QLabel *alignMoveOrResizeLabel;
    QComboBox *alignMoveOrResizeCombo;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QGridLayout *gridLayout1;
    QToolButton *alignBottomInToolButton;
    QToolButton *alignTopInToolButton;
    QToolButton *alignLeftInToolButton;
    QToolButton *alignRightInToolButton;
    QToolButton *alignBottomOutToolButton;
    QToolButton *alignTopOutToolButton;
    QToolButton *alignCenterVerToolButton;
    QToolButton *alignLeftOutToolButton;
    QToolButton *alignRightOutToolButton;
    QToolButton *alignCenterHorToolButton;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QWidget *tabDistribute;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem5;
    QGridLayout *gridLayout2;
    QToolButton *distributeDistHToolButton;
    QToolButton *distributeTopToolButton;
    QToolButton *distributeCenterVToolButton;
    QToolButton *distributeRightToolButton;
    QToolButton *toolButtonDummy1;
    QToolButton *distributeAcrossMarginsToolButton;
    QToolButton *distributeLeftToolButton;
    QToolButton *distributeAcrossPageToolButton;
    QToolButton *distributeDistValueHToolButton;
    QToolButton *distributeDownMarginsToolButton;
    QToolButton *distributeCenterHToolButton;
    QToolButton *toolButtonDummy2;
    QToolButton *distributeDownPageToolButton;
    QToolButton *distributeDistValueVToolButton;
    QToolButton *distributeDistVToolButton;
    QToolButton *distributeBottomToolButton;
    QSpacerItem *spacerItem6;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem7;
    QHBoxLayout *hboxLayout4;
    QLabel *distributeDistLabel;
    ScrSpinBox *distributeDistSpinBox;
    QSpacerItem *spacerItem8;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *reverseDistributionCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *spacerItem9;

    void setupUi(ScrPaletteBase *AlignDistribute)
    {
        if (AlignDistribute->objectName().isEmpty())
            AlignDistribute->setObjectName(QString::fromUtf8("AlignDistribute"));
        AlignDistribute->setEnabled(true);
        AlignDistribute->resize(288, 272);
        AlignDistribute->setMinimumSize(QSize(0, 0));
        vboxLayout = new QVBoxLayout(AlignDistribute);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(6, 6, 6, 6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(AlignDistribute);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabAlign = new QWidget();
        tabAlign->setObjectName(QString::fromUtf8("tabAlign"));
        vboxLayout1 = new QVBoxLayout(tabAlign);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        alignGuideLabel = new QLabel(tabAlign);
        alignGuideLabel->setObjectName(QString::fromUtf8("alignGuideLabel"));
        alignGuideLabel->setWordWrap(false);

        gridLayout->addWidget(alignGuideLabel, 1, 0, 1, 1);

        alignRelativeToLabel = new QLabel(tabAlign);
        alignRelativeToLabel->setObjectName(QString::fromUtf8("alignRelativeToLabel"));
        alignRelativeToLabel->setWordWrap(false);

        gridLayout->addWidget(alignRelativeToLabel, 0, 0, 1, 1);

        alignGuideLineEdit = new QLineEdit(tabAlign);
        alignGuideLineEdit->setObjectName(QString::fromUtf8("alignGuideLineEdit"));

        gridLayout->addWidget(alignGuideLineEdit, 1, 1, 1, 1);

        alignRelativeToCombo = new QComboBox(tabAlign);
        alignRelativeToCombo->setObjectName(QString::fromUtf8("alignRelativeToCombo"));

        gridLayout->addWidget(alignRelativeToCombo, 0, 1, 1, 1);

        alignMoveOrResizeLabel = new QLabel(tabAlign);
        alignMoveOrResizeLabel->setObjectName(QString::fromUtf8("alignMoveOrResizeLabel"));
        alignMoveOrResizeLabel->setWordWrap(false);

        gridLayout->addWidget(alignMoveOrResizeLabel, 2, 0, 1, 1);

        alignMoveOrResizeCombo = new QComboBox(tabAlign);
        alignMoveOrResizeCombo->setObjectName(QString::fromUtf8("alignMoveOrResizeCombo"));

        gridLayout->addWidget(alignMoveOrResizeCombo, 2, 1, 1, 1);


        hboxLayout->addLayout(gridLayout);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout1->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        alignBottomInToolButton = new QToolButton(tabAlign);
        alignBottomInToolButton->setObjectName(QString::fromUtf8("alignBottomInToolButton"));

        gridLayout1->addWidget(alignBottomInToolButton, 1, 3, 1, 1);

        alignTopInToolButton = new QToolButton(tabAlign);
        alignTopInToolButton->setObjectName(QString::fromUtf8("alignTopInToolButton"));

        gridLayout1->addWidget(alignTopInToolButton, 1, 1, 1, 1);

        alignLeftInToolButton = new QToolButton(tabAlign);
        alignLeftInToolButton->setObjectName(QString::fromUtf8("alignLeftInToolButton"));

        gridLayout1->addWidget(alignLeftInToolButton, 0, 1, 1, 1);

        alignRightInToolButton = new QToolButton(tabAlign);
        alignRightInToolButton->setObjectName(QString::fromUtf8("alignRightInToolButton"));

        gridLayout1->addWidget(alignRightInToolButton, 0, 3, 1, 1);

        alignBottomOutToolButton = new QToolButton(tabAlign);
        alignBottomOutToolButton->setObjectName(QString::fromUtf8("alignBottomOutToolButton"));

        gridLayout1->addWidget(alignBottomOutToolButton, 1, 4, 1, 1);

        alignTopOutToolButton = new QToolButton(tabAlign);
        alignTopOutToolButton->setObjectName(QString::fromUtf8("alignTopOutToolButton"));

        gridLayout1->addWidget(alignTopOutToolButton, 1, 0, 1, 1);

        alignCenterVerToolButton = new QToolButton(tabAlign);
        alignCenterVerToolButton->setObjectName(QString::fromUtf8("alignCenterVerToolButton"));

        gridLayout1->addWidget(alignCenterVerToolButton, 1, 2, 1, 1);

        alignLeftOutToolButton = new QToolButton(tabAlign);
        alignLeftOutToolButton->setObjectName(QString::fromUtf8("alignLeftOutToolButton"));

        gridLayout1->addWidget(alignLeftOutToolButton, 0, 0, 1, 1);

        alignRightOutToolButton = new QToolButton(tabAlign);
        alignRightOutToolButton->setObjectName(QString::fromUtf8("alignRightOutToolButton"));

        gridLayout1->addWidget(alignRightOutToolButton, 0, 4, 1, 1);

        alignCenterHorToolButton = new QToolButton(tabAlign);
        alignCenterHorToolButton->setObjectName(QString::fromUtf8("alignCenterHorToolButton"));

        gridLayout1->addWidget(alignCenterHorToolButton, 0, 2, 1, 1);


        hboxLayout1->addLayout(gridLayout1);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);


        vboxLayout1->addLayout(hboxLayout1);

        spacerItem4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem4);

        tabWidget->addTab(tabAlign, QString());
        tabDistribute = new QWidget();
        tabDistribute->setObjectName(QString::fromUtf8("tabDistribute"));
        verticalLayout = new QVBoxLayout(tabDistribute);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem5 = new QSpacerItem(63, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem5);

        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        distributeDistHToolButton = new QToolButton(tabDistribute);
        distributeDistHToolButton->setObjectName(QString::fromUtf8("distributeDistHToolButton"));

        gridLayout2->addWidget(distributeDistHToolButton, 0, 3, 1, 1);

        distributeTopToolButton = new QToolButton(tabDistribute);
        distributeTopToolButton->setObjectName(QString::fromUtf8("distributeTopToolButton"));

        gridLayout2->addWidget(distributeTopToolButton, 1, 2, 1, 1);

        distributeCenterVToolButton = new QToolButton(tabDistribute);
        distributeCenterVToolButton->setObjectName(QString::fromUtf8("distributeCenterVToolButton"));

        gridLayout2->addWidget(distributeCenterVToolButton, 1, 1, 1, 1);

        distributeRightToolButton = new QToolButton(tabDistribute);
        distributeRightToolButton->setObjectName(QString::fromUtf8("distributeRightToolButton"));

        gridLayout2->addWidget(distributeRightToolButton, 0, 2, 1, 1);

        toolButtonDummy1 = new QToolButton(tabDistribute);
        toolButtonDummy1->setObjectName(QString::fromUtf8("toolButtonDummy1"));

        gridLayout2->addWidget(toolButtonDummy1, 3, 0, 1, 1);

        distributeAcrossMarginsToolButton = new QToolButton(tabDistribute);
        distributeAcrossMarginsToolButton->setObjectName(QString::fromUtf8("distributeAcrossMarginsToolButton"));
        distributeAcrossMarginsToolButton->setEnabled(true);

        gridLayout2->addWidget(distributeAcrossMarginsToolButton, 2, 2, 1, 1);

        distributeLeftToolButton = new QToolButton(tabDistribute);
        distributeLeftToolButton->setObjectName(QString::fromUtf8("distributeLeftToolButton"));

        gridLayout2->addWidget(distributeLeftToolButton, 0, 0, 1, 1);

        distributeAcrossPageToolButton = new QToolButton(tabDistribute);
        distributeAcrossPageToolButton->setObjectName(QString::fromUtf8("distributeAcrossPageToolButton"));
        distributeAcrossPageToolButton->setEnabled(true);

        gridLayout2->addWidget(distributeAcrossPageToolButton, 2, 0, 1, 1);

        distributeDistValueHToolButton = new QToolButton(tabDistribute);
        distributeDistValueHToolButton->setObjectName(QString::fromUtf8("distributeDistValueHToolButton"));

        gridLayout2->addWidget(distributeDistValueHToolButton, 3, 1, 1, 1);

        distributeDownMarginsToolButton = new QToolButton(tabDistribute);
        distributeDownMarginsToolButton->setObjectName(QString::fromUtf8("distributeDownMarginsToolButton"));
        distributeDownMarginsToolButton->setEnabled(true);

        gridLayout2->addWidget(distributeDownMarginsToolButton, 2, 3, 1, 1);

        distributeCenterHToolButton = new QToolButton(tabDistribute);
        distributeCenterHToolButton->setObjectName(QString::fromUtf8("distributeCenterHToolButton"));

        gridLayout2->addWidget(distributeCenterHToolButton, 0, 1, 1, 1);

        toolButtonDummy2 = new QToolButton(tabDistribute);
        toolButtonDummy2->setObjectName(QString::fromUtf8("toolButtonDummy2"));

        gridLayout2->addWidget(toolButtonDummy2, 3, 3, 1, 1);

        distributeDownPageToolButton = new QToolButton(tabDistribute);
        distributeDownPageToolButton->setObjectName(QString::fromUtf8("distributeDownPageToolButton"));
        distributeDownPageToolButton->setEnabled(true);

        gridLayout2->addWidget(distributeDownPageToolButton, 2, 1, 1, 1);

        distributeDistValueVToolButton = new QToolButton(tabDistribute);
        distributeDistValueVToolButton->setObjectName(QString::fromUtf8("distributeDistValueVToolButton"));

        gridLayout2->addWidget(distributeDistValueVToolButton, 3, 2, 1, 1);

        distributeDistVToolButton = new QToolButton(tabDistribute);
        distributeDistVToolButton->setObjectName(QString::fromUtf8("distributeDistVToolButton"));

        gridLayout2->addWidget(distributeDistVToolButton, 1, 3, 1, 1);

        distributeBottomToolButton = new QToolButton(tabDistribute);
        distributeBottomToolButton->setObjectName(QString::fromUtf8("distributeBottomToolButton"));

        gridLayout2->addWidget(distributeBottomToolButton, 1, 0, 1, 1);


        hboxLayout2->addLayout(gridLayout2);

        spacerItem6 = new QSpacerItem(62, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem6);


        verticalLayout->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem7);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        distributeDistLabel = new QLabel(tabDistribute);
        distributeDistLabel->setObjectName(QString::fromUtf8("distributeDistLabel"));
        distributeDistLabel->setWordWrap(false);
        distributeDistLabel->setIndent(-1);

        hboxLayout4->addWidget(distributeDistLabel);

        distributeDistSpinBox = new ScrSpinBox(tabDistribute);
        distributeDistSpinBox->setObjectName(QString::fromUtf8("distributeDistSpinBox"));
        distributeDistSpinBox->setMinimumSize(QSize(50, 24));

        hboxLayout4->addWidget(distributeDistSpinBox);


        hboxLayout3->addLayout(hboxLayout4);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem8);


        verticalLayout->addLayout(hboxLayout3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        reverseDistributionCheckBox = new QCheckBox(tabDistribute);
        reverseDistributionCheckBox->setObjectName(QString::fromUtf8("reverseDistributionCheckBox"));

        horizontalLayout->addWidget(reverseDistributionCheckBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        spacerItem9 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem9);

        tabWidget->addTab(tabDistribute, QString());

        vboxLayout->addWidget(tabWidget);

#ifndef QT_NO_SHORTCUT
        alignGuideLabel->setBuddy(alignGuideLineEdit);
        alignRelativeToLabel->setBuddy(alignRelativeToCombo);
        alignMoveOrResizeLabel->setBuddy(alignMoveOrResizeCombo);
        distributeDistLabel->setBuddy(distributeDistSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(alignRelativeToCombo, alignGuideLineEdit);
        QWidget::setTabOrder(alignGuideLineEdit, alignMoveOrResizeCombo);
        QWidget::setTabOrder(alignMoveOrResizeCombo, alignLeftOutToolButton);
        QWidget::setTabOrder(alignLeftOutToolButton, alignLeftInToolButton);
        QWidget::setTabOrder(alignLeftInToolButton, alignCenterHorToolButton);
        QWidget::setTabOrder(alignCenterHorToolButton, alignRightInToolButton);
        QWidget::setTabOrder(alignRightInToolButton, alignRightOutToolButton);
        QWidget::setTabOrder(alignRightOutToolButton, alignTopOutToolButton);
        QWidget::setTabOrder(alignTopOutToolButton, alignTopInToolButton);
        QWidget::setTabOrder(alignTopInToolButton, alignCenterVerToolButton);
        QWidget::setTabOrder(alignCenterVerToolButton, alignBottomInToolButton);
        QWidget::setTabOrder(alignBottomInToolButton, alignBottomOutToolButton);
        QWidget::setTabOrder(alignBottomOutToolButton, distributeLeftToolButton);
        QWidget::setTabOrder(distributeLeftToolButton, distributeCenterHToolButton);
        QWidget::setTabOrder(distributeCenterHToolButton, distributeRightToolButton);
        QWidget::setTabOrder(distributeRightToolButton, distributeDistHToolButton);
        QWidget::setTabOrder(distributeDistHToolButton, distributeBottomToolButton);
        QWidget::setTabOrder(distributeBottomToolButton, distributeCenterVToolButton);
        QWidget::setTabOrder(distributeCenterVToolButton, distributeTopToolButton);
        QWidget::setTabOrder(distributeTopToolButton, distributeDistVToolButton);
        QWidget::setTabOrder(distributeDistVToolButton, distributeAcrossPageToolButton);
        QWidget::setTabOrder(distributeAcrossPageToolButton, distributeDownPageToolButton);
        QWidget::setTabOrder(distributeDownPageToolButton, distributeAcrossMarginsToolButton);
        QWidget::setTabOrder(distributeAcrossMarginsToolButton, distributeDownMarginsToolButton);
        QWidget::setTabOrder(distributeDownMarginsToolButton, toolButtonDummy1);
        QWidget::setTabOrder(toolButtonDummy1, distributeDistValueHToolButton);
        QWidget::setTabOrder(distributeDistValueHToolButton, distributeDistValueVToolButton);
        QWidget::setTabOrder(distributeDistValueVToolButton, toolButtonDummy2);
        QWidget::setTabOrder(toolButtonDummy2, distributeDistSpinBox);
        QWidget::setTabOrder(distributeDistSpinBox, reverseDistributionCheckBox);
        QWidget::setTabOrder(reverseDistributionCheckBox, tabWidget);

        retranslateUi(AlignDistribute);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AlignDistribute);
    } // setupUi

    void retranslateUi(ScrPaletteBase *AlignDistribute)
    {
        alignGuideLabel->setText(QApplication::translate("AlignDistribute", "&Selected Guide:", 0, QApplication::UnicodeUTF8));
        alignRelativeToLabel->setText(QApplication::translate("AlignDistribute", "&Relative To:", 0, QApplication::UnicodeUTF8));
        alignMoveOrResizeLabel->setText(QApplication::translate("AlignDistribute", "&Align Sides By:", 0, QApplication::UnicodeUTF8));
        alignBottomInToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        alignTopInToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        alignLeftInToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        alignRightInToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        alignBottomOutToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        alignTopOutToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        alignCenterVerToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        alignLeftOutToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        alignRightOutToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        alignCenterHorToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabAlign), QApplication::translate("AlignDistribute", "Align", 0, QApplication::UnicodeUTF8));
        distributeDistHToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        distributeTopToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        distributeCenterVToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        distributeRightToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        toolButtonDummy1->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        distributeAcrossMarginsToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        distributeLeftToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        distributeAcrossPageToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        distributeDistValueHToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        distributeDownMarginsToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        distributeCenterHToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        toolButtonDummy2->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        distributeDownPageToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        distributeDistValueVToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        distributeDistVToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        distributeBottomToolButton->setText(QApplication::translate("AlignDistribute", "...", 0, QApplication::UnicodeUTF8));
        distributeDistLabel->setText(QApplication::translate("AlignDistribute", "&Distance:", 0, QApplication::UnicodeUTF8));
        reverseDistributionCheckBox->setText(QApplication::translate("AlignDistribute", "Reverse Distribution", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabDistribute), QApplication::translate("AlignDistribute", "Distribute", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(AlignDistribute);
    } // retranslateUi

};

namespace Ui {
    class AlignDistribute: public Ui_AlignDistribute {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALIGNDISTRIBUTE_H
