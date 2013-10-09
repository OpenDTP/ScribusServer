/********************************************************************************
** Form generated from reading UI file 'helpbrowser.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPBROWSER_H
#define UI_HELPBROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QTreeView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <sctextbrowser.h>

QT_BEGIN_NAMESPACE

class Ui_HelpBrowser
{
public:
    QAction *action_Print;
    QAction *action_Exit;
    QAction *action_Find;
    QAction *actionFind_Next;
    QAction *actionFind_Previous;
    QAction *action_Add;
    QAction *action_Delete;
    QAction *actionD_elete_All;
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QSplitter *splitter;
    QTabWidget *tabWidget;
    QWidget *tabContents;
    QVBoxLayout *vboxLayout1;
    QTreeView *listView;
    QWidget *tabSearching;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QLineEdit *searchingEdit;
    QPushButton *searchingButton;
    QTreeWidget *searchingView;
    QWidget *tabBookmarks;
    QVBoxLayout *vboxLayout3;
    QTreeWidget *bookmarksView;
    QHBoxLayout *hboxLayout1;
    QPushButton *bookmarkButton;
    QPushButton *deleteBookmarkButton;
    QPushButton *deleteAllBookmarkButton;
    ScTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *HelpBrowser)
    {
        if (HelpBrowser->objectName().isEmpty())
            HelpBrowser->setObjectName(QString::fromUtf8("HelpBrowser"));
        HelpBrowser->resize(630, 548);
        action_Print = new QAction(HelpBrowser);
        action_Print->setObjectName(QString::fromUtf8("action_Print"));
        action_Exit = new QAction(HelpBrowser);
        action_Exit->setObjectName(QString::fromUtf8("action_Exit"));
        action_Find = new QAction(HelpBrowser);
        action_Find->setObjectName(QString::fromUtf8("action_Find"));
        actionFind_Next = new QAction(HelpBrowser);
        actionFind_Next->setObjectName(QString::fromUtf8("actionFind_Next"));
        actionFind_Previous = new QAction(HelpBrowser);
        actionFind_Previous->setObjectName(QString::fromUtf8("actionFind_Previous"));
        action_Add = new QAction(HelpBrowser);
        action_Add->setObjectName(QString::fromUtf8("action_Add"));
        action_Delete = new QAction(HelpBrowser);
        action_Delete->setObjectName(QString::fromUtf8("action_Delete"));
        actionD_elete_All = new QAction(HelpBrowser);
        actionD_elete_All->setObjectName(QString::fromUtf8("actionD_elete_All"));
        centralwidget = new QWidget(HelpBrowser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabContents = new QWidget();
        tabContents->setObjectName(QString::fromUtf8("tabContents"));
        vboxLayout1 = new QVBoxLayout(tabContents);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        listView = new QTreeView(tabContents);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        vboxLayout1->addWidget(listView);

        tabWidget->addTab(tabContents, QString());
        tabSearching = new QWidget();
        tabSearching->setObjectName(QString::fromUtf8("tabSearching"));
        vboxLayout2 = new QVBoxLayout(tabSearching);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        searchingEdit = new QLineEdit(tabSearching);
        searchingEdit->setObjectName(QString::fromUtf8("searchingEdit"));

        hboxLayout->addWidget(searchingEdit);

        searchingButton = new QPushButton(tabSearching);
        searchingButton->setObjectName(QString::fromUtf8("searchingButton"));

        hboxLayout->addWidget(searchingButton);


        vboxLayout2->addLayout(hboxLayout);

        searchingView = new QTreeWidget(tabSearching);
        searchingView->setObjectName(QString::fromUtf8("searchingView"));

        vboxLayout2->addWidget(searchingView);

        tabWidget->addTab(tabSearching, QString());
        tabBookmarks = new QWidget();
        tabBookmarks->setObjectName(QString::fromUtf8("tabBookmarks"));
        vboxLayout3 = new QVBoxLayout(tabBookmarks);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        bookmarksView = new QTreeWidget(tabBookmarks);
        bookmarksView->setObjectName(QString::fromUtf8("bookmarksView"));

        vboxLayout3->addWidget(bookmarksView);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        bookmarkButton = new QPushButton(tabBookmarks);
        bookmarkButton->setObjectName(QString::fromUtf8("bookmarkButton"));

        hboxLayout1->addWidget(bookmarkButton);

        deleteBookmarkButton = new QPushButton(tabBookmarks);
        deleteBookmarkButton->setObjectName(QString::fromUtf8("deleteBookmarkButton"));

        hboxLayout1->addWidget(deleteBookmarkButton);

        deleteAllBookmarkButton = new QPushButton(tabBookmarks);
        deleteAllBookmarkButton->setObjectName(QString::fromUtf8("deleteAllBookmarkButton"));

        hboxLayout1->addWidget(deleteAllBookmarkButton);


        vboxLayout3->addLayout(hboxLayout1);

        tabWidget->addTab(tabBookmarks, QString());
        splitter->addWidget(tabWidget);
        textBrowser = new ScTextBrowser(splitter);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        splitter->addWidget(textBrowser);

        vboxLayout->addWidget(splitter);

        HelpBrowser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HelpBrowser);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 630, 29));
        HelpBrowser->setMenuBar(menubar);
        statusbar = new QStatusBar(HelpBrowser);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HelpBrowser->setStatusBar(statusbar);
        toolBar = new QToolBar(HelpBrowser);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        HelpBrowser->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(HelpBrowser);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(HelpBrowser);
    } // setupUi

    void retranslateUi(QMainWindow *HelpBrowser)
    {
        HelpBrowser->setWindowTitle(QApplication::translate("HelpBrowser", "Scribus Help", 0, QApplication::UnicodeUTF8));
        action_Print->setText(QApplication::translate("HelpBrowser", "&Print...", 0, QApplication::UnicodeUTF8));
        action_Exit->setText(QApplication::translate("HelpBrowser", "&Exit", 0, QApplication::UnicodeUTF8));
        action_Find->setText(QApplication::translate("HelpBrowser", "&Find...", 0, QApplication::UnicodeUTF8));
        actionFind_Next->setText(QApplication::translate("HelpBrowser", "Find &Next...", 0, QApplication::UnicodeUTF8));
        actionFind_Previous->setText(QApplication::translate("HelpBrowser", "Find &Previous...", 0, QApplication::UnicodeUTF8));
        action_Add->setText(QApplication::translate("HelpBrowser", "&Add", 0, QApplication::UnicodeUTF8));
        action_Delete->setText(QApplication::translate("HelpBrowser", "&Delete", 0, QApplication::UnicodeUTF8));
        actionD_elete_All->setText(QApplication::translate("HelpBrowser", "D&elete All", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabContents), QApplication::translate("HelpBrowser", "&Contents", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        searchingEdit->setToolTip(QApplication::translate("HelpBrowser", "Searching is case insensitive", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        searchingButton->setText(QApplication::translate("HelpBrowser", "&Search", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = searchingView->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("HelpBrowser", "1", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabSearching), QApplication::translate("HelpBrowser", "Se&arch", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = bookmarksView->headerItem();
        ___qtreewidgetitem1->setText(0, QApplication::translate("HelpBrowser", "1", 0, QApplication::UnicodeUTF8));
        bookmarkButton->setText(QApplication::translate("HelpBrowser", "&New", 0, QApplication::UnicodeUTF8));
        deleteBookmarkButton->setText(QApplication::translate("HelpBrowser", "&Delete", 0, QApplication::UnicodeUTF8));
        deleteAllBookmarkButton->setText(QApplication::translate("HelpBrowser", "D&elete All", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabBookmarks), QApplication::translate("HelpBrowser", "Book&marks", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("HelpBrowser", "Scribus Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HelpBrowser: public Ui_HelpBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPBROWSER_H
