/****************************************************************************
** Meta object code from reading C++ file 'smpstylewidget.h'
**
** Created: Sun Feb 24 21:37:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/smpstylewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smpstylewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SMPStyleWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   34,   34,   34, 0x05,
      35,   34,   34,   34, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   34,   34,   34, 0x08,
      89,  107,   34,   34, 0x08,
     112,   34,   34,   34, 0x08,
     132,   34,   34,   34, 0x08,
     160,   34,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SMPStyleWidget[] = {
    "SMPStyleWidget\0useParentDropCap()\0\0"
    "useParentOptMargins()\0"
    "slotLineSpacingModeChanged(int)\0"
    "slotDropCap(bool)\0isOn\0slotParentDropCap()\0"
    "slotDefaultOpticalMargins()\0"
    "slotParentOpticalMargins()\0"
};

void SMPStyleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SMPStyleWidget *_t = static_cast<SMPStyleWidget *>(_o);
        switch (_id) {
        case 0: _t->useParentDropCap(); break;
        case 1: _t->useParentOptMargins(); break;
        case 2: _t->slotLineSpacingModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotDropCap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slotParentDropCap(); break;
        case 5: _t->slotDefaultOpticalMargins(); break;
        case 6: _t->slotParentOpticalMargins(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SMPStyleWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SMPStyleWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SMPStyleWidget,
      qt_meta_data_SMPStyleWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SMPStyleWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SMPStyleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SMPStyleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SMPStyleWidget))
        return static_cast<void*>(const_cast< SMPStyleWidget*>(this));
    if (!strcmp(_clname, "Ui::SMPStyleWidget"))
        return static_cast< Ui::SMPStyleWidget*>(const_cast< SMPStyleWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SMPStyleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SMPStyleWidget::useParentDropCap()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SMPStyleWidget::useParentOptMargins()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
