/****************************************************************************
** Meta object code from reading C++ file 'tabcheckdoc.h'
**
** Created: Sun Feb 24 21:37:23 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/tabcheckdoc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabcheckdoc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TabCheckDoc[] = {

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
      12,   25,   25,   25, 0x0a,
      26,   46,   25,   25, 0x0a,
      51,   25,   25,   25, 0x0a,
      61,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TabCheckDoc[] = {
    "TabCheckDoc\0putProfile()\0\0setProfile(QString)\0"
    "name\0addProf()\0delProf()\0"
};

void TabCheckDoc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabCheckDoc *_t = static_cast<TabCheckDoc *>(_o);
        switch (_id) {
        case 0: _t->putProfile(); break;
        case 1: _t->setProfile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->addProf(); break;
        case 3: _t->delProf(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TabCheckDoc::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TabCheckDoc::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TabCheckDoc,
      qt_meta_data_TabCheckDoc, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabCheckDoc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabCheckDoc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabCheckDoc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabCheckDoc))
        return static_cast<void*>(const_cast< TabCheckDoc*>(this));
    return QWidget::qt_metacast(_clname);
}

int TabCheckDoc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
