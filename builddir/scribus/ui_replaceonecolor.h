/********************************************************************************
** Form generated from reading UI file 'replaceonecolor.ui'
**
** Created: Sun Feb 24 21:37:26 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACEONECOLOR_H
#define UI_REPLACEONECOLOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include "colorcombo.h"

QT_BEGIN_NAMESPACE

class Ui_replaceColorDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    ColorCombo *originalColor;
    QLabel *label_2;
    ColorCombo *replacementColor;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *replaceColorDialog)
    {
        if (replaceColorDialog->objectName().isEmpty())
            replaceColorDialog->setObjectName(QString::fromUtf8("replaceColorDialog"));
        replaceColorDialog->resize(224, 106);
        replaceColorDialog->setSizeGripEnabled(true);
        replaceColorDialog->setModal(true);
        vboxLayout = new QVBoxLayout(replaceColorDialog);
        vboxLayout->setSpacing(5);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setVerticalSpacing(5);
        label = new QLabel(replaceColorDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        originalColor = new ColorCombo(replaceColorDialog);
        originalColor->setObjectName(QString::fromUtf8("originalColor"));

        gridLayout->addWidget(originalColor, 0, 1, 1, 1);

        label_2 = new QLabel(replaceColorDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        replacementColor = new ColorCombo(replaceColorDialog);
        replacementColor->setObjectName(QString::fromUtf8("replacementColor"));

        gridLayout->addWidget(replacementColor, 1, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(replaceColorDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(replaceColorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), replaceColorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), replaceColorDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(replaceColorDialog);
    } // setupUi

    void retranslateUi(QDialog *replaceColorDialog)
    {
        replaceColorDialog->setWindowTitle(QApplication::translate("replaceColorDialog", "Replace Color", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("replaceColorDialog", "Replace:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("replaceColorDialog", "with:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class replaceColorDialog: public Ui_replaceColorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEONECOLOR_H
