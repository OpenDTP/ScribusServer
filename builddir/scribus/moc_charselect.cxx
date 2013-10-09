/****************************************************************************
** Meta object code from reading C++ file 'charselect.h'
**
** Created: Sun Feb 24 21:37:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/charselect.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'charselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CharSelect[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   31,   31,   31, 0x05,
      32,   69,   31,   31, 0x05,

 // slots: signature, parameters, type, tag, flags
      71,   97,   31,   31, 0x08,
     100,   31,   31,   31, 0x08,
     125,   31,   31,   31, 0x08,
     150,  183,   31,   31, 0x08,
     189,   69,   31,   31, 0x08,
     231,   31,   31,   31, 0x08,
     255,   31,   31,   31, 0x08,
     279,   31,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CharSelect[] = {
    "CharSelect\0insertSpecialChar()\0\0"
    "insertUserSpecialChar(QChar,QString)\0"
    ",\0userNewChar(uint,QString)\0i,\0"
    "hideButton_toggled(bool)\0"
    "slot_insertSpecialChar()\0"
    "slot_insertSpecialChars(QString)\0chars\0"
    "slot_insertUserSpecialChar(QChar,QString)\0"
    "uniLoadButton_clicked()\0uniSaveButton_clicked()\0"
    "uniClearButton_clicked()\0"
};

void CharSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CharSelect *_t = static_cast<CharSelect *>(_o);
        switch (_id) {
        case 0: _t->insertSpecialChar(); break;
        case 1: _t->insertUserSpecialChar((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->userNewChar((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->hideButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slot_insertSpecialChar(); break;
        case 5: _t->slot_insertSpecialChars((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slot_insertUserSpecialChar((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->uniLoadButton_clicked(); break;
        case 8: _t->uniSaveButton_clicked(); break;
        case 9: _t->uniClearButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CharSelect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CharSelect::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_CharSelect,
      qt_meta_data_CharSelect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CharSelect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CharSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CharSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CharSelect))
        return static_cast<void*>(const_cast< CharSelect*>(this));
    if (!strcmp(_clname, "Ui::CharSelect"))
        return static_cast< Ui::CharSelect*>(const_cast< CharSelect*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int CharSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void CharSelect::insertSpecialChar()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CharSelect::insertUserSpecialChar(QChar _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
