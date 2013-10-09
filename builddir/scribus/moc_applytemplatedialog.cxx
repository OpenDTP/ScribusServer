/****************************************************************************
** Meta object code from reading C++ file 'applytemplatedialog.h'
**
** Created: Sun Feb 24 21:37:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/applytemplatedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'applytemplatedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ApplyMasterPageDialog[] = {

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
      22,   39,   39,   39, 0x09,
      40,   39,   39,   39, 0x08,
      57,   39,   39,   39, 0x08,
      72,   90,   39,   39, 0x08,
      98,   39,   39,   39, 0x08,
     116,   39,   39,   39, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ApplyMasterPageDialog[] = {
    "ApplyMasterPageDialog\0languageChange()\0"
    "\0checkRangeFrom()\0checkRangeTo()\0"
    "enableRange(bool)\0enabled\0rangeSelectable()\0"
    "singleSelectable()\0"
};

void ApplyMasterPageDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ApplyMasterPageDialog *_t = static_cast<ApplyMasterPageDialog *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->checkRangeFrom(); break;
        case 2: _t->checkRangeTo(); break;
        case 3: _t->enableRange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->rangeSelectable(); break;
        case 5: _t->singleSelectable(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ApplyMasterPageDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ApplyMasterPageDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ApplyMasterPageDialog,
      qt_meta_data_ApplyMasterPageDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ApplyMasterPageDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ApplyMasterPageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ApplyMasterPageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ApplyMasterPageDialog))
        return static_cast<void*>(const_cast< ApplyMasterPageDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ApplyMasterPageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
