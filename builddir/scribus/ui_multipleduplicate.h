/********************************************************************************
** Form generated from reading UI file 'multipleduplicate.ui'
**
** Created: Sun Feb 24 21:37:26 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIPLEDUPLICATE_H
#define UI_MULTIPLEDUPLICATE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_MultipleDuplicate
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout1;
    QLabel *numberOfCopiesLabel;
    QSpinBox *numberOfCopiesSpinBox;
    QGroupBox *copiesCreateButtonGroup;
    QVBoxLayout *vboxLayout3;
    QRadioButton *createGapRadioButton;
    QRadioButton *shiftCreatedItemsRadioButton;
    QGridLayout *gridLayout;
    QLabel *horizShiftLabel;
    ScrSpinBox *rotationSpinBox;
    ScrSpinBox *vertShiftSpinBox;
    QLabel *rotationLabel;
    ScrSpinBox *horizShiftSpinBox;
    QLabel *vertShiftLabel;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QWidget *tab2;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout2;
    QGridLayout *gridLayout1;
    QLabel *vertRCLabel;
    QSpinBox *gridRowsSpinBox;
    ScrSpinBox *horizRCGapSpinBox;
    QLabel *horizRCLabel;
    QSpinBox *gridColsSpinBox;
    QLabel *numberOfRowsLabel;
    ScrSpinBox *vertRCGapSpinBox;
    QLabel *numberOfColumnsLabel;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem4;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *MultipleDuplicate)
    {
        if (MultipleDuplicate->objectName().isEmpty())
            MultipleDuplicate->setObjectName(QString::fromUtf8("MultipleDuplicate"));
        MultipleDuplicate->resize(274, 328);
        MultipleDuplicate->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(MultipleDuplicate);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(MultipleDuplicate);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        vboxLayout1 = new QVBoxLayout(tab);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setContentsMargins(5, 5, 5, 5);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        numberOfCopiesLabel = new QLabel(tab);
        numberOfCopiesLabel->setObjectName(QString::fromUtf8("numberOfCopiesLabel"));
        numberOfCopiesLabel->setWordWrap(false);

        hboxLayout1->addWidget(numberOfCopiesLabel);

        numberOfCopiesSpinBox = new QSpinBox(tab);
        numberOfCopiesSpinBox->setObjectName(QString::fromUtf8("numberOfCopiesSpinBox"));
        numberOfCopiesSpinBox->setMinimum(1);
        numberOfCopiesSpinBox->setMaximum(999);

        hboxLayout1->addWidget(numberOfCopiesSpinBox);


        vboxLayout2->addLayout(hboxLayout1);

        copiesCreateButtonGroup = new QGroupBox(tab);
        copiesCreateButtonGroup->setObjectName(QString::fromUtf8("copiesCreateButtonGroup"));
        vboxLayout3 = new QVBoxLayout(copiesCreateButtonGroup);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setContentsMargins(11, 11, 11, 11);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        createGapRadioButton = new QRadioButton(copiesCreateButtonGroup);
        createGapRadioButton->setObjectName(QString::fromUtf8("createGapRadioButton"));

        vboxLayout3->addWidget(createGapRadioButton);

        shiftCreatedItemsRadioButton = new QRadioButton(copiesCreateButtonGroup);
        shiftCreatedItemsRadioButton->setObjectName(QString::fromUtf8("shiftCreatedItemsRadioButton"));

        vboxLayout3->addWidget(shiftCreatedItemsRadioButton);


        vboxLayout2->addWidget(copiesCreateButtonGroup);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizShiftLabel = new QLabel(tab);
        horizShiftLabel->setObjectName(QString::fromUtf8("horizShiftLabel"));
        horizShiftLabel->setWordWrap(false);

        gridLayout->addWidget(horizShiftLabel, 0, 0, 1, 1);

        rotationSpinBox = new ScrSpinBox(tab);
        rotationSpinBox->setObjectName(QString::fromUtf8("rotationSpinBox"));
        rotationSpinBox->setMinimumSize(QSize(50, 24));

        gridLayout->addWidget(rotationSpinBox, 2, 1, 1, 1);

        vertShiftSpinBox = new ScrSpinBox(tab);
        vertShiftSpinBox->setObjectName(QString::fromUtf8("vertShiftSpinBox"));
        vertShiftSpinBox->setMinimumSize(QSize(50, 24));

        gridLayout->addWidget(vertShiftSpinBox, 1, 1, 1, 1);

        rotationLabel = new QLabel(tab);
        rotationLabel->setObjectName(QString::fromUtf8("rotationLabel"));
        rotationLabel->setWordWrap(false);

        gridLayout->addWidget(rotationLabel, 2, 0, 1, 1);

        horizShiftSpinBox = new ScrSpinBox(tab);
        horizShiftSpinBox->setObjectName(QString::fromUtf8("horizShiftSpinBox"));
        horizShiftSpinBox->setMinimumSize(QSize(50, 24));

        gridLayout->addWidget(horizShiftSpinBox, 0, 1, 1, 1);

        vertShiftLabel = new QLabel(tab);
        vertShiftLabel->setObjectName(QString::fromUtf8("vertShiftLabel"));
        vertShiftLabel->setWordWrap(false);

        gridLayout->addWidget(vertShiftLabel, 1, 0, 1, 1);


        vboxLayout2->addLayout(gridLayout);


        hboxLayout->addLayout(vboxLayout2);

        spacerItem = new QSpacerItem(10, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout);

        spacerItem1 = new QSpacerItem(5, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem1);

        tabWidget->addTab(tab, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        vboxLayout4 = new QVBoxLayout(tab2);
        vboxLayout4->setSpacing(6);
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(5);
        gridLayout1->setContentsMargins(5, 5, 5, 5);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        vertRCLabel = new QLabel(tab2);
        vertRCLabel->setObjectName(QString::fromUtf8("vertRCLabel"));
        vertRCLabel->setWordWrap(false);

        gridLayout1->addWidget(vertRCLabel, 3, 0, 1, 1);

        gridRowsSpinBox = new QSpinBox(tab2);
        gridRowsSpinBox->setObjectName(QString::fromUtf8("gridRowsSpinBox"));
        gridRowsSpinBox->setMinimum(1);

        gridLayout1->addWidget(gridRowsSpinBox, 0, 1, 1, 1);

        horizRCGapSpinBox = new ScrSpinBox(tab2);
        horizRCGapSpinBox->setObjectName(QString::fromUtf8("horizRCGapSpinBox"));
        horizRCGapSpinBox->setMinimumSize(QSize(50, 24));

        gridLayout1->addWidget(horizRCGapSpinBox, 2, 1, 1, 1);

        horizRCLabel = new QLabel(tab2);
        horizRCLabel->setObjectName(QString::fromUtf8("horizRCLabel"));
        horizRCLabel->setWordWrap(false);

        gridLayout1->addWidget(horizRCLabel, 2, 0, 1, 1);

        gridColsSpinBox = new QSpinBox(tab2);
        gridColsSpinBox->setObjectName(QString::fromUtf8("gridColsSpinBox"));
        gridColsSpinBox->setMinimum(1);

        gridLayout1->addWidget(gridColsSpinBox, 1, 1, 1, 1);

        numberOfRowsLabel = new QLabel(tab2);
        numberOfRowsLabel->setObjectName(QString::fromUtf8("numberOfRowsLabel"));
        numberOfRowsLabel->setWordWrap(false);

        gridLayout1->addWidget(numberOfRowsLabel, 0, 0, 1, 1);

        vertRCGapSpinBox = new ScrSpinBox(tab2);
        vertRCGapSpinBox->setObjectName(QString::fromUtf8("vertRCGapSpinBox"));
        vertRCGapSpinBox->setMinimumSize(QSize(50, 24));

        gridLayout1->addWidget(vertRCGapSpinBox, 3, 1, 1, 1);

        numberOfColumnsLabel = new QLabel(tab2);
        numberOfColumnsLabel->setObjectName(QString::fromUtf8("numberOfColumnsLabel"));
        numberOfColumnsLabel->setWordWrap(false);

        gridLayout1->addWidget(numberOfColumnsLabel, 1, 0, 1, 1);


        hboxLayout2->addLayout(gridLayout1);

        spacerItem2 = new QSpacerItem(5, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);


        vboxLayout4->addLayout(hboxLayout2);

        spacerItem3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        vboxLayout4->addItem(spacerItem3);

        tabWidget->addTab(tab2, QString());

        vboxLayout->addWidget(tabWidget);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem4);

        buttonOk = new QPushButton(MultipleDuplicate);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setAutoDefault(true);
        buttonOk->setDefault(true);

        hboxLayout3->addWidget(buttonOk);

        buttonCancel = new QPushButton(MultipleDuplicate);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout3->addWidget(buttonCancel);


        vboxLayout->addLayout(hboxLayout3);

#ifndef QT_NO_SHORTCUT
        numberOfCopiesLabel->setBuddy(numberOfCopiesSpinBox);
        horizShiftLabel->setBuddy(horizShiftSpinBox);
        vertShiftLabel->setBuddy(vertShiftSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget, numberOfCopiesSpinBox);
        QWidget::setTabOrder(numberOfCopiesSpinBox, shiftCreatedItemsRadioButton);
        QWidget::setTabOrder(shiftCreatedItemsRadioButton, createGapRadioButton);
        QWidget::setTabOrder(createGapRadioButton, gridRowsSpinBox);
        QWidget::setTabOrder(gridRowsSpinBox, gridColsSpinBox);
        QWidget::setTabOrder(gridColsSpinBox, buttonOk);
        QWidget::setTabOrder(buttonOk, buttonCancel);

        retranslateUi(MultipleDuplicate);
        QObject::connect(buttonOk, SIGNAL(clicked()), MultipleDuplicate, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), MultipleDuplicate, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MultipleDuplicate);
    } // setupUi

    void retranslateUi(QDialog *MultipleDuplicate)
    {
        MultipleDuplicate->setWindowTitle(QApplication::translate("MultipleDuplicate", "Multiple Duplicate", 0, QApplication::UnicodeUTF8));
        numberOfCopiesLabel->setText(QApplication::translate("MultipleDuplicate", "&Number of Copies:", 0, QApplication::UnicodeUTF8));
        copiesCreateButtonGroup->setTitle(QString());
        createGapRadioButton->setText(QApplication::translate("MultipleDuplicate", "Create &Gap Between Items Of", 0, QApplication::UnicodeUTF8));
        createGapRadioButton->setShortcut(QApplication::translate("MultipleDuplicate", "Alt+G", 0, QApplication::UnicodeUTF8));
        shiftCreatedItemsRadioButton->setText(QApplication::translate("MultipleDuplicate", "&Shift Created Items By", 0, QApplication::UnicodeUTF8));
        shiftCreatedItemsRadioButton->setShortcut(QApplication::translate("MultipleDuplicate", "Alt+S", 0, QApplication::UnicodeUTF8));
        horizShiftLabel->setText(QApplication::translate("MultipleDuplicate", "&Horizontal Shift:", 0, QApplication::UnicodeUTF8));
        rotationLabel->setText(QApplication::translate("MultipleDuplicate", "Rotation:", 0, QApplication::UnicodeUTF8));
        vertShiftLabel->setText(QApplication::translate("MultipleDuplicate", "&Vertical Shift:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MultipleDuplicate", "&By Number of Copies", 0, QApplication::UnicodeUTF8));
        vertRCLabel->setText(QApplication::translate("MultipleDuplicate", "Vertical Gap:", 0, QApplication::UnicodeUTF8));
        horizRCLabel->setText(QApplication::translate("MultipleDuplicate", "Horizontal Gap:", 0, QApplication::UnicodeUTF8));
        numberOfRowsLabel->setText(QApplication::translate("MultipleDuplicate", "Number of Rows:", 0, QApplication::UnicodeUTF8));
        numberOfColumnsLabel->setText(QApplication::translate("MultipleDuplicate", "Number of Columns:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("MultipleDuplicate", "By &Rows && Columns", 0, QApplication::UnicodeUTF8));
        buttonOk->setText(QApplication::translate("MultipleDuplicate", "&OK", 0, QApplication::UnicodeUTF8));
        buttonOk->setShortcut(QString());
        buttonCancel->setText(QApplication::translate("MultipleDuplicate", "&Cancel", 0, QApplication::UnicodeUTF8));
        buttonCancel->setShortcut(QString());
    } // retranslateUi

};

namespace Ui {
    class MultipleDuplicate: public Ui_MultipleDuplicate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPLEDUPLICATE_H
