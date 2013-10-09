/****************************************************************************
** Meta object code from reading C++ file 'pathfinderdialog.h'
**
** Created: Sun Feb 24 21:59:13 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../scribus/plugins/tools/pathfinder/pathfinderdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathfinderdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PathFinderDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   29,   29,   29, 0x08,
      30,   29,   29,   29, 0x08,
      42,   29,   29,   29, 0x08,
      56,   29,   29,   29, 0x08,
      76,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PathFinderDialog[] = {
    "PathFinderDialog\0checkKeep()\0\0newOpMode()\0"
    "swapObjects()\0updateAllPreviews()\0"
    "updateResult()\0"
};

void PathFinderDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PathFinderDialog *_t = static_cast<PathFinderDialog *>(_o);
        switch (_id) {
        case 0: _t->checkKeep(); break;
        case 1: _t->newOpMode(); break;
        case 2: _t->swapObjects(); break;
        case 3: _t->updateAllPreviews(); break;
        case 4: _t->updateResult(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PathFinderDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PathFinderDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PathFinderDialog,
      qt_meta_data_PathFinderDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PathFinderDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PathFinderDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PathFinderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PathFinderDialog))
        return static_cast<void*>(const_cast< PathFinderDialog*>(this));
    if (!strcmp(_clname, "Ui::PathFinderBase"))
        return static_cast< Ui::PathFinderBase*>(const_cast< PathFinderDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PathFinderDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
