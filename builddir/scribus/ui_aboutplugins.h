/********************************************************************************
** Form generated from reading UI file 'aboutplugins.ui'
**
** Created: Sun Feb 24 21:37:25 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTPLUGINS_H
#define UI_ABOUTPLUGINS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QSplitter>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutPlugins
{
public:
    QVBoxLayout *vboxLayout;
    QSplitter *splitter;
    QListWidget *pluginList;
    QTextBrowser *infoBrowser;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutPlugins)
    {
        if (AboutPlugins->objectName().isEmpty())
            AboutPlugins->setObjectName(QString::fromUtf8("AboutPlugins"));
        AboutPlugins->resize(562, 401);
        vboxLayout = new QVBoxLayout(AboutPlugins);
        vboxLayout->setSpacing(5);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        splitter = new QSplitter(AboutPlugins);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(false);
        splitter->setChildrenCollapsible(false);
        pluginList = new QListWidget(splitter);
        pluginList->setObjectName(QString::fromUtf8("pluginList"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pluginList->sizePolicy().hasHeightForWidth());
        pluginList->setSizePolicy(sizePolicy);
        splitter->addWidget(pluginList);
        infoBrowser = new QTextBrowser(splitter);
        infoBrowser->setObjectName(QString::fromUtf8("infoBrowser"));
        splitter->addWidget(infoBrowser);

        vboxLayout->addWidget(splitter);

        buttonBox = new QDialogButtonBox(AboutPlugins);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(AboutPlugins);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutPlugins, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutPlugins, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutPlugins);
    } // setupUi

    void retranslateUi(QDialog *AboutPlugins)
    {
        AboutPlugins->setWindowTitle(QApplication::translate("AboutPlugins", "Scribus: About Plug-ins", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutPlugins: public Ui_AboutPlugins {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTPLUGINS_H
