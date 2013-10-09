/*
scrapbook panel for prefs UI
*/

/********************************************************************************
** Form generated from reading UI file 'tabscrapbook.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABSCRAPBOOK_H
#define UI_TABSCRAPBOOK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabScrapbook
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *useScrapBookasExtension;
    QCheckBox *persistentScrapbook;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel2;
    QSpinBox *numScrapCopies;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *TabScrapbook)
    {
        if (TabScrapbook->objectName().isEmpty())
            TabScrapbook->setObjectName(QString::fromUtf8("TabScrapbook"));
        TabScrapbook->resize(621, 203);
        vboxLayout = new QVBoxLayout(TabScrapbook);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        useScrapBookasExtension = new QCheckBox(TabScrapbook);
        useScrapBookasExtension->setObjectName(QString::fromUtf8("useScrapBookasExtension"));

        vboxLayout->addWidget(useScrapBookasExtension);

        persistentScrapbook = new QCheckBox(TabScrapbook);
        persistentScrapbook->setObjectName(QString::fromUtf8("persistentScrapbook"));

        vboxLayout->addWidget(persistentScrapbook);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel2 = new QLabel(TabScrapbook);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        hboxLayout->addWidget(textLabel2);

        numScrapCopies = new QSpinBox(TabScrapbook);
        numScrapCopies->setObjectName(QString::fromUtf8("numScrapCopies"));
        numScrapCopies->setMaximum(100);
        numScrapCopies->setMinimum(1);

        hboxLayout->addWidget(numScrapCopies);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout);

        spacerItem1 = new QSpacerItem(20, 97, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);


        retranslateUi(TabScrapbook);

        QMetaObject::connectSlotsByName(TabScrapbook);
    } // setupUi

    void retranslateUi(QWidget *TabScrapbook)
    {
#ifndef QT_NO_TOOLTIP
        useScrapBookasExtension->setToolTip(QApplication::translate("TabScrapbook", "This enables the scrapbook to be used an extension to the copy/paste buffers. Simply copying an object or grouped object will send this to the Scrapbook automatically", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        useScrapBookasExtension->setText(QApplication::translate("TabScrapbook", "Send Copied Items Automatically to Scrapbook", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        persistentScrapbook->setToolTip(QApplication::translate("TabScrapbook", "This enables copied items to be kept permanently in the scrapbook.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        persistentScrapbook->setText(QApplication::translate("TabScrapbook", "Keep Copied Items Permanently Across Sessions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        textLabel2->setToolTip(QApplication::translate("TabScrapbook", "The minimum number is 1; the maximum us 100.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        textLabel2->setText(QApplication::translate("TabScrapbook", "Number of Copied Items to Keep in Scrapbook:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(TabScrapbook);
    } // retranslateUi

};

namespace Ui {
    class TabScrapbook: public Ui_TabScrapbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABSCRAPBOOK_H
