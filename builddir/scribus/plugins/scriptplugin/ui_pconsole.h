/********************************************************************************
** Form generated from reading UI file 'pconsole.ui'
**
** Created: Sun Feb 24 21:57:38 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PCONSOLE_H
#define UI_PCONSOLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PythonConsole
{
public:
    QAction *action_Open;
    QAction *action_Save;
    QAction *actionSave_As;
    QAction *action_Exit;
    QAction *action_Run;
    QAction *actionRun_As_Console;
    QAction *action_Save_Output;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QTextEdit *commandEdit;
    QTextEdit *outputEdit;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Script;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PythonConsole)
    {
        if (PythonConsole->objectName().isEmpty())
            PythonConsole->setObjectName(QString::fromUtf8("PythonConsole"));
        PythonConsole->resize(535, 471);
        action_Open = new QAction(PythonConsole);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        action_Save = new QAction(PythonConsole);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        actionSave_As = new QAction(PythonConsole);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        action_Exit = new QAction(PythonConsole);
        action_Exit->setObjectName(QString::fromUtf8("action_Exit"));
        action_Run = new QAction(PythonConsole);
        action_Run->setObjectName(QString::fromUtf8("action_Run"));
        actionRun_As_Console = new QAction(PythonConsole);
        actionRun_As_Console->setObjectName(QString::fromUtf8("actionRun_As_Console"));
        action_Save_Output = new QAction(PythonConsole);
        action_Save_Output->setObjectName(QString::fromUtf8("action_Save_Output"));
        centralwidget = new QWidget(PythonConsole);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        commandEdit = new QTextEdit(splitter);
        commandEdit->setObjectName(QString::fromUtf8("commandEdit"));
        commandEdit->setLineWrapMode(QTextEdit::NoWrap);
        splitter->addWidget(commandEdit);
        outputEdit = new QTextEdit(splitter);
        outputEdit->setObjectName(QString::fromUtf8("outputEdit"));
        outputEdit->setLineWrapMode(QTextEdit::NoWrap);
        outputEdit->setReadOnly(true);
        outputEdit->setAcceptRichText(false);
        splitter->addWidget(outputEdit);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        PythonConsole->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PythonConsole);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 535, 29));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Script = new QMenu(menubar);
        menu_Script->setObjectName(QString::fromUtf8("menu_Script"));
        PythonConsole->setMenuBar(menubar);
        statusbar = new QStatusBar(PythonConsole);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PythonConsole->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Script->menuAction());
        menu_File->addAction(action_Open);
        menu_File->addAction(action_Save);
        menu_File->addAction(actionSave_As);
        menu_File->addSeparator();
        menu_File->addAction(action_Exit);
        menu_Script->addAction(action_Run);
        menu_Script->addAction(actionRun_As_Console);
        menu_Script->addAction(action_Save_Output);

        retranslateUi(PythonConsole);

        QMetaObject::connectSlotsByName(PythonConsole);
    } // setupUi

    void retranslateUi(QMainWindow *PythonConsole)
    {
        PythonConsole->setWindowTitle(QApplication::translate("PythonConsole", "Script Console", 0, QApplication::UnicodeUTF8));
        action_Open->setText(QApplication::translate("PythonConsole", "&Open...", 0, QApplication::UnicodeUTF8));
        action_Save->setText(QApplication::translate("PythonConsole", "&Save", 0, QApplication::UnicodeUTF8));
        actionSave_As->setText(QApplication::translate("PythonConsole", "Save &As...", 0, QApplication::UnicodeUTF8));
        action_Exit->setText(QApplication::translate("PythonConsole", "&Quit", 0, QApplication::UnicodeUTF8));
        action_Run->setText(QApplication::translate("PythonConsole", "&Run", 0, QApplication::UnicodeUTF8));
        actionRun_As_Console->setText(QApplication::translate("PythonConsole", "Run As &Console", 0, QApplication::UnicodeUTF8));
        action_Save_Output->setText(QApplication::translate("PythonConsole", "&Save Output...", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("PythonConsole", "&File", 0, QApplication::UnicodeUTF8));
        menu_Script->setTitle(QApplication::translate("PythonConsole", "&Script", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PythonConsole: public Ui_PythonConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PCONSOLE_H
