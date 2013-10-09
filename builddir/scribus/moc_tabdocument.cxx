/****************************************************************************
** Meta object code from reading C++ file 'tabdocument.h'
**
** Created: Sun Feb 24 21:37:23 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/tabdocument.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabdocument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TabDocument[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   33,   35,   35, 0x08,
      36,   33,   35,   35, 0x08,
      58,   72,   35,   35, 0x08,
      76,   93,   35,   35, 0x08,
      96,   35,   35,   35, 0x08,
     110,  125,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TabDocument[] = {
    "TabDocument\0setPageWidth(double)\0v\0\0"
    "setPageHeight(double)\0setOrien(int)\0"
    "ori\0setSize(QString)\0gr\0setPageSize()\0"
    "slotUndo(bool)\0isEnabled\0"
};

void TabDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabDocument *_t = static_cast<TabDocument *>(_o);
        switch (_id) {
        case 0: _t->setPageWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setPageHeight((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setOrien((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setPageSize(); break;
        case 5: _t->slotUndo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TabDocument::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TabDocument::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TabDocument,
      qt_meta_data_TabDocument, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabDocument::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabDocument))
        return static_cast<void*>(const_cast< TabDocument*>(this));
    return QWidget::qt_metacast(_clname);
}

int TabDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
