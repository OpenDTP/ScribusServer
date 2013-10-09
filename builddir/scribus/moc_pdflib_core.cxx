/****************************************************************************
** Meta object code from reading C++ file 'pdflib_core.h'
**
** Created: Sun Feb 24 21:37:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/pdflib_core.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pdflib_core.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PDFLibCore[] = {

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
      11,   29,   29,   29, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PDFLibCore[] = {
    "PDFLibCore\0cancelRequested()\0\0"
};

void PDFLibCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PDFLibCore *_t = static_cast<PDFLibCore *>(_o);
        switch (_id) {
        case 0: _t->cancelRequested(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PDFLibCore::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDFLibCore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PDFLibCore,
      qt_meta_data_PDFLibCore, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDFLibCore::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDFLibCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDFLibCore::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDFLibCore))
        return static_cast<void*>(const_cast< PDFLibCore*>(this));
    return QObject::qt_metacast(_clname);
}

int PDFLibCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
