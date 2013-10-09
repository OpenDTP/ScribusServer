/****************************************************************************
** Meta object code from reading C++ file 'transformdialog.h'
**
** Created: Sun Feb 24 21:59:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../scribus/plugins/tools/transform/transformdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transformdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TransformDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   29,   29,   29, 0x08,
      30,   29,   29,   29, 0x08,
      47,   29,   29,   29, 0x08,
      61,   29,   29,   29, 0x08,
      74,  112,   29,   29, 0x08,
     117,  138,   29,   29, 0x08,
     142,  138,   29,   29, 0x08,
     163,   29,   29,   29, 0x08,
     176,  138,   29,   29, 0x08,
     203,  138,   29,   29, 0x08,
     230,  138,   29,   29, 0x08,
     253,  138,   29,   29, 0x08,
     273,  138,   29,   29, 0x08,
     293,   29,   29,   29, 0x08,
     310,   29,   29,   29, 0x08,
     328,   29,   29,   29, 0x08,
     348,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TransformDialog[] = {
    "TransformDialog\0newScaling()\0\0"
    "newTranslation()\0newRotation()\0"
    "newSkewing()\0setCurrentTransform(QListWidgetItem*)\0"
    "item\0changeHScale(double)\0val\0"
    "changeVScale(double)\0toggleLink()\0"
    "changeHTranslation(double)\0"
    "changeVTranslation(double)\0"
    "changeRotation(double)\0changeHSkew(double)\0"
    "changeVSkew(double)\0toggleLinkSkew()\0"
    "moveTransformUp()\0moveTransformDown()\0"
    "removeTransform()\0"
};

void TransformDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TransformDialog *_t = static_cast<TransformDialog *>(_o);
        switch (_id) {
        case 0: _t->newScaling(); break;
        case 1: _t->newTranslation(); break;
        case 2: _t->newRotation(); break;
        case 3: _t->newSkewing(); break;
        case 4: _t->setCurrentTransform((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->changeHScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->changeVScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->toggleLink(); break;
        case 8: _t->changeHTranslation((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->changeVTranslation((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->changeRotation((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->changeHSkew((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->changeVSkew((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->toggleLinkSkew(); break;
        case 14: _t->moveTransformUp(); break;
        case 15: _t->moveTransformDown(); break;
        case 16: _t->removeTransform(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TransformDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TransformDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TransformDialog,
      qt_meta_data_TransformDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TransformDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TransformDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TransformDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TransformDialog))
        return static_cast<void*>(const_cast< TransformDialog*>(this));
    if (!strcmp(_clname, "Ui::TransformDialogBase"))
        return static_cast< Ui::TransformDialogBase*>(const_cast< TransformDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int TransformDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
