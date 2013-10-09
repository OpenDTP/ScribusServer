/****************************************************************************
** Meta object code from reading C++ file 'tabguides.h'
**
** Created: Sun Feb 24 21:37:23 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/tabguides.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabguides.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TabGuides[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,   29,   29,   29, 0x09,
      30,   29,   29,   29, 0x09,
      49,   29,   29,   29, 0x09,
      71,   29,   29,   29, 0x09,
      90,   29,   29,   29, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TabGuides[] = {
    "TabGuides\0changeMajorColor()\0\0"
    "changeMinorColor()\0changeBaselineColor()\0"
    "changeGuideColor()\0changeMarginColor()\0"
};

void TabGuides::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabGuides *_t = static_cast<TabGuides *>(_o);
        switch (_id) {
        case 0: _t->changeMajorColor(); break;
        case 1: _t->changeMinorColor(); break;
        case 2: _t->changeBaselineColor(); break;
        case 3: _t->changeGuideColor(); break;
        case 4: _t->changeMarginColor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TabGuides::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TabGuides::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TabGuides,
      qt_meta_data_TabGuides, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabGuides::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabGuides::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabGuides::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabGuides))
        return static_cast<void*>(const_cast< TabGuides*>(this));
    return QWidget::qt_metacast(_clname);
}

int TabGuides::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
