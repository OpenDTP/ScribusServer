/****************************************************************************
** Meta object code from reading C++ file 'dasheditor.h'
**
** Created: Sun Feb 24 21:37:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/dasheditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dasheditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DashPreview[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   29,   29,   29, 0x05,
      30,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   63,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DashPreview[] = {
    "DashPreview\0currStep(double)\0\0"
    "dashChanged()\0setActStep(double)\0t\0"
};

void DashPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DashPreview *_t = static_cast<DashPreview *>(_o);
        switch (_id) {
        case 0: _t->currStep((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->dashChanged(); break;
        case 2: _t->setActStep((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DashPreview::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DashPreview::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_DashPreview,
      qt_meta_data_DashPreview, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DashPreview::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DashPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DashPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DashPreview))
        return static_cast<void*>(const_cast< DashPreview*>(this));
    return QFrame::qt_metacast(_clname);
}

int DashPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void DashPreview::currStep(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DashPreview::dashChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_DashEditor[] = {

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
      11,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,
      41,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DashEditor[] = {
    "DashEditor\0dashChanged()\0\0setPos(double)\0"
    "languageChange()\0"
};

void DashEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DashEditor *_t = static_cast<DashEditor *>(_o);
        switch (_id) {
        case 0: _t->dashChanged(); break;
        case 1: _t->setPos((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DashEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DashEditor::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_DashEditor,
      qt_meta_data_DashEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DashEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DashEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DashEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DashEditor))
        return static_cast<void*>(const_cast< DashEditor*>(this));
    return QFrame::qt_metacast(_clname);
}

int DashEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void DashEditor::dashChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
