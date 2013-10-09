/****************************************************************************
** Meta object code from reading C++ file 'scgtplugin.h'
**
** Created: Sun Feb 24 21:37:18 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/scgtplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scgtplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ScGTPlugin[] = {

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

static const char qt_meta_stringdata_ScGTPlugin[] = {
    "ScGTPlugin\0"
};

void ScGTPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ScGTPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScGTPlugin::staticMetaObject = {
    { &ScPlugin::staticMetaObject, qt_meta_stringdata_ScGTPlugin,
      qt_meta_data_ScGTPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScGTPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScGTPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScGTPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScGTPlugin))
        return static_cast<void*>(const_cast< ScGTPlugin*>(this));
    return ScPlugin::qt_metacast(_clname);
}

int ScGTPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ScGTFileDialog[] = {

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

static const char qt_meta_stringdata_ScGTFileDialog[] = {
    "ScGTFileDialog\0"
};

void ScGTFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ScGTFileDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScGTFileDialog::staticMetaObject = {
    { &CustomFDialog::staticMetaObject, qt_meta_stringdata_ScGTFileDialog,
      qt_meta_data_ScGTFileDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScGTFileDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScGTFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScGTFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScGTFileDialog))
        return static_cast<void*>(const_cast< ScGTFileDialog*>(this));
    return CustomFDialog::qt_metacast(_clname);
}

int ScGTFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomFDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
