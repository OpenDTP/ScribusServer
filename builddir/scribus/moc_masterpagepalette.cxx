/****************************************************************************
** Meta object code from reading C++ file 'masterpagepalette.h'
**
** Created: Sun Feb 24 21:37:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/masterpagepalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masterpagepalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MasterPagesPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   35,   35,   35, 0x05,
      36,   35,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   35,   35,   35, 0x0a,
      64,   90,   35,   35, 0x0a,
      95,  116,   35,   35, 0x0a,
     118,   35,   35,   35, 0x09,
     127,   35,   35,   35, 0x08,
     149,   35,   35,   35, 0x08,
     168,   35,   35,   35, 0x08,
     184,  219,   35,   35, 0x08,
     224,   35,   35,   35, 0x08,
     237,  219,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MasterPagesPalette[] = {
    "MasterPagesPalette\0removePage(int)\0\0"
    "finished()\0languageChange()\0"
    "selectMasterPage(QString)\0name\0"
    "changeEvent(QEvent*)\0e\0reject()\0"
    "duplicateMasterPage()\0deleteMasterPage()\0"
    "newMasterPage()\0renameMasterPage(QListWidgetItem*)\0"
    "item\0importPage()\0selectMasterPage(QListWidgetItem*)\0"
};

void MasterPagesPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MasterPagesPalette *_t = static_cast<MasterPagesPalette *>(_o);
        switch (_id) {
        case 0: _t->removePage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->languageChange(); break;
        case 3: _t->selectMasterPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->changeEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 5: _t->reject(); break;
        case 6: _t->duplicateMasterPage(); break;
        case 7: _t->deleteMasterPage(); break;
        case 8: _t->newMasterPage(); break;
        case 9: _t->renameMasterPage((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->importPage(); break;
        case 11: _t->selectMasterPage((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MasterPagesPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MasterPagesPalette::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MasterPagesPalette,
      qt_meta_data_MasterPagesPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MasterPagesPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MasterPagesPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MasterPagesPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MasterPagesPalette))
        return static_cast<void*>(const_cast< MasterPagesPalette*>(this));
    return QDialog::qt_metacast(_clname);
}

int MasterPagesPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MasterPagesPalette::removePage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MasterPagesPalette::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
