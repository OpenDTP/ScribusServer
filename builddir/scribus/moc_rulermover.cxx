/****************************************************************************
** Meta object code from reading C++ file 'rulermover.h'
**
** Created: Sun Feb 24 21:37:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/rulermover.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rulermover.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RulerMover[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   25,   25,   25, 0x08,
      26,   25,   25,   25, 0x08,
      46,   25,   25,   25, 0x08,
      68,   25,   25,   25, 0x08,
      91,   25,   25,   25, 0x08,
     109,   25,   25,   25, 0x08,
     130,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RulerMover[] = {
    "RulerMover\0resetRulers()\0\0moveRulerTopRight()\0"
    "moveRulerBottomLeft()\0moveRulerBottomRight()\0"
    "moveRulerCenter()\0moveRulerTopCenter()\0"
    "moveRulerBottomCenter()\0"
};

void RulerMover::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RulerMover *_t = static_cast<RulerMover *>(_o);
        switch (_id) {
        case 0: _t->resetRulers(); break;
        case 1: _t->moveRulerTopRight(); break;
        case 2: _t->moveRulerBottomLeft(); break;
        case 3: _t->moveRulerBottomRight(); break;
        case 4: _t->moveRulerCenter(); break;
        case 5: _t->moveRulerTopCenter(); break;
        case 6: _t->moveRulerBottomCenter(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RulerMover::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RulerMover::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RulerMover,
      qt_meta_data_RulerMover, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RulerMover::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RulerMover::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RulerMover::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RulerMover))
        return static_cast<void*>(const_cast< RulerMover*>(this));
    return QWidget::qt_metacast(_clname);
}

int RulerMover::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
