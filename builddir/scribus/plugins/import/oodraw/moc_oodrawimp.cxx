/****************************************************************************
** Meta object code from reading C++ file 'oodrawimp.h'
**
** Created: Sun Feb 24 21:57:01 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../scribus/plugins/import/oodraw/oodrawimp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oodrawimp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OODrawImportPlugin[] = {

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
      19,   39,   52,   57, 0x0a,
      58,   74,   52,   57, 0x2a,
      81,   57,   52,   57, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_OODrawImportPlugin[] = {
    "OODrawImportPlugin\0import(QString,int)\0"
    "target,flags\0bool\0\0import(QString)\0"
    "target\0import()\0"
};

void OODrawImportPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OODrawImportPlugin *_t = static_cast<OODrawImportPlugin *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->import((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->import((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->import();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OODrawImportPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OODrawImportPlugin::staticMetaObject = {
    { &LoadSavePlugin::staticMetaObject, qt_meta_stringdata_OODrawImportPlugin,
      qt_meta_data_OODrawImportPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OODrawImportPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OODrawImportPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OODrawImportPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OODrawImportPlugin))
        return static_cast<void*>(const_cast< OODrawImportPlugin*>(this));
    return LoadSavePlugin::qt_metacast(_clname);
}

int OODrawImportPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LoadSavePlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_OODPlug[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_OODPlug[] = {
    "OODPlug\0"
};

void OODPlug::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData OODPlug::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OODPlug::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OODPlug,
      qt_meta_data_OODPlug, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OODPlug::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OODPlug::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OODPlug::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OODPlug))
        return static_cast<void*>(const_cast< OODPlug*>(this));
    return QObject::qt_metacast(_clname);
}

int OODPlug::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
