/****************************************************************************
** Meta object code from reading C++ file 'tabtools.h'
**
** Created: Sun Feb 24 21:37:24 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/tabtools.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabtools.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TabTools[] = {

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
       9,   23,   23,   23, 0x09,
      24,   23,   23,   23, 0x09,
      34,   23,   23,   23, 0x09,
      44,   23,   23,   23, 0x09,
      73,   23,   23,   23, 0x09,
     103,   23,   23,   23, 0x09,
     115,   23,   23,   23, 0x09,
     125,  142,   23,   23, 0x09,
     146,  173,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TabTools[] = {
    "TabTools\0toggleChain()\0\0hChange()\0"
    "vChange()\0changeImageScalingFree(bool)\0"
    "changeImageScalingRatio(bool)\0setSample()\0"
    "setTool()\0setFillChar(int)\0act\0"
    "setCustomFillChar(QString)\0txt\0"
};

void TabTools::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabTools *_t = static_cast<TabTools *>(_o);
        switch (_id) {
        case 0: _t->toggleChain(); break;
        case 1: _t->hChange(); break;
        case 2: _t->vChange(); break;
        case 3: _t->changeImageScalingFree((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->changeImageScalingRatio((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setSample(); break;
        case 6: _t->setTool(); break;
        case 7: _t->setFillChar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setCustomFillChar((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TabTools::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TabTools::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TabTools,
      qt_meta_data_TabTools, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabTools::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabTools::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabTools::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabTools))
        return static_cast<void*>(const_cast< TabTools*>(this));
    return QWidget::qt_metacast(_clname);
}

int TabTools::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
