/****************************************************************************
** Meta object code from reading C++ file 'importcvgplugin.h'
**
** Created: Sun Feb 24 21:56:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../scribus/plugins/import/cvg/importcvgplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'importcvgplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImportCvgPlugin[] = {

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
      16,   36,   51,   56, 0x0a,
      57,   73,   51,   56, 0x2a,
      82,   56,   51,   56, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_ImportCvgPlugin[] = {
    "ImportCvgPlugin\0import(QString,int)\0"
    "fileName,flags\0bool\0\0import(QString)\0"
    "fileName\0import()\0"
};

void ImportCvgPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImportCvgPlugin *_t = static_cast<ImportCvgPlugin *>(_o);
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

const QMetaObjectExtraData ImportCvgPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImportCvgPlugin::staticMetaObject = {
    { &LoadSavePlugin::staticMetaObject, qt_meta_stringdata_ImportCvgPlugin,
      qt_meta_data_ImportCvgPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImportCvgPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImportCvgPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImportCvgPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImportCvgPlugin))
        return static_cast<void*>(const_cast< ImportCvgPlugin*>(this));
    return LoadSavePlugin::qt_metacast(_clname);
}

int ImportCvgPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
