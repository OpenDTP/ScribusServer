/****************************************************************************
** Meta object code from reading C++ file 'chartablemodel.h'
**
** Created: Sun Feb 24 21:37:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/chartablemodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartablemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CharTableModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   54,   60,   60, 0x05,
      61,   60,   60,   60, 0x05,

 // slots: signature, parameters, type, tag, flags
      75,  103,   60,   60, 0x0a,
     110,  133,   60,   60, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_CharTableModel[] = {
    "CharTableModel\0selectionChanged(QItemSelectionModel*)\0"
    "model\0\0rowAppended()\0appendUnicode(QString,uint)\0"
    "s,base\0appendUnicode(QString)\0s\0"
};

void CharTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CharTableModel *_t = static_cast<CharTableModel *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1]))); break;
        case 1: _t->rowAppended(); break;
        case 2: _t->appendUnicode((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 3: _t->appendUnicode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CharTableModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CharTableModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_CharTableModel,
      qt_meta_data_CharTableModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CharTableModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CharTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CharTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CharTableModel))
        return static_cast<void*>(const_cast< CharTableModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int CharTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CharTableModel::selectionChanged(QItemSelectionModel * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CharTableModel::rowAppended()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
