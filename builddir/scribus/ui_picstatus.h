/********************************************************************************
** Form generated from reading UI file 'picstatus.ui'
**
** Created: Sun Feb 24 21:37:26 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICSTATUS_H
#define UI_PICSTATUS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PicStatus
{
public:
    QVBoxLayout *vboxLayout;
    QListWidget *imageViewArea;
    QTabWidget *workTab;
    QWidget *tabInfo;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout_4;
    QLabel *textLabel1;
    QLabel *displayName;
    QLabel *textLabel3;
    QLabel *displayPath;
    QPushButton *searchButton;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupImage;
    QFormLayout *formLayout;
    QLabel *textLabel6;
    QLabel *displayFormat;
    QLabel *textLabel5_2;
    QLabel *displayColorspace;
    QLabel *textLabel1_2;
    QLabel *displayDPI;
    QGroupBox *groupSize;
    QFormLayout *formLayout_2;
    QLabel *textLabel9;
    QLabel *displaySizePixel;
    QLabel *textLabel10;
    QLabel *displayScale;
    QLabel *textLabel1_4;
    QLabel *displayPrintSize;
    QGroupBox *groupLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout_3;
    QLabel *textLabel5;
    QLabel *displayPage;
    QLabel *textLabel1_3;
    QLabel *displayObjekt;
    QLabel *textLabel2;
    QLabel *displayEffDPI;
    QVBoxLayout *verticalLayout;
    QPushButton *goPageButton;
    QPushButton *selectButton;
    QWidget *tabTasks;
    QGridLayout *gridLayout;
    QCheckBox *isPrinting;
    QPushButton *buttonLayers;
    QPushButton *buttonEdit;
    QCheckBox *isVisibleCheck;
    QPushButton *effectsButton;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *closeButton;

    void setupUi(QDialog *PicStatus)
    {
        if (PicStatus->objectName().isEmpty())
            PicStatus->setObjectName(QString::fromUtf8("PicStatus"));
        PicStatus->setWindowModality(Qt::WindowModal);
        PicStatus->resize(764, 464);
        vboxLayout = new QVBoxLayout(PicStatus);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        imageViewArea = new QListWidget(PicStatus);
        imageViewArea->setObjectName(QString::fromUtf8("imageViewArea"));
        imageViewArea->setMinimumSize(QSize(0, 150));
        imageViewArea->setDragDropMode(QAbstractItemView::NoDragDrop);
        imageViewArea->setMovement(QListView::Static);
        imageViewArea->setFlow(QListView::LeftToRight);
        imageViewArea->setProperty("isWrapping", QVariant(true));
        imageViewArea->setResizeMode(QListView::Adjust);
        imageViewArea->setSpacing(5);
        imageViewArea->setViewMode(QListView::IconMode);
        imageViewArea->setWordWrap(true);

        vboxLayout->addWidget(imageViewArea);

        workTab = new QTabWidget(PicStatus);
        workTab->setObjectName(QString::fromUtf8("workTab"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(workTab->sizePolicy().hasHeightForWidth());
        workTab->setSizePolicy(sizePolicy);
        tabInfo = new QWidget();
        tabInfo->setObjectName(QString::fromUtf8("tabInfo"));
        tabInfo->setGeometry(QRect(0, 0, 736, 181));
        verticalLayout_2 = new QVBoxLayout(tabInfo);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setSpacing(5);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        textLabel1 = new QLabel(tabInfo);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy1);
        textLabel1->setMinimumSize(QSize(70, 0));
        textLabel1->setWordWrap(false);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, textLabel1);

        displayName = new QLabel(tabInfo);
        displayName->setObjectName(QString::fromUtf8("displayName"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(displayName->sizePolicy().hasHeightForWidth());
        displayName->setSizePolicy(sizePolicy2);
        displayName->setMinimumSize(QSize(220, 0));
        displayName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        displayName->setWordWrap(false);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, displayName);

        textLabel3 = new QLabel(tabInfo);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        sizePolicy1.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
        textLabel3->setSizePolicy(sizePolicy1);
        textLabel3->setMinimumSize(QSize(70, 0));
        textLabel3->setWordWrap(false);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, textLabel3);

        displayPath = new QLabel(tabInfo);
        displayPath->setObjectName(QString::fromUtf8("displayPath"));
        sizePolicy2.setHeightForWidth(displayPath->sizePolicy().hasHeightForWidth());
        displayPath->setSizePolicy(sizePolicy2);
        displayPath->setMinimumSize(QSize(220, 0));
        displayPath->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        displayPath->setWordWrap(false);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, displayPath);


        horizontalLayout_3->addLayout(formLayout_4);

        searchButton = new QPushButton(tabInfo);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setAutoDefault(false);
        searchButton->setFlat(false);

        horizontalLayout_3->addWidget(searchButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupImage = new QGroupBox(tabInfo);
        groupImage->setObjectName(QString::fromUtf8("groupImage"));
        formLayout = new QFormLayout(groupImage);
        formLayout->setSpacing(5);
        formLayout->setContentsMargins(10, 10, 10, 10);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        textLabel6 = new QLabel(groupImage);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        textLabel6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        textLabel6->setWordWrap(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, textLabel6);

        displayFormat = new QLabel(groupImage);
        displayFormat->setObjectName(QString::fromUtf8("displayFormat"));
        displayFormat->setMinimumSize(QSize(70, 0));
        displayFormat->setWordWrap(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, displayFormat);

        textLabel5_2 = new QLabel(groupImage);
        textLabel5_2->setObjectName(QString::fromUtf8("textLabel5_2"));
        textLabel5_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        textLabel5_2->setWordWrap(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, textLabel5_2);

        displayColorspace = new QLabel(groupImage);
        displayColorspace->setObjectName(QString::fromUtf8("displayColorspace"));
        displayColorspace->setMinimumSize(QSize(70, 0));
        displayColorspace->setWordWrap(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, displayColorspace);

        textLabel1_2 = new QLabel(groupImage);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        textLabel1_2->setWordWrap(false);

        formLayout->setWidget(2, QFormLayout::LabelRole, textLabel1_2);

        displayDPI = new QLabel(groupImage);
        displayDPI->setObjectName(QString::fromUtf8("displayDPI"));
        displayDPI->setMinimumSize(QSize(70, 0));
        displayDPI->setWordWrap(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, displayDPI);


        horizontalLayout_2->addWidget(groupImage);

        groupSize = new QGroupBox(tabInfo);
        groupSize->setObjectName(QString::fromUtf8("groupSize"));
        formLayout_2 = new QFormLayout(groupSize);
        formLayout_2->setSpacing(5);
        formLayout_2->setContentsMargins(10, 10, 10, 10);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        textLabel9 = new QLabel(groupSize);
        textLabel9->setObjectName(QString::fromUtf8("textLabel9"));
        textLabel9->setWordWrap(false);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, textLabel9);

        displaySizePixel = new QLabel(groupSize);
        displaySizePixel->setObjectName(QString::fromUtf8("displaySizePixel"));
        displaySizePixel->setMinimumSize(QSize(120, 0));
        displaySizePixel->setWordWrap(false);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, displaySizePixel);

        textLabel10 = new QLabel(groupSize);
        textLabel10->setObjectName(QString::fromUtf8("textLabel10"));
        textLabel10->setWordWrap(false);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, textLabel10);

        displayScale = new QLabel(groupSize);
        displayScale->setObjectName(QString::fromUtf8("displayScale"));
        displayScale->setMinimumSize(QSize(120, 0));
        displayScale->setWordWrap(false);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, displayScale);

        textLabel1_4 = new QLabel(groupSize);
        textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));
        textLabel1_4->setWordWrap(false);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, textLabel1_4);

        displayPrintSize = new QLabel(groupSize);
        displayPrintSize->setObjectName(QString::fromUtf8("displayPrintSize"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(displayPrintSize->sizePolicy().hasHeightForWidth());
        displayPrintSize->setSizePolicy(sizePolicy3);
        displayPrintSize->setMinimumSize(QSize(120, 0));
        displayPrintSize->setWordWrap(false);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, displayPrintSize);


        horizontalLayout_2->addWidget(groupSize);

        groupLayout = new QGroupBox(tabInfo);
        groupLayout->setObjectName(QString::fromUtf8("groupLayout"));
        horizontalLayout = new QHBoxLayout(groupLayout);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(10, 10, 10, 10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(5);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        textLabel5 = new QLabel(groupLayout);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
        textLabel5->setWordWrap(false);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, textLabel5);

        displayPage = new QLabel(groupLayout);
        displayPage->setObjectName(QString::fromUtf8("displayPage"));
        displayPage->setMinimumSize(QSize(70, 0));
        displayPage->setWordWrap(false);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, displayPage);

        textLabel1_3 = new QLabel(groupLayout);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        textLabel1_3->setWordWrap(false);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, textLabel1_3);

        displayObjekt = new QLabel(groupLayout);
        displayObjekt->setObjectName(QString::fromUtf8("displayObjekt"));
        displayObjekt->setMinimumSize(QSize(70, 0));
        displayObjekt->setWordWrap(false);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, displayObjekt);

        textLabel2 = new QLabel(groupLayout);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        textLabel2->setWordWrap(false);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, textLabel2);

        displayEffDPI = new QLabel(groupLayout);
        displayEffDPI->setObjectName(QString::fromUtf8("displayEffDPI"));
        displayEffDPI->setMinimumSize(QSize(70, 0));
        displayEffDPI->setWordWrap(false);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, displayEffDPI);


        horizontalLayout->addLayout(formLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        goPageButton = new QPushButton(groupLayout);
        goPageButton->setObjectName(QString::fromUtf8("goPageButton"));
        goPageButton->setAutoDefault(false);
        goPageButton->setFlat(false);

        verticalLayout->addWidget(goPageButton);

        selectButton = new QPushButton(groupLayout);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setAutoDefault(false);
        selectButton->setFlat(false);

        verticalLayout->addWidget(selectButton);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addWidget(groupLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        workTab->addTab(tabInfo, QString());
        tabTasks = new QWidget();
        tabTasks->setObjectName(QString::fromUtf8("tabTasks"));
        tabTasks->setGeometry(QRect(0, 0, 807, 181));
        gridLayout = new QGridLayout(tabTasks);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        isPrinting = new QCheckBox(tabTasks);
        isPrinting->setObjectName(QString::fromUtf8("isPrinting"));

        gridLayout->addWidget(isPrinting, 0, 0, 1, 1);

        buttonLayers = new QPushButton(tabTasks);
        buttonLayers->setObjectName(QString::fromUtf8("buttonLayers"));

        gridLayout->addWidget(buttonLayers, 1, 1, 1, 1);

        buttonEdit = new QPushButton(tabTasks);
        buttonEdit->setObjectName(QString::fromUtf8("buttonEdit"));

        gridLayout->addWidget(buttonEdit, 0, 1, 1, 1);

        isVisibleCheck = new QCheckBox(tabTasks);
        isVisibleCheck->setObjectName(QString::fromUtf8("isVisibleCheck"));

        gridLayout->addWidget(isVisibleCheck, 1, 0, 1, 1);

        effectsButton = new QPushButton(tabTasks);
        effectsButton->setObjectName(QString::fromUtf8("effectsButton"));

        gridLayout->addWidget(effectsButton, 0, 2, 1, 1);

        spacerItem = new QSpacerItem(21, 90, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 2, 1, 1, 1);

        workTab->addTab(tabTasks, QString());

        vboxLayout->addWidget(workTab);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem1 = new QSpacerItem(131, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        closeButton = new QPushButton(PicStatus);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setDefault(true);

        hboxLayout->addWidget(closeButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(PicStatus);

        workTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PicStatus);
    } // setupUi

    void retranslateUi(QDialog *PicStatus)
    {
        PicStatus->setWindowTitle(QApplication::translate("PicStatus", "Manage Images", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        workTab->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        textLabel1->setText(QApplication::translate("PicStatus", "Name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        displayName->setToolTip(QApplication::translate("PicStatus", "Name of the image file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        displayName->setText(QString());
        textLabel3->setText(QApplication::translate("PicStatus", "Path:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        displayPath->setToolTip(QApplication::translate("PicStatus", "Location where the image file is stored", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        displayPath->setText(QString());
#ifndef QT_NO_TOOLTIP
        searchButton->setToolTip(QApplication::translate("PicStatus", "Search for a missing image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        searchButton->setText(QApplication::translate("PicStatus", "Search...", 0, QApplication::UnicodeUTF8));
        groupImage->setTitle(QApplication::translate("PicStatus", "Image", 0, QApplication::UnicodeUTF8));
        textLabel6->setText(QApplication::translate("PicStatus", "Format:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        displayFormat->setToolTip(QApplication::translate("PicStatus", "Type of the image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        displayFormat->setText(QString());
#ifndef QT_NO_TOOLTIP
        textLabel5_2->setToolTip(QApplication::translate("PicStatus", "The colorspace of the image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        textLabel5_2->setText(QApplication::translate("PicStatus", "Colorspace:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        displayColorspace->setToolTip(QApplication::translate("PicStatus", "Colorspace used within the image, eg RGB or CMYK", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        displayColorspace->setText(QString());
        textLabel1_2->setText(QApplication::translate("PicStatus", "DPI:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        displayDPI->setToolTip(QApplication::translate("PicStatus", "Native resolution of the image, in dots per inch", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        displayDPI->setText(QString());
        groupSize->setTitle(QApplication::translate("PicStatus", "Size", 0, QApplication::UnicodeUTF8));
        textLabel9->setText(QApplication::translate("PicStatus", "Pixels:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        displaySizePixel->setToolTip(QApplication::translate("PicStatus", "Height and width of the image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        displaySizePixel->setText(QString());
        textLabel10->setText(QApplication::translate("PicStatus", "Scale:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        displayScale->setToolTip(QApplication::translate("PicStatus", "Horizontal and vertical scaling applied to the image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        displayScale->setText(QString());
        textLabel1_4->setText(QApplication::translate("PicStatus", "Printed:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        displayPrintSize->setToolTip(QApplication::translate("PicStatus", "Size of the image when printed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        displayPrintSize->setText(QString());
        groupLayout->setTitle(QApplication::translate("PicStatus", "Layout", 0, QApplication::UnicodeUTF8));
        textLabel5->setText(QApplication::translate("PicStatus", "On Page:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        displayPage->setToolTip(QApplication::translate("PicStatus", "Page that the image is displayed on", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        displayPage->setText(QString());
        textLabel1_3->setText(QApplication::translate("PicStatus", "Page Item:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        displayObjekt->setToolTip(QApplication::translate("PicStatus", "Name of the page item that contains the image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        displayObjekt->setText(QString());
        textLabel2->setText(QApplication::translate("PicStatus", "Effective DPI:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        displayEffDPI->setToolTip(QApplication::translate("PicStatus", "Effective resolution of the image after scaling", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        displayEffDPI->setText(QString());
#ifndef QT_NO_TOOLTIP
        goPageButton->setToolTip(QApplication::translate("PicStatus", "Move to the page that the image is on", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        goPageButton->setText(QApplication::translate("PicStatus", "Go to", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        selectButton->setToolTip(QApplication::translate("PicStatus", "Move to the page that the item is on and select it", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        selectButton->setText(QApplication::translate("PicStatus", "Select", 0, QApplication::UnicodeUTF8));
        workTab->setTabText(workTab->indexOf(tabInfo), QApplication::translate("PicStatus", "Information", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        isPrinting->setToolTip(QApplication::translate("PicStatus", "Enable or disable exporting of the item", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        isPrinting->setText(QApplication::translate("PicStatus", "Export/Print Image", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonLayers->setToolTip(QApplication::translate("PicStatus", "Set format specfic properties of certain image types, like clipping paths", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonLayers->setText(QApplication::translate("PicStatus", "Extended Image Properties...", 0, QApplication::UnicodeUTF8));
        buttonLayers->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        buttonEdit->setToolTip(QApplication::translate("PicStatus", "Edit the image in the default editor", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonEdit->setText(QApplication::translate("PicStatus", "Edit Image...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        isVisibleCheck->setToolTip(QApplication::translate("PicStatus", "Make the image visible or invisible", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        isVisibleCheck->setText(QApplication::translate("PicStatus", "Image Visible", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        effectsButton->setToolTip(QApplication::translate("PicStatus", "Apply non destructive effects to the image in its frame", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        effectsButton->setText(QApplication::translate("PicStatus", "Image Effects...", 0, QApplication::UnicodeUTF8));
        workTab->setTabText(workTab->indexOf(tabTasks), QApplication::translate("PicStatus", "Image Tools", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("PicStatus", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PicStatus: public Ui_PicStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICSTATUS_H
