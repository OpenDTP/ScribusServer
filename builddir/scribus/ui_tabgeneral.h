/*
General prefs panel
*/

/********************************************************************************
** Form generated from reading UI file 'tabgeneral.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABGENERAL_H
#define UI_TABGENERAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabGeneral
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout1;
    QLabel *textLabel1;
    QComboBox *guiLangCombo;
    QLabel *textLabel5;
    QSpinBox *wheelJumpSpin;
    QLabel *textLabel2;
    QComboBox *GUICombo;
    QLabel *textLabel6;
    QSpinBox *recentDocs;
    QLabel *textLabel4;
    QSpinBox *GFsize;
    QSpacerItem *spacerItem;
    QCheckBox *startUpDialog;
    QLabel *textLabel4_2;
    QSpinBox *GTFsize;
    QCheckBox *showSplashCheckBox;
    QLabel *textLabel3;
    QSpinBox *spinTimeout;
    QCheckBox *useSmallWidgetsCheck;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout2;
    QLineEdit *ScriptPfad;
    QLineEdit *Docs;
    QLineEdit *ProPfad;
    QPushButton *FileC;
    QPushButton *FileC2;
    QLabel *textLabel9;
    QLineEdit *DocumentTemplateDir;
    QPushButton *FileC4;
    QLabel *textLabel8;
    QLabel *textLabel7;
    QLabel *textLabel10;
    QPushButton *FileC3;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *TabGeneral)
    {
        if (TabGeneral->objectName().isEmpty())
            TabGeneral->setObjectName(QString::fromUtf8("TabGeneral"));
        TabGeneral->resize(631, 518);
        gridLayout = new QGridLayout(TabGeneral);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox1 = new QGroupBox(TabGeneral);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        gridLayout1 = new QGridLayout(groupBox1);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        textLabel1 = new QLabel(groupBox1);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout1->addWidget(textLabel1, 0, 0, 1, 1);

        guiLangCombo = new QComboBox(groupBox1);
        guiLangCombo->setObjectName(QString::fromUtf8("guiLangCombo"));

        gridLayout1->addWidget(guiLangCombo, 0, 1, 1, 2);

        textLabel5 = new QLabel(groupBox1);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
        textLabel5->setWordWrap(false);

        gridLayout1->addWidget(textLabel5, 0, 4, 1, 1);

        wheelJumpSpin = new QSpinBox(groupBox1);
        wheelJumpSpin->setObjectName(QString::fromUtf8("wheelJumpSpin"));

        gridLayout1->addWidget(wheelJumpSpin, 0, 5, 1, 1);

        textLabel2 = new QLabel(groupBox1);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        gridLayout1->addWidget(textLabel2, 1, 0, 1, 1);

        GUICombo = new QComboBox(groupBox1);
        GUICombo->setObjectName(QString::fromUtf8("GUICombo"));

        gridLayout1->addWidget(GUICombo, 1, 1, 1, 2);

        textLabel6 = new QLabel(groupBox1);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        textLabel6->setWordWrap(false);

        gridLayout1->addWidget(textLabel6, 1, 4, 1, 1);

        recentDocs = new QSpinBox(groupBox1);
        recentDocs->setObjectName(QString::fromUtf8("recentDocs"));

        gridLayout1->addWidget(recentDocs, 1, 5, 1, 1);

        textLabel4 = new QLabel(groupBox1);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
        textLabel4->setWordWrap(false);

        gridLayout1->addWidget(textLabel4, 2, 0, 1, 2);

        GFsize = new QSpinBox(groupBox1);
        GFsize->setObjectName(QString::fromUtf8("GFsize"));

        gridLayout1->addWidget(GFsize, 2, 2, 1, 1);

        spacerItem = new QSpacerItem(4, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 2, 3, 2, 1);

        startUpDialog = new QCheckBox(groupBox1);
        startUpDialog->setObjectName(QString::fromUtf8("startUpDialog"));

        gridLayout1->addWidget(startUpDialog, 2, 4, 1, 2);

        textLabel4_2 = new QLabel(groupBox1);
        textLabel4_2->setObjectName(QString::fromUtf8("textLabel4_2"));
        textLabel4_2->setWordWrap(false);

        gridLayout1->addWidget(textLabel4_2, 3, 0, 1, 2);

        GTFsize = new QSpinBox(groupBox1);
        GTFsize->setObjectName(QString::fromUtf8("GTFsize"));

        gridLayout1->addWidget(GTFsize, 3, 2, 1, 1);

        showSplashCheckBox = new QCheckBox(groupBox1);
        showSplashCheckBox->setObjectName(QString::fromUtf8("showSplashCheckBox"));

        gridLayout1->addWidget(showSplashCheckBox, 3, 4, 1, 2);

        textLabel3 = new QLabel(groupBox1);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(true);

        gridLayout1->addWidget(textLabel3, 4, 0, 1, 2);

        spinTimeout = new QSpinBox(groupBox1);
        spinTimeout->setObjectName(QString::fromUtf8("spinTimeout"));
        spinTimeout->setMinimum(10);
        spinTimeout->setMaximum(1500);
        spinTimeout->setSingleStep(10);
        spinTimeout->setValue(150);

        gridLayout1->addWidget(spinTimeout, 4, 2, 1, 1);

        useSmallWidgetsCheck = new QCheckBox(groupBox1);
        useSmallWidgetsCheck->setObjectName(QString::fromUtf8("useSmallWidgetsCheck"));

        gridLayout1->addWidget(useSmallWidgetsCheck, 4, 4, 1, 2);

        spacerItem1 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem1, 5, 0, 1, 1);

        spacerItem2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem2, 5, 4, 1, 2);


        gridLayout->addWidget(groupBox1, 0, 0, 1, 1);

        groupBox2 = new QGroupBox(TabGeneral);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        gridLayout2 = new QGridLayout(groupBox2);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        ScriptPfad = new QLineEdit(groupBox2);
        ScriptPfad->setObjectName(QString::fromUtf8("ScriptPfad"));
        ScriptPfad->setMinimumSize(QSize(268, 0));

        gridLayout2->addWidget(ScriptPfad, 2, 1, 1, 1);

        Docs = new QLineEdit(groupBox2);
        Docs->setObjectName(QString::fromUtf8("Docs"));
        Docs->setMinimumSize(QSize(268, 0));

        gridLayout2->addWidget(Docs, 0, 1, 1, 1);

        ProPfad = new QLineEdit(groupBox2);
        ProPfad->setObjectName(QString::fromUtf8("ProPfad"));
        ProPfad->setMinimumSize(QSize(268, 0));

        gridLayout2->addWidget(ProPfad, 1, 1, 1, 1);

        FileC = new QPushButton(groupBox2);
        FileC->setObjectName(QString::fromUtf8("FileC"));
        FileC->setMinimumSize(QSize(88, 0));

        gridLayout2->addWidget(FileC, 0, 2, 1, 1);

        FileC2 = new QPushButton(groupBox2);
        FileC2->setObjectName(QString::fromUtf8("FileC2"));

        gridLayout2->addWidget(FileC2, 1, 2, 1, 1);

        textLabel9 = new QLabel(groupBox2);
        textLabel9->setObjectName(QString::fromUtf8("textLabel9"));
        textLabel9->setWordWrap(false);

        gridLayout2->addWidget(textLabel9, 2, 0, 1, 1);

        DocumentTemplateDir = new QLineEdit(groupBox2);
        DocumentTemplateDir->setObjectName(QString::fromUtf8("DocumentTemplateDir"));
        DocumentTemplateDir->setMinimumSize(QSize(268, 0));

        gridLayout2->addWidget(DocumentTemplateDir, 3, 1, 1, 1);

        FileC4 = new QPushButton(groupBox2);
        FileC4->setObjectName(QString::fromUtf8("FileC4"));

        gridLayout2->addWidget(FileC4, 3, 2, 1, 1);

        textLabel8 = new QLabel(groupBox2);
        textLabel8->setObjectName(QString::fromUtf8("textLabel8"));
        textLabel8->setWordWrap(false);

        gridLayout2->addWidget(textLabel8, 1, 0, 1, 1);

        textLabel7 = new QLabel(groupBox2);
        textLabel7->setObjectName(QString::fromUtf8("textLabel7"));
        textLabel7->setWordWrap(false);

        gridLayout2->addWidget(textLabel7, 0, 0, 1, 1);

        textLabel10 = new QLabel(groupBox2);
        textLabel10->setObjectName(QString::fromUtf8("textLabel10"));
        textLabel10->setWordWrap(false);

        gridLayout2->addWidget(textLabel10, 3, 0, 1, 1);

        FileC3 = new QPushButton(groupBox2);
        FileC3->setObjectName(QString::fromUtf8("FileC3"));

        gridLayout2->addWidget(FileC3, 2, 2, 1, 1);


        gridLayout->addWidget(groupBox2, 1, 0, 1, 1);

        spacerItem3 = new QSpacerItem(51, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem3, 2, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabel1->setBuddy(guiLangCombo);
        textLabel5->setBuddy(wheelJumpSpin);
        textLabel2->setBuddy(GUICombo);
        textLabel6->setBuddy(recentDocs);
        textLabel4->setBuddy(GFsize);
        textLabel4_2->setBuddy(GTFsize);
        textLabel3->setBuddy(showSplashCheckBox);
        textLabel9->setBuddy(ScriptPfad);
        textLabel8->setBuddy(ProPfad);
        textLabel7->setBuddy(Docs);
        textLabel10->setBuddy(DocumentTemplateDir);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(guiLangCombo, GUICombo);
        QWidget::setTabOrder(GUICombo, GFsize);
        QWidget::setTabOrder(GFsize, GTFsize);
        QWidget::setTabOrder(GTFsize, spinTimeout);
        QWidget::setTabOrder(spinTimeout, wheelJumpSpin);
        QWidget::setTabOrder(wheelJumpSpin, recentDocs);
        QWidget::setTabOrder(recentDocs, startUpDialog);
        QWidget::setTabOrder(startUpDialog, showSplashCheckBox);
        QWidget::setTabOrder(showSplashCheckBox, useSmallWidgetsCheck);
        QWidget::setTabOrder(useSmallWidgetsCheck, Docs);
        QWidget::setTabOrder(Docs, FileC);
        QWidget::setTabOrder(FileC, ProPfad);
        QWidget::setTabOrder(ProPfad, FileC2);
        QWidget::setTabOrder(FileC2, ScriptPfad);
        QWidget::setTabOrder(ScriptPfad, FileC3);
        QWidget::setTabOrder(FileC3, DocumentTemplateDir);
        QWidget::setTabOrder(DocumentTemplateDir, FileC4);

        retranslateUi(TabGeneral);

        QMetaObject::connectSlotsByName(TabGeneral);
    } // setupUi

    void retranslateUi(QWidget *TabGeneral)
    {
        TabGeneral->setWindowTitle(QApplication::translate("TabGeneral", "TabGeneralBase", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QApplication::translate("TabGeneral", "User Interface", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("TabGeneral", "&Language:", 0, QApplication::UnicodeUTF8));
        textLabel5->setText(QApplication::translate("TabGeneral", "&Wheel Jump:", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("TabGeneral", "&Theme:", 0, QApplication::UnicodeUTF8));
        textLabel6->setText(QApplication::translate("TabGeneral", "&Recent Documents:", 0, QApplication::UnicodeUTF8));
        textLabel4->setText(QApplication::translate("TabGeneral", "&Font Size (Menus):", 0, QApplication::UnicodeUTF8));
        GFsize->setSuffix(QApplication::translate("TabGeneral", " pt", 0, QApplication::UnicodeUTF8));
        startUpDialog->setText(QApplication::translate("TabGeneral", "Show Startup Dialog", 0, QApplication::UnicodeUTF8));
        textLabel4_2->setText(QApplication::translate("TabGeneral", "Font Size (&Palettes):", 0, QApplication::UnicodeUTF8));
        GTFsize->setSuffix(QApplication::translate("TabGeneral", " pt", 0, QApplication::UnicodeUTF8));
        showSplashCheckBox->setText(QApplication::translate("TabGeneral", "Show Splashscreen on Startup", 0, QApplication::UnicodeUTF8));
        showSplashCheckBox->setShortcut(QString());
        textLabel3->setText(QApplication::translate("TabGeneral", "Time before a Move or Resize starts:", 0, QApplication::UnicodeUTF8));
        spinTimeout->setSuffix(QApplication::translate("TabGeneral", " ms", 0, QApplication::UnicodeUTF8));
        useSmallWidgetsCheck->setText(QApplication::translate("TabGeneral", "Use Small Widgets in Palettes", 0, QApplication::UnicodeUTF8));
        groupBox2->setTitle(QApplication::translate("TabGeneral", "Paths", 0, QApplication::UnicodeUTF8));
        FileC->setText(QApplication::translate("TabGeneral", "&Change...", 0, QApplication::UnicodeUTF8));
        FileC->setShortcut(QApplication::translate("TabGeneral", "Alt+C", 0, QApplication::UnicodeUTF8));
        FileC2->setText(QApplication::translate("TabGeneral", "C&hange...", 0, QApplication::UnicodeUTF8));
        FileC2->setShortcut(QApplication::translate("TabGeneral", "Alt+H", 0, QApplication::UnicodeUTF8));
        textLabel9->setText(QApplication::translate("TabGeneral", "&Scripts:", 0, QApplication::UnicodeUTF8));
        FileC4->setText(QApplication::translate("TabGeneral", "Cha&nge...", 0, QApplication::UnicodeUTF8));
        FileC4->setShortcut(QApplication::translate("TabGeneral", "Alt+N", 0, QApplication::UnicodeUTF8));
        textLabel8->setText(QApplication::translate("TabGeneral", "&ICC Profiles:", 0, QApplication::UnicodeUTF8));
        textLabel7->setText(QApplication::translate("TabGeneral", "&Documents:", 0, QApplication::UnicodeUTF8));
        textLabel10->setText(QApplication::translate("TabGeneral", "Document &Templates:", 0, QApplication::UnicodeUTF8));
        FileC3->setText(QApplication::translate("TabGeneral", "Ch&ange...", 0, QApplication::UnicodeUTF8));
        FileC3->setShortcut(QApplication::translate("TabGeneral", "Alt+A", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TabGeneral: public Ui_TabGeneral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABGENERAL_H
