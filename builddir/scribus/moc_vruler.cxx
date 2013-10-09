/****************************************************************************
** Meta object code from reading C++ file 'vruler.h'
**
** Created: Sun Feb 24 21:37:25 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/vruler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vruler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Vruler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,   17,   23,   23, 0x0a,
      24,   23,   23,   23, 0x0a,
      37,   51,   23,   23, 0x0a,
      55,   72,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Vruler[] = {
    "Vruler\0Draw(int)\0where\0\0unitChange()\0"
    "shift(double)\0pos\0shiftRel(double)\0"
    "dist\0"
};

void Vruler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Vruler *_t = static_cast<Vruler *>(_o);
        switch (_id) {
        case 0: _t->Draw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->unitChange(); break;
        case 2: _t->shift((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->shiftRel((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Vruler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Vruler::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Vruler,
      qt_meta_data_Vruler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Vruler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Vruler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Vruler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Vruler))
        return static_cast<void*>(const_cast< Vruler*>(this));
    return QWidget::qt_metacast(_clname);
}

int Vruler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
