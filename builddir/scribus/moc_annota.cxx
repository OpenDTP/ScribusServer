/****************************************************************************
** Meta object code from reading C++ file 'annota.h'
**
** Created: Sun Feb 24 21:37:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/annota.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'annota.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Annota[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,   32,   36,   36, 0x0a,
      37,   50,   36,   36, 0x0a,
      52,   36,   36,   36, 0x0a,
      63,   36,   36,   36, 0x0a,
      75,   90,   36,   36, 0x0a,
      92,   36,   36,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Annota[] = {
    "Annota\0SetCoords(double,double)\0x,y\0"
    "\0SetPage(int)\0v\0SetCross()\0SetValues()\0"
    "SetTarget(int)\0i\0GetFile()\0"
};

void Annota::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Annota *_t = static_cast<Annota *>(_o);
        switch (_id) {
        case 0: _t->SetCoords((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->SetPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SetCross(); break;
        case 3: _t->SetValues(); break;
        case 4: _t->SetTarget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->GetFile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Annota::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Annota::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Annota,
      qt_meta_data_Annota, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Annota::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Annota::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Annota::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Annota))
        return static_cast<void*>(const_cast< Annota*>(this));
    return QDialog::qt_metacast(_clname);
}

int Annota::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
