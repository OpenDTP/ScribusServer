/****************************************************************************
** Meta object code from reading C++ file 'barcodegenerator.h'
**
** Created: Sun Feb 24 21:48:53 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scribus/plugins/barcodegenerator/barcodegenerator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'barcodegenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BarcodeGenerator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   34,   34,   34, 0x09,
      35,   34,   34,   34, 0x09,
      55,   34,   34,   34, 0x09,
      76,  107,   34,   34, 0x09,
     113,  107,   34,   34, 0x09,
     150,   34,   34,   34, 0x09,
     174,   34,   34,   34, 0x09,
     198,   34,   34,   34, 0x09,
     223,  253,   34,   34, 0x09,
     255,   34,   34,   34, 0x09,
     277,   34,   34,   34, 0x09,
     296,   34,   34,   34, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BarcodeGenerator[] = {
    "BarcodeGenerator\0bcComboChanged()\0\0"
    "textCheck_changed()\0guardCheck_changed()\0"
    "includeCheck_stateChanged(int)\0state\0"
    "includeCheckInText_stateChanged(int)\0"
    "bgColorButton_pressed()\0lnColorButton_pressed()\0"
    "txtColorButton_pressed()\0"
    "codeEdit_textChanged(QString)\0s\0"
    "resetButton_clicked()\0okButton_pressed()\0"
    "cancelButton_pressed()\0"
};

void BarcodeGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BarcodeGenerator *_t = static_cast<BarcodeGenerator *>(_o);
        switch (_id) {
        case 0: _t->bcComboChanged(); break;
        case 1: _t->textCheck_changed(); break;
        case 2: _t->guardCheck_changed(); break;
        case 3: _t->includeCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->includeCheckInText_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->bgColorButton_pressed(); break;
        case 6: _t->lnColorButton_pressed(); break;
        case 7: _t->txtColorButton_pressed(); break;
        case 8: _t->codeEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->resetButton_clicked(); break;
        case 10: _t->okButton_pressed(); break;
        case 11: _t->cancelButton_pressed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BarcodeGenerator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BarcodeGenerator::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BarcodeGenerator,
      qt_meta_data_BarcodeGenerator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BarcodeGenerator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BarcodeGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BarcodeGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BarcodeGenerator))
        return static_cast<void*>(const_cast< BarcodeGenerator*>(this));
    return QDialog::qt_metacast(_clname);
}

int BarcodeGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
