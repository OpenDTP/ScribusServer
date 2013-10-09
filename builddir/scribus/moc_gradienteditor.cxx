/****************************************************************************
** Meta object code from reading C++ file 'gradienteditor.h'
**
** Created: Sun Feb 24 21:37:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/gradienteditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gradienteditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GradientPreview[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   43,   45,   45, 0x05,
      46,   45,   45,   45, 0x05,
      64,   45,   45,   45, 0x05,
      81,   45,   45,   45, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_GradientPreview[] = {
    "GradientPreview\0selectedColor(QString,int)\0"
    ",\0\0currTrans(double)\0currStep(double)\0"
    "gradientChanged()\0"
};

void GradientPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GradientPreview *_t = static_cast<GradientPreview *>(_o);
        switch (_id) {
        case 0: _t->selectedColor((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->currTrans((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->currStep((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->gradientChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GradientPreview::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GradientPreview::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_GradientPreview,
      qt_meta_data_GradientPreview, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GradientPreview::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GradientPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GradientPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GradientPreview))
        return static_cast<void*>(const_cast< GradientPreview*>(this));
    return QFrame::qt_metacast(_clname);
}

int GradientPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void GradientPreview::selectedColor(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GradientPreview::currTrans(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GradientPreview::currStep(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GradientPreview::gradientChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
static const uint qt_meta_data_GradientEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   33,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x0a,
      49,   33,   33,   33, 0x0a,
      64,   33,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GradientEditor[] = {
    "GradientEditor\0gradientChanged()\0\0"
    "setPos(double)\0changePos(int)\0"
    "languageChange()\0"
};

void GradientEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GradientEditor *_t = static_cast<GradientEditor *>(_o);
        switch (_id) {
        case 0: _t->gradientChanged(); break;
        case 1: _t->setPos((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->changePos((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GradientEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GradientEditor::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_GradientEditor,
      qt_meta_data_GradientEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GradientEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GradientEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GradientEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GradientEditor))
        return static_cast<void*>(const_cast< GradientEditor*>(this));
    return QFrame::qt_metacast(_clname);
}

int GradientEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void GradientEditor::gradientChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
