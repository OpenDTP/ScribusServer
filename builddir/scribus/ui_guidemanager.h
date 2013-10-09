/*
Use designer to update source ui file. All manual changes in cpp/h files will be lost
*/

/********************************************************************************
** Form generated from reading UI file 'guidemanager.ui'
**
** Created: Sun Feb 24 21:37:25 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIDEMANAGER_H
#define UI_GUIDEMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
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
#include <QtGui/QTableView>
#include <QtGui/QWidget>
#include "scrpalettebase.h"
#include "scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_GuideManager
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *standardPage;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QGroupBox *horizontalGroupBox;
    QGridLayout *gridLayout2;
    QTableView *horizontalView;
    QPushButton *addHorButton;
    QPushButton *delHorButton;
    QGroupBox *verticalGroupBox;
    QGridLayout *gridLayout3;
    QTableView *verticalView;
    QPushButton *addVerButton;
    QPushButton *delVerButton;
    QCheckBox *lockCheck;
    QPushButton *applyToAllStdButton;
    QWidget *autoPage;
    QGridLayout *gridLayout4;
    QGroupBox *horizontalAutoGroup;
    QGridLayout *gridLayout5;
    QLabel *textLabel1;
    QSpinBox *horizontalAutoCountSpin;
    QCheckBox *horizontalAutoGapCheck;
    ScrSpinBox *horizontalAutoGapSpin;
    QGroupBox *groupBox;
    QGridLayout *gridLayout6;
    QRadioButton *horizontalPageAutoButton;
    QRadioButton *horizontalMarginsAutoButton;
    QRadioButton *horizontalSelectionAutoButton;
    QGroupBox *verticalAutoGroup;
    QGridLayout *gridLayout7;
    QLabel *textLabel1_2;
    QSpinBox *verticalAutoCountSpin;
    QCheckBox *verticalAutoGapCheck;
    ScrSpinBox *verticalAutoGapSpin;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout8;
    QRadioButton *verticalPageAutoButton;
    QRadioButton *verticalMarginsAutoButton;
    QRadioButton *verticalSelectionAutoButton;
    QPushButton *applyToAllAutoButton;
    QWidget *miscPage;
    QGridLayout *gridLayout9;
    QPushButton *deletePageButton;
    QPushButton *deleteAllGuides;
    QSpacerItem *spacerItem;

    void setupUi(ScrPaletteBase *GuideManager)
    {
        if (GuideManager->objectName().isEmpty())
            GuideManager->setObjectName(QString::fromUtf8("GuideManager"));
        GuideManager->resize(426, 389);
        gridLayout = new QGridLayout(GuideManager);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(GuideManager);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        standardPage = new QWidget();
        standardPage->setObjectName(QString::fromUtf8("standardPage"));
        gridLayout1 = new QGridLayout(standardPage);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        horizontalGroupBox = new QGroupBox(standardPage);
        horizontalGroupBox->setObjectName(QString::fromUtf8("horizontalGroupBox"));
        gridLayout2 = new QGridLayout(horizontalGroupBox);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        horizontalView = new QTableView(horizontalGroupBox);
        horizontalView->setObjectName(QString::fromUtf8("horizontalView"));
        horizontalView->setAlternatingRowColors(true);
        horizontalView->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout2->addWidget(horizontalView, 0, 0, 1, 2);

        addHorButton = new QPushButton(horizontalGroupBox);
        addHorButton->setObjectName(QString::fromUtf8("addHorButton"));

        gridLayout2->addWidget(addHorButton, 1, 0, 1, 1);

        delHorButton = new QPushButton(horizontalGroupBox);
        delHorButton->setObjectName(QString::fromUtf8("delHorButton"));

        gridLayout2->addWidget(delHorButton, 1, 1, 1, 1);


        hboxLayout->addWidget(horizontalGroupBox);

        verticalGroupBox = new QGroupBox(standardPage);
        verticalGroupBox->setObjectName(QString::fromUtf8("verticalGroupBox"));
        gridLayout3 = new QGridLayout(verticalGroupBox);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        verticalView = new QTableView(verticalGroupBox);
        verticalView->setObjectName(QString::fromUtf8("verticalView"));
        verticalView->setAlternatingRowColors(true);
        verticalView->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout3->addWidget(verticalView, 0, 0, 1, 2);

        addVerButton = new QPushButton(verticalGroupBox);
        addVerButton->setObjectName(QString::fromUtf8("addVerButton"));

        gridLayout3->addWidget(addVerButton, 1, 0, 1, 1);

        delVerButton = new QPushButton(verticalGroupBox);
        delVerButton->setObjectName(QString::fromUtf8("delVerButton"));

        gridLayout3->addWidget(delVerButton, 1, 1, 1, 1);


        hboxLayout->addWidget(verticalGroupBox);


        gridLayout1->addLayout(hboxLayout, 0, 0, 1, 2);

        lockCheck = new QCheckBox(standardPage);
        lockCheck->setObjectName(QString::fromUtf8("lockCheck"));

        gridLayout1->addWidget(lockCheck, 1, 0, 1, 1);

        applyToAllStdButton = new QPushButton(standardPage);
        applyToAllStdButton->setObjectName(QString::fromUtf8("applyToAllStdButton"));

        gridLayout1->addWidget(applyToAllStdButton, 1, 1, 1, 1);

        tabWidget->addTab(standardPage, QString());
        autoPage = new QWidget();
        autoPage->setObjectName(QString::fromUtf8("autoPage"));
        gridLayout4 = new QGridLayout(autoPage);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(11, 11, 11, 11);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        horizontalAutoGroup = new QGroupBox(autoPage);
        horizontalAutoGroup->setObjectName(QString::fromUtf8("horizontalAutoGroup"));
        gridLayout5 = new QGridLayout(horizontalAutoGroup);
        gridLayout5->setSpacing(6);
        gridLayout5->setContentsMargins(11, 11, 11, 11);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        textLabel1 = new QLabel(horizontalAutoGroup);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout5->addWidget(textLabel1, 0, 0, 1, 1);

        horizontalAutoCountSpin = new QSpinBox(horizontalAutoGroup);
        horizontalAutoCountSpin->setObjectName(QString::fromUtf8("horizontalAutoCountSpin"));
        horizontalAutoCountSpin->setMinimum(0);
        horizontalAutoCountSpin->setValue(0);

        gridLayout5->addWidget(horizontalAutoCountSpin, 0, 1, 1, 1);

        horizontalAutoGapCheck = new QCheckBox(horizontalAutoGroup);
        horizontalAutoGapCheck->setObjectName(QString::fromUtf8("horizontalAutoGapCheck"));

        gridLayout5->addWidget(horizontalAutoGapCheck, 1, 0, 1, 2);

        horizontalAutoGapSpin = new ScrSpinBox(horizontalAutoGroup);
        horizontalAutoGapSpin->setObjectName(QString::fromUtf8("horizontalAutoGapSpin"));

        gridLayout5->addWidget(horizontalAutoGapSpin, 2, 0, 1, 2);

        groupBox = new QGroupBox(horizontalAutoGroup);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout6 = new QGridLayout(groupBox);
        gridLayout6->setSpacing(6);
        gridLayout6->setContentsMargins(11, 11, 11, 11);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        horizontalPageAutoButton = new QRadioButton(groupBox);
        horizontalPageAutoButton->setObjectName(QString::fromUtf8("horizontalPageAutoButton"));
        horizontalPageAutoButton->setChecked(true);

        gridLayout6->addWidget(horizontalPageAutoButton, 0, 0, 1, 1);

        horizontalMarginsAutoButton = new QRadioButton(groupBox);
        horizontalMarginsAutoButton->setObjectName(QString::fromUtf8("horizontalMarginsAutoButton"));

        gridLayout6->addWidget(horizontalMarginsAutoButton, 1, 0, 1, 1);

        horizontalSelectionAutoButton = new QRadioButton(groupBox);
        horizontalSelectionAutoButton->setObjectName(QString::fromUtf8("horizontalSelectionAutoButton"));

        gridLayout6->addWidget(horizontalSelectionAutoButton, 2, 0, 1, 1);


        gridLayout5->addWidget(groupBox, 3, 0, 1, 2);


        gridLayout4->addWidget(horizontalAutoGroup, 0, 0, 1, 1);

        verticalAutoGroup = new QGroupBox(autoPage);
        verticalAutoGroup->setObjectName(QString::fromUtf8("verticalAutoGroup"));
        gridLayout7 = new QGridLayout(verticalAutoGroup);
        gridLayout7->setSpacing(6);
        gridLayout7->setContentsMargins(11, 11, 11, 11);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        textLabel1_2 = new QLabel(verticalAutoGroup);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setWordWrap(false);

        gridLayout7->addWidget(textLabel1_2, 0, 0, 1, 1);

        verticalAutoCountSpin = new QSpinBox(verticalAutoGroup);
        verticalAutoCountSpin->setObjectName(QString::fromUtf8("verticalAutoCountSpin"));
        verticalAutoCountSpin->setMinimum(0);
        verticalAutoCountSpin->setValue(0);

        gridLayout7->addWidget(verticalAutoCountSpin, 0, 1, 1, 1);

        verticalAutoGapCheck = new QCheckBox(verticalAutoGroup);
        verticalAutoGapCheck->setObjectName(QString::fromUtf8("verticalAutoGapCheck"));

        gridLayout7->addWidget(verticalAutoGapCheck, 1, 0, 1, 2);

        verticalAutoGapSpin = new ScrSpinBox(verticalAutoGroup);
        verticalAutoGapSpin->setObjectName(QString::fromUtf8("verticalAutoGapSpin"));

        gridLayout7->addWidget(verticalAutoGapSpin, 2, 0, 1, 2);

        groupBox_2 = new QGroupBox(verticalAutoGroup);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout8 = new QGridLayout(groupBox_2);
        gridLayout8->setSpacing(6);
        gridLayout8->setContentsMargins(11, 11, 11, 11);
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        verticalPageAutoButton = new QRadioButton(groupBox_2);
        verticalPageAutoButton->setObjectName(QString::fromUtf8("verticalPageAutoButton"));
        verticalPageAutoButton->setChecked(true);

        gridLayout8->addWidget(verticalPageAutoButton, 0, 0, 1, 1);

        verticalMarginsAutoButton = new QRadioButton(groupBox_2);
        verticalMarginsAutoButton->setObjectName(QString::fromUtf8("verticalMarginsAutoButton"));

        gridLayout8->addWidget(verticalMarginsAutoButton, 1, 0, 1, 1);

        verticalSelectionAutoButton = new QRadioButton(groupBox_2);
        verticalSelectionAutoButton->setObjectName(QString::fromUtf8("verticalSelectionAutoButton"));

        gridLayout8->addWidget(verticalSelectionAutoButton, 2, 0, 1, 1);


        gridLayout7->addWidget(groupBox_2, 3, 0, 1, 2);


        gridLayout4->addWidget(verticalAutoGroup, 0, 1, 1, 1);

        applyToAllAutoButton = new QPushButton(autoPage);
        applyToAllAutoButton->setObjectName(QString::fromUtf8("applyToAllAutoButton"));

        gridLayout4->addWidget(applyToAllAutoButton, 1, 0, 1, 2);

        tabWidget->addTab(autoPage, QString());
        miscPage = new QWidget();
        miscPage->setObjectName(QString::fromUtf8("miscPage"));
        gridLayout9 = new QGridLayout(miscPage);
        gridLayout9->setSpacing(6);
        gridLayout9->setContentsMargins(11, 11, 11, 11);
        gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
        deletePageButton = new QPushButton(miscPage);
        deletePageButton->setObjectName(QString::fromUtf8("deletePageButton"));

        gridLayout9->addWidget(deletePageButton, 0, 0, 1, 1);

        deleteAllGuides = new QPushButton(miscPage);
        deleteAllGuides->setObjectName(QString::fromUtf8("deleteAllGuides"));

        gridLayout9->addWidget(deleteAllGuides, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout9->addItem(spacerItem, 2, 0, 1, 1);

        tabWidget->addTab(miscPage, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabel1->setBuddy(horizontalAutoCountSpin);
        textLabel1_2->setBuddy(verticalAutoCountSpin);
#endif // QT_NO_SHORTCUT

        retranslateUi(GuideManager);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GuideManager);
    } // setupUi

    void retranslateUi(ScrPaletteBase *GuideManager)
    {
        GuideManager->setWindowTitle(QApplication::translate("GuideManager", "Guide Manager", 0, QApplication::UnicodeUTF8));
        horizontalGroupBox->setTitle(QApplication::translate("GuideManager", "Horizontals", 0, QApplication::UnicodeUTF8));
        addHorButton->setText(QApplication::translate("GuideManager", "&Add", 0, QApplication::UnicodeUTF8));
        addHorButton->setShortcut(QApplication::translate("GuideManager", "Alt+A", 0, QApplication::UnicodeUTF8));
        delHorButton->setText(QApplication::translate("GuideManager", "D&elete", 0, QApplication::UnicodeUTF8));
        delHorButton->setShortcut(QApplication::translate("GuideManager", "Alt+E", 0, QApplication::UnicodeUTF8));
        verticalGroupBox->setTitle(QApplication::translate("GuideManager", "Verticals", 0, QApplication::UnicodeUTF8));
        addVerButton->setText(QApplication::translate("GuideManager", "A&dd", 0, QApplication::UnicodeUTF8));
        addVerButton->setShortcut(QApplication::translate("GuideManager", "Alt+D", 0, QApplication::UnicodeUTF8));
        delVerButton->setText(QApplication::translate("GuideManager", "De&lete", 0, QApplication::UnicodeUTF8));
        delVerButton->setShortcut(QApplication::translate("GuideManager", "Alt+L", 0, QApplication::UnicodeUTF8));
        lockCheck->setText(QApplication::translate("GuideManager", "&Lock Guides", 0, QApplication::UnicodeUTF8));
        lockCheck->setShortcut(QApplication::translate("GuideManager", "Alt+L", 0, QApplication::UnicodeUTF8));
        applyToAllStdButton->setText(QApplication::translate("GuideManager", "Appl&y to All Pages", 0, QApplication::UnicodeUTF8));
        applyToAllStdButton->setShortcut(QApplication::translate("GuideManager", "Alt+Y", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(standardPage), QApplication::translate("GuideManager", "&Single", 0, QApplication::UnicodeUTF8));
        horizontalAutoGroup->setTitle(QApplication::translate("GuideManager", "Horizontals", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("GuideManager", "&Number:", 0, QApplication::UnicodeUTF8));
        horizontalAutoGapCheck->setText(QApplication::translate("GuideManager", "U&se Gap:", 0, QApplication::UnicodeUTF8));
        horizontalAutoGapCheck->setShortcut(QApplication::translate("GuideManager", "Alt+S", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("GuideManager", "Refer to", 0, QApplication::UnicodeUTF8));
        horizontalPageAutoButton->setText(QApplication::translate("GuideManager", "&Page", 0, QApplication::UnicodeUTF8));
        horizontalPageAutoButton->setShortcut(QApplication::translate("GuideManager", "Alt+P", 0, QApplication::UnicodeUTF8));
        horizontalMarginsAutoButton->setText(QApplication::translate("GuideManager", "M&argins", 0, QApplication::UnicodeUTF8));
        horizontalMarginsAutoButton->setShortcut(QApplication::translate("GuideManager", "Alt+A", 0, QApplication::UnicodeUTF8));
        horizontalSelectionAutoButton->setText(QApplication::translate("GuideManager", "S&election", 0, QApplication::UnicodeUTF8));
        horizontalSelectionAutoButton->setShortcut(QApplication::translate("GuideManager", "Alt+E", 0, QApplication::UnicodeUTF8));
        verticalAutoGroup->setTitle(QApplication::translate("GuideManager", "Verticals", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("GuideManager", "Nu&mber:", 0, QApplication::UnicodeUTF8));
        verticalAutoGapCheck->setText(QApplication::translate("GuideManager", "Use &Gap:", 0, QApplication::UnicodeUTF8));
        verticalAutoGapCheck->setShortcut(QApplication::translate("GuideManager", "Alt+G", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("GuideManager", "Refer to", 0, QApplication::UnicodeUTF8));
        verticalPageAutoButton->setText(QApplication::translate("GuideManager", "&Page", 0, QApplication::UnicodeUTF8));
        verticalPageAutoButton->setShortcut(QApplication::translate("GuideManager", "Alt+P", 0, QApplication::UnicodeUTF8));
        verticalMarginsAutoButton->setText(QApplication::translate("GuideManager", "M&argins", 0, QApplication::UnicodeUTF8));
        verticalMarginsAutoButton->setShortcut(QApplication::translate("GuideManager", "Alt+A", 0, QApplication::UnicodeUTF8));
        verticalSelectionAutoButton->setText(QApplication::translate("GuideManager", "S&election", 0, QApplication::UnicodeUTF8));
        verticalSelectionAutoButton->setShortcut(QApplication::translate("GuideManager", "Alt+E", 0, QApplication::UnicodeUTF8));
        applyToAllAutoButton->setText(QApplication::translate("GuideManager", "Appl&y to All Pages", 0, QApplication::UnicodeUTF8));
        applyToAllAutoButton->setShortcut(QApplication::translate("GuideManager", "Alt+Y", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(autoPage), QApplication::translate("GuideManager", "&Column/Row", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        deletePageButton->setToolTip(QApplication::translate("GuideManager", "Delete all guides from the current page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        deletePageButton->setText(QApplication::translate("GuideManager", "Delete Guides from Current &Page", 0, QApplication::UnicodeUTF8));
        deletePageButton->setShortcut(QApplication::translate("GuideManager", "Alt+P", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        deleteAllGuides->setToolTip(QApplication::translate("GuideManager", "Delete all guides from the current document", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        deleteAllGuides->setText(QApplication::translate("GuideManager", "Delete Guides from &All Pages", 0, QApplication::UnicodeUTF8));
        deleteAllGuides->setShortcut(QApplication::translate("GuideManager", "Alt+A", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(miscPage), QApplication::translate("GuideManager", "&Misc", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GuideManager: public Ui_GuideManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIDEMANAGER_H
