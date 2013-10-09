/********************************************************************************
** Form generated from reading UI file 'tabexternaltoolswidget.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABEXTERNALTOOLSWIDGET_H
#define UI_TABEXTERNALTOOLSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabExternalToolsWidget
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *psToolGroupBox;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *psToolLabel;
    QLineEdit *psToolLineEdit;
    QPushButton *psToolChangeButton;
    QHBoxLayout *hboxLayout1;
    QCheckBox *psAntialiasTextCheckBox;
    QSpacerItem *spacerItem;
    QCheckBox *psAntialiasGraphicsCheckBox;
    QSpacerItem *spacerItem1;
    QLabel *psResolutionLabel;
    QSpinBox *psResolutionSpinBox;
    QGroupBox *imageToolGroupBox;
    QGridLayout *gridLayout;
    QPushButton *imageToolChangeButton;
    QLineEdit *imageToolLineEdit;
    QLabel *imageToolLabel;
    QGroupBox *extBrowserToolGroupBox;
    QGridLayout *gridLayout1;
    QPushButton *extBrowserToolChangeButton;
    QLineEdit *extBrowserToolLineEdit;
    QLabel *extBrowserToolLabel;
    QGroupBox *latexToolGroupBox;
    QVBoxLayout *vboxLayout2;
    QLabel *label;
    QListWidget *latexConfigsListWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *latexConfigUpButton;
    QPushButton *latexConfigDownButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *latexConfigAddButton;
    QPushButton *latexConfigDeleteButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *latexChangePathButton;
    QHBoxLayout *hboxLayout2;
    QLabel *latexEditorLabel;
    QLineEdit *latexEditorLineEdit;
    QPushButton *latexEditorChangeButton;
    QHBoxLayout *hboxLayout3;
    QCheckBox *latexEmptyFrameCheckBox;
    QSpacerItem *spacerItem2;
    QCheckBox *latexForceDpiCheckBox;
    QSpacerItem *spacerItem3;
    QLabel *latexResolutionLabel;
    QSpinBox *latexResolutionSpinBox;
    QSpacerItem *spacerItem4;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem5;
    QPushButton *rescanButton;

    void setupUi(QWidget *TabExternalToolsWidget)
    {
        if (TabExternalToolsWidget->objectName().isEmpty())
            TabExternalToolsWidget->setObjectName(QString::fromUtf8("TabExternalToolsWidget"));
        TabExternalToolsWidget->resize(688, 614);
        vboxLayout = new QVBoxLayout(TabExternalToolsWidget);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        psToolGroupBox = new QGroupBox(TabExternalToolsWidget);
        psToolGroupBox->setObjectName(QString::fromUtf8("psToolGroupBox"));
        vboxLayout1 = new QVBoxLayout(psToolGroupBox);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        psToolLabel = new QLabel(psToolGroupBox);
        psToolLabel->setObjectName(QString::fromUtf8("psToolLabel"));
        psToolLabel->setWordWrap(false);

        hboxLayout->addWidget(psToolLabel);

        psToolLineEdit = new QLineEdit(psToolGroupBox);
        psToolLineEdit->setObjectName(QString::fromUtf8("psToolLineEdit"));

        hboxLayout->addWidget(psToolLineEdit);

        psToolChangeButton = new QPushButton(psToolGroupBox);
        psToolChangeButton->setObjectName(QString::fromUtf8("psToolChangeButton"));

        hboxLayout->addWidget(psToolChangeButton);


        vboxLayout1->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        psAntialiasTextCheckBox = new QCheckBox(psToolGroupBox);
        psAntialiasTextCheckBox->setObjectName(QString::fromUtf8("psAntialiasTextCheckBox"));

        hboxLayout1->addWidget(psAntialiasTextCheckBox);

        spacerItem = new QSpacerItem(21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        psAntialiasGraphicsCheckBox = new QCheckBox(psToolGroupBox);
        psAntialiasGraphicsCheckBox->setObjectName(QString::fromUtf8("psAntialiasGraphicsCheckBox"));

        hboxLayout1->addWidget(psAntialiasGraphicsCheckBox);

        spacerItem1 = new QSpacerItem(21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        psResolutionLabel = new QLabel(psToolGroupBox);
        psResolutionLabel->setObjectName(QString::fromUtf8("psResolutionLabel"));
        psResolutionLabel->setWordWrap(false);

        hboxLayout1->addWidget(psResolutionLabel);

        psResolutionSpinBox = new QSpinBox(psToolGroupBox);
        psResolutionSpinBox->setObjectName(QString::fromUtf8("psResolutionSpinBox"));
        psResolutionSpinBox->setMinimum(10);
        psResolutionSpinBox->setMaximum(2400);

        hboxLayout1->addWidget(psResolutionSpinBox);


        vboxLayout1->addLayout(hboxLayout1);


        vboxLayout->addWidget(psToolGroupBox);

        imageToolGroupBox = new QGroupBox(TabExternalToolsWidget);
        imageToolGroupBox->setObjectName(QString::fromUtf8("imageToolGroupBox"));
        gridLayout = new QGridLayout(imageToolGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        imageToolChangeButton = new QPushButton(imageToolGroupBox);
        imageToolChangeButton->setObjectName(QString::fromUtf8("imageToolChangeButton"));

        gridLayout->addWidget(imageToolChangeButton, 0, 2, 1, 1);

        imageToolLineEdit = new QLineEdit(imageToolGroupBox);
        imageToolLineEdit->setObjectName(QString::fromUtf8("imageToolLineEdit"));

        gridLayout->addWidget(imageToolLineEdit, 0, 1, 1, 1);

        imageToolLabel = new QLabel(imageToolGroupBox);
        imageToolLabel->setObjectName(QString::fromUtf8("imageToolLabel"));
        imageToolLabel->setWordWrap(false);

        gridLayout->addWidget(imageToolLabel, 0, 0, 1, 1);


        vboxLayout->addWidget(imageToolGroupBox);

        extBrowserToolGroupBox = new QGroupBox(TabExternalToolsWidget);
        extBrowserToolGroupBox->setObjectName(QString::fromUtf8("extBrowserToolGroupBox"));
        gridLayout1 = new QGridLayout(extBrowserToolGroupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        extBrowserToolChangeButton = new QPushButton(extBrowserToolGroupBox);
        extBrowserToolChangeButton->setObjectName(QString::fromUtf8("extBrowserToolChangeButton"));

        gridLayout1->addWidget(extBrowserToolChangeButton, 0, 2, 1, 1);

        extBrowserToolLineEdit = new QLineEdit(extBrowserToolGroupBox);
        extBrowserToolLineEdit->setObjectName(QString::fromUtf8("extBrowserToolLineEdit"));

        gridLayout1->addWidget(extBrowserToolLineEdit, 0, 1, 1, 1);

        extBrowserToolLabel = new QLabel(extBrowserToolGroupBox);
        extBrowserToolLabel->setObjectName(QString::fromUtf8("extBrowserToolLabel"));
        extBrowserToolLabel->setWordWrap(false);

        gridLayout1->addWidget(extBrowserToolLabel, 0, 0, 1, 1);


        vboxLayout->addWidget(extBrowserToolGroupBox);

        latexToolGroupBox = new QGroupBox(TabExternalToolsWidget);
        latexToolGroupBox->setObjectName(QString::fromUtf8("latexToolGroupBox"));
        vboxLayout2 = new QVBoxLayout(latexToolGroupBox);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(11, 11, 11, 11);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        label = new QLabel(latexToolGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout2->addWidget(label);

        latexConfigsListWidget = new QListWidget(latexToolGroupBox);
        latexConfigsListWidget->setObjectName(QString::fromUtf8("latexConfigsListWidget"));

        vboxLayout2->addWidget(latexConfigsListWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        latexConfigUpButton = new QPushButton(latexToolGroupBox);
        latexConfigUpButton->setObjectName(QString::fromUtf8("latexConfigUpButton"));

        horizontalLayout->addWidget(latexConfigUpButton);

        latexConfigDownButton = new QPushButton(latexToolGroupBox);
        latexConfigDownButton->setObjectName(QString::fromUtf8("latexConfigDownButton"));

        horizontalLayout->addWidget(latexConfigDownButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        latexConfigAddButton = new QPushButton(latexToolGroupBox);
        latexConfigAddButton->setObjectName(QString::fromUtf8("latexConfigAddButton"));

        horizontalLayout->addWidget(latexConfigAddButton);

        latexConfigDeleteButton = new QPushButton(latexToolGroupBox);
        latexConfigDeleteButton->setObjectName(QString::fromUtf8("latexConfigDeleteButton"));

        horizontalLayout->addWidget(latexConfigDeleteButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        latexChangePathButton = new QPushButton(latexToolGroupBox);
        latexChangePathButton->setObjectName(QString::fromUtf8("latexChangePathButton"));

        horizontalLayout->addWidget(latexChangePathButton);


        vboxLayout2->addLayout(horizontalLayout);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        latexEditorLabel = new QLabel(latexToolGroupBox);
        latexEditorLabel->setObjectName(QString::fromUtf8("latexEditorLabel"));
        latexEditorLabel->setWordWrap(false);

        hboxLayout2->addWidget(latexEditorLabel);

        latexEditorLineEdit = new QLineEdit(latexToolGroupBox);
        latexEditorLineEdit->setObjectName(QString::fromUtf8("latexEditorLineEdit"));

        hboxLayout2->addWidget(latexEditorLineEdit);

        latexEditorChangeButton = new QPushButton(latexToolGroupBox);
        latexEditorChangeButton->setObjectName(QString::fromUtf8("latexEditorChangeButton"));

        hboxLayout2->addWidget(latexEditorChangeButton);


        vboxLayout2->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        latexEmptyFrameCheckBox = new QCheckBox(latexToolGroupBox);
        latexEmptyFrameCheckBox->setObjectName(QString::fromUtf8("latexEmptyFrameCheckBox"));

        hboxLayout3->addWidget(latexEmptyFrameCheckBox);

        spacerItem2 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem2);

        latexForceDpiCheckBox = new QCheckBox(latexToolGroupBox);
        latexForceDpiCheckBox->setObjectName(QString::fromUtf8("latexForceDpiCheckBox"));

        hboxLayout3->addWidget(latexForceDpiCheckBox);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);

        latexResolutionLabel = new QLabel(latexToolGroupBox);
        latexResolutionLabel->setObjectName(QString::fromUtf8("latexResolutionLabel"));
        latexResolutionLabel->setWordWrap(false);

        hboxLayout3->addWidget(latexResolutionLabel);

        latexResolutionSpinBox = new QSpinBox(latexToolGroupBox);
        latexResolutionSpinBox->setObjectName(QString::fromUtf8("latexResolutionSpinBox"));
        latexResolutionSpinBox->setMinimum(10);
        latexResolutionSpinBox->setMaximum(2400);

        hboxLayout3->addWidget(latexResolutionSpinBox);


        vboxLayout2->addLayout(hboxLayout3);


        vboxLayout->addWidget(latexToolGroupBox);

        spacerItem4 = new QSpacerItem(670, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem4);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        spacerItem5 = new QSpacerItem(161, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem5);

        rescanButton = new QPushButton(TabExternalToolsWidget);
        rescanButton->setObjectName(QString::fromUtf8("rescanButton"));

        hboxLayout4->addWidget(rescanButton);


        vboxLayout->addLayout(hboxLayout4);

#ifndef QT_NO_SHORTCUT
        psToolLabel->setBuddy(psToolLineEdit);
        psResolutionLabel->setBuddy(psResolutionSpinBox);
        imageToolLabel->setBuddy(imageToolLineEdit);
        extBrowserToolLabel->setBuddy(extBrowserToolLineEdit);
        latexEditorLabel->setBuddy(latexEditorLineEdit);
        latexResolutionLabel->setBuddy(latexResolutionSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(psToolLineEdit, psToolChangeButton);
        QWidget::setTabOrder(psToolChangeButton, psAntialiasTextCheckBox);
        QWidget::setTabOrder(psAntialiasTextCheckBox, psAntialiasGraphicsCheckBox);
        QWidget::setTabOrder(psAntialiasGraphicsCheckBox, psResolutionSpinBox);
        QWidget::setTabOrder(psResolutionSpinBox, imageToolLineEdit);
        QWidget::setTabOrder(imageToolLineEdit, imageToolChangeButton);
        QWidget::setTabOrder(imageToolChangeButton, extBrowserToolLineEdit);
        QWidget::setTabOrder(extBrowserToolLineEdit, extBrowserToolChangeButton);
        QWidget::setTabOrder(extBrowserToolChangeButton, latexConfigsListWidget);
        QWidget::setTabOrder(latexConfigsListWidget, latexConfigUpButton);
        QWidget::setTabOrder(latexConfigUpButton, latexConfigDownButton);
        QWidget::setTabOrder(latexConfigDownButton, latexConfigAddButton);
        QWidget::setTabOrder(latexConfigAddButton, latexConfigDeleteButton);
        QWidget::setTabOrder(latexConfigDeleteButton, latexChangePathButton);
        QWidget::setTabOrder(latexChangePathButton, latexEditorLineEdit);
        QWidget::setTabOrder(latexEditorLineEdit, latexEditorChangeButton);
        QWidget::setTabOrder(latexEditorChangeButton, latexEmptyFrameCheckBox);
        QWidget::setTabOrder(latexEmptyFrameCheckBox, latexForceDpiCheckBox);
        QWidget::setTabOrder(latexForceDpiCheckBox, latexResolutionSpinBox);
        QWidget::setTabOrder(latexResolutionSpinBox, rescanButton);

        retranslateUi(TabExternalToolsWidget);

        QMetaObject::connectSlotsByName(TabExternalToolsWidget);
    } // setupUi

    void retranslateUi(QWidget *TabExternalToolsWidget)
    {
        TabExternalToolsWidget->setWindowTitle(QApplication::translate("TabExternalToolsWidget", "External Tools", 0, QApplication::UnicodeUTF8));
        psToolGroupBox->setTitle(QApplication::translate("TabExternalToolsWidget", "PostScript Interpreter", 0, QApplication::UnicodeUTF8));
        psToolLabel->setText(QApplication::translate("TabExternalToolsWidget", "&Name of Executable:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        psToolLineEdit->setToolTip(QApplication::translate("TabExternalToolsWidget", "<qt>Add the path for the Ghostscript interpreter. On Windows, please note it is important to note you need to use the program named gswin32c.exe - NOT gswin32.exe. Otherwise, this maybe cause a hang when starting Scribus.</qt>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        psToolChangeButton->setText(QApplication::translate("TabExternalToolsWidget", "&Change...", 0, QApplication::UnicodeUTF8));
        psToolChangeButton->setShortcut(QApplication::translate("TabExternalToolsWidget", "Alt+C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        psAntialiasTextCheckBox->setToolTip(QApplication::translate("TabExternalToolsWidget", "Antialias text for EPS and PDF onscreen rendering", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        psAntialiasTextCheckBox->setText(QApplication::translate("TabExternalToolsWidget", "Antialias &Text", 0, QApplication::UnicodeUTF8));
        psAntialiasTextCheckBox->setShortcut(QApplication::translate("TabExternalToolsWidget", "Alt+T", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        psAntialiasGraphicsCheckBox->setToolTip(QApplication::translate("TabExternalToolsWidget", "Antialias graphics for EPS and PDF onscreen rendering", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        psAntialiasGraphicsCheckBox->setText(QApplication::translate("TabExternalToolsWidget", "Antialias &Graphics", 0, QApplication::UnicodeUTF8));
        psAntialiasGraphicsCheckBox->setShortcut(QApplication::translate("TabExternalToolsWidget", "Alt+G", 0, QApplication::UnicodeUTF8));
        psResolutionLabel->setText(QApplication::translate("TabExternalToolsWidget", "Resolution:", 0, QApplication::UnicodeUTF8));
        psResolutionSpinBox->setSuffix(QApplication::translate("TabExternalToolsWidget", " dpi", 0, QApplication::UnicodeUTF8));
        imageToolGroupBox->setTitle(QApplication::translate("TabExternalToolsWidget", "Image Processing Tool", 0, QApplication::UnicodeUTF8));
        imageToolChangeButton->setText(QApplication::translate("TabExternalToolsWidget", "&Change...", 0, QApplication::UnicodeUTF8));
        imageToolChangeButton->setShortcut(QApplication::translate("TabExternalToolsWidget", "Alt+C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        imageToolLineEdit->setToolTip(QApplication::translate("TabExternalToolsWidget", "<qt>File system location for graphics editor. If you use gimp and your distribution includes it, we recommend 'gimp-remote', as it allows you to edit the image in an already running instance of gimp.</qt>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        imageToolLabel->setText(QApplication::translate("TabExternalToolsWidget", "Name of &Executable:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        extBrowserToolGroupBox->setToolTip(QApplication::translate("TabExternalToolsWidget", "Web Browser to launch with links from the Help system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        extBrowserToolGroupBox->setTitle(QApplication::translate("TabExternalToolsWidget", "Web Browser", 0, QApplication::UnicodeUTF8));
        extBrowserToolChangeButton->setText(QApplication::translate("TabExternalToolsWidget", "&Change...", 0, QApplication::UnicodeUTF8));
        extBrowserToolChangeButton->setShortcut(QApplication::translate("TabExternalToolsWidget", "Alt+C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        extBrowserToolLineEdit->setToolTip(QApplication::translate("TabExternalToolsWidget", "<qt>File system location for your web browser. This is used for external links from the Help system.</qt>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        extBrowserToolLabel->setText(QApplication::translate("TabExternalToolsWidget", "Name of &Executable:", 0, QApplication::UnicodeUTF8));
        latexToolGroupBox->setTitle(QApplication::translate("TabExternalToolsWidget", "Render Frames", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TabExternalToolsWidget", "Configurations:", 0, QApplication::UnicodeUTF8));
        latexConfigUpButton->setText(QApplication::translate("TabExternalToolsWidget", "Up", 0, QApplication::UnicodeUTF8));
        latexConfigDownButton->setText(QApplication::translate("TabExternalToolsWidget", "Down", 0, QApplication::UnicodeUTF8));
        latexConfigAddButton->setText(QApplication::translate("TabExternalToolsWidget", "Add...", 0, QApplication::UnicodeUTF8));
        latexConfigDeleteButton->setText(QApplication::translate("TabExternalToolsWidget", "Delete", 0, QApplication::UnicodeUTF8));
        latexChangePathButton->setText(QApplication::translate("TabExternalToolsWidget", "Change Command...", 0, QApplication::UnicodeUTF8));
        latexEditorLabel->setText(QApplication::translate("TabExternalToolsWidget", "External Editor:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        latexEditorLineEdit->setToolTip(QApplication::translate("TabExternalToolsWidget", "<qt>Path to the editor executable.</qt>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        latexEditorChangeButton->setText(QApplication::translate("TabExternalToolsWidget", "&Change...", 0, QApplication::UnicodeUTF8));
        latexEditorChangeButton->setShortcut(QApplication::translate("TabExternalToolsWidget", "Alt+C", 0, QApplication::UnicodeUTF8));
        latexEmptyFrameCheckBox->setText(QApplication::translate("TabExternalToolsWidget", "Start with empty frame", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        latexForceDpiCheckBox->setToolTip(QApplication::translate("TabExternalToolsWidget", "Always use the configured DPI setting for calculating the size, even if the image file reports something different.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        latexForceDpiCheckBox->setText(QApplication::translate("TabExternalToolsWidget", "Force DPI", 0, QApplication::UnicodeUTF8));
        latexResolutionLabel->setText(QApplication::translate("TabExternalToolsWidget", "Resolution:", 0, QApplication::UnicodeUTF8));
        latexResolutionSpinBox->setSuffix(QApplication::translate("TabExternalToolsWidget", " dpi", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        rescanButton->setToolTip(QApplication::translate("TabExternalToolsWidget", "Rescan for the external tools if they do not exist in the already specified location", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        rescanButton->setText(QApplication::translate("TabExternalToolsWidget", "&Rescan", 0, QApplication::UnicodeUTF8));
        rescanButton->setShortcut(QApplication::translate("TabExternalToolsWidget", "Alt+R", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TabExternalToolsWidget: public Ui_TabExternalToolsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABEXTERNALTOOLSWIDGET_H
