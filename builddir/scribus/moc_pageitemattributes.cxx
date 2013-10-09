/****************************************************************************
** Meta object code from reading C++ file 'pageitemattributes.h'
**
** Created: Sun Feb 24 21:37:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/pageitemattributes.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageitemattributes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PageItemAttributes[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   56,   83,   83, 0x0a,
      84,  110,   83,   83, 0x0a,
     118,   83,   83,   83, 0x09,
     135,   83,   83,   83, 0x09,
     146,   83,   83,   83, 0x09,
     160,   83,   83,   83, 0x09,
     175,   83,   83,   83, 0x09,
     187,   83,   83,   83, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PageItemAttributes[] = {
    "PageItemAttributes\0"
    "setup(ObjAttrVector*,ObjAttrVector*)\0"
    "pageItemAttrs,docItemAttrs\0\0"
    "tableItemChanged(int,int)\0row,col\0"
    "languageChange()\0addEntry()\0deleteEntry()\0"
    "clearEntries()\0copyEntry()\0okClicked()\0"
};

void PageItemAttributes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PageItemAttributes *_t = static_cast<PageItemAttributes *>(_o);
        switch (_id) {
        case 0: _t->setup((*reinterpret_cast< ObjAttrVector*(*)>(_a[1])),(*reinterpret_cast< ObjAttrVector*(*)>(_a[2]))); break;
        case 1: _t->tableItemChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->languageChange(); break;
        case 3: _t->addEntry(); break;
        case 4: _t->deleteEntry(); break;
        case 5: _t->clearEntries(); break;
        case 6: _t->copyEntry(); break;
        case 7: _t->okClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PageItemAttributes::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PageItemAttributes::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PageItemAttributes,
      qt_meta_data_PageItemAttributes, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageItemAttributes::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageItemAttributes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageItemAttributes::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageItemAttributes))
        return static_cast<void*>(const_cast< PageItemAttributes*>(this));
    if (!strcmp(_clname, "Ui::PageItemAttributes"))
        return static_cast< Ui::PageItemAttributes*>(const_cast< PageItemAttributes*>(this));
    return QDialog::qt_metacast(_clname);
}

int PageItemAttributes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
