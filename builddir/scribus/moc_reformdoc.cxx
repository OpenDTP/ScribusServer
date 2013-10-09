/****************************************************************************
** Meta object code from reading C++ file 'reformdoc.h'
**
** Created: Sun Feb 24 21:37:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/reformdoc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reformdoc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ReformDoc[] = {

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
      10,   28,   28,   28, 0x09,
      29,   28,   28,   28, 0x09,
      42,   53,   28,   28, 0x09,
      60,   76,   28,   28, 0x09,
      83,  111,   28,   28, 0x09,
     124,   28,   28,   28, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ReformDoc[] = {
    "ReformDoc\0restoreDefaults()\0\0unitChange()\0"
    "setDS(int)\0layout\0switchCMS(bool)\0"
    "enable\0showWidgetInStack(QWidget*)\0"
    "widgetToShow\0applyChangesButton_clicked()\0"
};

void ReformDoc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ReformDoc *_t = static_cast<ReformDoc *>(_o);
        switch (_id) {
        case 0: _t->restoreDefaults(); break;
        case 1: _t->unitChange(); break;
        case 2: _t->setDS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->switchCMS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showWidgetInStack((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 5: _t->applyChangesButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ReformDoc::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ReformDoc::staticMetaObject = {
    { &PrefsDialogBase::staticMetaObject, qt_meta_stringdata_ReformDoc,
      qt_meta_data_ReformDoc, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ReformDoc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ReformDoc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ReformDoc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ReformDoc))
        return static_cast<void*>(const_cast< ReformDoc*>(this));
    return PrefsDialogBase::qt_metacast(_clname);
}

int ReformDoc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PrefsDialogBase::qt_metacall(_c, _id, _a);
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
