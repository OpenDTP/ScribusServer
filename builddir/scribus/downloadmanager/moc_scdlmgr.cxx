/****************************************************************************
** Meta object code from reading C++ file 'scdlmgr.h'
**
** Created: Sun Feb 24 21:37:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/downloadmanager/scdlmgr.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scdlmgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ScDLManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   23,   23,   23, 0x05,
      24,   46,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   46,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ScDLManager[] = {
    "ScDLManager\0finished()\0\0fileReceived(QString)\0"
    "t\0updateText(QString)\0"
};

void ScDLManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScDLManager *_t = static_cast<ScDLManager *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->fileReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ScDLManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScDLManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ScDLManager,
      qt_meta_data_ScDLManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScDLManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScDLManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScDLManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScDLManager))
        return static_cast<void*>(const_cast< ScDLManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ScDLManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ScDLManager::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ScDLManager::fileReceived(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
