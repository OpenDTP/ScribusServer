/********************************************************************************
** Form generated from reading UI file 'hysettingsBase.ui'
**
** Created: Sun Feb 24 21:37:26 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HYSETTINGSBASE_H
#define UI_HYSETTINGSBASE_H

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
#include <QtGui/QListWidget>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hysettingsBase
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *hyphenationTab;
    QGridLayout *hyphGridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout;
    QCheckBox *verbose;
    QCheckBox *input;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout1;
    QLabel *label;
    QComboBox *language;
    QLabel *label_2;
    QSpinBox *wordLen;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *maxCount;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QListWidget *exceptList;
    QPushButton *buttonExceptAdd;
    QPushButton *buttonExceptEdit;
    QPushButton *buttonExceptRemove;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout3;
    QListWidget *ignoreList;
    QPushButton *buttonIgnoreAdd;
    QPushButton *buttonIgnoreEdit;
    QPushButton *buttonIgnoreRemove;
    QSpacerItem *spacerItem1;
    QWidget *spellingTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QTableWidget *dictTableWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QTableWidget *availDictTableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *dlLabel;
    QProgressBar *downloadProgressBar;
    QSpacerItem *horizontalSpacer;
    QPushButton *availListDownloadButton;
    QPushButton *spellDownloadButton;

    void setupUi(QWidget *hysettingsBase)
    {
        if (hysettingsBase->objectName().isEmpty())
            hysettingsBase->setObjectName(QString::fromUtf8("hysettingsBase"));
        hysettingsBase->resize(724, 445);
        gridLayout = new QGridLayout(hysettingsBase);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(hysettingsBase);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        hyphenationTab = new QWidget();
        hyphenationTab->setObjectName(QString::fromUtf8("hyphenationTab"));
        hyphGridLayout = new QGridLayout(hyphenationTab);
        hyphGridLayout->setSpacing(5);
        hyphGridLayout->setContentsMargins(10, 10, 10, 10);
        hyphGridLayout->setObjectName(QString::fromUtf8("hyphGridLayout"));
        groupBox = new QGroupBox(hyphenationTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(groupBox);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        verbose = new QCheckBox(groupBox);
        verbose->setObjectName(QString::fromUtf8("verbose"));

        vboxLayout->addWidget(verbose);

        input = new QCheckBox(groupBox);
        input->setObjectName(QString::fromUtf8("input"));

        vboxLayout->addWidget(input);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        vboxLayout->addItem(verticalSpacer);


        hyphGridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(hyphenationTab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        gridLayout1 = new QGridLayout(groupBox_4);
        gridLayout1->setSpacing(5);
        gridLayout1->setContentsMargins(10, 10, 10, 10);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        language = new QComboBox(groupBox_4);
        language->setObjectName(QString::fromUtf8("language"));

        gridLayout1->addWidget(language, 0, 1, 1, 3);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        wordLen = new QSpinBox(groupBox_4);
        wordLen->setObjectName(QString::fromUtf8("wordLen"));
        wordLen->setMinimum(3);

        gridLayout1->addWidget(wordLen, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 1, 2, 1, 2);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(false);

        gridLayout1->addWidget(label_4, 2, 0, 1, 3);

        maxCount = new QSpinBox(groupBox_4);
        maxCount->setObjectName(QString::fromUtf8("maxCount"));

        gridLayout1->addWidget(maxCount, 2, 3, 1, 1);


        hyphGridLayout->addWidget(groupBox_4, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(hyphenationTab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout2 = new QGridLayout(groupBox_2);
        gridLayout2->setSpacing(5);
        gridLayout2->setContentsMargins(10, 10, 10, 10);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        exceptList = new QListWidget(groupBox_2);
        exceptList->setObjectName(QString::fromUtf8("exceptList"));

        gridLayout2->addWidget(exceptList, 0, 0, 1, 4);

        buttonExceptAdd = new QPushButton(groupBox_2);
        buttonExceptAdd->setObjectName(QString::fromUtf8("buttonExceptAdd"));

        gridLayout2->addWidget(buttonExceptAdd, 1, 0, 1, 1);

        buttonExceptEdit = new QPushButton(groupBox_2);
        buttonExceptEdit->setObjectName(QString::fromUtf8("buttonExceptEdit"));

        gridLayout2->addWidget(buttonExceptEdit, 1, 1, 1, 1);

        buttonExceptRemove = new QPushButton(groupBox_2);
        buttonExceptRemove->setObjectName(QString::fromUtf8("buttonExceptRemove"));

        gridLayout2->addWidget(buttonExceptRemove, 1, 2, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem, 1, 3, 1, 1);


        hyphGridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(hyphenationTab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        gridLayout3 = new QGridLayout(groupBox_3);
        gridLayout3->setSpacing(5);
        gridLayout3->setContentsMargins(10, 10, 10, 10);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        ignoreList = new QListWidget(groupBox_3);
        ignoreList->setObjectName(QString::fromUtf8("ignoreList"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ignoreList->sizePolicy().hasHeightForWidth());
        ignoreList->setSizePolicy(sizePolicy1);

        gridLayout3->addWidget(ignoreList, 0, 0, 1, 4);

        buttonIgnoreAdd = new QPushButton(groupBox_3);
        buttonIgnoreAdd->setObjectName(QString::fromUtf8("buttonIgnoreAdd"));

        gridLayout3->addWidget(buttonIgnoreAdd, 1, 0, 1, 1);

        buttonIgnoreEdit = new QPushButton(groupBox_3);
        buttonIgnoreEdit->setObjectName(QString::fromUtf8("buttonIgnoreEdit"));

        gridLayout3->addWidget(buttonIgnoreEdit, 1, 1, 1, 1);

        buttonIgnoreRemove = new QPushButton(groupBox_3);
        buttonIgnoreRemove->setObjectName(QString::fromUtf8("buttonIgnoreRemove"));

        gridLayout3->addWidget(buttonIgnoreRemove, 1, 2, 1, 1);

        spacerItem1 = new QSpacerItem(21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem1, 1, 3, 1, 1);


        hyphGridLayout->addWidget(groupBox_3, 1, 1, 1, 1);

        tabWidget->addTab(hyphenationTab, QString());
        spellingTab = new QWidget();
        spellingTab->setObjectName(QString::fromUtf8("spellingTab"));
        verticalLayout_3 = new QVBoxLayout(spellingTab);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setContentsMargins(10, 10, 10, 10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(spellingTab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        dictTableWidget = new QTableWidget(spellingTab);
        dictTableWidget->setObjectName(QString::fromUtf8("dictTableWidget"));
        dictTableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(dictTableWidget);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(spellingTab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        availDictTableWidget = new QTableWidget(spellingTab);
        availDictTableWidget->setObjectName(QString::fromUtf8("availDictTableWidget"));
        availDictTableWidget->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(availDictTableWidget);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        dlLabel = new QLabel(spellingTab);
        dlLabel->setObjectName(QString::fromUtf8("dlLabel"));

        horizontalLayout->addWidget(dlLabel);

        downloadProgressBar = new QProgressBar(spellingTab);
        downloadProgressBar->setObjectName(QString::fromUtf8("downloadProgressBar"));
        downloadProgressBar->setValue(0);
        downloadProgressBar->setTextVisible(true);
        downloadProgressBar->setInvertedAppearance(false);

        horizontalLayout->addWidget(downloadProgressBar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        availListDownloadButton = new QPushButton(spellingTab);
        availListDownloadButton->setObjectName(QString::fromUtf8("availListDownloadButton"));

        horizontalLayout->addWidget(availListDownloadButton);

        spellDownloadButton = new QPushButton(spellingTab);
        spellDownloadButton->setObjectName(QString::fromUtf8("spellDownloadButton"));

        horizontalLayout->addWidget(spellDownloadButton);


        verticalLayout_3->addLayout(horizontalLayout);

        tabWidget->addTab(spellingTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(language);
        label_2->setBuddy(wordLen);
        label_4->setBuddy(maxCount);
#endif // QT_NO_SHORTCUT

        retranslateUi(hysettingsBase);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(hysettingsBase);
    } // setupUi

    void retranslateUi(QWidget *hysettingsBase)
    {
        hysettingsBase->setWindowTitle(QApplication::translate("hysettingsBase", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("hysettingsBase", "General Options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        verbose->setToolTip(QApplication::translate("hysettingsBase", "A dialog box showing all possible hyphens for each word will show up when you use the Extras, Hyphenate Text option.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        verbose->setText(QApplication::translate("hysettingsBase", "&Hyphenation Suggestions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        input->setToolTip(QApplication::translate("hysettingsBase", "Enables automatic hyphenation of your text while typing.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        input->setText(QApplication::translate("hysettingsBase", "Hyphenate Text Automatically &During Typing", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("hysettingsBase", "Behaviour", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("hysettingsBase", "&Language:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("hysettingsBase", "&Smallest Word:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        wordLen->setToolTip(QApplication::translate("hysettingsBase", "Length of the smallest word to be hyphenated.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("hysettingsBase", "Chars", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("hysettingsBase", "Consecutive Hyphenations &Allowed:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        maxCount->setToolTip(QApplication::translate("hysettingsBase", "Maximum number of Hyphenations following each other.\n"
"A value of 0 means unlimited hyphenations.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_2->setTitle(QApplication::translate("hysettingsBase", "Exceptions", 0, QApplication::UnicodeUTF8));
        buttonExceptAdd->setText(QString());
        buttonExceptEdit->setText(QApplication::translate("hysettingsBase", "Edit", 0, QApplication::UnicodeUTF8));
        buttonExceptRemove->setText(QString());
        groupBox_3->setTitle(QApplication::translate("hysettingsBase", "Ignore List", 0, QApplication::UnicodeUTF8));
        buttonIgnoreAdd->setText(QString());
        buttonIgnoreEdit->setText(QApplication::translate("hysettingsBase", "Edit", 0, QApplication::UnicodeUTF8));
        buttonIgnoreRemove->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(hyphenationTab), QApplication::translate("hysettingsBase", "Hyphenation", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("hysettingsBase", "Installed Spelling Dictionaries", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("hysettingsBase", "Downloadable Spelling Dictionaries", 0, QApplication::UnicodeUTF8));
        dlLabel->setText(QApplication::translate("hysettingsBase", "Downloading", 0, QApplication::UnicodeUTF8));
        availListDownloadButton->setText(QApplication::translate("hysettingsBase", "Refresh Downloadable List", 0, QApplication::UnicodeUTF8));
        spellDownloadButton->setText(QApplication::translate("hysettingsBase", "Download Selected Dictionaries", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(spellingTab), QApplication::translate("hysettingsBase", "Spelling", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class hysettingsBase: public Ui_hysettingsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HYSETTINGSBASE_H
