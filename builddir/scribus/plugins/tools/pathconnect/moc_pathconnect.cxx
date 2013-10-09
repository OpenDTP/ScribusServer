/****************************************************************************
** Meta object code from reading C++ file 'pathconnect.h'
**
** Created: Sun Feb 24 21:59:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../scribus/plugins/tools/pathconnect/pathconnect.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathconnect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PathConnectPlugin[] = {

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
      18,   48,   82,   82, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PathConnectPlugin[] = {
    "PathConnectPlugin\0updateEffect(int,int,int,int)\0"
    "effectType,pointOne,pointTwo,mode\0\0"
};

void PathConnectPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PathConnectPlugin *_t = static_cast<PathConnectPlugin *>(_o);
        switch (_id) {
        case 0: _t->updateEffect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PathConnectPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PathConnectPlugin::staticMetaObject = {
    { &ScActionPlugin::staticMetaObject, qt_meta_stringdata_PathConnectPlugin,
      qt_meta_data_PathConnectPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PathConnectPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PathConnectPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PathConnectPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PathConnectPlugin))
        return static_cast<void*>(const_cast< PathConnectPlugin*>(this));
    return ScActionPlugin::qt_metacast(_clname);
}

int PathConnectPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScActionPlugin::qt_metacall(_c, _id, _a);
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
