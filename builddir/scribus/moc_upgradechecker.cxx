/****************************************************************************
** Meta object code from reading C++ file 'upgradechecker.h'
**
** Created: Sun Feb 24 21:37:25 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/upgradechecker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'upgradechecker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UpgradeChecker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   23,   23,   23, 0x0a,
      24,   50,   23,   23, 0x08,
      66,  110,   23,   23, 0x08,
     125,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UpgradeChecker[] = {
    "UpgradeChecker\0abort()\0\0"
    "requestFinished(int,bool)\0requestId,error\0"
    "responseHeaderReceived(QHttpResponseHeader)\0"
    "responseHeader\0done(bool)\0"
};

void UpgradeChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UpgradeChecker *_t = static_cast<UpgradeChecker *>(_o);
        switch (_id) {
        case 0: _t->abort(); break;
        case 1: _t->requestFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->responseHeaderReceived((*reinterpret_cast< const QHttpResponseHeader(*)>(_a[1]))); break;
        case 3: _t->done((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UpgradeChecker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UpgradeChecker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UpgradeChecker,
      qt_meta_data_UpgradeChecker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UpgradeChecker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UpgradeChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UpgradeChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UpgradeChecker))
        return static_cast<void*>(const_cast< UpgradeChecker*>(this));
    return QObject::qt_metacast(_clname);
}

int UpgradeChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_UpgradeCheckerGUI[] = {

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

static const char qt_meta_stringdata_UpgradeCheckerGUI[] = {
    "UpgradeCheckerGUI\0"
};

void UpgradeCheckerGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UpgradeCheckerGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UpgradeCheckerGUI::staticMetaObject = {
    { &UpgradeChecker::staticMetaObject, qt_meta_stringdata_UpgradeCheckerGUI,
      qt_meta_data_UpgradeCheckerGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UpgradeCheckerGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UpgradeCheckerGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UpgradeCheckerGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UpgradeCheckerGUI))
        return static_cast<void*>(const_cast< UpgradeCheckerGUI*>(this));
    return UpgradeChecker::qt_metacast(_clname);
}

int UpgradeCheckerGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UpgradeChecker::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
