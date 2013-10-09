/****************************************************************************
** Meta object code from reading C++ file 'pathdialog.h'
**
** Created: Sun Feb 24 21:58:57 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../scribus/plugins/tools/2geomtools/pathalongpath/pathdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PathDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   54,   59,   59, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,   59,   59,   59, 0x08,
      78,   97,   59,   59, 0x08,
     101,   97,   59,   59, 0x08,
     119,   97,   59,   59, 0x08,
     134,   97,   59,   59, 0x08,
     147,   59,   59,   59, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PathDialog[] = {
    "PathDialog\0updateValues(int,double,double,double,int)\0"
    ",,,,\0\0toggleRotate(int)\0newOffsetY(double)\0"
    "val\0newOffset(double)\0newGap(double)\0"
    "newType(int)\0togglePreview()\0"
};

void PathDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PathDialog *_t = static_cast<PathDialog *>(_o);
        switch (_id) {
        case 0: _t->updateValues((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 1: _t->toggleRotate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->newOffsetY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->newOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->newGap((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->newType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->togglePreview(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PathDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PathDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PathDialog,
      qt_meta_data_PathDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PathDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PathDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PathDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PathDialog))
        return static_cast<void*>(const_cast< PathDialog*>(this));
    if (!strcmp(_clname, "Ui::PathDialogBase"))
        return static_cast< Ui::PathDialogBase*>(const_cast< PathDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PathDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void PathDialog::updateValues(int _t1, double _t2, double _t3, double _t4, int _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
