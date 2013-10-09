/********************************************************************************
** Form generated from reading UI file 'scripterprefsgui.ui'
**
** Created: Sun Feb 24 21:57:37 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCRIPTERPREFSGUI_H
#define UI_SCRIPTERPREFSGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScripterPrefsGui
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QTabWidget *tabWidget;
    QWidget *startupTab;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *startupScriptEdit;
    QPushButton *startupScriptChangeButton;
    QCheckBox *extensionScriptsChk;
    QSpacerItem *spacerItem1;
    QWidget *consoleTab;
    QGridLayout *gridLayout2;
    QSpacerItem *spacerItem2;
    QPushButton *stringButton;
    QPushButton *numberButton;
    QPushButton *errorButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_2;
    QPushButton *textButton;
    QPushButton *commentButton;
    QPushButton *keywordButton;
    QPushButton *signButton;

    void setupUi(QWidget *ScripterPrefsGui)
    {
        if (ScripterPrefsGui->objectName().isEmpty())
            ScripterPrefsGui->setObjectName(QString::fromUtf8("ScripterPrefsGui"));
        ScripterPrefsGui->resize(504, 443);
        gridLayout = new QGridLayout(ScripterPrefsGui);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        tabWidget = new QTabWidget(ScripterPrefsGui);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        startupTab = new QWidget();
        startupTab->setObjectName(QString::fromUtf8("startupTab"));
        startupTab->setGeometry(QRect(0, 0, 478, 285));
        gridLayout1 = new QGridLayout(startupTab);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(startupTab);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        startupScriptEdit = new QLineEdit(startupTab);
        startupScriptEdit->setObjectName(QString::fromUtf8("startupScriptEdit"));

        hboxLayout->addWidget(startupScriptEdit);

        startupScriptChangeButton = new QPushButton(startupTab);
        startupScriptChangeButton->setObjectName(QString::fromUtf8("startupScriptChangeButton"));

        hboxLayout->addWidget(startupScriptChangeButton);


        gridLayout1->addLayout(hboxLayout, 1, 0, 1, 2);

        extensionScriptsChk = new QCheckBox(startupTab);
        extensionScriptsChk->setObjectName(QString::fromUtf8("extensionScriptsChk"));

        gridLayout1->addWidget(extensionScriptsChk, 0, 0, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem1, 2, 1, 1, 1);

        tabWidget->addTab(startupTab, QString());
        consoleTab = new QWidget();
        consoleTab->setObjectName(QString::fromUtf8("consoleTab"));
        consoleTab->setGeometry(QRect(0, 0, 478, 285));
        gridLayout2 = new QGridLayout(consoleTab);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem2, 7, 1, 1, 1);

        stringButton = new QPushButton(consoleTab);
        stringButton->setObjectName(QString::fromUtf8("stringButton"));

        gridLayout2->addWidget(stringButton, 5, 1, 1, 1);

        numberButton = new QPushButton(consoleTab);
        numberButton->setObjectName(QString::fromUtf8("numberButton"));

        gridLayout2->addWidget(numberButton, 6, 1, 1, 1);

        errorButton = new QPushButton(consoleTab);
        errorButton->setObjectName(QString::fromUtf8("errorButton"));

        gridLayout2->addWidget(errorButton, 4, 1, 1, 1);

        label_3 = new QLabel(consoleTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout2->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(consoleTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout2->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(consoleTab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout2->addWidget(label_5, 3, 0, 1, 1);

        label_7 = new QLabel(consoleTab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout2->addWidget(label_7, 5, 0, 1, 1);

        label_8 = new QLabel(consoleTab);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout2->addWidget(label_8, 6, 0, 1, 1);

        label_6 = new QLabel(consoleTab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout2->addWidget(label_6, 4, 0, 1, 1);

        label_2 = new QLabel(consoleTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout2->addWidget(label_2, 0, 0, 1, 1);

        textButton = new QPushButton(consoleTab);
        textButton->setObjectName(QString::fromUtf8("textButton"));

        gridLayout2->addWidget(textButton, 0, 1, 1, 1);

        commentButton = new QPushButton(consoleTab);
        commentButton->setObjectName(QString::fromUtf8("commentButton"));

        gridLayout2->addWidget(commentButton, 1, 1, 1, 1);

        keywordButton = new QPushButton(consoleTab);
        keywordButton->setObjectName(QString::fromUtf8("keywordButton"));

        gridLayout2->addWidget(keywordButton, 2, 1, 1, 1);

        signButton = new QPushButton(consoleTab);
        signButton->setObjectName(QString::fromUtf8("signButton"));

        gridLayout2->addWidget(signButton, 3, 1, 1, 1);

        tabWidget->addTab(consoleTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        QWidget::setTabOrder(tabWidget, extensionScriptsChk);
        QWidget::setTabOrder(extensionScriptsChk, startupScriptEdit);
        QWidget::setTabOrder(startupScriptEdit, startupScriptChangeButton);
        QWidget::setTabOrder(startupScriptChangeButton, textButton);
        QWidget::setTabOrder(textButton, commentButton);
        QWidget::setTabOrder(commentButton, keywordButton);
        QWidget::setTabOrder(keywordButton, signButton);
        QWidget::setTabOrder(signButton, errorButton);
        QWidget::setTabOrder(errorButton, stringButton);
        QWidget::setTabOrder(stringButton, numberButton);

        retranslateUi(ScripterPrefsGui);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ScripterPrefsGui);
    } // setupUi

    void retranslateUi(QWidget *ScripterPrefsGui)
    {
        ScripterPrefsGui->setWindowTitle(QApplication::translate("ScripterPrefsGui", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ScripterPrefsGui", "Startup Script:", 0, QApplication::UnicodeUTF8));
        startupScriptChangeButton->setText(QApplication::translate("ScripterPrefsGui", "Change...", 0, QApplication::UnicodeUTF8));
        extensionScriptsChk->setText(QApplication::translate("ScripterPrefsGui", "Enable Extension Scripts", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(startupTab), QApplication::translate("ScripterPrefsGui", "Extensions", 0, QApplication::UnicodeUTF8));
        stringButton->setText(QString());
        numberButton->setText(QString());
        errorButton->setText(QString());
        label_3->setText(QApplication::translate("ScripterPrefsGui", "Comments:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ScripterPrefsGui", "Keywords:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ScripterPrefsGui", "Signs:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ScripterPrefsGui", "Strings:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ScripterPrefsGui", "Numbers:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ScripterPrefsGui", "Errors:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ScripterPrefsGui", "Base Texts:", 0, QApplication::UnicodeUTF8));
        textButton->setText(QString());
        commentButton->setText(QString());
        keywordButton->setText(QString());
        signButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(consoleTab), QApplication::translate("ScripterPrefsGui", "Console", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ScripterPrefsGui: public Ui_ScripterPrefsGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCRIPTERPREFSGUI_H
