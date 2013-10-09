/****************************************************************************
** Meta object code from reading C++ file 'selfield.h'
**
** Created: Sun Feb 24 21:37:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/selfield.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selfield.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SelectFields[] = {

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
      13,   25,   25,   25, 0x0a,
      26,   25,   25,   25, 0x0a,
      38,   25,   25,   25, 0x0a,
      49,   77,   25,   25, 0x0a,
      79,   77,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SelectFields[] = {
    "SelectFields\0SetRetVal()\0\0RemoveSel()\0"
    "PutToSel()\0SelAField(QListWidgetItem*)\0"
    "c\0SelEField(QListWidgetItem*)\0"
};

void SelectFields::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SelectFields *_t = static_cast<SelectFields *>(_o);
        switch (_id) {
        case 0: _t->SetRetVal(); break;
        case 1: _t->RemoveSel(); break;
        case 2: _t->PutToSel(); break;
        case 3: _t->SelAField((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->SelEField((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SelectFields::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SelectFields::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SelectFields,
      qt_meta_data_SelectFields, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SelectFields::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SelectFields::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SelectFields::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SelectFields))
        return static_cast<void*>(const_cast< SelectFields*>(this));
    return QDialog::qt_metacast(_clname);
}

int SelectFields::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
