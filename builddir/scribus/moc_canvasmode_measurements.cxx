/****************************************************************************
** Meta object code from reading C++ file 'canvasmode_measurements.h'
**
** Created: Sun Feb 24 21:37:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/canvasmode_measurements.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canvasmode_measurements.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MeasurementsMode[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   33,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MeasurementsMode[] = {
    "MeasurementsMode\0setActive(bool)\0\0"
};

void MeasurementsMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MeasurementsMode *_t = static_cast<MeasurementsMode *>(_o);
        switch (_id) {
        case 0: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MeasurementsMode::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeasurementsMode::staticMetaObject = {
    { &CanvasMode::staticMetaObject, qt_meta_stringdata_MeasurementsMode,
      qt_meta_data_MeasurementsMode, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeasurementsMode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeasurementsMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeasurementsMode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeasurementsMode))
        return static_cast<void*>(const_cast< MeasurementsMode*>(this));
    return CanvasMode::qt_metacast(_clname);
}

int MeasurementsMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CanvasMode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE