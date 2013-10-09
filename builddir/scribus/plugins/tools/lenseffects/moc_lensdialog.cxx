/****************************************************************************
** Meta object code from reading C++ file 'lensdialog.h'
**
** Created: Sun Feb 24 21:59:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../scribus/plugins/tools/lenseffects/lensdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lensdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LensDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   22,   22,   22, 0x08,
      23,   22,   22,   22, 0x08,
      35,   22,   22,   22, 0x08,
      45,   22,   22,   22, 0x08,
      58,   22,   22,   22, 0x08,
      71,   22,   22,   22, 0x08,
      93,  113,   22,   22, 0x08,
     115,  135,   22,   22, 0x08,
     137,  162,   22,   22, 0x08,
     169,  196,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LensDialog[] = {
    "LensDialog\0doZoomIn()\0\0doZoomOut()\0"
    "addLens()\0removeLens()\0changeLens()\0"
    "selectionHasChanged()\0setNewLensX(double)\0"
    "x\0setNewLensY(double)\0y\0"
    "setNewLensRadius(double)\0radius\0"
    "setNewLensStrength(double)\0s\0"
};

void LensDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LensDialog *_t = static_cast<LensDialog *>(_o);
        switch (_id) {
        case 0: _t->doZoomIn(); break;
        case 1: _t->doZoomOut(); break;
        case 2: _t->addLens(); break;
        case 3: _t->removeLens(); break;
        case 4: _t->changeLens(); break;
        case 5: _t->selectionHasChanged(); break;
        case 6: _t->setNewLensX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setNewLensY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setNewLensRadius((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->setNewLensStrength((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LensDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LensDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LensDialog,
      qt_meta_data_LensDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LensDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LensDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LensDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LensDialog))
        return static_cast<void*>(const_cast< LensDialog*>(this));
    if (!strcmp(_clname, "Ui::LensDialogBase"))
        return static_cast< Ui::LensDialogBase*>(const_cast< LensDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LensDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
