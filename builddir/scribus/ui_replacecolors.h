/********************************************************************************
** Form generated from reading UI file 'replacecolors.ui'
**
** Created: Sun Feb 24 21:37:26 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACECOLORS_H
#define UI_REPLACECOLORS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_replaceColorsDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QTableWidget *replacementTable;
    QVBoxLayout *vboxLayout1;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *editButton;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *replaceColorsDialog)
    {
        if (replaceColorsDialog->objectName().isEmpty())
            replaceColorsDialog->setObjectName(QString::fromUtf8("replaceColorsDialog"));
        replaceColorsDialog->resize(373, 231);
        replaceColorsDialog->setSizeGripEnabled(true);
        replaceColorsDialog->setModal(true);
        vboxLayout = new QVBoxLayout(replaceColorsDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        replacementTable = new QTableWidget(replaceColorsDialog);
        if (replacementTable->columnCount() < 2)
            replacementTable->setColumnCount(2);
        replacementTable->setObjectName(QString::fromUtf8("replacementTable"));
        replacementTable->setMinimumSize(QSize(150, 150));
        replacementTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        replacementTable->setColumnCount(2);

        hboxLayout->addWidget(replacementTable);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        addButton = new QPushButton(replaceColorsDialog);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setAutoDefault(false);

        vboxLayout1->addWidget(addButton);

        removeButton = new QPushButton(replaceColorsDialog);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setEnabled(false);
        removeButton->setAutoDefault(false);

        vboxLayout1->addWidget(removeButton);

        editButton = new QPushButton(replaceColorsDialog);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setEnabled(false);

        vboxLayout1->addWidget(editButton);

        spacerItem = new QSpacerItem(75, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout1);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(replaceColorsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(replaceColorsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), replaceColorsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), replaceColorsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(replaceColorsDialog);
    } // setupUi

    void retranslateUi(QDialog *replaceColorsDialog)
    {
        replaceColorsDialog->setWindowTitle(QApplication::translate("replaceColorsDialog", "Replace Colors", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("replaceColorsDialog", "Add ...", 0, QApplication::UnicodeUTF8));
        removeButton->setText(QApplication::translate("replaceColorsDialog", "Remove", 0, QApplication::UnicodeUTF8));
        editButton->setText(QApplication::translate("replaceColorsDialog", "Edit...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class replaceColorsDialog: public Ui_replaceColorsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACECOLORS_H
