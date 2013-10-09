/********************************************************************************
** Form generated from reading UI file 'picsearchoptions.ui'
**
** Created: Sun Feb 24 21:37:26 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICSEARCHOPTIONS_H
#define UI_PICSEARCHOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_PicSearchOptions
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1_2;
    QLabel *textLabel1;
    QLineEdit *directoryEdit;
    QLineEdit *fileEdit;
    QPushButton *changeDirButton;
    QHBoxLayout *hboxLayout;
    QLabel *searchLabel;
    QProgressBar *progressBar1;
    QSpacerItem *spacerItem;
    QPushButton *startButton;
    QHBoxLayout *hboxLayout1;
    QCheckBox *caseInsensitiveCheck;
    QCheckBox *recursiveSearch;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *PicSearchOptions)
    {
        if (PicSearchOptions->objectName().isEmpty())
            PicSearchOptions->setObjectName(QString::fromUtf8("PicSearchOptions"));
        PicSearchOptions->resize(513, 139);
        gridLayout = new QGridLayout(PicSearchOptions);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1_2 = new QLabel(PicSearchOptions);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setWordWrap(false);

        gridLayout->addWidget(textLabel1_2, 0, 0, 1, 1);

        textLabel1 = new QLabel(PicSearchOptions);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 1, 0, 1, 1);

        directoryEdit = new QLineEdit(PicSearchOptions);
        directoryEdit->setObjectName(QString::fromUtf8("directoryEdit"));
        directoryEdit->setMinimumSize(QSize(300, 0));

        gridLayout->addWidget(directoryEdit, 1, 1, 1, 1);

        fileEdit = new QLineEdit(PicSearchOptions);
        fileEdit->setObjectName(QString::fromUtf8("fileEdit"));

        gridLayout->addWidget(fileEdit, 0, 1, 1, 2);

        changeDirButton = new QPushButton(PicSearchOptions);
        changeDirButton->setObjectName(QString::fromUtf8("changeDirButton"));

        gridLayout->addWidget(changeDirButton, 1, 2, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        searchLabel = new QLabel(PicSearchOptions);
        searchLabel->setObjectName(QString::fromUtf8("searchLabel"));
        searchLabel->setWordWrap(false);

        hboxLayout->addWidget(searchLabel);

        progressBar1 = new QProgressBar(PicSearchOptions);
        progressBar1->setObjectName(QString::fromUtf8("progressBar1"));
        progressBar1->setMinimumSize(QSize(0, 20));
        progressBar1->setMaximumSize(QSize(250, 22));
        progressBar1->setOrientation(Qt::Horizontal);

        hboxLayout->addWidget(progressBar1);

        spacerItem = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        startButton = new QPushButton(PicSearchOptions);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        hboxLayout->addWidget(startButton);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 3);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        caseInsensitiveCheck = new QCheckBox(PicSearchOptions);
        caseInsensitiveCheck->setObjectName(QString::fromUtf8("caseInsensitiveCheck"));

        hboxLayout1->addWidget(caseInsensitiveCheck);

        recursiveSearch = new QCheckBox(PicSearchOptions);
        recursiveSearch->setObjectName(QString::fromUtf8("recursiveSearch"));
        recursiveSearch->setChecked(true);

        hboxLayout1->addWidget(recursiveSearch);

        spacerItem1 = new QSpacerItem(81, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 3);

#ifndef QT_NO_SHORTCUT
        textLabel1_2->setBuddy(fileEdit);
        textLabel1->setBuddy(directoryEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(PicSearchOptions);

        QMetaObject::connectSlotsByName(PicSearchOptions);
    } // setupUi

    void retranslateUi(QDialog *PicSearchOptions)
    {
        PicSearchOptions->setWindowTitle(QApplication::translate("PicSearchOptions", "Search Images", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("PicSearchOptions", "Search for:", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("PicSearchOptions", "Start at:", 0, QApplication::UnicodeUTF8));
        changeDirButton->setText(QApplication::translate("PicSearchOptions", "Change...", 0, QApplication::UnicodeUTF8));
        searchLabel->setText(QApplication::translate("PicSearchOptions", "Searching", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("PicSearchOptions", "Start Search", 0, QApplication::UnicodeUTF8));
        caseInsensitiveCheck->setText(QApplication::translate("PicSearchOptions", "Case insensitive search", 0, QApplication::UnicodeUTF8));
        recursiveSearch->setText(QApplication::translate("PicSearchOptions", "Search recursively", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PicSearchOptions: public Ui_PicSearchOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICSEARCHOPTIONS_H
