/****************************************************************************
** Meta object code from reading C++ file 'tffilter.h'
**
** Created: Sun Feb 24 21:56:42 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../scribus/plugins/gettext/textfilter/tffilter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tffilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tfFilter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,   34,   38,   38, 0x05,
      39,   34,   38,   38, 0x05,

 // slots: signature, parameters, type, tag, flags
      61,   81,   38,   38, 0x08,
      84,   38,   38,   38, 0x08,
      95,   38,   38,   38, 0x08,
     109,  127,   38,   38, 0x08,
     133,  127,   38,   38, 0x08,
     152,  127,   38,   38, 0x08,
     170,  127,   38,   38, 0x08,
     189,  127,   38,   38, 0x08,
     207,  127,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tfFilter[] = {
    "tfFilter\0removeClicked(tfFilter*)\0tff\0"
    "\0addClicked(tfFilter*)\0enableToggled(bool)\0"
    "on\0addClick()\0removeClick()\0"
    "firstChanged(int)\0index\0secondChanged(int)\0"
    "thirdChanged(int)\0fourthChanged(int)\0"
    "fifthChanged(int)\0sixthChanged(int)\0"
};

void tfFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tfFilter *_t = static_cast<tfFilter *>(_o);
        switch (_id) {
        case 0: _t->removeClicked((*reinterpret_cast< tfFilter*(*)>(_a[1]))); break;
        case 1: _t->addClicked((*reinterpret_cast< tfFilter*(*)>(_a[1]))); break;
        case 2: _t->enableToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->addClick(); break;
        case 4: _t->removeClick(); break;
        case 5: _t->firstChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->secondChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->thirdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->fourthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->fifthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->sixthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tfFilter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tfFilter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tfFilter,
      qt_meta_data_tfFilter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tfFilter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tfFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tfFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tfFilter))
        return static_cast<void*>(const_cast< tfFilter*>(this));
    return QWidget::qt_metacast(_clname);
}

int tfFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void tfFilter::removeClicked(tfFilter * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tfFilter::addClicked(tfFilter * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
