/****************************************************************************
** Meta object code from reading C++ file 'inspage.h'
**
** Created: Sun Feb 24 21:37:10 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/inspage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InsPage[] = {

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
       8,   37,   43,   43, 0x08,
      44,   43,   43,   43, 0x08,
      61,   75,   43,   43, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InsPage[] = {
    "InsPage\0insWherePageDataDisable(int)\0"
    "index\0\0setSize(QString)\0setOrien(int)\0"
    "ori\0"
};

void InsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InsPage *_t = static_cast<InsPage *>(_o);
        switch (_id) {
        case 0: _t->insWherePageDataDisable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setOrien((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InsPage::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InsPage,
      qt_meta_data_InsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InsPage))
        return static_cast<void*>(const_cast< InsPage*>(this));
    return QDialog::qt_metacast(_clname);
}

int InsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
