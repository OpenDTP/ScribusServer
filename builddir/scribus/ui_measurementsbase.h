/********************************************************************************
** Form generated from reading UI file 'measurementsbase.ui'
**
** Created: Sun Feb 24 21:37:26 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEASUREMENTSBASE_H
#define UI_MEASUREMENTSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_MeasurementsBase
{
public:
    QGridLayout *gridLayout;
    QLabel *x1Label;
    QLabel *x1Data;
    QLabel *y1Label;
    QLabel *y1Data;
    QLabel *x2Label;
    QLabel *x2Data;
    QLabel *y2Label;
    QLabel *y2Data;
    QLabel *lengthLabel;
    QLabel *lengthData;
    QLabel *dxLabel;
    QLabel *dXData;
    QLabel *dyLabel;
    QLabel *dYData;
    QLabel *angleLabel;
    QLabel *angleData;
    QLabel *label;
    QComboBox *unitSwitch;

    void setupUi(QDialog *MeasurementsBase)
    {
        if (MeasurementsBase->objectName().isEmpty())
            MeasurementsBase->setObjectName(QString::fromUtf8("MeasurementsBase"));
        MeasurementsBase->resize(142, 207);
        gridLayout = new QGridLayout(MeasurementsBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        x1Label = new QLabel(MeasurementsBase);
        x1Label->setObjectName(QString::fromUtf8("x1Label"));

        gridLayout->addWidget(x1Label, 0, 0, 1, 1);

        x1Data = new QLabel(MeasurementsBase);
        x1Data->setObjectName(QString::fromUtf8("x1Data"));
        x1Data->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(x1Data, 0, 1, 1, 1);

        y1Label = new QLabel(MeasurementsBase);
        y1Label->setObjectName(QString::fromUtf8("y1Label"));

        gridLayout->addWidget(y1Label, 1, 0, 1, 1);

        y1Data = new QLabel(MeasurementsBase);
        y1Data->setObjectName(QString::fromUtf8("y1Data"));
        y1Data->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(y1Data, 1, 1, 1, 1);

        x2Label = new QLabel(MeasurementsBase);
        x2Label->setObjectName(QString::fromUtf8("x2Label"));

        gridLayout->addWidget(x2Label, 2, 0, 1, 1);

        x2Data = new QLabel(MeasurementsBase);
        x2Data->setObjectName(QString::fromUtf8("x2Data"));
        x2Data->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(x2Data, 2, 1, 1, 1);

        y2Label = new QLabel(MeasurementsBase);
        y2Label->setObjectName(QString::fromUtf8("y2Label"));

        gridLayout->addWidget(y2Label, 3, 0, 1, 1);

        y2Data = new QLabel(MeasurementsBase);
        y2Data->setObjectName(QString::fromUtf8("y2Data"));
        y2Data->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(y2Data, 3, 1, 1, 1);

        lengthLabel = new QLabel(MeasurementsBase);
        lengthLabel->setObjectName(QString::fromUtf8("lengthLabel"));

        gridLayout->addWidget(lengthLabel, 4, 0, 1, 1);

        lengthData = new QLabel(MeasurementsBase);
        lengthData->setObjectName(QString::fromUtf8("lengthData"));
        lengthData->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lengthData, 4, 1, 1, 1);

        dxLabel = new QLabel(MeasurementsBase);
        dxLabel->setObjectName(QString::fromUtf8("dxLabel"));

        gridLayout->addWidget(dxLabel, 5, 0, 1, 1);

        dXData = new QLabel(MeasurementsBase);
        dXData->setObjectName(QString::fromUtf8("dXData"));
        dXData->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(dXData, 5, 1, 1, 1);

        dyLabel = new QLabel(MeasurementsBase);
        dyLabel->setObjectName(QString::fromUtf8("dyLabel"));

        gridLayout->addWidget(dyLabel, 6, 0, 1, 1);

        dYData = new QLabel(MeasurementsBase);
        dYData->setObjectName(QString::fromUtf8("dYData"));
        dYData->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(dYData, 6, 1, 1, 1);

        angleLabel = new QLabel(MeasurementsBase);
        angleLabel->setObjectName(QString::fromUtf8("angleLabel"));

        gridLayout->addWidget(angleLabel, 7, 0, 1, 1);

        angleData = new QLabel(MeasurementsBase);
        angleData->setObjectName(QString::fromUtf8("angleData"));
        angleData->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(angleData, 7, 1, 1, 1);

        label = new QLabel(MeasurementsBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 8, 0, 1, 1);

        unitSwitch = new QComboBox(MeasurementsBase);
        unitSwitch->setObjectName(QString::fromUtf8("unitSwitch"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(unitSwitch->sizePolicy().hasHeightForWidth());
        unitSwitch->setSizePolicy(sizePolicy);
        unitSwitch->setMinimumContentsLength(3);
        unitSwitch->setFrame(true);

        gridLayout->addWidget(unitSwitch, 8, 1, 1, 1);


        retranslateUi(MeasurementsBase);

        QMetaObject::connectSlotsByName(MeasurementsBase);
    } // setupUi

    void retranslateUi(QDialog *MeasurementsBase)
    {
        MeasurementsBase->setWindowTitle(QApplication::translate("MeasurementsBase", "Distances", 0, QApplication::UnicodeUTF8));
        x1Label->setText(QApplication::translate("MeasurementsBase", "X1:", 0, QApplication::UnicodeUTF8));
        x1Data->setText(QApplication::translate("MeasurementsBase", "10000.0000", 0, QApplication::UnicodeUTF8));
        y1Label->setText(QApplication::translate("MeasurementsBase", "Y1:", 0, QApplication::UnicodeUTF8));
        y1Data->setText(QApplication::translate("MeasurementsBase", "10000.0000", 0, QApplication::UnicodeUTF8));
        x2Label->setText(QApplication::translate("MeasurementsBase", "X2:", 0, QApplication::UnicodeUTF8));
        x2Data->setText(QApplication::translate("MeasurementsBase", "10000.0000", 0, QApplication::UnicodeUTF8));
        y2Label->setText(QApplication::translate("MeasurementsBase", "Y2:", 0, QApplication::UnicodeUTF8));
        y2Data->setText(QApplication::translate("MeasurementsBase", "10000.0000", 0, QApplication::UnicodeUTF8));
        lengthLabel->setText(QApplication::translate("MeasurementsBase", "Length:", 0, QApplication::UnicodeUTF8));
        lengthData->setText(QApplication::translate("MeasurementsBase", "10000.0000", 0, QApplication::UnicodeUTF8));
        dxLabel->setText(QApplication::translate("MeasurementsBase", "DX:", 0, QApplication::UnicodeUTF8));
        dXData->setText(QApplication::translate("MeasurementsBase", "10000.0000", 0, QApplication::UnicodeUTF8));
        dyLabel->setText(QApplication::translate("MeasurementsBase", "DY:", 0, QApplication::UnicodeUTF8));
        dYData->setText(QApplication::translate("MeasurementsBase", "10000.0000", 0, QApplication::UnicodeUTF8));
        angleLabel->setText(QApplication::translate("MeasurementsBase", "Angle:", 0, QApplication::UnicodeUTF8));
        angleData->setText(QApplication::translate("MeasurementsBase", "10000.0000", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MeasurementsBase", "Unit:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MeasurementsBase: public Ui_MeasurementsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEASUREMENTSBASE_H
