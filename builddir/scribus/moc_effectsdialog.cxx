/****************************************************************************
** Meta object code from reading C++ file 'effectsdialog.h'
**
** Created: Sun Feb 24 21:37:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/effectsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'effectsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EffectsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   24,   24,   24, 0x0a,
      25,   45,   24,   24, 0x0a,
      49,   45,   24,   24, 0x0a,
      69,   45,   24,   24, 0x0a,
      87,   24,   24,   24, 0x0a,
     103,  120,   24,   24, 0x0a,
     126,   24,   24,   24, 0x0a,
     142,   24,   24,   24, 0x0a,
     160,   24,   24,   24, 0x0a,
     175,   24,   24,   24, 0x0a,
     192,  223,   24,   24, 0x0a,
     225,  223,   24,   24, 0x0a,
     261,  223,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EffectsDialog[] = {
    "EffectsDialog\0leaveOK()\0\0updateSolarize(int)\0"
    "val\0updateContrast(int)\0updateBright(int)\0"
    "createPreview()\0saveValues(bool)\0final\0"
    "moveToEffects()\0moveFromEffects()\0"
    "moveEffectUp()\0moveEffectDown()\0"
    "selectEffect(QListWidgetItem*)\0c\0"
    "selectAvailEffect(QListWidgetItem*)\0"
    "selectAvailEffectDbl(QListWidgetItem*)\0"
};

void EffectsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EffectsDialog *_t = static_cast<EffectsDialog *>(_o);
        switch (_id) {
        case 0: _t->leaveOK(); break;
        case 1: _t->updateSolarize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateContrast((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateBright((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->createPreview(); break;
        case 5: _t->saveValues((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->moveToEffects(); break;
        case 7: _t->moveFromEffects(); break;
        case 8: _t->moveEffectUp(); break;
        case 9: _t->moveEffectDown(); break;
        case 10: _t->selectEffect((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->selectAvailEffect((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->selectAvailEffectDbl((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EffectsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EffectsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EffectsDialog,
      qt_meta_data_EffectsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EffectsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EffectsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EffectsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EffectsDialog))
        return static_cast<void*>(const_cast< EffectsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int EffectsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
