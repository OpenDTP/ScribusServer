/****************************************************************************
** Meta object code from reading C++ file 'patterndialog.h'
**
** Created: Sun Feb 24 21:37:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/patterndialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'patterndialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PatternDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   30,   30,   30, 0x0a,
      31,   30,   30,   30, 0x0a,
      48,   30,   30,   30, 0x0a,
      62,   96,   30,   30, 0x0a,
      99,   30,   30,   30, 0x0a,
     119,   30,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PatternDialog[] = {
    "PatternDialog\0renamePattern()\0\0"
    "loadPatternDir()\0loadPattern()\0"
    "patternSelected(QListWidgetItem*)\0it\0"
    "removeAllPatterns()\0removePattern()\0"
};

void PatternDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PatternDialog *_t = static_cast<PatternDialog *>(_o);
        switch (_id) {
        case 0: _t->renamePattern(); break;
        case 1: _t->loadPatternDir(); break;
        case 2: _t->loadPattern(); break;
        case 3: _t->patternSelected((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->removeAllPatterns(); break;
        case 5: _t->removePattern(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PatternDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PatternDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PatternDialog,
      qt_meta_data_PatternDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PatternDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PatternDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PatternDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PatternDialog))
        return static_cast<void*>(const_cast< PatternDialog*>(this));
    if (!strcmp(_clname, "Ui::PatternDialog"))
        return static_cast< Ui::PatternDialog*>(const_cast< PatternDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PatternDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
