/********************************************************************************
** Form generated from reading UI file 'lensdialogbase.ui'
**
** Created: Sun Feb 24 21:59:03 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LENSDIALOGBASE_H
#define UI_LENSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LensDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QGraphicsView *previewWidget;
    QHBoxLayout *hboxLayout1;
    QHBoxLayout *hboxLayout2;
    QPushButton *buttonAdd;
    QPushButton *buttonRemove;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem;
    QToolButton *buttonZoomI;
    QToolButton *buttonZoomOut;
    QVBoxLayout *vboxLayout2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *spinXPos;
    QLabel *label_2;
    QDoubleSpinBox *spinYPos;
    QRadioButton *buttonMagnify;
    QRadioButton *buttonFishEye;
    QLabel *label_3;
    QDoubleSpinBox *spinRadius;
    QLabel *label_4;
    QDoubleSpinBox *spinStrength;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LensDialogBase)
    {
        if (LensDialogBase->objectName().isEmpty())
            LensDialogBase->setObjectName(QString::fromUtf8("LensDialogBase"));
        LensDialogBase->resize(526, 372);
        vboxLayout = new QVBoxLayout(LensDialogBase);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(5);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        previewWidget = new QGraphicsView(LensDialogBase);
        previewWidget->setObjectName(QString::fromUtf8("previewWidget"));
        previewWidget->setMinimumSize(QSize(280, 280));

        vboxLayout1->addWidget(previewWidget);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(5);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        buttonAdd = new QPushButton(LensDialogBase);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));

        hboxLayout2->addWidget(buttonAdd);

        buttonRemove = new QPushButton(LensDialogBase);
        buttonRemove->setObjectName(QString::fromUtf8("buttonRemove"));

        hboxLayout2->addWidget(buttonRemove);


        hboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(5);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem);

        buttonZoomI = new QToolButton(LensDialogBase);
        buttonZoomI->setObjectName(QString::fromUtf8("buttonZoomI"));

        hboxLayout3->addWidget(buttonZoomI);

        buttonZoomOut = new QToolButton(LensDialogBase);
        buttonZoomOut->setObjectName(QString::fromUtf8("buttonZoomOut"));

        hboxLayout3->addWidget(buttonZoomOut);


        hboxLayout1->addLayout(hboxLayout3);


        vboxLayout1->addLayout(hboxLayout1);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(5);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        groupBox = new QGroupBox(LensDialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinXPos = new QDoubleSpinBox(groupBox);
        spinXPos->setObjectName(QString::fromUtf8("spinXPos"));
        spinXPos->setMinimum(-30000);
        spinXPos->setMaximum(30000);

        gridLayout->addWidget(spinXPos, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinYPos = new QDoubleSpinBox(groupBox);
        spinYPos->setObjectName(QString::fromUtf8("spinYPos"));
        spinYPos->setMinimum(-30000);
        spinYPos->setMaximum(30000);

        gridLayout->addWidget(spinYPos, 1, 1, 1, 1);

        buttonMagnify = new QRadioButton(groupBox);
        buttonMagnify->setObjectName(QString::fromUtf8("buttonMagnify"));
        buttonMagnify->setChecked(true);

        gridLayout->addWidget(buttonMagnify, 2, 0, 1, 2);

        buttonFishEye = new QRadioButton(groupBox);
        buttonFishEye->setObjectName(QString::fromUtf8("buttonFishEye"));

        gridLayout->addWidget(buttonFishEye, 3, 0, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        spinRadius = new QDoubleSpinBox(groupBox);
        spinRadius->setObjectName(QString::fromUtf8("spinRadius"));
        spinRadius->setMinimum(-30000);
        spinRadius->setMaximum(30000);

        gridLayout->addWidget(spinRadius, 4, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        spinStrength = new QDoubleSpinBox(groupBox);
        spinStrength->setObjectName(QString::fromUtf8("spinStrength"));
        spinStrength->setMinimum(0);
        spinStrength->setMaximum(100);

        gridLayout->addWidget(spinStrength, 5, 1, 1, 1);


        vboxLayout2->addWidget(groupBox);

        spacerItem1 = new QSpacerItem(165, 91, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem1);


        hboxLayout->addLayout(vboxLayout2);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(LensDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(spinXPos);
        label_2->setBuddy(spinYPos);
        label_3->setBuddy(spinRadius);
        label_4->setBuddy(spinStrength);
#endif // QT_NO_SHORTCUT

        retranslateUi(LensDialogBase);

        QMetaObject::connectSlotsByName(LensDialogBase);
    } // setupUi

    void retranslateUi(QDialog *LensDialogBase)
    {
        LensDialogBase->setWindowTitle(QApplication::translate("LensDialogBase", "Optical Lens", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonAdd->setToolTip(QApplication::translate("LensDialogBase", "Add a new lens", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonAdd->setText(QApplication::translate("LensDialogBase", "&Add Lens", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonRemove->setToolTip(QApplication::translate("LensDialogBase", "Remove selected lens", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonRemove->setText(QApplication::translate("LensDialogBase", "&Remove Lens", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonZoomI->setToolTip(QApplication::translate("LensDialogBase", "Zoom In", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonZoomI->setText(QApplication::translate("LensDialogBase", "+", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonZoomOut->setToolTip(QApplication::translate("LensDialogBase", "Zoom Out", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonZoomOut->setText(QApplication::translate("LensDialogBase", "-", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("LensDialogBase", "Lens Parameters", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LensDialogBase", "&X Pos:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinXPos->setToolTip(QApplication::translate("LensDialogBase", "Horizontal position of the lens", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("LensDialogBase", "&Y Pos:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinYPos->setToolTip(QApplication::translate("LensDialogBase", "Vertical position of the lens", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        buttonMagnify->setToolTip(QApplication::translate("LensDialogBase", "The selected lens acts like a magnification lens", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonMagnify->setText(QApplication::translate("LensDialogBase", "&Magnification Lens", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonFishEye->setToolTip(QApplication::translate("LensDialogBase", "The selected lens acts like a fish eye lens", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonFishEye->setText(QApplication::translate("LensDialogBase", "&Fish Eye Lens", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LensDialogBase", "Ra&dius:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinRadius->setToolTip(QApplication::translate("LensDialogBase", "Radius of the lens", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("LensDialogBase", "&Strength:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinStrength->setToolTip(QApplication::translate("LensDialogBase", "Strength of the lens", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class LensDialogBase: public Ui_LensDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LENSDIALOGBASE_H
