/********************************************************************************
** Form generated from reading UI file 'insertaframe.ui'
**
** Created: Sun Feb 24 21:37:26 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTAFRAME_H
#define UI_INSERTAFRAME_H

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
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "scrspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_InsertAFrame
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *typeTab;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QGroupBox *typeGroupBox;
    QVBoxLayout *vboxLayout2;
    QRadioButton *radioButtonTextFrame;
    QRadioButton *radioButtonImageFrame;
    QSpacerItem *spacerItem;
    QTextEdit *typeTextEdit;
    QWidget *locationTab;
    QHBoxLayout *hboxLayout1;
    QGroupBox *pagePlacementGroupBox;
    QVBoxLayout *vboxLayout3;
    QRadioButton *radioButtonCurrentPage;
    QRadioButton *radioButtonAllPages;
    QRadioButton *radioButtonRangeOfPages;
    QHBoxLayout *hboxLayout2;
    QLineEdit *placementPagesLineEdit;
    QToolButton *placementPagesRangeButton;
    QSpacerItem *spacerItem1;
    QGroupBox *framePositionGroupBox;
    QVBoxLayout *vboxLayout4;
    QRadioButton *radioButtonTopLeftOfMargins;
    QRadioButton *radioButtonTopLeftOfPage;
    QRadioButton *radioButtonTopLeftOfBleed;
    QRadioButton *radioButtonCustomPosition;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    ScrSpinBox *yPosScrSpinBox;
    ScrSpinBox *xPosScrSpinBox;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QWidget *sizeTab;
    QHBoxLayout *hboxLayout4;
    QGroupBox *sizeGroupBox;
    QVBoxLayout *vboxLayout5;
    QRadioButton *radioButtonPageMarginSize;
    QRadioButton *radioButtonPageSize;
    QRadioButton *radioButtonBleedSize;
    QRadioButton *radioButtonImageSize;
    QRadioButton *radioButtonCustomSize;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacerItem5;
    QGridLayout *gridLayout1;
    QLabel *label_3;
    QLabel *label_4;
    ScrSpinBox *widthScrSpinBox;
    ScrSpinBox *heightScrSpinBox;
    QSpacerItem *spacerItem6;
    QSpacerItem *spacerItem7;
    QWidget *optionsTab;
    QVBoxLayout *vboxLayout6;
    QStackedWidget *optionsStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout6;
    QGridLayout *gridLayout2;
    QSpinBox *textColumnCountSpinBox;
    QLabel *textColumnGapLabel;
    ScrSpinBox *textColumnGapScrSpinBox;
    QLabel *textColumnCountLabel;
    QSpacerItem *spacerItem8;
    QCheckBox *checkBoxLinkCreatedTextFrames;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxLinkToExistingFrame;
    QComboBox *comboBoxLinkToExistingFrameName;
    QHBoxLayout *hboxLayout7;
    QLabel *sourceDocLabel;
    QLineEdit *sourceDocLineEdit;
    QToolButton *selectDocFileButton;
    QSpacerItem *spacerItem9;
    QWidget *page_2;
    QVBoxLayout *vboxLayout7;
    QHBoxLayout *hboxLayout8;
    QLabel *sourceImageLabel;
    QLineEdit *sourceImageLineEdit;
    QToolButton *selectImageFileButton;
    QSpacerItem *spacerItem10;
    QWidget *page_3;
    QVBoxLayout *vboxLayout8;
    QLabel *label_9;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InsertAFrame)
    {
        if (InsertAFrame->objectName().isEmpty())
            InsertAFrame->setObjectName(QString::fromUtf8("InsertAFrame"));
        InsertAFrame->resize(467, 364);
        vboxLayout = new QVBoxLayout(InsertAFrame);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(InsertAFrame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        typeTab = new QWidget();
        typeTab->setObjectName(QString::fromUtf8("typeTab"));
        hboxLayout = new QHBoxLayout(typeTab);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        typeGroupBox = new QGroupBox(typeTab);
        typeGroupBox->setObjectName(QString::fromUtf8("typeGroupBox"));
        vboxLayout2 = new QVBoxLayout(typeGroupBox);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        radioButtonTextFrame = new QRadioButton(typeGroupBox);
        radioButtonTextFrame->setObjectName(QString::fromUtf8("radioButtonTextFrame"));

        vboxLayout2->addWidget(radioButtonTextFrame);

        radioButtonImageFrame = new QRadioButton(typeGroupBox);
        radioButtonImageFrame->setObjectName(QString::fromUtf8("radioButtonImageFrame"));

        vboxLayout2->addWidget(radioButtonImageFrame);


        vboxLayout1->addWidget(typeGroupBox);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout1);

        typeTextEdit = new QTextEdit(typeTab);
        typeTextEdit->setObjectName(QString::fromUtf8("typeTextEdit"));
        typeTextEdit->setReadOnly(true);

        hboxLayout->addWidget(typeTextEdit);

        tabWidget->addTab(typeTab, QString());
        locationTab = new QWidget();
        locationTab->setObjectName(QString::fromUtf8("locationTab"));
        hboxLayout1 = new QHBoxLayout(locationTab);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        pagePlacementGroupBox = new QGroupBox(locationTab);
        pagePlacementGroupBox->setObjectName(QString::fromUtf8("pagePlacementGroupBox"));
        vboxLayout3 = new QVBoxLayout(pagePlacementGroupBox);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        radioButtonCurrentPage = new QRadioButton(pagePlacementGroupBox);
        radioButtonCurrentPage->setObjectName(QString::fromUtf8("radioButtonCurrentPage"));

        vboxLayout3->addWidget(radioButtonCurrentPage);

        radioButtonAllPages = new QRadioButton(pagePlacementGroupBox);
        radioButtonAllPages->setObjectName(QString::fromUtf8("radioButtonAllPages"));

        vboxLayout3->addWidget(radioButtonAllPages);

        radioButtonRangeOfPages = new QRadioButton(pagePlacementGroupBox);
        radioButtonRangeOfPages->setObjectName(QString::fromUtf8("radioButtonRangeOfPages"));

        vboxLayout3->addWidget(radioButtonRangeOfPages);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        placementPagesLineEdit = new QLineEdit(pagePlacementGroupBox);
        placementPagesLineEdit->setObjectName(QString::fromUtf8("placementPagesLineEdit"));

        hboxLayout2->addWidget(placementPagesLineEdit);

        placementPagesRangeButton = new QToolButton(pagePlacementGroupBox);
        placementPagesRangeButton->setObjectName(QString::fromUtf8("placementPagesRangeButton"));

        hboxLayout2->addWidget(placementPagesRangeButton);


        vboxLayout3->addLayout(hboxLayout2);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem1);


        hboxLayout1->addWidget(pagePlacementGroupBox);

        framePositionGroupBox = new QGroupBox(locationTab);
        framePositionGroupBox->setObjectName(QString::fromUtf8("framePositionGroupBox"));
        vboxLayout4 = new QVBoxLayout(framePositionGroupBox);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        radioButtonTopLeftOfMargins = new QRadioButton(framePositionGroupBox);
        radioButtonTopLeftOfMargins->setObjectName(QString::fromUtf8("radioButtonTopLeftOfMargins"));

        vboxLayout4->addWidget(radioButtonTopLeftOfMargins);

        radioButtonTopLeftOfPage = new QRadioButton(framePositionGroupBox);
        radioButtonTopLeftOfPage->setObjectName(QString::fromUtf8("radioButtonTopLeftOfPage"));

        vboxLayout4->addWidget(radioButtonTopLeftOfPage);

        radioButtonTopLeftOfBleed = new QRadioButton(framePositionGroupBox);
        radioButtonTopLeftOfBleed->setObjectName(QString::fromUtf8("radioButtonTopLeftOfBleed"));

        vboxLayout4->addWidget(radioButtonTopLeftOfBleed);

        radioButtonCustomPosition = new QRadioButton(framePositionGroupBox);
        radioButtonCustomPosition->setObjectName(QString::fromUtf8("radioButtonCustomPosition"));

        vboxLayout4->addWidget(radioButtonCustomPosition);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem2 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(framePositionGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(framePositionGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        yPosScrSpinBox = new ScrSpinBox(framePositionGroupBox);
        yPosScrSpinBox->setObjectName(QString::fromUtf8("yPosScrSpinBox"));

        gridLayout->addWidget(yPosScrSpinBox, 1, 1, 1, 1);

        xPosScrSpinBox = new ScrSpinBox(framePositionGroupBox);
        xPosScrSpinBox->setObjectName(QString::fromUtf8("xPosScrSpinBox"));

        gridLayout->addWidget(xPosScrSpinBox, 0, 1, 1, 1);


        hboxLayout3->addLayout(gridLayout);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);


        vboxLayout4->addLayout(hboxLayout3);

        spacerItem4 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout4->addItem(spacerItem4);


        hboxLayout1->addWidget(framePositionGroupBox);

        tabWidget->addTab(locationTab, QString());
        sizeTab = new QWidget();
        sizeTab->setObjectName(QString::fromUtf8("sizeTab"));
        hboxLayout4 = new QHBoxLayout(sizeTab);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        sizeGroupBox = new QGroupBox(sizeTab);
        sizeGroupBox->setObjectName(QString::fromUtf8("sizeGroupBox"));
        vboxLayout5 = new QVBoxLayout(sizeGroupBox);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        radioButtonPageMarginSize = new QRadioButton(sizeGroupBox);
        radioButtonPageMarginSize->setObjectName(QString::fromUtf8("radioButtonPageMarginSize"));

        vboxLayout5->addWidget(radioButtonPageMarginSize);

        radioButtonPageSize = new QRadioButton(sizeGroupBox);
        radioButtonPageSize->setObjectName(QString::fromUtf8("radioButtonPageSize"));

        vboxLayout5->addWidget(radioButtonPageSize);

        radioButtonBleedSize = new QRadioButton(sizeGroupBox);
        radioButtonBleedSize->setObjectName(QString::fromUtf8("radioButtonBleedSize"));

        vboxLayout5->addWidget(radioButtonBleedSize);

        radioButtonImageSize = new QRadioButton(sizeGroupBox);
        radioButtonImageSize->setObjectName(QString::fromUtf8("radioButtonImageSize"));

        vboxLayout5->addWidget(radioButtonImageSize);

        radioButtonCustomSize = new QRadioButton(sizeGroupBox);
        radioButtonCustomSize->setObjectName(QString::fromUtf8("radioButtonCustomSize"));

        vboxLayout5->addWidget(radioButtonCustomSize);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        spacerItem5 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem5);

        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_3 = new QLabel(sizeGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(sizeGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 0, 0, 1, 1);

        widthScrSpinBox = new ScrSpinBox(sizeGroupBox);
        widthScrSpinBox->setObjectName(QString::fromUtf8("widthScrSpinBox"));

        gridLayout1->addWidget(widthScrSpinBox, 0, 1, 1, 1);

        heightScrSpinBox = new ScrSpinBox(sizeGroupBox);
        heightScrSpinBox->setObjectName(QString::fromUtf8("heightScrSpinBox"));

        gridLayout1->addWidget(heightScrSpinBox, 1, 1, 1, 1);


        hboxLayout5->addLayout(gridLayout1);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem6);


        vboxLayout5->addLayout(hboxLayout5);

        spacerItem7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout5->addItem(spacerItem7);


        hboxLayout4->addWidget(sizeGroupBox);

        tabWidget->addTab(sizeTab, QString());
        optionsTab = new QWidget();
        optionsTab->setObjectName(QString::fromUtf8("optionsTab"));
        vboxLayout6 = new QVBoxLayout(optionsTab);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        optionsStackedWidget = new QStackedWidget(optionsTab);
        optionsStackedWidget->setObjectName(QString::fromUtf8("optionsStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        gridLayout2 = new QGridLayout();
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        textColumnCountSpinBox = new QSpinBox(page);
        textColumnCountSpinBox->setObjectName(QString::fromUtf8("textColumnCountSpinBox"));
        textColumnCountSpinBox->setMinimum(1);

        gridLayout2->addWidget(textColumnCountSpinBox, 0, 1, 1, 1);

        textColumnGapLabel = new QLabel(page);
        textColumnGapLabel->setObjectName(QString::fromUtf8("textColumnGapLabel"));

        gridLayout2->addWidget(textColumnGapLabel, 1, 0, 1, 1);

        textColumnGapScrSpinBox = new ScrSpinBox(page);
        textColumnGapScrSpinBox->setObjectName(QString::fromUtf8("textColumnGapScrSpinBox"));

        gridLayout2->addWidget(textColumnGapScrSpinBox, 1, 1, 1, 1);

        textColumnCountLabel = new QLabel(page);
        textColumnCountLabel->setObjectName(QString::fromUtf8("textColumnCountLabel"));

        gridLayout2->addWidget(textColumnCountLabel, 0, 0, 1, 1);


        hboxLayout6->addLayout(gridLayout2);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem8);


        verticalLayout->addLayout(hboxLayout6);

        checkBoxLinkCreatedTextFrames = new QCheckBox(page);
        checkBoxLinkCreatedTextFrames->setObjectName(QString::fromUtf8("checkBoxLinkCreatedTextFrames"));

        verticalLayout->addWidget(checkBoxLinkCreatedTextFrames);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBoxLinkToExistingFrame = new QCheckBox(page);
        checkBoxLinkToExistingFrame->setObjectName(QString::fromUtf8("checkBoxLinkToExistingFrame"));

        horizontalLayout->addWidget(checkBoxLinkToExistingFrame);

        comboBoxLinkToExistingFrameName = new QComboBox(page);
        comboBoxLinkToExistingFrameName->setObjectName(QString::fromUtf8("comboBoxLinkToExistingFrameName"));
        comboBoxLinkToExistingFrameName->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxLinkToExistingFrameName->sizePolicy().hasHeightForWidth());
        comboBoxLinkToExistingFrameName->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comboBoxLinkToExistingFrameName);


        verticalLayout->addLayout(horizontalLayout);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        sourceDocLabel = new QLabel(page);
        sourceDocLabel->setObjectName(QString::fromUtf8("sourceDocLabel"));

        hboxLayout7->addWidget(sourceDocLabel);

        sourceDocLineEdit = new QLineEdit(page);
        sourceDocLineEdit->setObjectName(QString::fromUtf8("sourceDocLineEdit"));

        hboxLayout7->addWidget(sourceDocLineEdit);

        selectDocFileButton = new QToolButton(page);
        selectDocFileButton->setObjectName(QString::fromUtf8("selectDocFileButton"));

        hboxLayout7->addWidget(selectDocFileButton);


        verticalLayout->addLayout(hboxLayout7);

        spacerItem9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem9);

        optionsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        vboxLayout7 = new QVBoxLayout(page_2);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        sourceImageLabel = new QLabel(page_2);
        sourceImageLabel->setObjectName(QString::fromUtf8("sourceImageLabel"));

        hboxLayout8->addWidget(sourceImageLabel);

        sourceImageLineEdit = new QLineEdit(page_2);
        sourceImageLineEdit->setObjectName(QString::fromUtf8("sourceImageLineEdit"));

        hboxLayout8->addWidget(sourceImageLineEdit);

        selectImageFileButton = new QToolButton(page_2);
        selectImageFileButton->setObjectName(QString::fromUtf8("selectImageFileButton"));

        hboxLayout8->addWidget(selectImageFileButton);


        vboxLayout7->addLayout(hboxLayout8);

        spacerItem10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout7->addItem(spacerItem10);

        optionsStackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        vboxLayout8 = new QVBoxLayout(page_3);
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        vboxLayout8->addWidget(label_9);

        optionsStackedWidget->addWidget(page_3);

        vboxLayout6->addWidget(optionsStackedWidget);

        tabWidget->addTab(optionsTab, QString());

        vboxLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(InsertAFrame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(InsertAFrame);
        QObject::connect(buttonBox, SIGNAL(accepted()), InsertAFrame, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), InsertAFrame, SLOT(reject()));

        tabWidget->setCurrentIndex(0);
        optionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InsertAFrame);
    } // setupUi

    void retranslateUi(QDialog *InsertAFrame)
    {
        InsertAFrame->setWindowTitle(QApplication::translate("InsertAFrame", "Insert Frames", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        typeGroupBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        typeGroupBox->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        radioButtonTextFrame->setToolTip(QApplication::translate("InsertAFrame", "Insert one or more text frames", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButtonTextFrame->setText(QApplication::translate("InsertAFrame", "&Text Frame", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radioButtonImageFrame->setToolTip(QApplication::translate("InsertAFrame", "Insert one or more image frames", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButtonImageFrame->setText(QApplication::translate("InsertAFrame", "&Image Frame", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(typeTab), QApplication::translate("InsertAFrame", "T&ype", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pagePlacementGroupBox->setToolTip(QApplication::translate("InsertAFrame", "Place the new frames on the current page, on all pages or on a selected range", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pagePlacementGroupBox->setTitle(QApplication::translate("InsertAFrame", "Page Placement", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radioButtonCurrentPage->setToolTip(QApplication::translate("InsertAFrame", "Insert the frame on the current page only", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButtonCurrentPage->setText(QApplication::translate("InsertAFrame", "Current Page", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radioButtonAllPages->setToolTip(QApplication::translate("InsertAFrame", "Insert one frame for each existing page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButtonAllPages->setText(QApplication::translate("InsertAFrame", "All Pages", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radioButtonRangeOfPages->setToolTip(QApplication::translate("InsertAFrame", "Insert frames on a range of pages", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButtonRangeOfPages->setText(QApplication::translate("InsertAFrame", "Range of Pages", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        placementPagesLineEdit->setToolTip(QApplication::translate("InsertAFrame", "Range of pages to insert frames on", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        placementPagesRangeButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        placementPagesRangeButton->setText(QApplication::translate("InsertAFrame", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        framePositionGroupBox->setToolTip(QApplication::translate("InsertAFrame", "Position the new frame in relation to the page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        framePositionGroupBox->setTitle(QApplication::translate("InsertAFrame", "Position of Frame", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radioButtonTopLeftOfMargins->setToolTip(QApplication::translate("InsertAFrame", "Insert the frame at the top left of the page margins", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButtonTopLeftOfMargins->setText(QApplication::translate("InsertAFrame", "Top Left of Margins", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radioButtonTopLeftOfPage->setToolTip(QApplication::translate("InsertAFrame", "Insert the frame at the top left of the page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButtonTopLeftOfPage->setText(QApplication::translate("InsertAFrame", "Top Left of Page", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radioButtonTopLeftOfBleed->setToolTip(QApplication::translate("InsertAFrame", "Insert the frame at the top left of the page bleed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButtonTopLeftOfBleed->setText(QApplication::translate("InsertAFrame", "Top Left of Bleed", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radioButtonCustomPosition->setToolTip(QApplication::translate("InsertAFrame", "Insert the frame at a custom position on the page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButtonCustomPosition->setText(QApplication::translate("InsertAFrame", "Custom Position", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("InsertAFrame", "Y:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("InsertAFrame", "X:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        yPosScrSpinBox->setToolTip(QApplication::translate("InsertAFrame", "Top position of the inserted frame", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        xPosScrSpinBox->setToolTip(QApplication::translate("InsertAFrame", "Left position of the inserted frame", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(locationTab), QApplication::translate("InsertAFrame", "&Location", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sizeGroupBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        sizeGroupBox->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        radioButtonPageMarginSize->setToolTip(QApplication::translate("InsertAFrame", "Insert the new frame with the same dimensions as the page margins", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButtonPageMarginSize->setText(QApplication::translate("InsertAFrame", "Same as the Page Margins", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radioButtonPageSize->setToolTip(QApplication::translate("InsertAFrame", "Insert the new frame with the same dimensions as the page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButtonPageSize->setText(QApplication::translate("InsertAFrame", "Same as the Page", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radioButtonBleedSize->setToolTip(QApplication::translate("InsertAFrame", "Insert the new frame with the same dimensions as the bleed area outside the boundary of the page itself", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButtonBleedSize->setText(QApplication::translate("InsertAFrame", "Same as the Bleed", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radioButtonImageSize->setToolTip(QApplication::translate("InsertAFrame", "Insert the new frame with the same dimensions as the image that will be imported", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButtonImageSize->setText(QApplication::translate("InsertAFrame", "Same as the Imported Image", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radioButtonCustomSize->setToolTip(QApplication::translate("InsertAFrame", "Insert the new frame with a custom size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButtonCustomSize->setText(QApplication::translate("InsertAFrame", "Custom Size", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("InsertAFrame", "Height:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("InsertAFrame", "Width:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        widthScrSpinBox->setToolTip(QApplication::translate("InsertAFrame", "Width of the inserted frame", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        heightScrSpinBox->setToolTip(QApplication::translate("InsertAFrame", "Height of the inserted frame", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(sizeTab), QApplication::translate("InsertAFrame", "&Size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        textColumnCountSpinBox->setToolTip(QApplication::translate("InsertAFrame", "Number of columns for the inserted text frame", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        textColumnGapLabel->setText(QApplication::translate("InsertAFrame", "Gap:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        textColumnGapScrSpinBox->setToolTip(QApplication::translate("InsertAFrame", "Distance between the columns in the text frame", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        textColumnCountLabel->setText(QApplication::translate("InsertAFrame", "Columns:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxLinkCreatedTextFrames->setToolTip(QApplication::translate("InsertAFrame", "Link the inserted text frames together to form a chain of frames", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxLinkCreatedTextFrames->setText(QApplication::translate("InsertAFrame", "Link Inserted Frames", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxLinkToExistingFrame->setToolTip(QApplication::translate("InsertAFrame", "Link the first inserted frame to a preexisting text frame", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxLinkToExistingFrame->setText(QApplication::translate("InsertAFrame", "Link to Existing Frame", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        comboBoxLinkToExistingFrameName->setToolTip(QApplication::translate("InsertAFrame", "Name of existing text frame to link to", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        sourceDocLabel->setText(QApplication::translate("InsertAFrame", "Source Document:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sourceDocLineEdit->setToolTip(QApplication::translate("InsertAFrame", "Source document to load into the text frame", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        selectDocFileButton->setText(QApplication::translate("InsertAFrame", "...", 0, QApplication::UnicodeUTF8));
        sourceImageLabel->setText(QApplication::translate("InsertAFrame", "Source Image:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sourceImageLineEdit->setToolTip(QApplication::translate("InsertAFrame", "Source image to load into the inserted image frame", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        selectImageFileButton->setText(QApplication::translate("InsertAFrame", "...", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("InsertAFrame", "There are no options for this type of frame", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(optionsTab), QApplication::translate("InsertAFrame", "&Options", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InsertAFrame: public Ui_InsertAFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTAFRAME_H
