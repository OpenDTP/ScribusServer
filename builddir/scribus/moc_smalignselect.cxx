/****************************************************************************
** Meta object code from reading C++ file 'smalignselect.h'
**
** Created: Sun Feb 24 21:37:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/smalignselect.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smalignselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SMAlignSelect[] = {

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

static const char qt_meta_stringdata_SMAlignSelect[] = {
    "SMAlignSelect\0styleChanged()\0\0pbPressed()\0"
};

void SMAlignSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SMAlignSelect *_t = static_cast<SMAlignSelect *>(_o);
        switch (_id) {
        case 0: _t->styleChanged(); break;
        case 1: _t->pbPressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SMAlignSelect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SMAlignSelect::staticMetaObject = {
    { &AlignSelect::staticMetaObject, qt_meta_stringdata_SMAlignSelect,
      qt_meta_data_SMAlignSelect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SMAlignSelect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SMAlignSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SMAlignSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SMAlignSelect))
        return static_cast<void*>(const_cast< SMAlignSelect*>(this));
    return AlignSelect::qt_metacast(_clname);
}

int SMAlignSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AlignSelect::qt_metacall(_c, _id, _a);
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
