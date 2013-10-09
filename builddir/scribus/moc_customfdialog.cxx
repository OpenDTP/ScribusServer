/****************************************************************************
** Meta object code from reading C++ file 'customfdialog.h'
**
** Created: Sun Feb 24 21:37:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/customfdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customfdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FDialogPreview[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_FDialogPreview[] = {
    "FDialogPreview\0"
};

void FDialogPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FDialogPreview::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FDialogPreview::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_FDialogPreview,
      qt_meta_data_FDialogPreview, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FDialogPreview::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FDialogPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FDialogPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FDialogPreview))
        return static_cast<void*>(const_cast< FDialogPreview*>(this));
    return QLabel::qt_metacast(_clname);
}

int FDialogPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CustomFDialog[] = {

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
      14,   35,   40,   40, 0x08,
      41,   40,   40,   40, 0x08,
      57,   40,   40,   40, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CustomFDialog[] = {
    "CustomFDialog\0fileClicked(QString)\0"
    "path\0\0togglePreview()\0handleCompress()\0"
};

void CustomFDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CustomFDialog *_t = static_cast<CustomFDialog *>(_o);
        switch (_id) {
        case 0: _t->fileClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->togglePreview(); break;
        case 2: _t->handleCompress(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CustomFDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CustomFDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CustomFDialog,
      qt_meta_data_CustomFDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CustomFDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CustomFDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CustomFDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CustomFDialog))
        return static_cast<void*>(const_cast< CustomFDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CustomFDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
