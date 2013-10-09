/********************************************************************************
** Form generated from reading UI file 'printdialogbase.ui'
**
** Created: Sun Feb 24 21:37:26 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTDIALOGBASE_H
#define UI_PRINTDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
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
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <scrspinbox.h>

QT_BEGIN_NAMESPACE

class Ui_PrintDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *PrintDialogGroup;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QComboBox *PrintDest;
    QPushButton *OptButton;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QLabel *DateiT;
    QLineEdit *LineEdit1;
    QToolButton *ToolButton1;
    QCheckBox *OtherCom;
    QHBoxLayout *hboxLayout2;
    QLabel *OthText;
    QLineEdit *Command;
    QGroupBox *rangeGroup;
    QGridLayout *gridLayout;
    QRadioButton *RadioButton1;
    QSpacerItem *spacerItem1;
    QLabel *TextLabel3;
    QSpinBox *Copies;
    QRadioButton *CurrentPage;
    QRadioButton *RadioButton2;
    QLineEdit *pageNr;
    QPushButton *pageNrButton;
    QSpacerItem *spacerItem2;
    QTabWidget *printOptions;
    QWidget *tab;
    QGridLayout *gridLayoutOptions;
    QComboBox *PrintSep;
    QComboBox *colorType;
    QComboBox *SepArt;
    QComboBox *printEngines;
    QCheckBox *usePDFMarks;
    QWidget *tab_2;
    QHBoxLayout *hboxLayout3;
    QGroupBox *pageOpts;
    QVBoxLayout *vboxLayout2;
    QCheckBox *MirrorHor;
    QCheckBox *MirrorVert;
    QCheckBox *devPar;
    QCheckBox *ClipMarg;
    QGroupBox *colorOpts;
    QVBoxLayout *vboxLayout3;
    QCheckBox *GcR;
    QCheckBox *spotColors;
    QCheckBox *UseICC;
    QSpacerItem *spacerItem3;
    QWidget *tab_3;
    QGridLayout *gridLayout1;
    QCheckBox *cropMarks;
    QCheckBox *registrationMarks;
    QCheckBox *bleedMarks;
    QCheckBox *colorMarks;
    QHBoxLayout *hboxLayout4;
    QLabel *MarkTxt1;
    ScrSpinBox *markOffset;
    QSpacerItem *spacerItem4;
    QWidget *tab_4;
    QGridLayout *gridLayout2;
    QLabel *BleedTxt1;
    ScrSpinBox *BleedTop;
    QLabel *BleedTxt3;
    ScrSpinBox *BleedRight;
    QLabel *BleedTxt2;
    ScrSpinBox *BleedBottom;
    QLabel *BleedTxt4;
    ScrSpinBox *BleedLeft;
    QCheckBox *docBleeds;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacerItem5;
    QPushButton *previewButton;
    QPushButton *OKButton;
    QPushButton *OKButton_2;

    void setupUi(QDialog *PrintDialogBase)
    {
        if (PrintDialogBase->objectName().isEmpty())
            PrintDialogBase->setObjectName(QString::fromUtf8("PrintDialogBase"));
        PrintDialogBase->resize(570, 520);
        PrintDialogBase->setSizeGripEnabled(false);
        vboxLayout = new QVBoxLayout(PrintDialogBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        PrintDialogGroup = new QGroupBox(PrintDialogBase);
        PrintDialogGroup->setObjectName(QString::fromUtf8("PrintDialogGroup"));
        vboxLayout1 = new QVBoxLayout(PrintDialogGroup);
        vboxLayout1->setSpacing(5);
        vboxLayout1->setContentsMargins(10, 10, 10, 10);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        PrintDest = new QComboBox(PrintDialogGroup);
        PrintDest->setObjectName(QString::fromUtf8("PrintDest"));
        PrintDest->setMinimumSize(QSize(250, 0));

        hboxLayout->addWidget(PrintDest);

        OptButton = new QPushButton(PrintDialogGroup);
        OptButton->setObjectName(QString::fromUtf8("OptButton"));

        hboxLayout->addWidget(OptButton);

        spacerItem = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        DateiT = new QLabel(PrintDialogGroup);
        DateiT->setObjectName(QString::fromUtf8("DateiT"));
        DateiT->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DateiT->sizePolicy().hasHeightForWidth());
        DateiT->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(DateiT);

        LineEdit1 = new QLineEdit(PrintDialogGroup);
        LineEdit1->setObjectName(QString::fromUtf8("LineEdit1"));

        hboxLayout1->addWidget(LineEdit1);

        ToolButton1 = new QToolButton(PrintDialogGroup);
        ToolButton1->setObjectName(QString::fromUtf8("ToolButton1"));
        ToolButton1->setEnabled(false);

        hboxLayout1->addWidget(ToolButton1);


        vboxLayout1->addLayout(hboxLayout1);

        OtherCom = new QCheckBox(PrintDialogGroup);
        OtherCom->setObjectName(QString::fromUtf8("OtherCom"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(OtherCom->sizePolicy().hasHeightForWidth());
        OtherCom->setSizePolicy(sizePolicy1);

        vboxLayout1->addWidget(OtherCom);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        OthText = new QLabel(PrintDialogGroup);
        OthText->setObjectName(QString::fromUtf8("OthText"));
        OthText->setEnabled(false);
        sizePolicy.setHeightForWidth(OthText->sizePolicy().hasHeightForWidth());
        OthText->setSizePolicy(sizePolicy);

        hboxLayout2->addWidget(OthText);

        Command = new QLineEdit(PrintDialogGroup);
        Command->setObjectName(QString::fromUtf8("Command"));
        Command->setEnabled(false);

        hboxLayout2->addWidget(Command);


        vboxLayout1->addLayout(hboxLayout2);


        vboxLayout->addWidget(PrintDialogGroup);

        rangeGroup = new QGroupBox(PrintDialogBase);
        rangeGroup->setObjectName(QString::fromUtf8("rangeGroup"));
        gridLayout = new QGridLayout(rangeGroup);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        RadioButton1 = new QRadioButton(rangeGroup);
        RadioButton1->setObjectName(QString::fromUtf8("RadioButton1"));

        gridLayout->addWidget(RadioButton1, 0, 0, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 2, 1, 1);

        TextLabel3 = new QLabel(rangeGroup);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));

        gridLayout->addWidget(TextLabel3, 0, 3, 1, 2);

        Copies = new QSpinBox(rangeGroup);
        Copies->setObjectName(QString::fromUtf8("Copies"));
        Copies->setMinimum(1);
        Copies->setMaximum(1000);

        gridLayout->addWidget(Copies, 0, 5, 1, 1);

        CurrentPage = new QRadioButton(rangeGroup);
        CurrentPage->setObjectName(QString::fromUtf8("CurrentPage"));

        gridLayout->addWidget(CurrentPage, 1, 0, 1, 2);

        RadioButton2 = new QRadioButton(rangeGroup);
        RadioButton2->setObjectName(QString::fromUtf8("RadioButton2"));

        gridLayout->addWidget(RadioButton2, 2, 0, 1, 1);

        pageNr = new QLineEdit(rangeGroup);
        pageNr->setObjectName(QString::fromUtf8("pageNr"));
        pageNr->setEnabled(false);

        gridLayout->addWidget(pageNr, 2, 1, 1, 2);

        pageNrButton = new QPushButton(rangeGroup);
        pageNrButton->setObjectName(QString::fromUtf8("pageNrButton"));
        pageNrButton->setEnabled(false);
        pageNrButton->setMinimumSize(QSize(16, 16));

        gridLayout->addWidget(pageNrButton, 2, 3, 1, 1);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 2, 4, 1, 1);


        vboxLayout->addWidget(rangeGroup);

        printOptions = new QTabWidget(PrintDialogBase);
        printOptions->setObjectName(QString::fromUtf8("printOptions"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayoutOptions = new QGridLayout(tab);
        gridLayoutOptions->setObjectName(QString::fromUtf8("gridLayoutOptions"));
        PrintSep = new QComboBox(tab);
        PrintSep->setObjectName(QString::fromUtf8("PrintSep"));

        gridLayoutOptions->addWidget(PrintSep, 0, 0, 1, 1);

        colorType = new QComboBox(tab);
        colorType->setObjectName(QString::fromUtf8("colorType"));

        gridLayoutOptions->addWidget(colorType, 0, 1, 1, 1);

        SepArt = new QComboBox(tab);
        SepArt->setObjectName(QString::fromUtf8("SepArt"));
        SepArt->setEnabled(false);

        gridLayoutOptions->addWidget(SepArt, 1, 0, 1, 1);

        printEngines = new QComboBox(tab);
        printEngines->setObjectName(QString::fromUtf8("printEngines"));

        gridLayoutOptions->addWidget(printEngines, 1, 1, 1, 1);

        usePDFMarks = new QCheckBox(tab);
        usePDFMarks->setObjectName(QString::fromUtf8("usePDFMarks"));

        gridLayoutOptions->addWidget(usePDFMarks, 2, 0, 1, 2);

        printOptions->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        hboxLayout3 = new QHBoxLayout(tab_2);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        pageOpts = new QGroupBox(tab_2);
        pageOpts->setObjectName(QString::fromUtf8("pageOpts"));
        vboxLayout2 = new QVBoxLayout(pageOpts);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        MirrorHor = new QCheckBox(pageOpts);
        MirrorHor->setObjectName(QString::fromUtf8("MirrorHor"));

        vboxLayout2->addWidget(MirrorHor);

        MirrorVert = new QCheckBox(pageOpts);
        MirrorVert->setObjectName(QString::fromUtf8("MirrorVert"));

        vboxLayout2->addWidget(MirrorVert);

        devPar = new QCheckBox(pageOpts);
        devPar->setObjectName(QString::fromUtf8("devPar"));

        vboxLayout2->addWidget(devPar);

        ClipMarg = new QCheckBox(pageOpts);
        ClipMarg->setObjectName(QString::fromUtf8("ClipMarg"));

        vboxLayout2->addWidget(ClipMarg);


        hboxLayout3->addWidget(pageOpts);

        colorOpts = new QGroupBox(tab_2);
        colorOpts->setObjectName(QString::fromUtf8("colorOpts"));
        vboxLayout3 = new QVBoxLayout(colorOpts);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        GcR = new QCheckBox(colorOpts);
        GcR->setObjectName(QString::fromUtf8("GcR"));

        vboxLayout3->addWidget(GcR);

        spotColors = new QCheckBox(colorOpts);
        spotColors->setObjectName(QString::fromUtf8("spotColors"));

        vboxLayout3->addWidget(spotColors);

        UseICC = new QCheckBox(colorOpts);
        UseICC->setObjectName(QString::fromUtf8("UseICC"));

        vboxLayout3->addWidget(UseICC);

        spacerItem3 = new QSpacerItem(20, 19, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        vboxLayout3->addItem(spacerItem3);


        hboxLayout3->addWidget(colorOpts);

        printOptions->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout1 = new QGridLayout(tab_3);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        cropMarks = new QCheckBox(tab_3);
        cropMarks->setObjectName(QString::fromUtf8("cropMarks"));

        gridLayout1->addWidget(cropMarks, 0, 0, 1, 1);

        registrationMarks = new QCheckBox(tab_3);
        registrationMarks->setObjectName(QString::fromUtf8("registrationMarks"));

        gridLayout1->addWidget(registrationMarks, 0, 1, 1, 1);

        bleedMarks = new QCheckBox(tab_3);
        bleedMarks->setObjectName(QString::fromUtf8("bleedMarks"));

        gridLayout1->addWidget(bleedMarks, 1, 0, 1, 1);

        colorMarks = new QCheckBox(tab_3);
        colorMarks->setObjectName(QString::fromUtf8("colorMarks"));

        gridLayout1->addWidget(colorMarks, 1, 1, 1, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        MarkTxt1 = new QLabel(tab_3);
        MarkTxt1->setObjectName(QString::fromUtf8("MarkTxt1"));

        hboxLayout4->addWidget(MarkTxt1);

        markOffset = new ScrSpinBox(tab_3);
        markOffset->setObjectName(QString::fromUtf8("markOffset"));

        hboxLayout4->addWidget(markOffset);


        gridLayout1->addLayout(hboxLayout4, 2, 0, 1, 1);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem4, 2, 1, 1, 1);

        printOptions->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout2 = new QGridLayout(tab_4);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        BleedTxt1 = new QLabel(tab_4);
        BleedTxt1->setObjectName(QString::fromUtf8("BleedTxt1"));

        gridLayout2->addWidget(BleedTxt1, 0, 0, 1, 1);

        BleedTop = new ScrSpinBox(tab_4);
        BleedTop->setObjectName(QString::fromUtf8("BleedTop"));

        gridLayout2->addWidget(BleedTop, 0, 1, 1, 1);

        BleedTxt3 = new QLabel(tab_4);
        BleedTxt3->setObjectName(QString::fromUtf8("BleedTxt3"));

        gridLayout2->addWidget(BleedTxt3, 0, 2, 1, 1);

        BleedRight = new ScrSpinBox(tab_4);
        BleedRight->setObjectName(QString::fromUtf8("BleedRight"));

        gridLayout2->addWidget(BleedRight, 0, 3, 1, 1);

        BleedTxt2 = new QLabel(tab_4);
        BleedTxt2->setObjectName(QString::fromUtf8("BleedTxt2"));

        gridLayout2->addWidget(BleedTxt2, 1, 0, 1, 1);

        BleedBottom = new ScrSpinBox(tab_4);
        BleedBottom->setObjectName(QString::fromUtf8("BleedBottom"));

        gridLayout2->addWidget(BleedBottom, 1, 1, 1, 1);

        BleedTxt4 = new QLabel(tab_4);
        BleedTxt4->setObjectName(QString::fromUtf8("BleedTxt4"));

        gridLayout2->addWidget(BleedTxt4, 1, 2, 1, 1);

        BleedLeft = new ScrSpinBox(tab_4);
        BleedLeft->setObjectName(QString::fromUtf8("BleedLeft"));

        gridLayout2->addWidget(BleedLeft, 1, 3, 1, 1);

        docBleeds = new QCheckBox(tab_4);
        docBleeds->setObjectName(QString::fromUtf8("docBleeds"));

        gridLayout2->addWidget(docBleeds, 2, 0, 1, 4);

        printOptions->addTab(tab_4, QString());

        vboxLayout->addWidget(printOptions);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem5);

        previewButton = new QPushButton(PrintDialogBase);
        previewButton->setObjectName(QString::fromUtf8("previewButton"));
        previewButton->setAutoDefault(false);

        hboxLayout5->addWidget(previewButton);

        OKButton = new QPushButton(PrintDialogBase);
        OKButton->setObjectName(QString::fromUtf8("OKButton"));
        OKButton->setDefault(true);

        hboxLayout5->addWidget(OKButton);

        OKButton_2 = new QPushButton(PrintDialogBase);
        OKButton_2->setObjectName(QString::fromUtf8("OKButton_2"));
        OKButton_2->setAutoDefault(false);

        hboxLayout5->addWidget(OKButton_2);


        vboxLayout->addLayout(hboxLayout5);

#ifndef QT_NO_SHORTCUT
        DateiT->setBuddy(LineEdit1);
        OthText->setBuddy(Command);
        TextLabel3->setBuddy(Copies);
#endif // QT_NO_SHORTCUT

        retranslateUi(PrintDialogBase);
        QObject::connect(OtherCom, SIGNAL(clicked(bool)), OthText, SLOT(setEnabled(bool)));
        QObject::connect(OtherCom, SIGNAL(clicked(bool)), Command, SLOT(setEnabled(bool)));
        QObject::connect(RadioButton2, SIGNAL(toggled(bool)), pageNr, SLOT(setEnabled(bool)));
        QObject::connect(RadioButton2, SIGNAL(toggled(bool)), pageNrButton, SLOT(setEnabled(bool)));

        printOptions->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PrintDialogBase);
    } // setupUi

    void retranslateUi(QDialog *PrintDialogBase)
    {
        PrintDialogBase->setWindowTitle(QApplication::translate("PrintDialogBase", "Setup Printer", 0, QApplication::UnicodeUTF8));
        PrintDialogGroup->setTitle(QApplication::translate("PrintDialogBase", "Print Destination", 0, QApplication::UnicodeUTF8));
        OptButton->setText(QApplication::translate("PrintDialogBase", "&Options...", 0, QApplication::UnicodeUTF8));
        DateiT->setText(QApplication::translate("PrintDialogBase", "&File:", 0, QApplication::UnicodeUTF8));
        ToolButton1->setText(QApplication::translate("PrintDialogBase", "C&hange...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        OtherCom->setToolTip(QApplication::translate("PrintDialogBase", "Use an alternative print manager, such as kprinter or gtklp, to utilize additional printing options", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        OtherCom->setText(QApplication::translate("PrintDialogBase", "A&lternative Printer Command", 0, QApplication::UnicodeUTF8));
        OthText->setText(QApplication::translate("PrintDialogBase", "Co&mmand:", 0, QApplication::UnicodeUTF8));
        rangeGroup->setTitle(QApplication::translate("PrintDialogBase", "Range", 0, QApplication::UnicodeUTF8));
        RadioButton1->setText(QApplication::translate("PrintDialogBase", "Print &All", 0, QApplication::UnicodeUTF8));
        TextLabel3->setText(QApplication::translate("PrintDialogBase", "N&umber of Copies:", 0, QApplication::UnicodeUTF8));
        CurrentPage->setText(QApplication::translate("PrintDialogBase", "Print Current Pa&ge", 0, QApplication::UnicodeUTF8));
        RadioButton2->setText(QApplication::translate("PrintDialogBase", "Print &Range", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pageNr->setToolTip(QApplication::translate("PrintDialogBase", "Insert a comma separated list of tokens where\n"
"a token can be * for all the pages, 1-5 for\n"
"a range of pages or a single page number.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pageNrButton->setText(QString());
        PrintSep->clear();
        PrintSep->insertItems(0, QStringList()
         << QApplication::translate("PrintDialogBase", "Print Normal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PrintDialogBase", "Print Separations", 0, QApplication::UnicodeUTF8)
        );
        colorType->clear();
        colorType->insertItems(0, QStringList()
         << QApplication::translate("PrintDialogBase", "Print in Color if Available", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PrintDialogBase", "Print in Grayscale", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        printEngines->setToolTip(QApplication::translate("PrintDialogBase", "Sets the PostScript Level.\n"
" Setting to Level 1 or 2 can create huge files", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        usePDFMarks->setToolTip(QApplication::translate("PrintDialogBase", "Include PDF Annotations and Links into the output.\n"
"Note: PDF Forms will not be exported.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        usePDFMarks->setText(QApplication::translate("PrintDialogBase", "Include PDF Annotations and Links", 0, QApplication::UnicodeUTF8));
        printOptions->setTabText(printOptions->indexOf(tab), QApplication::translate("PrintDialogBase", "Options", 0, QApplication::UnicodeUTF8));
        pageOpts->setTitle(QApplication::translate("PrintDialogBase", "Page", 0, QApplication::UnicodeUTF8));
        MirrorHor->setText(QApplication::translate("PrintDialogBase", "Mirror Page(s) Horizontal", 0, QApplication::UnicodeUTF8));
        MirrorVert->setText(QApplication::translate("PrintDialogBase", "Mirror Page(s) Vertical", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        devPar->setToolTip(QApplication::translate("PrintDialogBase", "<qt>This enables you to explicitly set the media size of the PostScript file. Not recommended unless requested by your printer.</qt>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        devPar->setText(QApplication::translate("PrintDialogBase", "Set Media Size", 0, QApplication::UnicodeUTF8));
        ClipMarg->setText(QApplication::translate("PrintDialogBase", "Clip to Printer Margins", 0, QApplication::UnicodeUTF8));
        colorOpts->setTitle(QApplication::translate("PrintDialogBase", "Color", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        GcR->setToolTip(QApplication::translate("PrintDialogBase", "<qt>A way of switching off some of the gray shades which are composed of cyan, yellow and magenta and using black instead. Under Color Removal mostly affects parts of images which are neutral and/or dark tones which are close to the gray. Use of this may improve printing some images and some experimentation and testing is need on a case by case basis. Under Color Removal reduces the possibility of over saturation with CMY inks.</qt>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        GcR->setText(QApplication::translate("PrintDialogBase", "Apply Under Color Removal", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spotColors->setToolTip(QApplication::translate("PrintDialogBase", "<qt>Enables Spot Colors to be converted to composite colors. Unless you are planning to print spot colors at a commercial printer, this is probably best left enabled.</qt>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        spotColors->setText(QApplication::translate("PrintDialogBase", "Convert Spot Colors to Process Colors", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        UseICC->setToolTip(QApplication::translate("PrintDialogBase", "<qt>Allows you to embed color profiles in the print stream when color management is enabled</qt>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        UseICC->setText(QApplication::translate("PrintDialogBase", "Apply Color Profiles", 0, QApplication::UnicodeUTF8));
        printOptions->setTabText(printOptions->indexOf(tab_2), QApplication::translate("PrintDialogBase", "Advanced Options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cropMarks->setToolTip(QApplication::translate("PrintDialogBase", "This creates crop marks in the PDF indicating where the paper should be cut or trimmed after printing", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cropMarks->setText(QApplication::translate("PrintDialogBase", "Crop Marks", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        registrationMarks->setToolTip(QApplication::translate("PrintDialogBase", "Add registration marks which are added to each separation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        registrationMarks->setText(QApplication::translate("PrintDialogBase", "Registration Marks", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bleedMarks->setToolTip(QApplication::translate("PrintDialogBase", "This creates bleed marks which are indicated by  _ . _ and show the bleed limit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bleedMarks->setText(QApplication::translate("PrintDialogBase", "Bleed Marks", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        colorMarks->setToolTip(QApplication::translate("PrintDialogBase", "Add color calibration bars", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        colorMarks->setText(QApplication::translate("PrintDialogBase", "Color Bars", 0, QApplication::UnicodeUTF8));
        MarkTxt1->setText(QApplication::translate("PrintDialogBase", "Offset:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        markOffset->setToolTip(QApplication::translate("PrintDialogBase", "Indicate the distance offset for the registration marks", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        printOptions->setTabText(printOptions->indexOf(tab_3), QApplication::translate("PrintDialogBase", "Marks", 0, QApplication::UnicodeUTF8));
        BleedTxt1->setText(QApplication::translate("PrintDialogBase", "Top:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        BleedTop->setToolTip(QApplication::translate("PrintDialogBase", "Distance for bleed from the top of the physical page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BleedTxt3->setText(QApplication::translate("PrintDialogBase", "Left:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        BleedRight->setToolTip(QApplication::translate("PrintDialogBase", "Distance for bleed from the right of the physical page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BleedTxt2->setText(QApplication::translate("PrintDialogBase", "Bottom:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        BleedBottom->setToolTip(QApplication::translate("PrintDialogBase", "Distance for bleed from the bottom of the physical page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BleedTxt4->setText(QApplication::translate("PrintDialogBase", "Right:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        BleedLeft->setToolTip(QApplication::translate("PrintDialogBase", "Distance for bleed from the left of the physical page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        docBleeds->setToolTip(QApplication::translate("PrintDialogBase", "Use the existing bleed settings from the document preferences", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        docBleeds->setText(QApplication::translate("PrintDialogBase", "Use Document Bleeds", 0, QApplication::UnicodeUTF8));
        printOptions->setTabText(printOptions->indexOf(tab_4), QApplication::translate("PrintDialogBase", "Bleeds", 0, QApplication::UnicodeUTF8));
        previewButton->setText(QApplication::translate("PrintDialogBase", "Preview...", 0, QApplication::UnicodeUTF8));
        OKButton->setText(QApplication::translate("PrintDialogBase", "&Print", 0, QApplication::UnicodeUTF8));
        OKButton_2->setText(QApplication::translate("PrintDialogBase", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PrintDialogBase: public Ui_PrintDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTDIALOGBASE_H
