/****************************************************************************
** Meta object code from reading C++ file 'replacecolors.h'
**
** Created: Sun Feb 24 21:37:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/replacecolors.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'replacecolors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_replaceColorsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   31,   31,   31, 0x08,
      32,   52,   31,   31, 0x08,
      56,   31,   31,   31, 0x08,
      73,   31,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_replaceColorsDialog[] = {
    "replaceColorsDialog\0addColor()\0\0"
    "selReplacement(int)\0sel\0delReplacement()\0"
    "editReplacement()\0"
};

void replaceColorsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        replaceColorsDialog *_t = static_cast<replaceColorsDialog *>(_o);
        switch (_id) {
        case 0: _t->addColor(); break;
        case 1: _t->selReplacement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->delReplacement(); break;
        case 3: _t->editReplacement(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData replaceColorsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject replaceColorsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_replaceColorsDialog,
      qt_meta_data_replaceColorsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &replaceColorsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *replaceColorsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *replaceColorsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_replaceColorsDialog))
        return static_cast<void*>(const_cast< replaceColorsDialog*>(this));
    if (!strcmp(_clname, "Ui::replaceColorsDialog"))
        return static_cast< Ui::replaceColorsDialog*>(const_cast< replaceColorsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int replaceColorsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
