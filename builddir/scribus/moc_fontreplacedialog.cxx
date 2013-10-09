/****************************************************************************
** Meta object code from reading C++ file 'fontreplacedialog.h'
**
** Created: Sun Feb 24 21:37:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/fontreplacedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fontreplacedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FontReplaceDialog[] = {

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
      18,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FontReplaceDialog[] = {
    "FontReplaceDialog\0leaveOK()\0\0"
};

void FontReplaceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FontReplaceDialog *_t = static_cast<FontReplaceDialog *>(_o);
        switch (_id) {
        case 0: _t->leaveOK(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FontReplaceDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FontReplaceDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FontReplaceDialog,
      qt_meta_data_FontReplaceDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FontReplaceDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FontReplaceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FontReplaceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FontReplaceDialog))
        return static_cast<void*>(const_cast< FontReplaceDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int FontReplaceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
