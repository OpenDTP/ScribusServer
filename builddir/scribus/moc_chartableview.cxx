/****************************************************************************
** Meta object code from reading C++ file 'chartableview.h'
**
** Created: Sun Feb 24 21:37:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/chartableview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartableview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CharTableView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   39,   41,   41, 0x05,
      42,   41,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   96,   41,   41, 0x0a,
     102,   41,   41,   41, 0x0a,
     118,   41,   41,   41, 0x08,
     136,  167,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CharTableView[] = {
    "CharTableView\0selectChar(uint,QString)\0"
    ",\0\0delChar()\0modelSelectionChanged(QItemSelectionModel*)\0"
    "model\0resizeLastRow()\0removeCharacter()\0"
    "viewDoubleClicked(QModelIndex)\0index\0"
};

void CharTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CharTableView *_t = static_cast<CharTableView *>(_o);
        switch (_id) {
        case 0: _t->selectChar((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->delChar(); break;
        case 2: _t->modelSelectionChanged((*reinterpret_cast< QItemSelectionModel*(*)>(_a[1]))); break;
        case 3: _t->resizeLastRow(); break;
        case 4: _t->removeCharacter(); break;
        case 5: _t->viewDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CharTableView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CharTableView::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_CharTableView,
      qt_meta_data_CharTableView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CharTableView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CharTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CharTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CharTableView))
        return static_cast<void*>(const_cast< CharTableView*>(this));
    return QTableView::qt_metacast(_clname);
}

int CharTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CharTableView::selectChar(uint _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CharTableView::delChar()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
