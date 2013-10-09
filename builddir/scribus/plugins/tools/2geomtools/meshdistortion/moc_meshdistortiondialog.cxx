/****************************************************************************
** Meta object code from reading C++ file 'meshdistortiondialog.h'
**
** Created: Sun Feb 24 21:58:51 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../scribus/plugins/tools/2geomtools/meshdistortion/meshdistortiondialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'meshdistortiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MeshDistortionDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   32,   32,   32, 0x08,
      33,   32,   32,   32, 0x08,
      45,   32,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MeshDistortionDialog[] = {
    "MeshDistortionDialog\0doZoomIn()\0\0"
    "doZoomOut()\0doReset()\0"
};

void MeshDistortionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MeshDistortionDialog *_t = static_cast<MeshDistortionDialog *>(_o);
        switch (_id) {
        case 0: _t->doZoomIn(); break;
        case 1: _t->doZoomOut(); break;
        case 2: _t->doReset(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MeshDistortionDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MeshDistortionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MeshDistortionDialog,
      qt_meta_data_MeshDistortionDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MeshDistortionDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MeshDistortionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MeshDistortionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MeshDistortionDialog))
        return static_cast<void*>(const_cast< MeshDistortionDialog*>(this));
    if (!strcmp(_clname, "Ui::MeshDistortionDialog"))
        return static_cast< Ui::MeshDistortionDialog*>(const_cast< MeshDistortionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MeshDistortionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
