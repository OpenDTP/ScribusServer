/****************************************************************************
** Meta object code from reading C++ file 'charselectenhanced.h'
**
** Created: Sun Feb 24 21:37:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/charselectenhanced.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'charselectenhanced.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CharSelectEnhanced[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   47,   53,   53, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   76,   53,   53, 0x0a,
      79,   53,   53,   53, 0x0a,
      89,  102,   53,   53, 0x0a,
     107,  125,   53,   53, 0x0a,
     127,   53,   53,   53, 0x0a,
     137,   53,   53,   53, 0x0a,
     147,   53,   53,   53, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CharSelectEnhanced[] = {
    "CharSelectEnhanced\0insertSpecialChars(QString)\0"
    "chars\0\0newChar(uint,QString)\0i,\0"
    "delChar()\0newFont(int)\0font\0"
    "newCharClass(int)\0c\0delEdit()\0insChar()\0"
    "hexLineEdit_returnPressed()\0"
};

void CharSelectEnhanced::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CharSelectEnhanced *_t = static_cast<CharSelectEnhanced *>(_o);
        switch (_id) {
        case 0: _t->insertSpecialChars((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->newChar((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->delChar(); break;
        case 3: _t->newFont((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->newCharClass((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->delEdit(); break;
        case 6: _t->insChar(); break;
        case 7: _t->hexLineEdit_returnPressed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CharSelectEnhanced::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CharSelectEnhanced::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_CharSelectEnhanced,
      qt_meta_data_CharSelectEnhanced, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CharSelectEnhanced::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CharSelectEnhanced::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CharSelectEnhanced::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CharSelectEnhanced))
        return static_cast<void*>(const_cast< CharSelectEnhanced*>(this));
    if (!strcmp(_clname, "Ui::CharSelectEnhanced"))
        return static_cast< Ui::CharSelectEnhanced*>(const_cast< CharSelectEnhanced*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int CharSelectEnhanced::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void CharSelectEnhanced::insertSpecialChars(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
