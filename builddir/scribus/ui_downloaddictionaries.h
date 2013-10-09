/********************************************************************************
** Form generated from reading UI file 'downloaddictionaries.ui'
**
** Created: Sun Feb 24 21:37:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADDICTIONARIES_H
#define UI_DOWNLOADDICTIONARIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DownloadDictionaries
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *availableListLabel;
    QTableWidget *dictTableWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *downloadListButton;
    QPushButton *downloadButton;
    QPushButton *closeButton;

    void setupUi(QDialog *DownloadDictionaries)
    {
        if (DownloadDictionaries->objectName().isEmpty())
            DownloadDictionaries->setObjectName(QString::fromUtf8("DownloadDictionaries"));
        DownloadDictionaries->resize(542, 270);
        verticalLayout = new QVBoxLayout(DownloadDictionaries);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        availableListLabel = new QLabel(DownloadDictionaries);
        availableListLabel->setObjectName(QString::fromUtf8("availableListLabel"));

        verticalLayout->addWidget(availableListLabel);

        dictTableWidget = new QTableWidget(DownloadDictionaries);
        dictTableWidget->setObjectName(QString::fromUtf8("dictTableWidget"));
        dictTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);

        verticalLayout->addWidget(dictTableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        downloadListButton = new QPushButton(DownloadDictionaries);
        downloadListButton->setObjectName(QString::fromUtf8("downloadListButton"));

        horizontalLayout->addWidget(downloadListButton);

        downloadButton = new QPushButton(DownloadDictionaries);
        downloadButton->setObjectName(QString::fromUtf8("downloadButton"));

        horizontalLayout->addWidget(downloadButton);

        closeButton = new QPushButton(DownloadDictionaries);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DownloadDictionaries);

        QMetaObject::connectSlotsByName(DownloadDictionaries);
    } // setupUi

    void retranslateUi(QDialog *DownloadDictionaries)
    {
        DownloadDictionaries->setWindowTitle(QApplication::translate("DownloadDictionaries", "Download Dictionaries", 0, QApplication::UnicodeUTF8));
        availableListLabel->setText(QApplication::translate("DownloadDictionaries", "Available Dictionary Downloads", 0, QApplication::UnicodeUTF8));
        downloadListButton->setText(QApplication::translate("DownloadDictionaries", "Update Dictionary List", 0, QApplication::UnicodeUTF8));
        downloadButton->setText(QApplication::translate("DownloadDictionaries", "Download Dictionaries", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("DownloadDictionaries", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DownloadDictionaries: public Ui_DownloadDictionaries {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADDICTIONARIES_H
