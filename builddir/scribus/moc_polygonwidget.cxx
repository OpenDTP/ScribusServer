/****************************************************************************
** Meta object code from reading C++ file 'polygonwidget.h'
**
** Created: Sun Feb 24 21:37:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/polygonwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'polygonwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PolygonWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   30,   30,   30, 0x0a,
      31,   30,   43,   30, 0x0a,
      50,   67,   30,   30, 0x0a,
      69,   67,   30,   30, 0x0a,
      87,   67,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PolygonWidget[] = {
    "PolygonWidget\0UpdatePreView()\0\0"
    "GetFaktor()\0double\0ValFromSpin(int)\0"
    "a\0ValFromSpin2(int)\0ValFromSpin3(int)\0"
};

void PolygonWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PolygonWidget *_t = static_cast<PolygonWidget *>(_o);
        switch (_id) {
        case 0: _t->UpdatePreView(); break;
        case 1: { double _r = _t->GetFaktor();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 2: _t->ValFromSpin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->ValFromSpin2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->ValFromSpin3((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PolygonWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PolygonWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PolygonWidget,
      qt_meta_data_PolygonWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PolygonWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PolygonWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PolygonWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PolygonWidget))
        return static_cast<void*>(const_cast< PolygonWidget*>(this));
    if (!strcmp(_clname, "Ui::PolygonWidgetBase"))
        return static_cast< Ui::PolygonWidgetBase*>(const_cast< PolygonWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PolygonWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
