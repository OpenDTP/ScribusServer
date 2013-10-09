/****************************************************************************
** Meta object code from reading C++ file 'curvewidget.h'
**
** Created: Sun Feb 24 21:37:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/curvewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'curvewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_KCurve[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,   18,   18,   18, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_KCurve[] = {
    "KCurve\0modified()\0\0"
};

void KCurve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KCurve *_t = static_cast<KCurve *>(_o);
        switch (_id) {
        case 0: _t->modified(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData KCurve::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject KCurve::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_KCurve,
      qt_meta_data_KCurve, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KCurve::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KCurve))
        return static_cast<void*>(const_cast< KCurve*>(this));
    return QWidget::qt_metacast(_clname);
}

int KCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void KCurve::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_CurveWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   23,   23,   23, 0x08,
      24,   23,   23,   23, 0x08,
      34,   23,   23,   23, 0x08,
      45,   23,   23,   23, 0x08,
      54,   23,   23,   23, 0x08,
      63,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CurveWidget[] = {
    "CurveWidget\0doInvert()\0\0doReset()\0"
    "doLinear()\0doLoad()\0doSave()\0"
    "languageChange()\0"
};

void CurveWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CurveWidget *_t = static_cast<CurveWidget *>(_o);
        switch (_id) {
        case 0: _t->doInvert(); break;
        case 1: _t->doReset(); break;
        case 2: _t->doLinear(); break;
        case 3: _t->doLoad(); break;
        case 4: _t->doSave(); break;
        case 5: _t->languageChange(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CurveWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CurveWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CurveWidget,
      qt_meta_data_CurveWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CurveWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CurveWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CurveWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CurveWidget))
        return static_cast<void*>(const_cast< CurveWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CurveWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
