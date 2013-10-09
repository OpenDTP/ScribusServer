/****************************************************************************
** Meta object code from reading C++ file 'measurements.h'
**
** Created: Sun Feb 24 21:37:12 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/measurements.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'measurements.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Measurements[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   66,   91,   91, 0x0a,
      92,   91,   91,   91, 0x0a,
     106,   91,   91,   91, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Measurements[] = {
    "Measurements\0"
    "setValues(double,double,double,double,double,double)\0"
    "x1,y1,x2,y2,angle,length\0\0unitChanged()\0"
    "languageChange()\0"
};

void Measurements::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Measurements *_t = static_cast<Measurements *>(_o);
        switch (_id) {
        case 0: _t->setValues((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 1: _t->unitChanged(); break;
        case 2: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Measurements::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Measurements::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_Measurements,
      qt_meta_data_Measurements, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Measurements::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Measurements::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Measurements::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Measurements))
        return static_cast<void*>(const_cast< Measurements*>(this));
    if (!strcmp(_clname, "Ui::MeasurementsBase"))
        return static_cast< Ui::MeasurementsBase*>(const_cast< Measurements*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int Measurements::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
