/****************************************************************************
** Meta object code from reading C++ file 'margindialog.h'
**
** Created: Sun Feb 24 21:37:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/margindialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'margindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MarginDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   27,   27,   27, 0x0a,
      28,   45,   27,   27, 0x0a,
      48,   62,   27,   27, 0x0a,
      66,   87,   27,   27, 0x0a,
      89,   87,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MarginDialog[] = {
    "MarginDialog\0setPageSize()\0\0"
    "setSize(QString)\0gr\0setOrien(int)\0ori\0"
    "setPageWidth(double)\0v\0setPageHeight(double)\0"
};

void MarginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MarginDialog *_t = static_cast<MarginDialog *>(_o);
        switch (_id) {
        case 0: _t->setPageSize(); break;
        case 1: _t->setSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setOrien((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setPageWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setPageHeight((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MarginDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MarginDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MarginDialog,
      qt_meta_data_MarginDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MarginDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MarginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MarginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MarginDialog))
        return static_cast<void*>(const_cast< MarginDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MarginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
