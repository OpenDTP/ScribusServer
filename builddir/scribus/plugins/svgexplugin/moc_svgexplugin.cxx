/****************************************************************************
** Meta object code from reading C++ file 'svgexplugin.h'
**
** Created: Sun Feb 24 21:58:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scribus/plugins/svgexplugin/svgexplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'svgexplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SVGExportPlugin[] = {

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

static const char qt_meta_stringdata_SVGExportPlugin[] = {
    "SVGExportPlugin\0"
};

void SVGExportPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SVGExportPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SVGExportPlugin::staticMetaObject = {
    { &ScActionPlugin::staticMetaObject, qt_meta_stringdata_SVGExportPlugin,
      qt_meta_data_SVGExportPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SVGExportPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SVGExportPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SVGExportPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SVGExportPlugin))
        return static_cast<void*>(const_cast< SVGExportPlugin*>(this));
    return ScActionPlugin::qt_metacast(_clname);
}

int SVGExportPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScActionPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_SVGExPlug[] = {

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

static const char qt_meta_stringdata_SVGExPlug[] = {
    "SVGExPlug\0"
};

void SVGExPlug::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SVGExPlug::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SVGExPlug::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SVGExPlug,
      qt_meta_data_SVGExPlug, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SVGExPlug::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SVGExPlug::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SVGExPlug::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SVGExPlug))
        return static_cast<void*>(const_cast< SVGExPlug*>(this));
    return QObject::qt_metacast(_clname);
}

int SVGExPlug::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
