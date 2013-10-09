/****************************************************************************
** Meta object code from reading C++ file 'satdialog.h'
**
** Created: Sun Feb 24 21:57:33 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scribus/plugins/saveastemplateplugin/satdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'satdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SATDialog[] = {

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
      10,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SATDialog[] = {
    "SATDialog\0detailClicked(int)\0\0"
};

void SATDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SATDialog *_t = static_cast<SATDialog *>(_o);
        switch (_id) {
        case 0: _t->detailClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SATDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SATDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SATDialog,
      qt_meta_data_SATDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SATDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SATDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SATDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SATDialog))
        return static_cast<void*>(const_cast< SATDialog*>(this));
    if (!strcmp(_clname, "Ui::satdialog"))
        return static_cast< Ui::satdialog*>(const_cast< SATDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SATDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
