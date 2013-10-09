/****************************************************************************
** Meta object code from reading C++ file 'extimageprops.h'
**
** Created: Sun Feb 24 21:37:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/extimageprops.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extimageprops.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExtImageProps[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   24,   24,   24, 0x0a,
      25,   24,   24,   24, 0x0a,
      39,   24,   24,   24, 0x0a,
      55,   24,   24,   24, 0x0a,
      70,   84,   24,   24, 0x0a,
      90,  116,   24,   24, 0x0a,
     118,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ExtImageProps[] = {
    "ExtImageProps\0leaveOK()\0\0leaveCancel()\0"
    "changePreview()\0changedLayer()\0"
    "selLayer(int)\0layer\0selPath(QListWidgetItem*)\0"
    "c\0noPath()\0"
};

void ExtImageProps::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExtImageProps *_t = static_cast<ExtImageProps *>(_o);
        switch (_id) {
        case 0: _t->leaveOK(); break;
        case 1: _t->leaveCancel(); break;
        case 2: _t->changePreview(); break;
        case 3: _t->changedLayer(); break;
        case 4: _t->selLayer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->selPath((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->noPath(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ExtImageProps::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExtImageProps::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ExtImageProps,
      qt_meta_data_ExtImageProps, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExtImageProps::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExtImageProps::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExtImageProps::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExtImageProps))
        return static_cast<void*>(const_cast< ExtImageProps*>(this));
    return QDialog::qt_metacast(_clname);
}

int ExtImageProps::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
