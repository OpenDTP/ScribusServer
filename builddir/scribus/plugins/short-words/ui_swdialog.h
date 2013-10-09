/********************************************************************************
** Form generated from reading UI file 'swdialog.ui'
**
** Created: Sun Feb 24 21:58:15 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWDIALOG_H
#define UI_SWDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SWDialog
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *buttonGroup;
    QGridLayout *gridLayout;
    QRadioButton *frameRadio;
    QRadioButton *pageRadio;
    QRadioButton *allRadio;
    QGroupBox *languageGroup;
    QGridLayout *gridLayout_2;
    QCheckBox *styleCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *languageComboBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SWDialog)
    {
        if (SWDialog->objectName().isEmpty())
            SWDialog->setObjectName(QString::fromUtf8("SWDialog"));
        SWDialog->resize(400, 297);
        gridLayout_3 = new QGridLayout(SWDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        buttonGroup = new QGroupBox(SWDialog);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        gridLayout = new QGridLayout(buttonGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frameRadio = new QRadioButton(buttonGroup);
        frameRadio->setObjectName(QString::fromUtf8("frameRadio"));

        gridLayout->addWidget(frameRadio, 0, 0, 1, 1);

        pageRadio = new QRadioButton(buttonGroup);
        pageRadio->setObjectName(QString::fromUtf8("pageRadio"));

        gridLayout->addWidget(pageRadio, 1, 0, 1, 1);

        allRadio = new QRadioButton(buttonGroup);
        allRadio->setObjectName(QString::fromUtf8("allRadio"));

        gridLayout->addWidget(allRadio, 2, 0, 1, 1);


        gridLayout_3->addWidget(buttonGroup, 0, 0, 1, 1);

        languageGroup = new QGroupBox(SWDialog);
        languageGroup->setObjectName(QString::fromUtf8("languageGroup"));
        gridLayout_2 = new QGridLayout(languageGroup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        styleCheckBox = new QCheckBox(languageGroup);
        styleCheckBox->setObjectName(QString::fromUtf8("styleCheckBox"));

        gridLayout_2->addWidget(styleCheckBox, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(languageGroup);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        languageComboBox = new QComboBox(languageGroup);
        languageComboBox->setObjectName(QString::fromUtf8("languageComboBox"));

        horizontalLayout->addWidget(languageComboBox);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_3->addWidget(languageGroup, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(SWDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 3, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(languageComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(SWDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SWDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SWDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SWDialog);
    } // setupUi

    void retranslateUi(QDialog *SWDialog)
    {
        SWDialog->setWindowTitle(QApplication::translate("SWDialog", "Short Words", 0, QApplication::UnicodeUTF8));
        buttonGroup->setTitle(QApplication::translate("SWDialog", "Apply Unbreakable Space To:", 0, QApplication::UnicodeUTF8));
        frameRadio->setText(QApplication::translate("SWDialog", "&Selected Frames", 0, QApplication::UnicodeUTF8));
        pageRadio->setText(QApplication::translate("SWDialog", "Active &Page", 0, QApplication::UnicodeUTF8));
        allRadio->setText(QApplication::translate("SWDialog", "&All Items", 0, QApplication::UnicodeUTF8));
        languageGroup->setTitle(QApplication::translate("SWDialog", "Language Settings", 0, QApplication::UnicodeUTF8));
        styleCheckBox->setText(QApplication::translate("SWDialog", "&Use Language from Style Definition", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SWDialog", "&Languages:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SWDialog: public Ui_SWDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWDIALOG_H
