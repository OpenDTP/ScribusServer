/********************************************************************************
** Form generated from reading UI file 'polygonwidgetbase.ui'
**
** Created: Sun Feb 24 21:37:26 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYGONWIDGETBASE_H
#define UI_POLYGONWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PolygonWidgetBase
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *Ecken;
    QLabel *label_2;
    QSpinBox *Faktor2;
    QSlider *Slider2;
    QLabel *Preview;
    QGroupBox *Konvex;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QSpinBox *Faktor;
    QSlider *Slider1;
    QLabel *label_5;
    QSpinBox *CurvatureSpin;
    QSlider *CurvatureSlider;

    void setupUi(QWidget *PolygonWidgetBase)
    {
        if (PolygonWidgetBase->objectName().isEmpty())
            PolygonWidgetBase->setObjectName(QString::fromUtf8("PolygonWidgetBase"));
        PolygonWidgetBase->resize(443, 278);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PolygonWidgetBase->sizePolicy().hasHeightForWidth());
        PolygonWidgetBase->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(PolygonWidgetBase);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(PolygonWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        Ecken = new QSpinBox(PolygonWidgetBase);
        Ecken->setObjectName(QString::fromUtf8("Ecken"));
        Ecken->setMinimum(3);
        Ecken->setMaximum(999);

        gridLayout->addWidget(Ecken, 0, 1, 1, 1);

        label_2 = new QLabel(PolygonWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        Faktor2 = new QSpinBox(PolygonWidgetBase);
        Faktor2->setObjectName(QString::fromUtf8("Faktor2"));
        Faktor2->setMinimum(-180);
        Faktor2->setMaximum(180);

        gridLayout->addWidget(Faktor2, 1, 1, 1, 1);

        Slider2 = new QSlider(PolygonWidgetBase);
        Slider2->setObjectName(QString::fromUtf8("Slider2"));
        Slider2->setMinimum(-180);
        Slider2->setMaximum(180);
        Slider2->setOrientation(Qt::Horizontal);
        Slider2->setTickPosition(QSlider::TicksBelow);

        gridLayout->addWidget(Slider2, 2, 0, 1, 2);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        Preview = new QLabel(PolygonWidgetBase);
        Preview->setObjectName(QString::fromUtf8("Preview"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Preview->sizePolicy().hasHeightForWidth());
        Preview->setSizePolicy(sizePolicy1);
        Preview->setMinimumSize(QSize(260, 260));
        Preview->setMaximumSize(QSize(260, 260));
        Preview->setSizeIncrement(QSize(0, 0));
        Preview->setFrameShape(QFrame::Panel);
        Preview->setFrameShadow(QFrame::Sunken);
        Preview->setLineWidth(2);
        Preview->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(Preview, 0, 1, 2, 1);

        Konvex = new QGroupBox(PolygonWidgetBase);
        Konvex->setObjectName(QString::fromUtf8("Konvex"));
        Konvex->setCheckable(true);
        gridLayout_2 = new QGridLayout(Konvex);
        gridLayout_2->setSpacing(5);
        gridLayout_2->setContentsMargins(10, 10, 10, 10);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(Konvex);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        Faktor = new QSpinBox(Konvex);
        Faktor->setObjectName(QString::fromUtf8("Faktor"));
        Faktor->setMinimum(-100);
        Faktor->setMaximum(100);

        gridLayout_2->addWidget(Faktor, 0, 1, 1, 1);

        Slider1 = new QSlider(Konvex);
        Slider1->setObjectName(QString::fromUtf8("Slider1"));
        Slider1->setMinimum(-100);
        Slider1->setMaximum(100);
        Slider1->setOrientation(Qt::Horizontal);
        Slider1->setTickPosition(QSlider::TicksBelow);

        gridLayout_2->addWidget(Slider1, 1, 0, 1, 2);

        label_5 = new QLabel(Konvex);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        CurvatureSpin = new QSpinBox(Konvex);
        CurvatureSpin->setObjectName(QString::fromUtf8("CurvatureSpin"));
        CurvatureSpin->setMaximum(100);

        gridLayout_2->addWidget(CurvatureSpin, 2, 1, 1, 1);

        CurvatureSlider = new QSlider(Konvex);
        CurvatureSlider->setObjectName(QString::fromUtf8("CurvatureSlider"));
        CurvatureSlider->setMaximum(100);
        CurvatureSlider->setOrientation(Qt::Horizontal);
        CurvatureSlider->setTickPosition(QSlider::TicksBelow);

        gridLayout_2->addWidget(CurvatureSlider, 3, 0, 1, 2);


        gridLayout_3->addWidget(Konvex, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(Ecken);
        label_2->setBuddy(Faktor2);
        label_3->setBuddy(Faktor);
        label_5->setBuddy(CurvatureSpin);
#endif // QT_NO_SHORTCUT

        retranslateUi(PolygonWidgetBase);

        QMetaObject::connectSlotsByName(PolygonWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *PolygonWidgetBase)
    {
        PolygonWidgetBase->setWindowTitle(QApplication::translate("PolygonWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PolygonWidgetBase", "Corn&ers:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Ecken->setToolTip(QApplication::translate("PolygonWidgetBase", "Number of corners for polygons", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("PolygonWidgetBase", "&Rotation:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Faktor2->setToolTip(QApplication::translate("PolygonWidgetBase", "Degrees of rotation for polygons", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Slider2->setToolTip(QApplication::translate("PolygonWidgetBase", "Degrees of rotation for polygons", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Preview->setToolTip(QApplication::translate("PolygonWidgetBase", "Sample Polygon", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Preview->setText(QString());
#ifndef QT_NO_TOOLTIP
        Konvex->setToolTip(QApplication::translate("PolygonWidgetBase", "Apply Convex/Concave Factor to change shape of Polygons", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Konvex->setTitle(QApplication::translate("PolygonWidgetBase", "Apply &Factor", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PolygonWidgetBase", "&Factor:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Faktor->setToolTip(QApplication::translate("PolygonWidgetBase", "A negative value will make the polygon concave (or star shaped), a positive value will make it convex", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Faktor->setSuffix(QApplication::translate("PolygonWidgetBase", " %", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Slider1->setToolTip(QApplication::translate("PolygonWidgetBase", "A negative value will make the polygon concave (or star shaped), a positive value will make it convex", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("PolygonWidgetBase", "C&urvature:", 0, QApplication::UnicodeUTF8));
        CurvatureSpin->setSuffix(QApplication::translate("PolygonWidgetBase", " %", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PolygonWidgetBase: public Ui_PolygonWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYGONWIDGETBASE_H
