/****************************************************************************
** Meta object code from reading C++ file 'missing.h'
**
** Created: Sun Feb 24 21:37:12 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/missing.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'missing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MissingFont[] = {

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
      12,   29,   41,   41, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MissingFont[] = {
    "MissingFont\0newFont(QString)\0replacement\0"
    "\0"
};

void MissingFont::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MissingFont *_t = static_cast<MissingFont *>(_o);
        switch (_id) {
        case 0: _t->newFont((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MissingFont::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MissingFont::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MissingFont,
      qt_meta_data_MissingFont, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MissingFont::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MissingFont::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MissingFont::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MissingFont))
        return static_cast<void*>(const_cast< MissingFont*>(this));
    return QDialog::qt_metacast(_clname);
}

int MissingFont::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
