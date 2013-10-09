/********************************************************************************
** Form generated from reading UI file 'smlinestylewidget.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMLINESTYLEWIDGET_H
#define UI_SMLINESTYLEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SMLineStyleWidget
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *addButton;
    QPushButton *removeButton;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QListWidget *lineStyles;
    QVBoxLayout *vboxLayout1;
    QGridLayout *gridLayout;
    QComboBox *endCombo;
    QComboBox *joinCombo;
    QGridLayout *gridLayout1;
    QSpinBox *shadeBox;
    QLabel *textLabel2;
    QSpacerItem *spacerItem1;
    QLabel *previewLabel;
    QSpacerItem *spacerItem2;

    void setupUi(QWidget *SMLineStyleWidget)
    {
        if (SMLineStyleWidget->objectName().isEmpty())
            SMLineStyleWidget->setObjectName(QString::fromUtf8("SMLineStyleWidget"));
        SMLineStyleWidget->resize(469, 298);
        vboxLayout = new QVBoxLayout(SMLineStyleWidget);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(5, 5, 5, 5);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        addButton = new QPushButton(SMLineStyleWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy);
        addButton->setMinimumSize(QSize(20, 20));
        addButton->setMaximumSize(QSize(20, 20));

        hboxLayout->addWidget(addButton);

        removeButton = new QPushButton(SMLineStyleWidget);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        sizePolicy.setHeightForWidth(removeButton->sizePolicy().hasHeightForWidth());
        removeButton->setSizePolicy(sizePolicy);
        removeButton->setMinimumSize(QSize(20, 20));
        removeButton->setMaximumSize(QSize(20, 20));

        hboxLayout->addWidget(removeButton);

        spacerItem = new QSpacerItem(150, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        lineStyles = new QListWidget(SMLineStyleWidget);
        lineStyles->setObjectName(QString::fromUtf8("lineStyles"));
        lineStyles->setMaximumSize(QSize(200, 32767));

        hboxLayout1->addWidget(lineStyles);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        endCombo = new QComboBox(SMLineStyleWidget);
        endCombo->setObjectName(QString::fromUtf8("endCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(endCombo->sizePolicy().hasHeightForWidth());
        endCombo->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(endCombo, 1, 0, 1, 1);

        joinCombo = new QComboBox(SMLineStyleWidget);
        joinCombo->setObjectName(QString::fromUtf8("joinCombo"));
        sizePolicy1.setHeightForWidth(joinCombo->sizePolicy().hasHeightForWidth());
        joinCombo->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(joinCombo, 2, 0, 1, 1);


        vboxLayout1->addLayout(gridLayout);

        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setHorizontalSpacing(6);
        gridLayout1->setVerticalSpacing(6);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        shadeBox = new QSpinBox(SMLineStyleWidget);
        shadeBox->setObjectName(QString::fromUtf8("shadeBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(shadeBox->sizePolicy().hasHeightForWidth());
        shadeBox->setSizePolicy(sizePolicy2);
        shadeBox->setMinimumSize(QSize(70, 0));
        shadeBox->setMinimum(0);
        shadeBox->setMaximum(100);
        shadeBox->setValue(100);

        gridLayout1->addWidget(shadeBox, 1, 1, 1, 1);

        textLabel2 = new QLabel(SMLineStyleWidget);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textLabel2->sizePolicy().hasHeightForWidth());
        textLabel2->setSizePolicy(sizePolicy3);
        textLabel2->setWordWrap(false);

        gridLayout1->addWidget(textLabel2, 0, 0, 1, 1);


        vboxLayout1->addLayout(gridLayout1);

        spacerItem1 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout1->addItem(spacerItem1);

        previewLabel = new QLabel(SMLineStyleWidget);
        previewLabel->setObjectName(QString::fromUtf8("previewLabel"));
        sizePolicy3.setHeightForWidth(previewLabel->sizePolicy().hasHeightForWidth());
        previewLabel->setSizePolicy(sizePolicy3);
        previewLabel->setMinimumSize(QSize(0, 60));
        previewLabel->setWordWrap(false);

        vboxLayout1->addWidget(previewLabel);

        spacerItem2 = new QSpacerItem(41, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem2);


        hboxLayout1->addLayout(vboxLayout1);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(SMLineStyleWidget);

        QMetaObject::connectSlotsByName(SMLineStyleWidget);
    } // setupUi

    void retranslateUi(QWidget *SMLineStyleWidget)
    {
        addButton->setText(QString());
        removeButton->setText(QString());
        shadeBox->setSuffix(QApplication::translate("SMLineStyleWidget", "%", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("SMLineStyleWidget", "Line Width:", 0, QApplication::UnicodeUTF8));
        previewLabel->setText(QString());
        Q_UNUSED(SMLineStyleWidget);
    } // retranslateUi

};

namespace Ui {
    class SMLineStyleWidget: public Ui_SMLineStyleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMLINESTYLEWIDGET_H
