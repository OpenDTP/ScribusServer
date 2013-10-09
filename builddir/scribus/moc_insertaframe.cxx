/****************************************************************************
** Meta object code from reading C++ file 'insertaframe.h'
**
** Created: Sun Feb 24 21:37:10 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/insertaframe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'insertaframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InsertAFrame[] = {

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
      13,   33,   36,   36, 0x09,
      37,   33,   36,   36, 0x09,
      66,   36,   36,   36, 0x09,
      94,   33,   36,   36, 0x09,
     118,   33,   36,   36, 0x09,
     138,  167,   36,   36, 0x09,
     173,   36,   36,   36, 0x09,
     191,   36,   36,   36, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_InsertAFrame[] = {
    "InsertAFrame\0slotSelectType(int)\0id\0"
    "\0slotSelectPagePlacement(int)\0"
    "slotCreatePageNumberRange()\0"
    "slotSelectPosition(int)\0slotSelectSize(int)\0"
    "slotLinkToExistingFrame(int)\0state\0"
    "locateImageFile()\0locateDocFile()\0"
};

void InsertAFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InsertAFrame *_t = static_cast<InsertAFrame *>(_o);
        switch (_id) {
        case 0: _t->slotSelectType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotSelectPagePlacement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotCreatePageNumberRange(); break;
        case 3: _t->slotSelectPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotSelectSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotLinkToExistingFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->locateImageFile(); break;
        case 7: _t->locateDocFile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InsertAFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InsertAFrame::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InsertAFrame,
      qt_meta_data_InsertAFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InsertAFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InsertAFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InsertAFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InsertAFrame))
        return static_cast<void*>(const_cast< InsertAFrame*>(this));
    if (!strcmp(_clname, "Ui::InsertAFrame"))
        return static_cast< Ui::InsertAFrame*>(const_cast< InsertAFrame*>(this));
    return QDialog::qt_metacast(_clname);
}

int InsertAFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
