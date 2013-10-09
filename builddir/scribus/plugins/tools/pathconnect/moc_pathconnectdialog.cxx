/****************************************************************************
** Meta object code from reading C++ file 'pathconnectdialog.h'
**
** Created: Sun Feb 24 21:59:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../scribus/plugins/tools/pathconnect/pathconnectdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathconnectdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PathConnectDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   48,   52,   52, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   52,   52,   52, 0x08,
      69,   52,   52,   52, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PathConnectDialog[] = {
    "PathConnectDialog\0updateValues(int,int,int,int)\0"
    ",,,\0\0pointsChanged()\0togglePreview()\0"
};

void PathConnectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PathConnectDialog *_t = static_cast<PathConnectDialog *>(_o);
        switch (_id) {
        case 0: _t->updateValues((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->pointsChanged(); break;
        case 2: _t->togglePreview(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PathConnectDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PathConnectDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PathConnectDialog,
      qt_meta_data_PathConnectDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PathConnectDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PathConnectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PathConnectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PathConnectDialog))
        return static_cast<void*>(const_cast< PathConnectDialog*>(this));
    if (!strcmp(_clname, "Ui::PathConnectDialogBase"))
        return static_cast< Ui::PathConnectDialogBase*>(const_cast< PathConnectDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PathConnectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PathConnectDialog::updateValues(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
