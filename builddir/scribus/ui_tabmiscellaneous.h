/*
Misc. prefs panel UI
*/

/********************************************************************************
** Form generated from reading UI file 'tabmiscellaneous.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABMISCELLANEOUS_H
#define UI_TABMISCELLANEOUS_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabMiscellaneous
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    QSpinBox *paragraphsLI;
    QSpacerItem *spacerItem1;
    QCheckBox *useStandardLI;
    QCheckBox *stylePreview;
    QCheckBox *AskForSubs;

    void setupUi(QWidget *TabMiscellaneous)
    {
        if (TabMiscellaneous->objectName().isEmpty())
            TabMiscellaneous->setObjectName(QString::fromUtf8("TabMiscellaneous"));
        TabMiscellaneous->resize(427, 240);
        gridLayout = new QGridLayout(TabMiscellaneous);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 0, 1, 1);

        groupBox1 = new QGroupBox(TabMiscellaneous);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        gridLayout1 = new QGridLayout(groupBox1);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel1 = new QLabel(groupBox1);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout->addWidget(textLabel1);

        paragraphsLI = new QSpinBox(groupBox1);
        paragraphsLI->setObjectName(QString::fromUtf8("paragraphsLI"));

        hboxLayout->addWidget(paragraphsLI);

        spacerItem1 = new QSpacerItem(130, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        gridLayout1->addLayout(hboxLayout, 1, 0, 1, 1);

        useStandardLI = new QCheckBox(groupBox1);
        useStandardLI->setObjectName(QString::fromUtf8("useStandardLI"));

        gridLayout1->addWidget(useStandardLI, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox1, 2, 0, 1, 1);

        stylePreview = new QCheckBox(TabMiscellaneous);
        stylePreview->setObjectName(QString::fromUtf8("stylePreview"));

        gridLayout->addWidget(stylePreview, 1, 0, 1, 1);

        AskForSubs = new QCheckBox(TabMiscellaneous);
        AskForSubs->setObjectName(QString::fromUtf8("AskForSubs"));

        gridLayout->addWidget(AskForSubs, 0, 0, 1, 1);

        QWidget::setTabOrder(AskForSubs, stylePreview);
        QWidget::setTabOrder(stylePreview, useStandardLI);
        QWidget::setTabOrder(useStandardLI, paragraphsLI);

        retranslateUi(TabMiscellaneous);

        QMetaObject::connectSlotsByName(TabMiscellaneous);
    } // setupUi

    void retranslateUi(QWidget *TabMiscellaneous)
    {
        groupBox1->setTitle(QApplication::translate("TabMiscellaneous", "Lorem Ipsum", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("TabMiscellaneous", "Count of the Paragraphs:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        paragraphsLI->setToolTip(QApplication::translate("TabMiscellaneous", "Default number of paragraphs for sample text insertion", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        useStandardLI->setToolTip(QApplication::translate("TabMiscellaneous", "Always use the typical Latin-based Lorem Ipsum text for sample text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        useStandardLI->setText(QApplication::translate("TabMiscellaneous", "Always use standard Lorem Ipsum", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        stylePreview->setToolTip(QApplication::translate("TabMiscellaneous", "Show a preview by default when editing styles", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        stylePreview->setText(QApplication::translate("TabMiscellaneous", "Preview of current Paragraph Style visible when editing Styles", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        AskForSubs->setToolTip(QApplication::translate("TabMiscellaneous", "Allow Scribus to automatically replace fonts when they are missing when opening a document", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AskForSubs->setText(QApplication::translate("TabMiscellaneous", "Always ask before fonts are replaced when loading a document", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(TabMiscellaneous);
    } // retranslateUi

};

namespace Ui {
    class TabMiscellaneous: public Ui_TabMiscellaneous {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABMISCELLANEOUS_H
