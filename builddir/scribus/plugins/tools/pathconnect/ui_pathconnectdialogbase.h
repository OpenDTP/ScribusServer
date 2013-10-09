/********************************************************************************
** Form generated from reading UI file 'pathconnectdialogbase.ui'
**
** Created: Sun Feb 24 21:59:07 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATHCONNECTDIALOGBASE_H
#define UI_PATHCONNECTDIALOGBASE_H

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

QT_BEGIN_NAMESPACE

class Ui_PathConnectDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *firstLinePoint;
    QLabel *label_2;
    QComboBox *secondLinePoint;
    QLabel *label_3;
    QComboBox *modeCombo;
    QCheckBox *previewCheck;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PathConnectDialogBase)
    {
        if (PathConnectDialogBase->objectName().isEmpty())
            PathConnectDialogBase->setObjectName(QString::fromUtf8("PathConnectDialogBase"));
        PathConnectDialogBase->resize(235, 160);
        gridLayout = new QGridLayout(PathConnectDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(PathConnectDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        firstLinePoint = new QComboBox(PathConnectDialogBase);
        firstLinePoint->setObjectName(QString::fromUtf8("firstLinePoint"));

        gridLayout->addWidget(firstLinePoint, 0, 1, 1, 1);

        label_2 = new QLabel(PathConnectDialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        secondLinePoint = new QComboBox(PathConnectDialogBase);
        secondLinePoint->setObjectName(QString::fromUtf8("secondLinePoint"));

        gridLayout->addWidget(secondLinePoint, 1, 1, 1, 1);

        label_3 = new QLabel(PathConnectDialogBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        modeCombo = new QComboBox(PathConnectDialogBase);
        modeCombo->setObjectName(QString::fromUtf8("modeCombo"));

        gridLayout->addWidget(modeCombo, 2, 1, 1, 1);

        previewCheck = new QCheckBox(PathConnectDialogBase);
        previewCheck->setObjectName(QString::fromUtf8("previewCheck"));

        gridLayout->addWidget(previewCheck, 3, 0, 1, 2);

        buttonBox = new QDialogButtonBox(PathConnectDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);


        retranslateUi(PathConnectDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), PathConnectDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PathConnectDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(PathConnectDialogBase);
    } // setupUi

    void retranslateUi(QDialog *PathConnectDialogBase)
    {
        PathConnectDialogBase->setWindowTitle(QApplication::translate("PathConnectDialogBase", "Connect Paths", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PathConnectDialogBase", "Connect First Line", 0, QApplication::UnicodeUTF8));
        firstLinePoint->clear();
        firstLinePoint->insertItems(0, QStringList()
         << QApplication::translate("PathConnectDialogBase", "Starting Point", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PathConnectDialogBase", "End Point", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("PathConnectDialogBase", "with Second Line", 0, QApplication::UnicodeUTF8));
        secondLinePoint->clear();
        secondLinePoint->insertItems(0, QStringList()
         << QApplication::translate("PathConnectDialogBase", "Starting Point", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PathConnectDialogBase", "End Point", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("PathConnectDialogBase", "by using:", 0, QApplication::UnicodeUTF8));
        modeCombo->clear();
        modeCombo->insertItems(0, QStringList()
         << QApplication::translate("PathConnectDialogBase", "a straight Line", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PathConnectDialogBase", "Points moving", 0, QApplication::UnicodeUTF8)
        );
        previewCheck->setText(QApplication::translate("PathConnectDialogBase", "Preview on Canvas", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PathConnectDialogBase: public Ui_PathConnectDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHCONNECTDIALOGBASE_H
