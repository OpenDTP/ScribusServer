/****************************************************************************
** Meta object code from reading C++ file 'marginwidget.h'
**
** Created: Sun Feb 24 21:37:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/marginwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'marginwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PresetLayout[] = {

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

static const char qt_meta_stringdata_PresetLayout[] = {
    "PresetLayout\0"
};

void PresetLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PresetLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PresetLayout::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_PresetLayout,
      qt_meta_data_PresetLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PresetLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PresetLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PresetLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PresetLayout))
        return static_cast<void*>(const_cast< PresetLayout*>(this));
    return QComboBox::qt_metacast(_clname);
}

int PresetLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_MarginWidget[] = {

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
      13,   22,   22,   22, 0x0a,
      23,   22,   22,   22, 0x0a,
      35,   22,   22,   22, 0x0a,
      45,   22,   22,   22, 0x0a,
      56,   22,   22,   22, 0x0a,
      68,   22,   22,   22, 0x0a,
      85,   22,   22,   22, 0x0a,
     103,   22,   22,   22, 0x0a,
     118,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MarginWidget[] = {
    "MarginWidget\0setTop()\0\0setBottom()\0"
    "setLeft()\0setRight()\0setPreset()\0"
    "slotLinkBleeds()\0slotLinkMargins()\0"
    "changeBleeds()\0setMarginsToPrinterMargins()\0"
};

void MarginWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MarginWidget *_t = static_cast<MarginWidget *>(_o);
        switch (_id) {
        case 0: _t->setTop(); break;
        case 1: _t->setBottom(); break;
        case 2: _t->setLeft(); break;
        case 3: _t->setRight(); break;
        case 4: _t->setPreset(); break;
        case 5: _t->slotLinkBleeds(); break;
        case 6: _t->slotLinkMargins(); break;
        case 7: _t->changeBleeds(); break;
        case 8: _t->setMarginsToPrinterMargins(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MarginWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MarginWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_MarginWidget,
      qt_meta_data_MarginWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MarginWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MarginWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MarginWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MarginWidget))
        return static_cast<void*>(const_cast< MarginWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int MarginWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
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
