/********************************************************************************
** Form generated from reading UI file 'tocindexprefs.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOCINDEXPREFS_H
#define UI_TOCINDEXPREFS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TOCIndexPrefs
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabTOCIndexWidget;
    QWidget *tab;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QListWidget *tocListBox;
    QLineEdit *tocNameLineEdit;
    QHBoxLayout *hboxLayout1;
    QPushButton *tocAddButton;
    QPushButton *tocDeleteButton;
    QVBoxLayout *vboxLayout2;
    QGridLayout *gridLayout;
    QComboBox *itemDestFrameComboBox;
    QLabel *tocNumberPlacementLabel;
    QLabel *tocItemAttrLabel;
    QComboBox *itemAttrComboBox;
    QComboBox *itemNumberPlacementComboBox;
    QCheckBox *itemListNonPrintingCheckBox;
    QComboBox *itemParagraphStyleComboBox;
    QLabel *tocParagraphStyleLabel;
    QLabel *tocDestFrameLabel;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *TOCIndexPrefs)
    {
        if (TOCIndexPrefs->objectName().isEmpty())
            TOCIndexPrefs->setObjectName(QString::fromUtf8("TOCIndexPrefs"));
        TOCIndexPrefs->resize(444, 234);
        vboxLayout = new QVBoxLayout(TOCIndexPrefs);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabTOCIndexWidget = new QTabWidget(TOCIndexPrefs);
        tabTOCIndexWidget->setObjectName(QString::fromUtf8("tabTOCIndexWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setGeometry(QRect(0, 0, 436, 202));
        hboxLayout = new QHBoxLayout(tab);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        tocListBox = new QListWidget(tab);
        tocListBox->setObjectName(QString::fromUtf8("tocListBox"));

        vboxLayout1->addWidget(tocListBox);

        tocNameLineEdit = new QLineEdit(tab);
        tocNameLineEdit->setObjectName(QString::fromUtf8("tocNameLineEdit"));

        vboxLayout1->addWidget(tocNameLineEdit);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        tocAddButton = new QPushButton(tab);
        tocAddButton->setObjectName(QString::fromUtf8("tocAddButton"));

        hboxLayout1->addWidget(tocAddButton);

        tocDeleteButton = new QPushButton(tab);
        tocDeleteButton->setObjectName(QString::fromUtf8("tocDeleteButton"));

        hboxLayout1->addWidget(tocDeleteButton);


        vboxLayout1->addLayout(hboxLayout1);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        itemDestFrameComboBox = new QComboBox(tab);
        itemDestFrameComboBox->setObjectName(QString::fromUtf8("itemDestFrameComboBox"));

        gridLayout->addWidget(itemDestFrameComboBox, 1, 1, 1, 1);

        tocNumberPlacementLabel = new QLabel(tab);
        tocNumberPlacementLabel->setObjectName(QString::fromUtf8("tocNumberPlacementLabel"));
        tocNumberPlacementLabel->setWordWrap(false);

        gridLayout->addWidget(tocNumberPlacementLabel, 2, 0, 1, 1);

        tocItemAttrLabel = new QLabel(tab);
        tocItemAttrLabel->setObjectName(QString::fromUtf8("tocItemAttrLabel"));
        tocItemAttrLabel->setWordWrap(false);

        gridLayout->addWidget(tocItemAttrLabel, 0, 0, 1, 1);

        itemAttrComboBox = new QComboBox(tab);
        itemAttrComboBox->setObjectName(QString::fromUtf8("itemAttrComboBox"));

        gridLayout->addWidget(itemAttrComboBox, 0, 1, 1, 1);

        itemNumberPlacementComboBox = new QComboBox(tab);
        itemNumberPlacementComboBox->setObjectName(QString::fromUtf8("itemNumberPlacementComboBox"));

        gridLayout->addWidget(itemNumberPlacementComboBox, 2, 1, 1, 1);

        itemListNonPrintingCheckBox = new QCheckBox(tab);
        itemListNonPrintingCheckBox->setObjectName(QString::fromUtf8("itemListNonPrintingCheckBox"));

        gridLayout->addWidget(itemListNonPrintingCheckBox, 4, 0, 1, 2);

        itemParagraphStyleComboBox = new QComboBox(tab);
        itemParagraphStyleComboBox->setObjectName(QString::fromUtf8("itemParagraphStyleComboBox"));

        gridLayout->addWidget(itemParagraphStyleComboBox, 3, 1, 1, 1);

        tocParagraphStyleLabel = new QLabel(tab);
        tocParagraphStyleLabel->setObjectName(QString::fromUtf8("tocParagraphStyleLabel"));
        tocParagraphStyleLabel->setWordWrap(false);

        gridLayout->addWidget(tocParagraphStyleLabel, 3, 0, 1, 1);

        tocDestFrameLabel = new QLabel(tab);
        tocDestFrameLabel->setObjectName(QString::fromUtf8("tocDestFrameLabel"));
        tocDestFrameLabel->setWordWrap(false);

        gridLayout->addWidget(tocDestFrameLabel, 1, 0, 1, 1);


        vboxLayout2->addLayout(gridLayout);

        spacerItem = new QSpacerItem(16, 36, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout2);

        tabTOCIndexWidget->addTab(tab, QString());

        vboxLayout->addWidget(tabTOCIndexWidget);

        QWidget::setTabOrder(tabTOCIndexWidget, tocListBox);
        QWidget::setTabOrder(tocListBox, tocNameLineEdit);
        QWidget::setTabOrder(tocNameLineEdit, itemAttrComboBox);
        QWidget::setTabOrder(itemAttrComboBox, itemDestFrameComboBox);
        QWidget::setTabOrder(itemDestFrameComboBox, itemNumberPlacementComboBox);
        QWidget::setTabOrder(itemNumberPlacementComboBox, itemParagraphStyleComboBox);
        QWidget::setTabOrder(itemParagraphStyleComboBox, itemListNonPrintingCheckBox);
        QWidget::setTabOrder(itemListNonPrintingCheckBox, tocAddButton);
        QWidget::setTabOrder(tocAddButton, tocDeleteButton);

        retranslateUi(TOCIndexPrefs);

        QMetaObject::connectSlotsByName(TOCIndexPrefs);
    } // setupUi

    void retranslateUi(QWidget *TOCIndexPrefs)
    {
        TOCIndexPrefs->setWindowTitle(QApplication::translate("TOCIndexPrefs", "Table of Contents and Indexes", 0, QApplication::UnicodeUTF8));
        tocAddButton->setText(QApplication::translate("TOCIndexPrefs", "&Add", 0, QApplication::UnicodeUTF8));
        tocAddButton->setShortcut(QApplication::translate("TOCIndexPrefs", "Alt+A", 0, QApplication::UnicodeUTF8));
        tocDeleteButton->setText(QApplication::translate("TOCIndexPrefs", "&Delete", 0, QApplication::UnicodeUTF8));
        tocDeleteButton->setShortcut(QApplication::translate("TOCIndexPrefs", "Alt+D", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        itemDestFrameComboBox->setToolTip(QApplication::translate("TOCIndexPrefs", "The frame the table of contents will be placed into", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tocNumberPlacementLabel->setText(QApplication::translate("TOCIndexPrefs", "Page Number Placement:", 0, QApplication::UnicodeUTF8));
        tocItemAttrLabel->setText(QApplication::translate("TOCIndexPrefs", "Item Attribute Name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        itemAttrComboBox->setToolTip(QApplication::translate("TOCIndexPrefs", "The Item Attribute that will be set on frames used as a basis for creation of the entries", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        itemNumberPlacementComboBox->setToolTip(QApplication::translate("TOCIndexPrefs", "Place page numbers of the entries at the beginning or the end of the line, or not at all", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        itemListNonPrintingCheckBox->setToolTip(QApplication::translate("TOCIndexPrefs", "Include frames that are set to not print as well", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        itemListNonPrintingCheckBox->setText(QApplication::translate("TOCIndexPrefs", "List Non-Printing Entries", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        itemParagraphStyleComboBox->setToolTip(QApplication::translate("TOCIndexPrefs", "The paragraph style used for the entry lines", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tocParagraphStyleLabel->setText(QApplication::translate("TOCIndexPrefs", "Paragraph Style:", 0, QApplication::UnicodeUTF8));
        tocDestFrameLabel->setText(QApplication::translate("TOCIndexPrefs", "Destination Frame:", 0, QApplication::UnicodeUTF8));
        tabTOCIndexWidget->setTabText(tabTOCIndexWidget->indexOf(tab), QApplication::translate("TOCIndexPrefs", "Table Of Contents", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TOCIndexPrefs: public Ui_TOCIndexPrefs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOCINDEXPREFS_H
