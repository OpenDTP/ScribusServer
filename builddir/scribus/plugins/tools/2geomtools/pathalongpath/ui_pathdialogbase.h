/********************************************************************************
** Form generated from reading UI file 'pathdialogbase.ui'
**
** Created: Sun Feb 24 21:58:57 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATHDIALOGBASE_H
#define UI_PATHDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include "scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_PathDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *typeCombo;
    QLabel *label_2;
    ScrSpinBox *offsetXSpin;
    QLabel *label_4;
    ScrSpinBox *offsetYSpin;
    QLabel *label_5;
    QComboBox *rotationCombo;
    QLabel *label_3;
    ScrSpinBox *gapSpin;
    QCheckBox *previewCheck;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PathDialogBase)
    {
        if (PathDialogBase->objectName().isEmpty())
            PathDialogBase->setObjectName(QString::fromUtf8("PathDialogBase"));
        PathDialogBase->resize(292, 218);
        verticalLayout = new QVBoxLayout(PathDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(PathDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        typeCombo = new QComboBox(PathDialogBase);
        typeCombo->setObjectName(QString::fromUtf8("typeCombo"));

        gridLayout->addWidget(typeCombo, 0, 1, 1, 1);

        label_2 = new QLabel(PathDialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        offsetXSpin = new ScrSpinBox(PathDialogBase);
        offsetXSpin->setObjectName(QString::fromUtf8("offsetXSpin"));

        gridLayout->addWidget(offsetXSpin, 1, 1, 1, 1);

        label_4 = new QLabel(PathDialogBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        offsetYSpin = new ScrSpinBox(PathDialogBase);
        offsetYSpin->setObjectName(QString::fromUtf8("offsetYSpin"));

        gridLayout->addWidget(offsetYSpin, 2, 1, 1, 1);

        label_5 = new QLabel(PathDialogBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        rotationCombo = new QComboBox(PathDialogBase);
        rotationCombo->setObjectName(QString::fromUtf8("rotationCombo"));

        gridLayout->addWidget(rotationCombo, 3, 1, 1, 1);

        label_3 = new QLabel(PathDialogBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        gapSpin = new ScrSpinBox(PathDialogBase);
        gapSpin->setObjectName(QString::fromUtf8("gapSpin"));

        gridLayout->addWidget(gapSpin, 4, 1, 1, 1);

        previewCheck = new QCheckBox(PathDialogBase);
        previewCheck->setObjectName(QString::fromUtf8("previewCheck"));

        gridLayout->addWidget(previewCheck, 5, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(PathDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PathDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), PathDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PathDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(PathDialogBase);
    } // setupUi

    void retranslateUi(QDialog *PathDialogBase)
    {
        PathDialogBase->setWindowTitle(QApplication::translate("PathDialogBase", "Path along Path", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PathDialogBase", "Effect Type", 0, QApplication::UnicodeUTF8));
        typeCombo->clear();
        typeCombo->insertItems(0, QStringList()
         << QApplication::translate("PathDialogBase", "Single", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PathDialogBase", "Single, stretched", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PathDialogBase", "Repeated", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PathDialogBase", "Repeated, stretched", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("PathDialogBase", "Horizontal Offset", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PathDialogBase", "Vertical Offset", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PathDialogBase", "Rotate Objects by:", 0, QApplication::UnicodeUTF8));
        rotationCombo->clear();
        rotationCombo->insertItems(0, QStringList()
         << QApplication::translate("PathDialogBase", "0\302\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PathDialogBase", "90\302\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PathDialogBase", "180\302\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PathDialogBase", "270\302\260", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("PathDialogBase", "Gap between Objects", 0, QApplication::UnicodeUTF8));
        previewCheck->setText(QApplication::translate("PathDialogBase", "Preview on Canvas", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PathDialogBase: public Ui_PathDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHDIALOGBASE_H
