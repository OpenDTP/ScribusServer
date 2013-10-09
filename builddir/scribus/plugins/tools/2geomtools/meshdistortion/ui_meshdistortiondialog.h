/********************************************************************************
** Form generated from reading UI file 'meshdistortiondialog.ui'
**
** Created: Sun Feb 24 21:58:51 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESHDISTORTIONDIALOG_H
#define UI_MESHDISTORTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MeshDistortionDialog
{
public:
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout;
    QGraphicsView *previewLabel;
    QHBoxLayout *hboxLayout1;
    QHBoxLayout *hboxLayout2;
    QToolButton *buttonZoomIn;
    QToolButton *buttonZoomOut;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout1;
    QPushButton *resetButton;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MeshDistortionDialog)
    {
        if (MeshDistortionDialog->objectName().isEmpty())
            MeshDistortionDialog->setObjectName(QString::fromUtf8("MeshDistortionDialog"));
        MeshDistortionDialog->resize(403, 355);
        hboxLayout = new QHBoxLayout(MeshDistortionDialog);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        previewLabel = new QGraphicsView(MeshDistortionDialog);
        previewLabel->setObjectName(QString::fromUtf8("previewLabel"));
        previewLabel->setMinimumSize(QSize(300, 300));
        previewLabel->setDragMode(QGraphicsView::RubberBandDrag);

        vboxLayout->addWidget(previewLabel);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        buttonZoomIn = new QToolButton(MeshDistortionDialog);
        buttonZoomIn->setObjectName(QString::fromUtf8("buttonZoomIn"));

        hboxLayout2->addWidget(buttonZoomIn);

        buttonZoomOut = new QToolButton(MeshDistortionDialog);
        buttonZoomOut->setObjectName(QString::fromUtf8("buttonZoomOut"));

        hboxLayout2->addWidget(buttonZoomOut);


        hboxLayout1->addLayout(hboxLayout2);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout1);


        hboxLayout->addLayout(vboxLayout);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        resetButton = new QPushButton(MeshDistortionDialog);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        vboxLayout1->addWidget(resetButton);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem1);

        buttonBox = new QDialogButtonBox(MeshDistortionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        vboxLayout1->addWidget(buttonBox);


        hboxLayout->addLayout(vboxLayout1);


        retranslateUi(MeshDistortionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MeshDistortionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MeshDistortionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MeshDistortionDialog);
    } // setupUi

    void retranslateUi(QDialog *MeshDistortionDialog)
    {
        MeshDistortionDialog->setWindowTitle(QApplication::translate("MeshDistortionDialog", "Mesh Distortion", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        previewLabel->setToolTip(QApplication::translate("MeshDistortionDialog", "Drag the red handles with the mouse to distort the mesh", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        buttonZoomIn->setToolTip(QApplication::translate("MeshDistortionDialog", "Zoom In", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonZoomIn->setText(QApplication::translate("MeshDistortionDialog", "+", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonZoomOut->setToolTip(QApplication::translate("MeshDistortionDialog", "Zoom Out", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonZoomOut->setText(QApplication::translate("MeshDistortionDialog", "-", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        resetButton->setToolTip(QApplication::translate("MeshDistortionDialog", "Resets the selected handles to their initial position.\n"
"If no handle is selected all handles will be reset.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        resetButton->setText(QApplication::translate("MeshDistortionDialog", "&Reset", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MeshDistortionDialog: public Ui_MeshDistortionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESHDISTORTIONDIALOG_H
