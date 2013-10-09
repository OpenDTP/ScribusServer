/****************************************************************************
** Meta object code from reading C++ file 'shadebutton.h'
**
** Created: Sun Feb 24 21:37:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/shadebutton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shadebutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ShadeButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   31,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ShadeButton[] = {
    "ShadeButton\0setShade(QAction*)\0act\0\0"
};

void ShadeButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ShadeButton *_t = static_cast<ShadeButton *>(_o);
        switch (_id) {
        case 0: _t->setShade((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ShadeButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ShadeButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_ShadeButton,
      qt_meta_data_ShadeButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShadeButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShadeButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShadeButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShadeButton))
        return static_cast<void*>(const_cast< ShadeButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int ShadeButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
