/****************************************************************************
** Meta object code from reading C++ file 'outlinepalette.h'
**
** Created: Sun Feb 24 21:37:13 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/outlinepalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'outlinepalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OutlinePalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   35,   35,   35, 0x05,
      36,   64,   35,   35, 0x05,
      67,   35,   35,   35, 0x05,
      83,   35,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
     109,  125,   35,   35, 0x0a,
     135,   35,   35,   35, 0x2a,
     147,  167,   35,   35, 0x0a,
     175,   35,   35,   35, 0x0a,
     192,  217,   35,   35, 0x0a,
     224,   35,   35,   35, 0x0a,
     246,  269,   35,   35, 0x0a,
     275,   35,   35,   35, 0x09,
     292,  327,   35,   35, 0x09,
     335,   35,   35,   35, 0x09,
     353,  327,   35,   35, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_OutlinePalette[] = {
    "OutlinePalette\0ToggleAllPalettes()\0\0"
    "selectElement(int,int,bool)\0,,\0"
    "selectPage(int)\0selectMasterPage(QString)\0"
    "BuildTree(bool)\0storeVals\0BuildTree()\0"
    "filterTree(QString)\0keyword\0"
    "languageChange()\0slotShowSelect(uint,int)\0"
    "SNr,Nr\0setPaletteShown(bool)\0"
    "slotRightClick(QPoint)\0point\0"
    "slotRenameItem()\0slotDoRename(QTreeWidgetItem*,int)\0"
    "ite,col\0slotMultiSelect()\0"
    "slotSelect(QTreeWidgetItem*,int)\0"
};

void OutlinePalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OutlinePalette *_t = static_cast<OutlinePalette *>(_o);
        switch (_id) {
        case 0: _t->ToggleAllPalettes(); break;
        case 1: _t->selectElement((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->selectPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->selectMasterPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->BuildTree((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->BuildTree(); break;
        case 6: _t->filterTree((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->languageChange(); break;
        case 8: _t->slotShowSelect((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->setPaletteShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->slotRightClick((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 11: _t->slotRenameItem(); break;
        case 12: _t->slotDoRename((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->slotMultiSelect(); break;
        case 14: _t->slotSelect((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OutlinePalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OutlinePalette::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_OutlinePalette,
      qt_meta_data_OutlinePalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OutlinePalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OutlinePalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OutlinePalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OutlinePalette))
        return static_cast<void*>(const_cast< OutlinePalette*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int OutlinePalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void OutlinePalette::ToggleAllPalettes()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void OutlinePalette::selectElement(int _t1, int _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OutlinePalette::selectPage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OutlinePalette::selectMasterPage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
