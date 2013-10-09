/****************************************************************************
** Meta object code from reading C++ file 'urllauncher.h'
**
** Created: Sun Feb 24 21:37:25 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/urllauncher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'urllauncher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UrlLauncher[] = {

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
      12,   43,   55,   55, 0x0a,
      56,   78,   55,   55, 0x2a,
      83,   43,   55,   55, 0x0a,
     111,   78,   55,   55, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_UrlLauncher[] = {
    "UrlLauncher\0launchUrlExt(QString,QWidget*)\0"
    "link,parent\0\0launchUrlExt(QString)\0"
    "link\0launchUrlExt(QUrl,QWidget*)\0"
    "launchUrlExt(QUrl)\0"
};

void UrlLauncher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UrlLauncher *_t = static_cast<UrlLauncher *>(_o);
        switch (_id) {
        case 0: _t->launchUrlExt((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 1: _t->launchUrlExt((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->launchUrlExt((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 3: _t->launchUrlExt((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UrlLauncher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UrlLauncher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UrlLauncher,
      qt_meta_data_UrlLauncher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UrlLauncher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UrlLauncher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UrlLauncher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UrlLauncher))
        return static_cast<void*>(const_cast< UrlLauncher*>(this));
    return QObject::qt_metacast(_clname);
}

int UrlLauncher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
