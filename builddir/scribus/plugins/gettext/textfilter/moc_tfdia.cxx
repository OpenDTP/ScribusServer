/****************************************************************************
** Meta object code from reading C++ file 'tfdia.h'
**
** Created: Sun Feb 24 21:56:42 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../scribus/plugins/gettext/textfilter/tfdia.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tfdia.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tfDia[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,   31,   36,   36, 0x08,
      37,   64,   36,   36, 0x08,
      70,   91,   36,   36, 0x08,
      95,   36,   36,   36, 0x08,
     110,   36,   36,   36, 0x08,
     122,   36,   36,   36, 0x08,
     138,   36,   36,   36, 0x08,
     154,  174,   36,   36, 0x08,
     179,  206,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tfDia[] = {
    "tfDia\0saveTextChanged(QString)\0text\0"
    "\0createFilterRow(tfFilter*)\0after\0"
    "removeRow(tfFilter*)\0tff\0clearClicked()\0"
    "okClicked()\0cancelClicked()\0deleteClicked()\0"
    "loadFilter(QString)\0name\0"
    "resizeEvent(QResizeEvent*)\0e\0"
};

void tfDia::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tfDia *_t = static_cast<tfDia *>(_o);
        switch (_id) {
        case 0: _t->saveTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->createFilterRow((*reinterpret_cast< tfFilter*(*)>(_a[1]))); break;
        case 2: _t->removeRow((*reinterpret_cast< tfFilter*(*)>(_a[1]))); break;
        case 3: _t->clearClicked(); break;
        case 4: _t->okClicked(); break;
        case 5: _t->cancelClicked(); break;
        case 6: _t->deleteClicked(); break;
        case 7: _t->loadFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tfDia::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tfDia::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tfDia,
      qt_meta_data_tfDia, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tfDia::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tfDia::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tfDia::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tfDia))
        return static_cast<void*>(const_cast< tfDia*>(this));
    return QDialog::qt_metacast(_clname);
}

int tfDia::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
