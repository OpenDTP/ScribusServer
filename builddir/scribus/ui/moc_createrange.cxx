/****************************************************************************
** Meta object code from reading C++ file 'createrange.h'
**
** Created: Sun Feb 24 21:37:24 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/createrange.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createrange.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CreateRange[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   33,   33,   33, 0x09,
      34,   33,   33,   33, 0x09,
      52,   33,   33,   33, 0x09,
      72,   33,   33,   33, 0x09,
      86,   33,   33,   33, 0x09,
     102,   33,   33,   33, 0x09,
     131,   33,   33,   33, 0x09,
     159,   33,   33,   33, 0x09,
     186,   33,   33,   33, 0x09,
     212,   33,   33,   33, 0x09,
     238,   33,   33,   33, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CreateRange[] = {
    "CreateRange\0selectRangeType(int)\0\0"
    "basicAddToRange()\0basicDelFromRange()\0"
    "basicMoveUp()\0basicMoveDown()\0"
    "basicSelectRangeTypeConsec()\0"
    "basicSelectRangeTypeComma()\0"
    "basicSelectRangeTypeEven()\0"
    "basicSelectRangeTypeOdd()\0"
    "basicSelectRangeType(int)\0advSpinChange(int)\0"
};

void CreateRange::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CreateRange *_t = static_cast<CreateRange *>(_o);
        switch (_id) {
        case 0: _t->selectRangeType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->basicAddToRange(); break;
        case 2: _t->basicDelFromRange(); break;
        case 3: _t->basicMoveUp(); break;
        case 4: _t->basicMoveDown(); break;
        case 5: _t->basicSelectRangeTypeConsec(); break;
        case 6: _t->basicSelectRangeTypeComma(); break;
        case 7: _t->basicSelectRangeTypeEven(); break;
        case 8: _t->basicSelectRangeTypeOdd(); break;
        case 9: _t->basicSelectRangeType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->advSpinChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CreateRange::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CreateRange::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CreateRange,
      qt_meta_data_CreateRange, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CreateRange::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CreateRange::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CreateRange::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CreateRange))
        return static_cast<void*>(const_cast< CreateRange*>(this));
    if (!strcmp(_clname, "Ui::CreateRange"))
        return static_cast< Ui::CreateRange*>(const_cast< CreateRange*>(this));
    return QDialog::qt_metacast(_clname);
}

int CreateRange::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
