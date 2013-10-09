/****************************************************************************
** Meta object code from reading C++ file 'scraction.h'
**
** Created: Sun Feb 24 21:37:18 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/scraction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scraction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ScrAction[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,   29,   29,   29, 0x05,
      30,   29,   29,   29, 0x05,
      52,   29,   29,   29, 0x05,
      75,   29,   29,   29, 0x05,
     102,  138,   29,   29, 0x05,
     140,  138,   29,   29, 0x05,
     162,  138,   29,   29, 0x05,
     187,  138,   29,   29, 0x05,
     213,  138,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
     251,   29,   29,   29, 0x0a,
     260,   29,   29,   29, 0x08,
     287,  314,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ScrAction[] = {
    "ScrAction\0triggeredData(int)\0\0"
    "triggeredData(double)\0triggeredData(QString)\0"
    "triggeredData(ScribusDoc*)\0"
    "triggeredData(QWidget*,ScribusDoc*)\0"
    ",\0toggledData(bool,int)\0"
    "toggledData(bool,double)\0"
    "toggledData(bool,QString)\0"
    "triggeredUnicodeShortcut(QString,int)\0"
    "toggle()\0triggeredToTriggeredData()\0"
    "toggledToToggledData(bool)\0ison\0"
};

void ScrAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScrAction *_t = static_cast<ScrAction *>(_o);
        switch (_id) {
        case 0: _t->triggeredData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->triggeredData((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->triggeredData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->triggeredData((*reinterpret_cast< ScribusDoc*(*)>(_a[1]))); break;
        case 4: _t->triggeredData((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< ScribusDoc*(*)>(_a[2]))); break;
        case 5: _t->toggledData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->toggledData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 7: _t->toggledData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->triggeredUnicodeShortcut((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->toggle(); break;
        case 10: _t->triggeredToTriggeredData(); break;
        case 11: _t->toggledToToggledData((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ScrAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScrAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_ScrAction,
      qt_meta_data_ScrAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScrAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScrAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScrAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScrAction))
        return static_cast<void*>(const_cast< ScrAction*>(this));
    return QAction::qt_metacast(_clname);
}

int ScrAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ScrAction::triggeredData(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScrAction::triggeredData(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ScrAction::triggeredData(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ScrAction::triggeredData(ScribusDoc * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ScrAction::triggeredData(QWidget * _t1, ScribusDoc * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ScrAction::toggledData(bool _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ScrAction::toggledData(bool _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ScrAction::toggledData(bool _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ScrAction::triggeredUnicodeShortcut(const QString & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
