/****************************************************************************
** Meta object code from reading C++ file 'vlnadialog.h'
**
** Created: Sun Feb 24 21:58:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scribus/plugins/short-words/vlnadialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vlnadialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SWDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,   26,   26,   26, 0x09,
      27,   26,   26,   26, 0x08,
      46,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SWDialog[] = {
    "SWDialog\0languageChange()\0\0"
    "okButton_pressed()\0cancelButton_pressed()\0"
};

void SWDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SWDialog *_t = static_cast<SWDialog *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->okButton_pressed(); break;
        case 2: _t->cancelButton_pressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SWDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SWDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SWDialog,
      qt_meta_data_SWDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SWDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SWDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SWDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SWDialog))
        return static_cast<void*>(const_cast< SWDialog*>(this));
    if (!strcmp(_clname, "Ui::SWDialog"))
        return static_cast< Ui::SWDialog*>(const_cast< SWDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SWDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
