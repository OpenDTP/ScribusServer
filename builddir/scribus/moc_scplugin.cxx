/****************************************************************************
** Meta object code from reading C++ file 'scplugin.h'
**
** Created: Sun Feb 24 21:37:18 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/scplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ScPlugin[] = {

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

static const char qt_meta_stringdata_ScPlugin[] = {
    "ScPlugin\0"
};

void ScPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ScPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ScPlugin,
      qt_meta_data_ScPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScPlugin))
        return static_cast<void*>(const_cast< ScPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int ScPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ScActionPlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   40,   51,   56, 0x0a,
      57,   74,   51,   56, 0x2a,
      78,  112,   51,   56, 0x0a,
     130,  156,   51,   56, 0x2a,
     167,   40,   51,   56, 0x0a,
     195,  213,  220,   56, 0x0a,
     234,   56,  220,   56, 0x2a,
     245,  213,  220,   56, 0x0a,
     266,   56,   56,   56, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ScActionPlugin[] = {
    "ScActionPlugin\0run(ScribusDoc*,QString)\0"
    "doc,target\0bool\0\0run(ScribusDoc*)\0doc\0"
    "run(QWidget*,ScribusDoc*,QString)\0"
    "parent,doc,target\0run(QWidget*,ScribusDoc*)\0"
    "parent,doc\0run(ScribusDoc*,QIODevice*)\0"
    "runAsync(QString)\0target\0DeferredTask*\0"
    "runAsync()\0runAsync(QIODevice*)\0"
    "runResult()\0"
};

void ScActionPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScActionPlugin *_t = static_cast<ScActionPlugin *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->run((*reinterpret_cast< ScribusDoc*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->run((*reinterpret_cast< ScribusDoc*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->run((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< ScribusDoc*(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->run((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< ScribusDoc*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->run((*reinterpret_cast< ScribusDoc*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { DeferredTask* _r = _t->runAsync((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< DeferredTask**>(_a[0]) = _r; }  break;
        case 6: { DeferredTask* _r = _t->runAsync();
            if (_a[0]) *reinterpret_cast< DeferredTask**>(_a[0]) = _r; }  break;
        case 7: { DeferredTask* _r = _t->runAsync((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< DeferredTask**>(_a[0]) = _r; }  break;
        case 8: _t->runResult(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ScActionPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScActionPlugin::staticMetaObject = {
    { &ScPlugin::staticMetaObject, qt_meta_stringdata_ScActionPlugin,
      qt_meta_data_ScActionPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScActionPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScActionPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScActionPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScActionPlugin))
        return static_cast<void*>(const_cast< ScActionPlugin*>(this));
    return ScPlugin::qt_metacast(_clname);
}

int ScActionPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
static const uint qt_meta_data_ScPersistentPlugin[] = {

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

static const char qt_meta_stringdata_ScPersistentPlugin[] = {
    "ScPersistentPlugin\0"
};

void ScPersistentPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ScPersistentPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScPersistentPlugin::staticMetaObject = {
    { &ScPlugin::staticMetaObject, qt_meta_stringdata_ScPersistentPlugin,
      qt_meta_data_ScPersistentPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScPersistentPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScPersistentPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScPersistentPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScPersistentPlugin))
        return static_cast<void*>(const_cast< ScPersistentPlugin*>(this));
    return ScPlugin::qt_metacast(_clname);
}

int ScPersistentPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
