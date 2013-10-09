/****************************************************************************
** Meta object code from reading C++ file 'smstyleselect.h'
**
** Created: Sun Feb 24 21:37:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/smstyleselect.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smstyleselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SMStyleSelect[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   29,   29,   29, 0x08,
      30,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SMStyleSelect[] = {
    "SMStyleSelect\0styleChanged()\0\0pbPressed()\0"
};

void SMStyleSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SMStyleSelect *_t = static_cast<SMStyleSelect *>(_o);
        switch (_id) {
        case 0: _t->styleChanged(); break;
        case 1: _t->pbPressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SMStyleSelect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SMStyleSelect::staticMetaObject = {
    { &StyleSelect::staticMetaObject, qt_meta_stringdata_SMStyleSelect,
      qt_meta_data_SMStyleSelect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SMStyleSelect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SMStyleSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SMStyleSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SMStyleSelect))
        return static_cast<void*>(const_cast< SMStyleSelect*>(this));
    return StyleSelect::qt_metacast(_clname);
}

int SMStyleSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StyleSelect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
