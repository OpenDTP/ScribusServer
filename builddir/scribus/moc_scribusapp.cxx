/****************************************************************************
** Meta object code from reading C++ file 'scribusapp.h'
**
** Created: Sun Feb 24 21:37:19 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/scribusapp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scribusapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ScribusQApp[] = {

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
      12,   38,   40,   40, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ScribusQApp[] = {
    "ScribusQApp\0downloadComplete(QString)\0"
    "t\0\0"
};

void ScribusQApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScribusQApp *_t = static_cast<ScribusQApp *>(_o);
        switch (_id) {
        case 0: _t->downloadComplete((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ScribusQApp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScribusQApp::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_ScribusQApp,
      qt_meta_data_ScribusQApp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScribusQApp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScribusQApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScribusQApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScribusQApp))
        return static_cast<void*>(const_cast< ScribusQApp*>(this));
    return QApplication::qt_metacast(_clname);
}

int ScribusQApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
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
