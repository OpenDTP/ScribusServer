/****************************************************************************
** Meta object code from reading C++ file 'docsections.h'
**
** Created: Sun Feb 24 21:37:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/docsections.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'docsections.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DocSections[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   29,   29,   29, 0x09,
      30,   56,   29,   29, 0x09,
      58,   29,   29,   29, 0x09,
      69,   29,   29,   29, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DocSections[] = {
    "DocSections\0languageChange()\0\0"
    "tableItemChanged(int,int)\0,\0addEntry()\0"
    "deleteEntry()\0"
};

void DocSections::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DocSections *_t = static_cast<DocSections *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->tableItemChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->addEntry(); break;
        case 3: _t->deleteEntry(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DocSections::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DocSections::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DocSections,
      qt_meta_data_DocSections, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DocSections::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DocSections::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DocSections::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DocSections))
        return static_cast<void*>(const_cast< DocSections*>(this));
    if (!strcmp(_clname, "Ui::DocSections"))
        return static_cast< Ui::DocSections*>(const_cast< DocSections*>(this));
    return QWidget::qt_metacast(_clname);
}

int DocSections::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE