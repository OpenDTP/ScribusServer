/****************************************************************************
** Meta object code from reading C++ file 'spalette.h'
**
** Created: Sun Feb 24 21:37:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/spalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ParaStyleComboBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   36,   36,   36, 0x05,
      37,   36,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   69,   36,   36, 0x0a,
      83,  102,   36,   36, 0x0a,
     107,   36,   36,   36, 0x0a,
     126,  141,   36,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ParaStyleComboBox[] = {
    "ParaStyleComboBox\0newStyle(QString)\0"
    "\0editStyle()\0setDoc(ScribusDoc*)\0"
    "newCurrentDoc\0setFormat(QString)\0name\0"
    "updateFormatList()\0selFormat(int)\0e\0"
};

void ParaStyleComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ParaStyleComboBox *_t = static_cast<ParaStyleComboBox *>(_o);
        switch (_id) {
        case 0: _t->newStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->editStyle(); break;
        case 2: _t->setDoc((*reinterpret_cast< ScribusDoc*(*)>(_a[1]))); break;
        case 3: _t->setFormat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->updateFormatList(); break;
        case 5: _t->selFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ParaStyleComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ParaStyleComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_ParaStyleComboBox,
      qt_meta_data_ParaStyleComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ParaStyleComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ParaStyleComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ParaStyleComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ParaStyleComboBox))
        return static_cast<void*>(const_cast< ParaStyleComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int ParaStyleComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ParaStyleComboBox::newStyle(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ParaStyleComboBox::editStyle()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_CharStyleComboBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   36,   36,   36, 0x05,
      37,   36,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   73,   36,   36, 0x0a,
      87,  106,   36,   36, 0x0a,
     111,   36,   36,   36, 0x0a,
     130,  145,   36,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CharStyleComboBox[] = {
    "CharStyleComboBox\0newStyle(QString)\0"
    "\0editCharStyle()\0setDoc(ScribusDoc*)\0"
    "newCurrentDoc\0setFormat(QString)\0name\0"
    "updateFormatList()\0selFormat(int)\0e\0"
};

void CharStyleComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CharStyleComboBox *_t = static_cast<CharStyleComboBox *>(_o);
        switch (_id) {
        case 0: _t->newStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->editCharStyle(); break;
        case 2: _t->setDoc((*reinterpret_cast< ScribusDoc*(*)>(_a[1]))); break;
        case 3: _t->setFormat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->updateFormatList(); break;
        case 5: _t->selFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CharStyleComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CharStyleComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_CharStyleComboBox,
      qt_meta_data_CharStyleComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CharStyleComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CharStyleComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CharStyleComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CharStyleComboBox))
        return static_cast<void*>(const_cast< CharStyleComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int CharStyleComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CharStyleComboBox::newStyle(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CharStyleComboBox::editCharStyle()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
