/****************************************************************************
** Meta object code from reading C++ file 'checkDocument.h'
**
** Created: Sun Feb 24 21:37:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/checkDocument.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'checkDocument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CheckDocument[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   37,   39,   39, 0x05,
      40,   39,   39,   39, 0x05,
      56,   39,   39,   39, 0x05,
      82,   37,   39,   39, 0x05,
     119,   39,   39,   39, 0x05,

 // slots: signature, parameters, type, tag, flags
     137,  166,   39,   39, 0x0a,
     170,   39,   39,   39, 0x0a,
     181,  198,   39,   39, 0x0a,
     203,   39,   39,   39, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CheckDocument[] = {
    "CheckDocument\0selectElement(int,int)\0"
    ",\0\0selectPage(int)\0selectMasterPage(QString)\0"
    "selectMasterPageElement(QString,int)\0"
    "ignoreAllErrors()\0slotSelect(QTreeWidgetItem*)\0"
    "ite\0doReScan()\0newScan(QString)\0name\0"
    "languageChange()\0"
};

void CheckDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CheckDocument *_t = static_cast<CheckDocument *>(_o);
        switch (_id) {
        case 0: _t->selectElement((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->selectPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->selectMasterPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->selectMasterPageElement((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->ignoreAllErrors(); break;
        case 5: _t->slotSelect((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->doReScan(); break;
        case 7: _t->newScan((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CheckDocument::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CheckDocument::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_CheckDocument,
      qt_meta_data_CheckDocument, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CheckDocument::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CheckDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CheckDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CheckDocument))
        return static_cast<void*>(const_cast< CheckDocument*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int CheckDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void CheckDocument::selectElement(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CheckDocument::selectPage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CheckDocument::selectMasterPage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CheckDocument::selectMasterPageElement(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CheckDocument::ignoreAllErrors()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
