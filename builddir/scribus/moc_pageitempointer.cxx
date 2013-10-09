/****************************************************************************
** Meta object code from reading C++ file 'pageitempointer.h'
**
** Created: Sun Feb 24 21:37:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/pageitempointer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageitempointer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PageItemPointerDB[] = {

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
      18,   41,   45,   45, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PageItemPointerDB[] = {
    "PageItemPointerDB\0removeFromDB(QObject*)\0"
    "obj\0\0"
};

void PageItemPointerDB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PageItemPointerDB *_t = static_cast<PageItemPointerDB *>(_o);
        switch (_id) {
        case 0: _t->removeFromDB((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PageItemPointerDB::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PageItemPointerDB::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PageItemPointerDB,
      qt_meta_data_PageItemPointerDB, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageItemPointerDB::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageItemPointerDB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageItemPointerDB::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageItemPointerDB))
        return static_cast<void*>(const_cast< PageItemPointerDB*>(this));
    if (!strcmp(_clname, "QMap<QString,PageItem*>"))
        return static_cast< QMap<QString,PageItem*>*>(const_cast< PageItemPointerDB*>(this));
    return QObject::qt_metacast(_clname);
}

int PageItemPointerDB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
