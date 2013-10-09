/****************************************************************************
** Meta object code from reading C++ file 'smtabruler.h'
**
** Created: Sun Feb 24 21:37:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/smtabruler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smtabruler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SMTabruler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   29,   29,   29, 0x08,
      30,   29,   29,   29, 0x08,
      42,   29,   29,   29, 0x08,
      61,   29,   29,   29, 0x08,
      79,   29,   29,   29, 0x08,
      98,   29,   29,   29, 0x08,
     118,   29,   29,   29, 0x08,
     137,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SMTabruler[] = {
    "SMTabruler\0slotTabsChanged()\0\0pbClicked()\0"
    "firstDataChanged()\0leftDataChanged()\0"
    "rightDataChanged()\0firstValueChanged()\0"
    "leftValueChanged()\0rightValueChanged()\0"
};

void SMTabruler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SMTabruler *_t = static_cast<SMTabruler *>(_o);
        switch (_id) {
        case 0: _t->slotTabsChanged(); break;
        case 1: _t->pbClicked(); break;
        case 2: _t->firstDataChanged(); break;
        case 3: _t->leftDataChanged(); break;
        case 4: _t->rightDataChanged(); break;
        case 5: _t->firstValueChanged(); break;
        case 6: _t->leftValueChanged(); break;
        case 7: _t->rightValueChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SMTabruler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SMTabruler::staticMetaObject = {
    { &Tabruler::staticMetaObject, qt_meta_stringdata_SMTabruler,
      qt_meta_data_SMTabruler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SMTabruler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SMTabruler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SMTabruler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SMTabruler))
        return static_cast<void*>(const_cast< SMTabruler*>(this));
    return Tabruler::qt_metacast(_clname);
}

int SMTabruler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Tabruler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
