/********************************************************************************
** Form generated from reading UI file 'stylemanager.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STYLEMANAGER_H
#define UI_STYLEMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "scrpalettebase.h"
#include "styleview.h"

QT_BEGIN_NAMESPACE

class Ui_StyleManager
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    StyleView *styleView;
    QFrame *leftFrame;
    QGridLayout *gridLayout;
    QPushButton *newButton;
    QPushButton *cloneButton;
    QPushButton *importButton;
    QPushButton *deleteButton;
    QFrame *rightFrame;
    QVBoxLayout *vboxLayout;
    QFrame *editFrame;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *uniqueLabel;
    QFrame *mainFrame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *hboxLayout1;
    QPushButton *okButton;
    QPushButton *applyButton;
    QPushButton *resetButton;

    void setupUi(QDialog *StyleManager)
    {
        if (StyleManager->objectName().isEmpty())
            StyleManager->setObjectName(QString::fromUtf8("StyleManager"));
        StyleManager->setEnabled(true);
        StyleManager->resize(772, 422);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StyleManager->sizePolicy().hasHeightForWidth());
        StyleManager->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(StyleManager);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        styleView = new StyleView(StyleManager);
        styleView->setObjectName(QString::fromUtf8("styleView"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(styleView->sizePolicy().hasHeightForWidth());
        styleView->setSizePolicy(sizePolicy1);
        styleView->setContextMenuPolicy(Qt::CustomContextMenu);
        styleView->setAlternatingRowColors(true);
        styleView->setAllColumnsShowFocus(true);

        verticalLayout->addWidget(styleView);

        leftFrame = new QFrame(StyleManager);
        leftFrame->setObjectName(QString::fromUtf8("leftFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leftFrame->sizePolicy().hasHeightForWidth());
        leftFrame->setSizePolicy(sizePolicy2);
        leftFrame->setMinimumSize(QSize(190, 0));
        leftFrame->setMaximumSize(QSize(32767, 32767));
        leftFrame->setFrameShape(QFrame::NoFrame);
        leftFrame->setFrameShadow(QFrame::Plain);
        leftFrame->setLineWidth(0);
        gridLayout = new QGridLayout(leftFrame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        newButton = new QPushButton(leftFrame);
        newButton->setObjectName(QString::fromUtf8("newButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(newButton->sizePolicy().hasHeightForWidth());
        newButton->setSizePolicy(sizePolicy3);
        newButton->setMinimumSize(QSize(0, 0));
        newButton->setMaximumSize(QSize(1000, 32767));

        gridLayout->addWidget(newButton, 0, 0, 1, 1);

        cloneButton = new QPushButton(leftFrame);
        cloneButton->setObjectName(QString::fromUtf8("cloneButton"));
        sizePolicy3.setHeightForWidth(cloneButton->sizePolicy().hasHeightForWidth());
        cloneButton->setSizePolicy(sizePolicy3);
        cloneButton->setMinimumSize(QSize(0, 0));
        cloneButton->setMaximumSize(QSize(1000, 32767));

        gridLayout->addWidget(cloneButton, 0, 1, 1, 1);

        importButton = new QPushButton(leftFrame);
        importButton->setObjectName(QString::fromUtf8("importButton"));
        sizePolicy3.setHeightForWidth(importButton->sizePolicy().hasHeightForWidth());
        importButton->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(importButton, 1, 0, 1, 1);

        deleteButton = new QPushButton(leftFrame);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        sizePolicy3.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(deleteButton, 1, 1, 1, 1);


        verticalLayout->addWidget(leftFrame);


        horizontalLayout->addLayout(verticalLayout);

        rightFrame = new QFrame(StyleManager);
        rightFrame->setObjectName(QString::fromUtf8("rightFrame"));
        rightFrame->setMinimumSize(QSize(472, 0));
        rightFrame->setFrameShape(QFrame::NoFrame);
        rightFrame->setFrameShadow(QFrame::Plain);
        rightFrame->setLineWidth(0);
        vboxLayout = new QVBoxLayout(rightFrame);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        editFrame = new QFrame(rightFrame);
        editFrame->setObjectName(QString::fromUtf8("editFrame"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(editFrame->sizePolicy().hasHeightForWidth());
        editFrame->setSizePolicy(sizePolicy4);
        editFrame->setFrameShape(QFrame::NoFrame);
        editFrame->setFrameShadow(QFrame::Plain);
        editFrame->setLineWidth(0);
        vboxLayout1 = new QVBoxLayout(editFrame);
        vboxLayout1->setSpacing(0);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(10);
        hboxLayout->setContentsMargins(10, 10, 10, 10);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        nameLabel = new QLabel(editFrame);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setWordWrap(false);

        hboxLayout->addWidget(nameLabel);

        nameEdit = new QLineEdit(editFrame);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setEnabled(false);

        hboxLayout->addWidget(nameEdit);


        vboxLayout1->addLayout(hboxLayout);

        uniqueLabel = new QLabel(editFrame);
        uniqueLabel->setObjectName(QString::fromUtf8("uniqueLabel"));
        uniqueLabel->setMaximumSize(QSize(32767, 30));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        uniqueLabel->setFont(font);
        uniqueLabel->setAlignment(Qt::AlignCenter);
        uniqueLabel->setWordWrap(false);

        vboxLayout1->addWidget(uniqueLabel);

        mainFrame = new QFrame(editFrame);
        mainFrame->setObjectName(QString::fromUtf8("mainFrame"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mainFrame->sizePolicy().hasHeightForWidth());
        mainFrame->setSizePolicy(sizePolicy5);

        vboxLayout1->addWidget(mainFrame);


        vboxLayout->addWidget(editFrame);


        horizontalLayout->addWidget(rightFrame);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setContentsMargins(6, 6, 6, 6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        okButton = new QPushButton(StyleManager);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy6);
        okButton->setMinimumSize(QSize(85, 24));

        hboxLayout1->addWidget(okButton);

        applyButton = new QPushButton(StyleManager);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        sizePolicy6.setHeightForWidth(applyButton->sizePolicy().hasHeightForWidth());
        applyButton->setSizePolicy(sizePolicy6);
        applyButton->setMinimumSize(QSize(85, 24));

        hboxLayout1->addWidget(applyButton);

        resetButton = new QPushButton(StyleManager);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        sizePolicy6.setHeightForWidth(resetButton->sizePolicy().hasHeightForWidth());
        resetButton->setSizePolicy(sizePolicy6);
        resetButton->setMinimumSize(QSize(85, 24));

        hboxLayout1->addWidget(resetButton);


        horizontalLayout_2->addLayout(hboxLayout1);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(StyleManager);

        QMetaObject::connectSlotsByName(StyleManager);
    } // setupUi

    void retranslateUi(QDialog *StyleManager)
    {
        StyleManager->setWindowTitle(QApplication::translate("StyleManager", "Style Manager", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = styleView->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("StyleManager", "Shortcut", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("StyleManager", "Name", 0, QApplication::UnicodeUTF8));
        newButton->setText(QApplication::translate("StyleManager", "&New", 0, QApplication::UnicodeUTF8));
        newButton->setShortcut(QApplication::translate("StyleManager", "Alt+N", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cloneButton->setToolTip(QApplication::translate("StyleManager", "Clone copies the style to make similar styles easily.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cloneButton->setText(QApplication::translate("StyleManager", "&Clone", 0, QApplication::UnicodeUTF8));
        cloneButton->setShortcut(QApplication::translate("StyleManager", "Alt+C", 0, QApplication::UnicodeUTF8));
        importButton->setText(QApplication::translate("StyleManager", "&Import", 0, QApplication::UnicodeUTF8));
        importButton->setShortcut(QApplication::translate("StyleManager", "Alt+I", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("StyleManager", "&Delete", 0, QApplication::UnicodeUTF8));
        deleteButton->setShortcut(QApplication::translate("StyleManager", "Alt+D", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("StyleManager", "Name:", 0, QApplication::UnicodeUTF8));
        uniqueLabel->setText(QApplication::translate("StyleManager", "Please select a unique name for the style", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("StyleManager", "<< &Done", 0, QApplication::UnicodeUTF8));
        okButton->setShortcut(QApplication::translate("StyleManager", "Alt+D", 0, QApplication::UnicodeUTF8));
        applyButton->setText(QApplication::translate("StyleManager", "&Apply", 0, QApplication::UnicodeUTF8));
        applyButton->setShortcut(QApplication::translate("StyleManager", "Alt+A", 0, QApplication::UnicodeUTF8));
        resetButton->setText(QApplication::translate("StyleManager", "&Reset", 0, QApplication::UnicodeUTF8));
        resetButton->setShortcut(QApplication::translate("StyleManager", "Alt+R", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StyleManager: public Ui_StyleManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STYLEMANAGER_H
