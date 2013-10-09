/********************************************************************************
** Form generated from reading UI file 'satdialog.ui'
**
** Created: Sun Feb 24 21:57:33 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SATDIALOG_H
#define UI_SATDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_satdialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *emailEdit;
    QLineEdit *authorEdit;
    QLabel *emailLabel;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QTextEdit *usageEdit;
    QTextEdit *descrEdit;
    QLineEdit *colorsEdit;
    QLineEdit *psizeEdit;
    QComboBox *catsCombo;
    QLineEdit *nameEdit;
    QCheckBox *detailButton;
    QLabel *label;
    QLabel *catsLabel;
    QLabel *psizeLabel;
    QLabel *colorsLabel;
    QLabel *descrLabel;
    QLabel *usageLabel;
    QDialogButtonBox *buttonBox;
    QLabel *authorLabel;

    void setupUi(QDialog *satdialog)
    {
        if (satdialog->objectName().isEmpty())
            satdialog->setObjectName(QString::fromUtf8("satdialog"));
        satdialog->resize(390, 503);
        gridLayout = new QGridLayout(satdialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        emailEdit = new QLineEdit(satdialog);
        emailEdit->setObjectName(QString::fromUtf8("emailEdit"));

        gridLayout->addWidget(emailEdit, 10, 1, 1, 1);

        authorEdit = new QLineEdit(satdialog);
        authorEdit->setObjectName(QString::fromUtf8("authorEdit"));

        gridLayout->addWidget(authorEdit, 9, 1, 1, 1);

        emailLabel = new QLabel(satdialog);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        gridLayout->addWidget(emailLabel, 10, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 8, 0, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 6, 0, 1, 1);

        usageEdit = new QTextEdit(satdialog);
        usageEdit->setObjectName(QString::fromUtf8("usageEdit"));

        gridLayout->addWidget(usageEdit, 7, 1, 2, 1);

        descrEdit = new QTextEdit(satdialog);
        descrEdit->setObjectName(QString::fromUtf8("descrEdit"));

        gridLayout->addWidget(descrEdit, 5, 1, 2, 1);

        colorsEdit = new QLineEdit(satdialog);
        colorsEdit->setObjectName(QString::fromUtf8("colorsEdit"));

        gridLayout->addWidget(colorsEdit, 4, 1, 1, 1);

        psizeEdit = new QLineEdit(satdialog);
        psizeEdit->setObjectName(QString::fromUtf8("psizeEdit"));

        gridLayout->addWidget(psizeEdit, 3, 1, 1, 1);

        catsCombo = new QComboBox(satdialog);
        catsCombo->setObjectName(QString::fromUtf8("catsCombo"));

        gridLayout->addWidget(catsCombo, 2, 1, 1, 1);

        nameEdit = new QLineEdit(satdialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 0, 1, 1, 1);

        detailButton = new QCheckBox(satdialog);
        detailButton->setObjectName(QString::fromUtf8("detailButton"));

        gridLayout->addWidget(detailButton, 1, 0, 1, 2);

        label = new QLabel(satdialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        catsLabel = new QLabel(satdialog);
        catsLabel->setObjectName(QString::fromUtf8("catsLabel"));

        gridLayout->addWidget(catsLabel, 2, 0, 1, 1);

        psizeLabel = new QLabel(satdialog);
        psizeLabel->setObjectName(QString::fromUtf8("psizeLabel"));

        gridLayout->addWidget(psizeLabel, 3, 0, 1, 1);

        colorsLabel = new QLabel(satdialog);
        colorsLabel->setObjectName(QString::fromUtf8("colorsLabel"));

        gridLayout->addWidget(colorsLabel, 4, 0, 1, 1);

        descrLabel = new QLabel(satdialog);
        descrLabel->setObjectName(QString::fromUtf8("descrLabel"));

        gridLayout->addWidget(descrLabel, 5, 0, 1, 1);

        usageLabel = new QLabel(satdialog);
        usageLabel->setObjectName(QString::fromUtf8("usageLabel"));

        gridLayout->addWidget(usageLabel, 7, 0, 1, 1);

        buttonBox = new QDialogButtonBox(satdialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 11, 0, 1, 2);

        authorLabel = new QLabel(satdialog);
        authorLabel->setObjectName(QString::fromUtf8("authorLabel"));

        gridLayout->addWidget(authorLabel, 9, 0, 1, 1);


        retranslateUi(satdialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), satdialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), satdialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(satdialog);
    } // setupUi

    void retranslateUi(QDialog *satdialog)
    {
        satdialog->setWindowTitle(QApplication::translate("satdialog", "Save as Template", 0, QApplication::UnicodeUTF8));
        emailLabel->setText(QApplication::translate("satdialog", "Email:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        colorsEdit->setToolTip(QApplication::translate("satdialog", "Description of the color format of the document, or some hints regarding colors used", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        detailButton->setText(QApplication::translate("satdialog", "&More Details", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("satdialog", "Name:", 0, QApplication::UnicodeUTF8));
        catsLabel->setText(QApplication::translate("satdialog", "Category:", 0, QApplication::UnicodeUTF8));
        psizeLabel->setText(QApplication::translate("satdialog", "Page Size:", 0, QApplication::UnicodeUTF8));
        colorsLabel->setText(QApplication::translate("satdialog", "Colors:", 0, QApplication::UnicodeUTF8));
        descrLabel->setText(QApplication::translate("satdialog", "Description:", 0, QApplication::UnicodeUTF8));
        usageLabel->setText(QApplication::translate("satdialog", "Usage:", 0, QApplication::UnicodeUTF8));
        authorLabel->setText(QApplication::translate("satdialog", "Author:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class satdialog: public Ui_satdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATDIALOG_H
