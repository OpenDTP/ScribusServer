/********************************************************************************
** Form generated from reading UI file 'transformdialogbase.ui'
**
** Created: Sun Feb 24 21:59:21 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFORMDIALOGBASE_H
#define UI_TRANSFORMDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "basepointwidget.h"
#include "linkbutton.h"
#include "scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_TransformDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QListWidget *transformSelector;
    QHBoxLayout *hboxLayout1;
    QToolButton *buttonAdd;
    QPushButton *buttonRemove;
    QSpacerItem *spacerItem;
    QPushButton *buttonUp;
    QPushButton *buttonDown;
    QVBoxLayout *vboxLayout2;
    QStackedWidget *transformStack;
    QWidget *blankPage;
    QWidget *pageScale;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    ScrSpinBox *horizontalScale;
    LinkButton *scaleLink;
    QLabel *label_2;
    ScrSpinBox *verticalScale;
    QWidget *pageTranslate;
    QGridLayout *gridLayout1;
    QLabel *label_4;
    QLabel *label_5;
    ScrSpinBox *translateHorizontal;
    QLabel *label_6;
    ScrSpinBox *translateVertical;
    QWidget *pageRotate;
    QGridLayout *gridLayout2;
    QLabel *label_7;
    QLabel *label_8;
    ScrSpinBox *rotationValue;
    QWidget *Seite;
    QGridLayout *gridLayout3;
    QLabel *label_10;
    QLabel *label_11;
    ScrSpinBox *horizontalSkew;
    LinkButton *linkSkew;
    QLabel *label_12;
    ScrSpinBox *verticalSkew;
    QHBoxLayout *hboxLayout2;
    QGroupBox *RotationGroup;
    QVBoxLayout *vboxLayout3;
    BasePointWidget *basePoint;
    QVBoxLayout *vboxLayout4;
    QLabel *label_9;
    QSpinBox *numberOfCopies;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TransformDialogBase)
    {
        if (TransformDialogBase->objectName().isEmpty())
            TransformDialogBase->setObjectName(QString::fromUtf8("TransformDialogBase"));
        TransformDialogBase->resize(500, 283);
        TransformDialogBase->setMinimumSize(QSize(500, 260));
        vboxLayout = new QVBoxLayout(TransformDialogBase);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(5);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        transformSelector = new QListWidget(TransformDialogBase);
        transformSelector->setObjectName(QString::fromUtf8("transformSelector"));

        vboxLayout1->addWidget(transformSelector);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        buttonAdd = new QToolButton(TransformDialogBase);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonAdd->sizePolicy().hasHeightForWidth());
        buttonAdd->setSizePolicy(sizePolicy);
        buttonAdd->setPopupMode(QToolButton::InstantPopup);

        hboxLayout1->addWidget(buttonAdd);

        buttonRemove = new QPushButton(TransformDialogBase);
        buttonRemove->setObjectName(QString::fromUtf8("buttonRemove"));
        buttonRemove->setEnabled(false);

        hboxLayout1->addWidget(buttonRemove);

        spacerItem = new QSpacerItem(21, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        buttonUp = new QPushButton(TransformDialogBase);
        buttonUp->setObjectName(QString::fromUtf8("buttonUp"));
        buttonUp->setEnabled(false);

        hboxLayout1->addWidget(buttonUp);

        buttonDown = new QPushButton(TransformDialogBase);
        buttonDown->setObjectName(QString::fromUtf8("buttonDown"));
        buttonDown->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonDown->sizePolicy().hasHeightForWidth());
        buttonDown->setSizePolicy(sizePolicy1);

        hboxLayout1->addWidget(buttonDown);


        vboxLayout1->addLayout(hboxLayout1);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(5);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        transformStack = new QStackedWidget(TransformDialogBase);
        transformStack->setObjectName(QString::fromUtf8("transformStack"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(transformStack->sizePolicy().hasHeightForWidth());
        transformStack->setSizePolicy(sizePolicy2);
        transformStack->setMinimumSize(QSize(160, 16));
        transformStack->setFrameShape(QFrame::Panel);
        blankPage = new QWidget();
        blankPage->setObjectName(QString::fromUtf8("blankPage"));
        transformStack->addWidget(blankPage);
        pageScale = new QWidget();
        pageScale->setObjectName(QString::fromUtf8("pageScale"));
        gridLayout = new QGridLayout(pageScale);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(pageScale);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(11);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 3);

        label = new QLabel(pageScale);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        horizontalScale = new ScrSpinBox(pageScale);
        horizontalScale->setObjectName(QString::fromUtf8("horizontalScale"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(horizontalScale->sizePolicy().hasHeightForWidth());
        horizontalScale->setSizePolicy(sizePolicy3);
        horizontalScale->setMinimumSize(QSize(60, 0));
        horizontalScale->setDecimals(1);
        horizontalScale->setMinimum(0.1);
        horizontalScale->setMaximum(1000);
        horizontalScale->setValue(100);

        gridLayout->addWidget(horizontalScale, 1, 1, 1, 1);

        scaleLink = new LinkButton(pageScale);
        scaleLink->setObjectName(QString::fromUtf8("scaleLink"));
        scaleLink->setMinimumSize(QSize(15, 15));
        scaleLink->setMaximumSize(QSize(15, 16777215));
        scaleLink->setCheckable(true);
        scaleLink->setAutoRaise(true);

        gridLayout->addWidget(scaleLink, 1, 2, 2, 1);

        label_2 = new QLabel(pageScale);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        verticalScale = new ScrSpinBox(pageScale);
        verticalScale->setObjectName(QString::fromUtf8("verticalScale"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(verticalScale->sizePolicy().hasHeightForWidth());
        verticalScale->setSizePolicy(sizePolicy4);
        verticalScale->setMinimumSize(QSize(60, 0));
        verticalScale->setDecimals(1);
        verticalScale->setMinimum(0.1);
        verticalScale->setMaximum(1000);
        verticalScale->setValue(100);

        gridLayout->addWidget(verticalScale, 2, 1, 1, 1);

        transformStack->addWidget(pageScale);
        pageTranslate = new QWidget();
        pageTranslate->setObjectName(QString::fromUtf8("pageTranslate"));
        gridLayout1 = new QGridLayout(pageTranslate);
        gridLayout1->setSpacing(5);
        gridLayout1->setContentsMargins(10, 10, 10, 10);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_4 = new QLabel(pageTranslate);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout1->addWidget(label_4, 0, 0, 1, 2);

        label_5 = new QLabel(pageTranslate);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout1->addWidget(label_5, 1, 0, 1, 1);

        translateHorizontal = new ScrSpinBox(pageTranslate);
        translateHorizontal->setObjectName(QString::fromUtf8("translateHorizontal"));
        translateHorizontal->setMinimum(-30000);
        translateHorizontal->setMaximum(30000);

        gridLayout1->addWidget(translateHorizontal, 1, 1, 1, 1);

        label_6 = new QLabel(pageTranslate);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout1->addWidget(label_6, 2, 0, 1, 1);

        translateVertical = new ScrSpinBox(pageTranslate);
        translateVertical->setObjectName(QString::fromUtf8("translateVertical"));
        translateVertical->setMinimum(-30000);
        translateVertical->setMaximum(30000);

        gridLayout1->addWidget(translateVertical, 2, 1, 1, 1);

        transformStack->addWidget(pageTranslate);
        pageRotate = new QWidget();
        pageRotate->setObjectName(QString::fromUtf8("pageRotate"));
        gridLayout2 = new QGridLayout(pageRotate);
        gridLayout2->setSpacing(5);
        gridLayout2->setContentsMargins(10, 10, 10, 10);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        label_7 = new QLabel(pageRotate);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout2->addWidget(label_7, 0, 0, 1, 2);

        label_8 = new QLabel(pageRotate);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout2->addWidget(label_8, 1, 0, 1, 1);

        rotationValue = new ScrSpinBox(pageRotate);
        rotationValue->setObjectName(QString::fromUtf8("rotationValue"));
        rotationValue->setDecimals(1);
        rotationValue->setMinimum(-360);
        rotationValue->setMaximum(360);

        gridLayout2->addWidget(rotationValue, 1, 1, 1, 1);

        transformStack->addWidget(pageRotate);
        Seite = new QWidget();
        Seite->setObjectName(QString::fromUtf8("Seite"));
        gridLayout3 = new QGridLayout(Seite);
        gridLayout3->setSpacing(5);
        gridLayout3->setContentsMargins(10, 10, 10, 10);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        label_10 = new QLabel(Seite);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout3->addWidget(label_10, 0, 0, 1, 3);

        label_11 = new QLabel(Seite);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout3->addWidget(label_11, 1, 0, 1, 1);

        horizontalSkew = new ScrSpinBox(Seite);
        horizontalSkew->setObjectName(QString::fromUtf8("horizontalSkew"));
        horizontalSkew->setDecimals(1);
        horizontalSkew->setMinimum(-89);
        horizontalSkew->setMaximum(89);

        gridLayout3->addWidget(horizontalSkew, 1, 1, 1, 1);

        linkSkew = new LinkButton(Seite);
        linkSkew->setObjectName(QString::fromUtf8("linkSkew"));
        linkSkew->setMinimumSize(QSize(15, 15));
        linkSkew->setMaximumSize(QSize(15, 16777215));
        linkSkew->setCheckable(true);
        linkSkew->setAutoRaise(true);

        gridLayout3->addWidget(linkSkew, 1, 2, 2, 1);

        label_12 = new QLabel(Seite);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout3->addWidget(label_12, 2, 0, 1, 1);

        verticalSkew = new ScrSpinBox(Seite);
        verticalSkew->setObjectName(QString::fromUtf8("verticalSkew"));
        verticalSkew->setDecimals(1);
        verticalSkew->setMinimum(-89);
        verticalSkew->setMaximum(89);

        gridLayout3->addWidget(verticalSkew, 2, 1, 1, 1);

        transformStack->addWidget(Seite);

        vboxLayout2->addWidget(transformStack);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(5);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        RotationGroup = new QGroupBox(TransformDialogBase);
        RotationGroup->setObjectName(QString::fromUtf8("RotationGroup"));
        vboxLayout3 = new QVBoxLayout(RotationGroup);
        vboxLayout3->setSpacing(5);
        vboxLayout3->setContentsMargins(10, 10, 10, 10);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        basePoint = new BasePointWidget(RotationGroup);
        basePoint->setObjectName(QString::fromUtf8("basePoint"));
        basePoint->setMinimumSize(QSize(56, 56));

        vboxLayout3->addWidget(basePoint);


        hboxLayout2->addWidget(RotationGroup);

        vboxLayout4 = new QVBoxLayout();
        vboxLayout4->setSpacing(5);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        label_9 = new QLabel(TransformDialogBase);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        vboxLayout4->addWidget(label_9);

        numberOfCopies = new QSpinBox(TransformDialogBase);
        numberOfCopies->setObjectName(QString::fromUtf8("numberOfCopies"));
        numberOfCopies->setMinimum(0);
        numberOfCopies->setMaximum(200);

        vboxLayout4->addWidget(numberOfCopies);


        hboxLayout2->addLayout(vboxLayout4);


        vboxLayout2->addLayout(hboxLayout2);

        spacerItem1 = new QSpacerItem(31, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem1);


        hboxLayout->addLayout(vboxLayout2);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(TransformDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(TransformDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), TransformDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TransformDialogBase, SLOT(reject()));

        transformStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TransformDialogBase);
    } // setupUi

    void retranslateUi(QDialog *TransformDialogBase)
    {
        TransformDialogBase->setWindowTitle(QApplication::translate("TransformDialogBase", "Transform", 0, QApplication::UnicodeUTF8));
        buttonAdd->setText(QApplication::translate("TransformDialogBase", "Add", 0, QApplication::UnicodeUTF8));
        buttonRemove->setText(QApplication::translate("TransformDialogBase", "Remove", 0, QApplication::UnicodeUTF8));
        buttonUp->setText(QApplication::translate("TransformDialogBase", "u", 0, QApplication::UnicodeUTF8));
        buttonDown->setText(QApplication::translate("TransformDialogBase", "d", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TransformDialogBase", "Scaling", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TransformDialogBase", "Horizontal", 0, QApplication::UnicodeUTF8));
        horizontalScale->setSuffix(QApplication::translate("TransformDialogBase", " %", 0, QApplication::UnicodeUTF8));
        scaleLink->setText(QString());
        label_2->setText(QApplication::translate("TransformDialogBase", "Vertical", 0, QApplication::UnicodeUTF8));
        verticalScale->setSuffix(QApplication::translate("TransformDialogBase", " %", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TransformDialogBase", "Translation", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("TransformDialogBase", "Horizontal", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("TransformDialogBase", "Vertical", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("TransformDialogBase", "Rotate", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("TransformDialogBase", "Angle", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("TransformDialogBase", "Skew", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("TransformDialogBase", "Horizontal", 0, QApplication::UnicodeUTF8));
        linkSkew->setText(QString());
        label_12->setText(QApplication::translate("TransformDialogBase", "Vertical", 0, QApplication::UnicodeUTF8));
        RotationGroup->setTitle(QApplication::translate("TransformDialogBase", "Origin", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("TransformDialogBase", "Copies", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TransformDialogBase: public Ui_TransformDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFORMDIALOGBASE_H
