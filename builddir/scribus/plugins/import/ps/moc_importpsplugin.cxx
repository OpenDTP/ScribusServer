/****************************************************************************
** Meta object code from reading C++ file 'importpsplugin.h'
**
** Created: Sun Feb 24 21:57:10 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../scribus/plugins/import/ps/importpsplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'importpsplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImportPSPlugin[] = {

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
      15,   35,   50,   55, 0x0a,
      56,   72,   50,   55, 0x2a,
      81,   55,   50,   55, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_ImportPSPlugin[] = {
    "ImportPSPlugin\0import(QString,int)\0"
    "fileName,flags\0bool\0\0import(QString)\0"
    "fileName\0import()\0"
};

void ImportPSPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImportPSPlugin *_t = static_cast<ImportPSPlugin *>(_o);
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

const QMetaObjectExtraData ImportPSPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImportPSPlugin::staticMetaObject = {
    { &LoadSavePlugin::staticMetaObject, qt_meta_stringdata_ImportPSPlugin,
      qt_meta_data_ImportPSPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImportPSPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImportPSPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImportPSPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImportPSPlugin))
        return static_cast<void*>(const_cast< ImportPSPlugin*>(this));
    return LoadSavePlugin::qt_metacast(_clname);
}

int ImportPSPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
