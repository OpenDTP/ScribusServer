/****************************************************************************
** Meta object code from reading C++ file 'satemplate.h'
**
** Created: Sun Feb 24 21:57:33 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scribus/plugins/saveastemplateplugin/satemplate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'satemplate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SaveAsTemplatePlugin[] = {

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

static const char qt_meta_stringdata_SaveAsTemplatePlugin[] = {
    "SaveAsTemplatePlugin\0"
};

void SaveAsTemplatePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SaveAsTemplatePlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SaveAsTemplatePlugin::staticMetaObject = {
    { &ScActionPlugin::staticMetaObject, qt_meta_stringdata_SaveAsTemplatePlugin,
      qt_meta_data_SaveAsTemplatePlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SaveAsTemplatePlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SaveAsTemplatePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SaveAsTemplatePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SaveAsTemplatePlugin))
        return static_cast<void*>(const_cast< SaveAsTemplatePlugin*>(this));
    return ScActionPlugin::qt_metacast(_clname);
}

int SaveAsTemplatePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScActionPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_MenuSAT[] = {

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
       8,   32,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MenuSAT[] = {
    "MenuSAT\0RunSATPlug(ScribusDoc*)\0\0"
};

void MenuSAT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MenuSAT *_t = static_cast<MenuSAT *>(_o);
        switch (_id) {
        case 0: _t->RunSATPlug((*reinterpret_cast< ScribusDoc*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MenuSAT::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MenuSAT::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MenuSAT,
      qt_meta_data_MenuSAT, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MenuSAT::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MenuSAT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MenuSAT::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MenuSAT))
        return static_cast<void*>(const_cast< MenuSAT*>(this));
    return QObject::qt_metacast(_clname);
}

int MenuSAT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
