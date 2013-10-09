/********************************************************************************
** Form generated from reading UI file 'nftwidget.ui'
**
** Created: Sun Feb 24 21:37:26 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NFTWIDGET_H
#define UI_NFTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nftwidget
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *categoryList;
    QListWidget *tnailGrid;
    QToolBox *toolBox;
    QWidget *aboutPage;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QWidget *previewPage;
    QGridLayout *_2;
    QListWidget *imageView;
    QWidget *helpPage;
    QGridLayout *_3;
    QTextBrowser *helpBrowser;

    void setupUi(QWidget *nftwidget)
    {
        if (nftwidget->objectName().isEmpty())
            nftwidget->setObjectName(QString::fromUtf8("nftwidget"));
        nftwidget->resize(628, 313);
        horizontalLayout = new QHBoxLayout(nftwidget);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        categoryList = new QListWidget(nftwidget);
        categoryList->setObjectName(QString::fromUtf8("categoryList"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(categoryList->sizePolicy().hasHeightForWidth());
        categoryList->setSizePolicy(sizePolicy);
        categoryList->setMinimumSize(QSize(130, 200));
        categoryList->setMaximumSize(QSize(140, 16777215));

        horizontalLayout->addWidget(categoryList);

        tnailGrid = new QListWidget(nftwidget);
        tnailGrid->setObjectName(QString::fromUtf8("tnailGrid"));
        tnailGrid->setMinimumSize(QSize(250, 0));
        tnailGrid->setContextMenuPolicy(Qt::ActionsContextMenu);
        tnailGrid->setSpacing(5);
        tnailGrid->setViewMode(QListView::IconMode);

        horizontalLayout->addWidget(tnailGrid);

        toolBox = new QToolBox(nftwidget);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMinimumSize(QSize(220, 16));
        aboutPage = new QWidget();
        aboutPage->setObjectName(QString::fromUtf8("aboutPage"));
        aboutPage->setGeometry(QRect(0, 0, 220, 202));
        gridLayout = new QGridLayout(aboutPage);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser = new QTextBrowser(aboutPage);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        toolBox->addItem(aboutPage, QString::fromUtf8("&About"));
        previewPage = new QWidget();
        previewPage->setObjectName(QString::fromUtf8("previewPage"));
        previewPage->setGeometry(QRect(0, 0, 112, 112));
        _2 = new QGridLayout(previewPage);
#ifndef Q_OS_MAC
        _2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        _2->setContentsMargins(9, 9, 9, 9);
#endif
        _2->setObjectName(QString::fromUtf8("_2"));
        imageView = new QListWidget(previewPage);
        imageView->setObjectName(QString::fromUtf8("imageView"));
        imageView->setViewMode(QListView::IconMode);

        _2->addWidget(imageView, 0, 0, 1, 1);

        toolBox->addItem(previewPage, QString::fromUtf8("&Preview"));
        helpPage = new QWidget();
        helpPage->setObjectName(QString::fromUtf8("helpPage"));
        helpPage->setGeometry(QRect(0, 0, 112, 112));
        _3 = new QGridLayout(helpPage);
#ifndef Q_OS_MAC
        _3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        _3->setContentsMargins(9, 9, 9, 9);
#endif
        _3->setObjectName(QString::fromUtf8("_3"));
        helpBrowser = new QTextBrowser(helpPage);
        helpBrowser->setObjectName(QString::fromUtf8("helpBrowser"));

        _3->addWidget(helpBrowser, 0, 0, 1, 1);

        toolBox->addItem(helpPage, QString::fromUtf8("&Help"));

        horizontalLayout->addWidget(toolBox);


        retranslateUi(nftwidget);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(nftwidget);
    } // setupUi

    void retranslateUi(QWidget *nftwidget)
    {
        nftwidget->setWindowTitle(QApplication::translate("nftwidget", "Form", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(aboutPage), QApplication::translate("nftwidget", "&About", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(previewPage), QApplication::translate("nftwidget", "&Preview", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(helpPage), QApplication::translate("nftwidget", "&Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class nftwidget: public Ui_nftwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NFTWIDGET_H
