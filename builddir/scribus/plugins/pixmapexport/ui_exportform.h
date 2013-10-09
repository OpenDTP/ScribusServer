/********************************************************************************
** Form generated from reading UI file 'exportform.ui'
**
** Created: Sun Feb 24 21:57:29 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTFORM_H
#define UI_EXPORTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ExportForm
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *imageSizeLabel;
    QLabel *label_6;
    QComboBox *bitmapType;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *qualityBox;
    QSpinBox *DPIBox;
    QSpinBox *enlargementBox;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *outputDirectory;
    QPushButton *outputDirectoryButton;
    QGroupBox *rangeGroupBox;
    QGridLayout *gridLayout2;
    QPushButton *pageNrButton;
    QLineEdit *rangeVal;
    QRadioButton *onePageRadio;
    QSpacerItem *spacerItem;
    QRadioButton *intervalPagesRadio;
    QRadioButton *allPagesRadio;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportForm)
    {
        if (ExportForm->objectName().isEmpty())
            ExportForm->setObjectName(QString::fromUtf8("ExportForm"));
        ExportForm->resize(519, 339);
        gridLayout = new QGridLayout(ExportForm);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(ExportForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        imageSizeLabel = new QLabel(groupBox);
        imageSizeLabel->setObjectName(QString::fromUtf8("imageSizeLabel"));

        gridLayout1->addWidget(imageSizeLabel, 5, 0, 1, 2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout1->addWidget(label_6, 4, 0, 1, 2);

        bitmapType = new QComboBox(groupBox);
        bitmapType->setObjectName(QString::fromUtf8("bitmapType"));

        gridLayout1->addWidget(bitmapType, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout1->addWidget(label_5, 3, 0, 1, 1);

        qualityBox = new QSpinBox(groupBox);
        qualityBox->setObjectName(QString::fromUtf8("qualityBox"));
        qualityBox->setMaximum(100);
        qualityBox->setMinimum(-1);
        qualityBox->setValue(-1);

        gridLayout1->addWidget(qualityBox, 1, 1, 1, 1);

        DPIBox = new QSpinBox(groupBox);
        DPIBox->setObjectName(QString::fromUtf8("DPIBox"));
        DPIBox->setMaximum(2400);
        DPIBox->setMinimum(72);
        DPIBox->setValue(72);

        gridLayout1->addWidget(DPIBox, 2, 1, 1, 1);

        enlargementBox = new QSpinBox(groupBox);
        enlargementBox->setObjectName(QString::fromUtf8("enlargementBox"));
        enlargementBox->setMaximum(2400);
        enlargementBox->setMinimum(1);
        enlargementBox->setValue(100);

        gridLayout1->addWidget(enlargementBox, 3, 1, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(ExportForm);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        outputDirectory = new QLineEdit(ExportForm);
        outputDirectory->setObjectName(QString::fromUtf8("outputDirectory"));

        hboxLayout->addWidget(outputDirectory);

        outputDirectoryButton = new QPushButton(ExportForm);
        outputDirectoryButton->setObjectName(QString::fromUtf8("outputDirectoryButton"));

        hboxLayout->addWidget(outputDirectoryButton);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 2);

        rangeGroupBox = new QGroupBox(ExportForm);
        rangeGroupBox->setObjectName(QString::fromUtf8("rangeGroupBox"));
        gridLayout2 = new QGridLayout(rangeGroupBox);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        pageNrButton = new QPushButton(rangeGroupBox);
        pageNrButton->setObjectName(QString::fromUtf8("pageNrButton"));

        gridLayout2->addWidget(pageNrButton, 2, 2, 1, 1);

        rangeVal = new QLineEdit(rangeGroupBox);
        rangeVal->setObjectName(QString::fromUtf8("rangeVal"));

        gridLayout2->addWidget(rangeVal, 2, 1, 1, 1);

        onePageRadio = new QRadioButton(rangeGroupBox);
        onePageRadio->setObjectName(QString::fromUtf8("onePageRadio"));

        gridLayout2->addWidget(onePageRadio, 0, 0, 1, 3);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem, 3, 0, 1, 1);

        intervalPagesRadio = new QRadioButton(rangeGroupBox);
        intervalPagesRadio->setObjectName(QString::fromUtf8("intervalPagesRadio"));

        gridLayout2->addWidget(intervalPagesRadio, 2, 0, 1, 1);

        allPagesRadio = new QRadioButton(rangeGroupBox);
        allPagesRadio->setObjectName(QString::fromUtf8("allPagesRadio"));

        gridLayout2->addWidget(allPagesRadio, 1, 0, 1, 1);


        gridLayout->addWidget(rangeGroupBox, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(ExportForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(bitmapType);
        label_3->setBuddy(qualityBox);
        label_4->setBuddy(DPIBox);
        label_5->setBuddy(enlargementBox);
        label->setBuddy(outputDirectory);
#endif // QT_NO_SHORTCUT

        retranslateUi(ExportForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExportForm);
    } // setupUi

    void retranslateUi(QDialog *ExportForm)
    {
        ExportForm->setWindowTitle(QApplication::translate("ExportForm", "Export as Image(s)", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ExportForm", "Options", 0, QApplication::UnicodeUTF8));
        imageSizeLabel->setText(QApplication::translate("ExportForm", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ExportForm", "Image size in Pixels", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ExportForm", "Image &Type:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ExportForm", "&Quality:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ExportForm", "&Resolution:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ExportForm", "&Size:", 0, QApplication::UnicodeUTF8));
        qualityBox->setSuffix(QApplication::translate("ExportForm", " %", 0, QApplication::UnicodeUTF8));
        DPIBox->setSuffix(QApplication::translate("ExportForm", " dpi", 0, QApplication::UnicodeUTF8));
        enlargementBox->setSuffix(QApplication::translate("ExportForm", " %", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ExportForm", "&Export to Directory:", 0, QApplication::UnicodeUTF8));
        outputDirectoryButton->setText(QApplication::translate("ExportForm", "C&hange...", 0, QApplication::UnicodeUTF8));
        rangeGroupBox->setTitle(QApplication::translate("ExportForm", "Range", 0, QApplication::UnicodeUTF8));
        pageNrButton->setText(QString());
        onePageRadio->setText(QApplication::translate("ExportForm", "&Current page", 0, QApplication::UnicodeUTF8));
        intervalPagesRadio->setText(QApplication::translate("ExportForm", "&Range", 0, QApplication::UnicodeUTF8));
        allPagesRadio->setText(QApplication::translate("ExportForm", "&All pages", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ExportForm: public Ui_ExportForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTFORM_H
