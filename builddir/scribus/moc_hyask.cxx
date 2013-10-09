/****************************************************************************
** Meta object code from reading C++ file 'hyask.h'
**
** Created: Sun Feb 24 21:37:10 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/hyask.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hyask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WortEdit[] = {

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

static const char qt_meta_stringdata_WortEdit[] = {
    "WortEdit\0"
};

void WortEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WortEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WortEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_WortEdit,
      qt_meta_data_WortEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WortEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WortEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WortEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WortEdit))
        return static_cast<void*>(const_cast< WortEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int WortEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_HyAsk[] = {

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
       6,   14,   14,   14, 0x0a,
      15,   14,   14,   14, 0x0a,
      24,   14,   14,   14, 0x0a,
      33,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_HyAsk[] = {
    "HyAsk\0Check()\0\0DoSkip()\0accept()\0"
    "reject()\0"
};

void HyAsk::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HyAsk *_t = static_cast<HyAsk *>(_o);
        switch (_id) {
        case 0: _t->Check(); break;
        case 1: _t->DoSkip(); break;
        case 2: _t->accept(); break;
        case 3: _t->reject(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData HyAsk::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HyAsk::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_HyAsk,
      qt_meta_data_HyAsk, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HyAsk::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HyAsk::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HyAsk::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HyAsk))
        return static_cast<void*>(const_cast< HyAsk*>(this));
    return QDialog::qt_metacast(_clname);
}

int HyAsk::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
