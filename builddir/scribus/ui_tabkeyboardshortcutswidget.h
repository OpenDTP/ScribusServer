/********************************************************************************
** Form generated from reading UI file 'tabkeyboardshortcutswidget.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABKEYBOARDSHORTCUTSWIDGET_H
#define UI_TABKEYBOARDSHORTCUTSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabKeyboardShortcutsWidget
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *keyTable;
    QHBoxLayout *hboxLayout;
    QPushButton *clearSearchButton;
    QLabel *textLabel2;
    QLineEdit *searchTextLineEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *keyDisplay;
    QPushButton *setKeyButton;
    QSpacerItem *spacerItem;
    QRadioButton *userDef;
    QRadioButton *noKey;
    QGroupBox *loadableGroupBox;
    QGridLayout *gridLayout2;
    QPushButton *resetSetButton;
    QSpacerItem *spacerItem1;
    QPushButton *exportSetButton;
    QPushButton *importSetButton;
    QSpacerItem *spacerItem2;
    QPushButton *loadSetButton;
    QComboBox *loadableSets;

    void setupUi(QWidget *TabKeyboardShortcutsWidget)
    {
        if (TabKeyboardShortcutsWidget->objectName().isEmpty())
            TabKeyboardShortcutsWidget->setObjectName(QString::fromUtf8("TabKeyboardShortcutsWidget"));
        TabKeyboardShortcutsWidget->resize(615, 471);
        gridLayout = new QGridLayout(TabKeyboardShortcutsWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        keyTable = new QTreeWidget(TabKeyboardShortcutsWidget);
        keyTable->setObjectName(QString::fromUtf8("keyTable"));

        gridLayout->addWidget(keyTable, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        clearSearchButton = new QPushButton(TabKeyboardShortcutsWidget);
        clearSearchButton->setObjectName(QString::fromUtf8("clearSearchButton"));

        hboxLayout->addWidget(clearSearchButton);

        textLabel2 = new QLabel(TabKeyboardShortcutsWidget);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        hboxLayout->addWidget(textLabel2);

        searchTextLineEdit = new QLineEdit(TabKeyboardShortcutsWidget);
        searchTextLineEdit->setObjectName(QString::fromUtf8("searchTextLineEdit"));

        hboxLayout->addWidget(searchTextLineEdit);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        groupBox = new QGroupBox(TabKeyboardShortcutsWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        keyDisplay = new QLabel(groupBox);
        keyDisplay->setObjectName(QString::fromUtf8("keyDisplay"));
        keyDisplay->setFrameShape(QFrame::Panel);
        keyDisplay->setFrameShadow(QFrame::Sunken);
        keyDisplay->setAlignment(Qt::AlignCenter);
        keyDisplay->setWordWrap(false);

        gridLayout1->addWidget(keyDisplay, 0, 4, 1, 1);

        setKeyButton = new QPushButton(groupBox);
        setKeyButton->setObjectName(QString::fromUtf8("setKeyButton"));
        setKeyButton->setCheckable(true);

        gridLayout1->addWidget(setKeyButton, 0, 3, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 0, 2, 1, 1);

        userDef = new QRadioButton(groupBox);
        userDef->setObjectName(QString::fromUtf8("userDef"));

        gridLayout1->addWidget(userDef, 0, 1, 1, 1);

        noKey = new QRadioButton(groupBox);
        noKey->setObjectName(QString::fromUtf8("noKey"));

        gridLayout1->addWidget(noKey, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 2, 0, 1, 1);

        loadableGroupBox = new QGroupBox(TabKeyboardShortcutsWidget);
        loadableGroupBox->setObjectName(QString::fromUtf8("loadableGroupBox"));
        gridLayout2 = new QGridLayout(loadableGroupBox);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        resetSetButton = new QPushButton(loadableGroupBox);
        resetSetButton->setObjectName(QString::fromUtf8("resetSetButton"));

        gridLayout2->addWidget(resetSetButton, 0, 6, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem1, 0, 5, 1, 1);

        exportSetButton = new QPushButton(loadableGroupBox);
        exportSetButton->setObjectName(QString::fromUtf8("exportSetButton"));

        gridLayout2->addWidget(exportSetButton, 0, 4, 1, 1);

        importSetButton = new QPushButton(loadableGroupBox);
        importSetButton->setObjectName(QString::fromUtf8("importSetButton"));

        gridLayout2->addWidget(importSetButton, 0, 3, 1, 1);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem2, 0, 2, 1, 1);

        loadSetButton = new QPushButton(loadableGroupBox);
        loadSetButton->setObjectName(QString::fromUtf8("loadSetButton"));

        gridLayout2->addWidget(loadSetButton, 0, 1, 1, 1);

        loadableSets = new QComboBox(loadableGroupBox);
        loadableSets->setObjectName(QString::fromUtf8("loadableSets"));

        gridLayout2->addWidget(loadableSets, 0, 0, 1, 1);


        gridLayout->addWidget(loadableGroupBox, 3, 0, 1, 1);

        QWidget::setTabOrder(clearSearchButton, searchTextLineEdit);
        QWidget::setTabOrder(searchTextLineEdit, keyTable);
        QWidget::setTabOrder(keyTable, noKey);
        QWidget::setTabOrder(noKey, userDef);
        QWidget::setTabOrder(userDef, setKeyButton);
        QWidget::setTabOrder(setKeyButton, loadableSets);
        QWidget::setTabOrder(loadableSets, loadSetButton);
        QWidget::setTabOrder(loadSetButton, importSetButton);
        QWidget::setTabOrder(importSetButton, exportSetButton);
        QWidget::setTabOrder(exportSetButton, resetSetButton);

        retranslateUi(TabKeyboardShortcutsWidget);

        QMetaObject::connectSlotsByName(TabKeyboardShortcutsWidget);
    } // setupUi

    void retranslateUi(QWidget *TabKeyboardShortcutsWidget)
    {
        TabKeyboardShortcutsWidget->setWindowTitle(QApplication::translate("TabKeyboardShortcutsWidget", "Keyboard Shortcuts", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = keyTable->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("TabKeyboardShortcutsWidget", "Shortcut", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("TabKeyboardShortcutsWidget", "Action", 0, QApplication::UnicodeUTF8));
        clearSearchButton->setText(QString());
        textLabel2->setText(QApplication::translate("TabKeyboardShortcutsWidget", "Search:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("TabKeyboardShortcutsWidget", "Shortcut for Selected Action", 0, QApplication::UnicodeUTF8));
        keyDisplay->setText(QApplication::translate("TabKeyboardShortcutsWidget", "CTRL+ALT+SHIFT+W", 0, QApplication::UnicodeUTF8));
        setKeyButton->setText(QApplication::translate("TabKeyboardShortcutsWidget", "Set &Key", 0, QApplication::UnicodeUTF8));
        setKeyButton->setShortcut(QApplication::translate("TabKeyboardShortcutsWidget", "Alt+K", 0, QApplication::UnicodeUTF8));
        userDef->setText(QApplication::translate("TabKeyboardShortcutsWidget", "&User Defined Key", 0, QApplication::UnicodeUTF8));
        userDef->setShortcut(QApplication::translate("TabKeyboardShortcutsWidget", "Alt+U", 0, QApplication::UnicodeUTF8));
        noKey->setText(QApplication::translate("TabKeyboardShortcutsWidget", "&No Key", 0, QApplication::UnicodeUTF8));
        noKey->setShortcut(QApplication::translate("TabKeyboardShortcutsWidget", "Alt+N", 0, QApplication::UnicodeUTF8));
        loadableGroupBox->setTitle(QApplication::translate("TabKeyboardShortcutsWidget", "Loadable Shortcut Sets", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        resetSetButton->setToolTip(QApplication::translate("TabKeyboardShortcutsWidget", "Reload the default Scribus shortcuts", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        resetSetButton->setText(QApplication::translate("TabKeyboardShortcutsWidget", "&Reset", 0, QApplication::UnicodeUTF8));
        resetSetButton->setShortcut(QApplication::translate("TabKeyboardShortcutsWidget", "Alt+R", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        exportSetButton->setToolTip(QApplication::translate("TabKeyboardShortcutsWidget", "Export the current shortcuts into an importable file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        exportSetButton->setText(QApplication::translate("TabKeyboardShortcutsWidget", "&Export...", 0, QApplication::UnicodeUTF8));
        exportSetButton->setShortcut(QApplication::translate("TabKeyboardShortcutsWidget", "Alt+E", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        importSetButton->setToolTip(QApplication::translate("TabKeyboardShortcutsWidget", "Import a shortcut set into the current configuration", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        importSetButton->setText(QApplication::translate("TabKeyboardShortcutsWidget", "&Import...", 0, QApplication::UnicodeUTF8));
        importSetButton->setShortcut(QApplication::translate("TabKeyboardShortcutsWidget", "Alt+I", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        loadSetButton->setToolTip(QApplication::translate("TabKeyboardShortcutsWidget", "Load the selected shortcut set", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        loadSetButton->setText(QApplication::translate("TabKeyboardShortcutsWidget", "&Load", 0, QApplication::UnicodeUTF8));
        loadSetButton->setShortcut(QApplication::translate("TabKeyboardShortcutsWidget", "Alt+L", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        loadableSets->setToolTip(QApplication::translate("TabKeyboardShortcutsWidget", "Keyboard shortcut sets available to load", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class TabKeyboardShortcutsWidget: public Ui_TabKeyboardShortcutsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABKEYBOARDSHORTCUTSWIDGET_H
