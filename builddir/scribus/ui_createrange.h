/********************************************************************************
** Form generated from reading UI file 'createrange.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATERANGE_H
#define UI_CREATERANGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateRange
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *pageCountLabel;
    QLabel *pageCountValueLabel;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QTabWidget *tabWidget;
    QWidget *tabBasic;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout2;
    QPushButton *basicRangeDelButton;
    QSpacerItem *spacerItem2;
    QPushButton *basicRangeDownButton;
    QPushButton *basicRangeUpButton;
    QListWidget *basicRangeListBox;
    QGroupBox *basicAddARangeButtonGroup;
    QGridLayout *gridLayout3;
    QRadioButton *basicConsecutiveRadioButton;
    QRadioButton *basicEvenRadioButton;
    QLabel *basicConsecutiveFromLabel;
    QSpinBox *basicConsecutiveToSpinBox;
    QSpinBox *basicConsecutiveFromSpinBox;
    QSpacerItem *spacerItem3;
    QLabel *basicConsecutiveToLabel;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem4;
    QPushButton *basicRangeAddButton;
    QSpacerItem *spacerItem5;
    QRadioButton *basicOddRadioButton;
    QLineEdit *basicCommaSepLineEdit;
    QRadioButton *basicCommaSepRadioButton;
    QWidget *tabAdvanced;
    QGridLayout *gridLayout4;
    QSpacerItem *spacerItem6;
    QSpacerItem *spacerItem7;
    QLabel *advSampleOrderExampleLabel;
    QLabel *advSampleOrderLabel;
    QSpacerItem *spacerItem8;
    QSpinBox *advPageGroupSizeSpinBox;
    QLabel *advPageGroupSizeLabel;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem9;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *CreateRange)
    {
        if (CreateRange->objectName().isEmpty())
            CreateRange->setObjectName(QString::fromUtf8("CreateRange"));
        CreateRange->resize(562, 437);
        gridLayout = new QGridLayout(CreateRange);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        pageCountLabel = new QLabel(CreateRange);
        pageCountLabel->setObjectName(QString::fromUtf8("pageCountLabel"));
        pageCountLabel->setWordWrap(false);

        hboxLayout->addWidget(pageCountLabel);

        pageCountValueLabel = new QLabel(CreateRange);
        pageCountValueLabel->setObjectName(QString::fromUtf8("pageCountValueLabel"));
        pageCountValueLabel->setWordWrap(false);

        hboxLayout->addWidget(pageCountValueLabel);

        spacerItem = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        spacerItem1 = new QSpacerItem(72, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        tabWidget = new QTabWidget(CreateRange);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabBasic = new QWidget();
        tabBasic->setObjectName(QString::fromUtf8("tabBasic"));
        gridLayout1 = new QGridLayout(tabBasic);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setHorizontalSpacing(6);
        gridLayout1->setVerticalSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        groupBox1 = new QGroupBox(tabBasic);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        gridLayout2 = new QGridLayout(groupBox1);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setHorizontalSpacing(6);
        gridLayout2->setVerticalSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        basicRangeDelButton = new QPushButton(groupBox1);
        basicRangeDelButton->setObjectName(QString::fromUtf8("basicRangeDelButton"));

        gridLayout2->addWidget(basicRangeDelButton, 2, 1, 1, 1);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem2, 3, 1, 1, 1);

        basicRangeDownButton = new QPushButton(groupBox1);
        basicRangeDownButton->setObjectName(QString::fromUtf8("basicRangeDownButton"));

        gridLayout2->addWidget(basicRangeDownButton, 1, 1, 1, 1);

        basicRangeUpButton = new QPushButton(groupBox1);
        basicRangeUpButton->setObjectName(QString::fromUtf8("basicRangeUpButton"));

        gridLayout2->addWidget(basicRangeUpButton, 0, 1, 1, 1);

        basicRangeListBox = new QListWidget(groupBox1);
        basicRangeListBox->setObjectName(QString::fromUtf8("basicRangeListBox"));

        gridLayout2->addWidget(basicRangeListBox, 0, 0, 4, 1);


        gridLayout1->addWidget(groupBox1, 0, 1, 1, 1);

        basicAddARangeButtonGroup = new QGroupBox(tabBasic);
        basicAddARangeButtonGroup->setObjectName(QString::fromUtf8("basicAddARangeButtonGroup"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(basicAddARangeButtonGroup->sizePolicy().hasHeightForWidth());
        basicAddARangeButtonGroup->setSizePolicy(sizePolicy);
        gridLayout3 = new QGridLayout(basicAddARangeButtonGroup);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gridLayout3->setHorizontalSpacing(6);
        gridLayout3->setVerticalSpacing(6);
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        basicConsecutiveRadioButton = new QRadioButton(basicAddARangeButtonGroup);
        basicConsecutiveRadioButton->setObjectName(QString::fromUtf8("basicConsecutiveRadioButton"));
        basicConsecutiveRadioButton->setChecked(true);

        gridLayout3->addWidget(basicConsecutiveRadioButton, 0, 0, 1, 5);

        basicEvenRadioButton = new QRadioButton(basicAddARangeButtonGroup);
        basicEvenRadioButton->setObjectName(QString::fromUtf8("basicEvenRadioButton"));

        gridLayout3->addWidget(basicEvenRadioButton, 4, 0, 1, 5);

        basicConsecutiveFromLabel = new QLabel(basicAddARangeButtonGroup);
        basicConsecutiveFromLabel->setObjectName(QString::fromUtf8("basicConsecutiveFromLabel"));
        basicConsecutiveFromLabel->setWordWrap(false);

        gridLayout3->addWidget(basicConsecutiveFromLabel, 1, 0, 1, 1);

        basicConsecutiveToSpinBox = new QSpinBox(basicAddARangeButtonGroup);
        basicConsecutiveToSpinBox->setObjectName(QString::fromUtf8("basicConsecutiveToSpinBox"));

        gridLayout3->addWidget(basicConsecutiveToSpinBox, 1, 3, 1, 1);

        basicConsecutiveFromSpinBox = new QSpinBox(basicAddARangeButtonGroup);
        basicConsecutiveFromSpinBox->setObjectName(QString::fromUtf8("basicConsecutiveFromSpinBox"));

        gridLayout3->addWidget(basicConsecutiveFromSpinBox, 1, 1, 1, 1);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem3, 1, 4, 1, 1);

        basicConsecutiveToLabel = new QLabel(basicAddARangeButtonGroup);
        basicConsecutiveToLabel->setObjectName(QString::fromUtf8("basicConsecutiveToLabel"));
        basicConsecutiveToLabel->setWordWrap(false);

        gridLayout3->addWidget(basicConsecutiveToLabel, 1, 2, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        spacerItem4 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem4);

        basicRangeAddButton = new QPushButton(basicAddARangeButtonGroup);
        basicRangeAddButton->setObjectName(QString::fromUtf8("basicRangeAddButton"));

        hboxLayout1->addWidget(basicRangeAddButton);

        spacerItem5 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem5);


        gridLayout3->addLayout(hboxLayout1, 6, 0, 1, 5);

        basicOddRadioButton = new QRadioButton(basicAddARangeButtonGroup);
        basicOddRadioButton->setObjectName(QString::fromUtf8("basicOddRadioButton"));

        gridLayout3->addWidget(basicOddRadioButton, 5, 0, 1, 5);

        basicCommaSepLineEdit = new QLineEdit(basicAddARangeButtonGroup);
        basicCommaSepLineEdit->setObjectName(QString::fromUtf8("basicCommaSepLineEdit"));

        gridLayout3->addWidget(basicCommaSepLineEdit, 3, 0, 1, 5);

        basicCommaSepRadioButton = new QRadioButton(basicAddARangeButtonGroup);
        basicCommaSepRadioButton->setObjectName(QString::fromUtf8("basicCommaSepRadioButton"));

        gridLayout3->addWidget(basicCommaSepRadioButton, 2, 0, 1, 5);


        gridLayout1->addWidget(basicAddARangeButtonGroup, 0, 0, 1, 1);

        tabWidget->addTab(tabBasic, QString());
        tabAdvanced = new QWidget();
        tabAdvanced->setObjectName(QString::fromUtf8("tabAdvanced"));
        gridLayout4 = new QGridLayout(tabAdvanced);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(11, 11, 11, 11);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout4->setHorizontalSpacing(6);
        gridLayout4->setVerticalSpacing(6);
        gridLayout4->setContentsMargins(9, 9, 9, 9);
        spacerItem6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(spacerItem6, 2, 0, 1, 5);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem7, 1, 4, 1, 1);

        advSampleOrderExampleLabel = new QLabel(tabAdvanced);
        advSampleOrderExampleLabel->setObjectName(QString::fromUtf8("advSampleOrderExampleLabel"));
        advSampleOrderExampleLabel->setWordWrap(false);

        gridLayout4->addWidget(advSampleOrderExampleLabel, 1, 2, 1, 2);

        advSampleOrderLabel = new QLabel(tabAdvanced);
        advSampleOrderLabel->setObjectName(QString::fromUtf8("advSampleOrderLabel"));
        advSampleOrderLabel->setWordWrap(false);

        gridLayout4->addWidget(advSampleOrderLabel, 1, 0, 1, 2);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem8, 0, 3, 1, 2);

        advPageGroupSizeSpinBox = new QSpinBox(tabAdvanced);
        advPageGroupSizeSpinBox->setObjectName(QString::fromUtf8("advPageGroupSizeSpinBox"));

        gridLayout4->addWidget(advPageGroupSizeSpinBox, 0, 1, 1, 2);

        advPageGroupSizeLabel = new QLabel(tabAdvanced);
        advPageGroupSizeLabel->setObjectName(QString::fromUtf8("advPageGroupSizeLabel"));
        advPageGroupSizeLabel->setWordWrap(false);

        gridLayout4->addWidget(advPageGroupSizeLabel, 0, 0, 1, 1);

        tabWidget->addTab(tabAdvanced, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        spacerItem9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem9);

        okButton = new QPushButton(CreateRange);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout2->addWidget(okButton);

        cancelButton = new QPushButton(CreateRange);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout2->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout2, 2, 0, 1, 1);


        retranslateUi(CreateRange);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CreateRange);
    } // setupUi

    void retranslateUi(QDialog *CreateRange)
    {
        CreateRange->setWindowTitle(QApplication::translate("CreateRange", "Create Range", 0, QApplication::UnicodeUTF8));
        pageCountLabel->setText(QApplication::translate("CreateRange", "Number of Pages in Document:", 0, QApplication::UnicodeUTF8));
        pageCountValueLabel->setText(QApplication::translate("CreateRange", "Doc Page Range", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QApplication::translate("CreateRange", "Range of Pages", 0, QApplication::UnicodeUTF8));
        basicRangeDelButton->setText(QApplication::translate("CreateRange", "De&lete", 0, QApplication::UnicodeUTF8));
        basicRangeDelButton->setShortcut(QApplication::translate("CreateRange", "Alt+L", 0, QApplication::UnicodeUTF8));
        basicRangeDownButton->setText(QApplication::translate("CreateRange", "Move &Down", 0, QApplication::UnicodeUTF8));
        basicRangeDownButton->setShortcut(QApplication::translate("CreateRange", "Alt+D", 0, QApplication::UnicodeUTF8));
        basicRangeUpButton->setText(QApplication::translate("CreateRange", "Move &Up", 0, QApplication::UnicodeUTF8));
        basicRangeUpButton->setShortcut(QApplication::translate("CreateRange", "Alt+U", 0, QApplication::UnicodeUTF8));
        basicAddARangeButtonGroup->setTitle(QApplication::translate("CreateRange", "Add a Range of Pages", 0, QApplication::UnicodeUTF8));
        basicConsecutiveRadioButton->setText(QApplication::translate("CreateRange", "Consecutive Pages", 0, QApplication::UnicodeUTF8));
        basicEvenRadioButton->setText(QApplication::translate("CreateRange", "Even Pages", 0, QApplication::UnicodeUTF8));
        basicConsecutiveFromLabel->setText(QApplication::translate("CreateRange", "From:", 0, QApplication::UnicodeUTF8));
        basicConsecutiveToLabel->setText(QApplication::translate("CreateRange", "To:", 0, QApplication::UnicodeUTF8));
        basicRangeAddButton->setText(QApplication::translate("CreateRange", "&Add To Range", 0, QApplication::UnicodeUTF8));
        basicRangeAddButton->setShortcut(QApplication::translate("CreateRange", "Alt+A", 0, QApplication::UnicodeUTF8));
        basicOddRadioButton->setText(QApplication::translate("CreateRange", "Odd Pages", 0, QApplication::UnicodeUTF8));
        basicCommaSepRadioButton->setText(QApplication::translate("CreateRange", "Comma Separated List", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabBasic), QApplication::translate("CreateRange", "Basic Range Selection", 0, QApplication::UnicodeUTF8));
        advSampleOrderExampleLabel->setText(QApplication::translate("CreateRange", "Page Order", 0, QApplication::UnicodeUTF8));
        advSampleOrderLabel->setText(QApplication::translate("CreateRange", "Sample Page Order:", 0, QApplication::UnicodeUTF8));
        advPageGroupSizeLabel->setText(QApplication::translate("CreateRange", "Page Group Size:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabAdvanced), QApplication::translate("CreateRange", "Advanced Reordering", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("CreateRange", "&OK", 0, QApplication::UnicodeUTF8));
        okButton->setShortcut(QApplication::translate("CreateRange", "Alt+O", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("CreateRange", "&Cancel", 0, QApplication::UnicodeUTF8));
        cancelButton->setShortcut(QApplication::translate("CreateRange", "Alt+C", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CreateRange: public Ui_CreateRange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATERANGE_H
