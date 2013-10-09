/****************************************************************************
** Meta object code from reading C++ file 'smlinestyle.h'
**
** Created: Sun Feb 24 21:37:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/smlinestyle.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smlinestyle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SMLineStyle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   25,   25,   25, 0x05,
      26,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   71,   25,   25, 0x08,
      73,   71,   25,   25, 0x08,
      92,   71,   25,   25, 0x08,
     108,   71,   25,   25, 0x08,
     125,  144,   25,   25, 0x08,
     146,   71,   25,   25, 0x08,
     161,   25,   25,   25, 0x08,
     177,   25,   25,   25, 0x08,
     191,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SMLineStyle[] = {
    "SMLineStyle\0deleteDone()\0\0selectionDirty()\0"
    "slotCurrentLineChanged(int)\0i\0"
    "slotLineStyle(int)\0slotSetEnd(int)\0"
    "slotSetJoin(int)\0slotColor(QString)\0"
    "s\0slotShade(int)\0slotLineWidth()\0"
    "slotAddLine()\0slotDeleteLine()\0"
};

void SMLineStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SMLineStyle *_t = static_cast<SMLineStyle *>(_o);
        switch (_id) {
        case 0: _t->deleteDone(); break;
        case 1: _t->selectionDirty(); break;
        case 2: _t->slotCurrentLineChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotLineStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotSetEnd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotSetJoin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotColor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->slotShade((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slotLineWidth(); break;
        case 9: _t->slotAddLine(); break;
        case 10: _t->slotDeleteLine(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SMLineStyle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SMLineStyle::staticMetaObject = {
    { &StyleItem::staticMetaObject, qt_meta_stringdata_SMLineStyle,
      qt_meta_data_SMLineStyle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SMLineStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SMLineStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SMLineStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SMLineStyle))
        return static_cast<void*>(const_cast< SMLineStyle*>(this));
    return StyleItem::qt_metacast(_clname);
}

int SMLineStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StyleItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SMLineStyle::deleteDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SMLineStyle::selectionDirty()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
