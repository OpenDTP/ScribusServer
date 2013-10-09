/****************************************************************************
** Meta object code from reading C++ file 'cwdialog.h'
**
** Created: Sun Feb 24 21:48:58 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scribus/plugins/colorwheel/cwdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cwdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CWDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,   43,   43,   43, 0x08,
      44,   43,   43,   43, 0x08,
      72,  103,   43,   43, 0x08,
     105,   43,   43,   43, 0x08,
     130,   43,   43,   43, 0x08,
     181,   43,   43,   43, 0x08,
     208,   43,   43,   43, 0x08,
     228,   43,   43,   43, 0x08,
     252,   43,   43,   43, 0x08,
     275,   43,   43,   43, 0x08,
     318,   43,   43,   43, 0x08,
     342,   43,   43,   43, 0x08,
     366,   43,   43,   43, 0x08,
     390,   43,   43,   43, 0x08,
     414,   43,   43,   43, 0x08,
     438,   43,   43,   43, 0x08,
     462,   43,   43,   43, 0x08,
     486,   43,   43,   43, 0x08,
     510,   43,   43,   43, 0x08,
     534,   43,   43,   43, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CWDialog[] = {
    "CWDialog\0colorspaceTab_currentChanged(int)\0"
    "\0angleSpin_valueChanged(int)\0"
    "colorWheel_clicked(int,QPoint)\0,\0"
    "typeCombo_activated(int)\0"
    "documentColorList_currentChanged(QListWidgetItem*)\0"
    "defectCombo_activated(int)\0"
    "addButton_clicked()\0replaceButton_clicked()\0"
    "cancelButton_clicked()\0"
    "colorList_currentChanged(QListWidgetItem*)\0"
    "cSpin_valueChanged(int)\0mSpin_valueChanged(int)\0"
    "ySpin_valueChanged(int)\0kSpin_valueChanged(int)\0"
    "rSpin_valueChanged(int)\0gSpin_valueChanged(int)\0"
    "bSpin_valueChanged(int)\0hSpin_valueChanged(int)\0"
    "sSpin_valueChanged(int)\0vSpin_valueChanged(int)\0"
};

void CWDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CWDialog *_t = static_cast<CWDialog *>(_o);
        switch (_id) {
        case 0: _t->colorspaceTab_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->angleSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->colorWheel_clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 3: _t->typeCombo_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->documentColorList_currentChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->defectCombo_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->addButton_clicked(); break;
        case 7: _t->replaceButton_clicked(); break;
        case 8: _t->cancelButton_clicked(); break;
        case 9: _t->colorList_currentChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->cSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->mSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->ySpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->kSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->rSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->gSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->bSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->hSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->sSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->vSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CWDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CWDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CWDialog,
      qt_meta_data_CWDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CWDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CWDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CWDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CWDialog))
        return static_cast<void*>(const_cast< CWDialog*>(this));
    if (!strcmp(_clname, "Ui::CWDialog"))
        return static_cast< Ui::CWDialog*>(const_cast< CWDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CWDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
