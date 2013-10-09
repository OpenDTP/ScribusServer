/****************************************************************************
** Meta object code from reading C++ file 'oneclick.h'
**
** Created: Sun Feb 24 21:37:13 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/oneclick.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oneclick.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OneClick[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,   23,   23,   23, 0x0a,
      24,   23,   23,   23, 0x0a,
      39,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OneClick[] = {
    "OneClick\0ToggleKette()\0\0changeSizesH()\0"
    "changeSizesW()\0"
};

void OneClick::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OneClick *_t = static_cast<OneClick *>(_o);
        switch (_id) {
        case 0: _t->ToggleKette(); break;
        case 1: _t->changeSizesH(); break;
        case 2: _t->changeSizesW(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData OneClick::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OneClick::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OneClick,
      qt_meta_data_OneClick, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OneClick::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OneClick::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OneClick::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OneClick))
        return static_cast<void*>(const_cast< OneClick*>(this));
    return QDialog::qt_metacast(_clname);
}

int OneClick::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
