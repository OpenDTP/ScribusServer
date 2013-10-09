/****************************************************************************
** Meta object code from reading C++ file 'colorm.h'
**
** Created: Sun Feb 24 21:37:06 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/colorm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ColorManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   28,   28,   28, 0x08,
      29,   51,   28,   28, 0x08,
      55,   28,   28,   28, 0x08,
      70,   28,   28,   28, 0x08,
      84,   28,   28,   28, 0x08,
     105,   28,   28,   28, 0x08,
     122,   28,   28,   28, 0x08,
     133,   28,   28,   28, 0x08,
     145,   28,   28,   28, 0x08,
     172,   28,   28,   28, 0x08,
     203,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ColorManager[] = {
    "ColorManager\0saveDefaults()\0\0"
    "loadDefaults(QString)\0txt\0importColors()\0"
    "deleteColor()\0deleteUnusedColors()\0"
    "duplicateColor()\0newColor()\0editColor()\0"
    "selColor(QListWidgetItem*)\0"
    "selEditColor(QListWidgetItem*)\0"
    "updateCList()\0"
};

void ColorManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorManager *_t = static_cast<ColorManager *>(_o);
        switch (_id) {
        case 0: _t->saveDefaults(); break;
        case 1: _t->loadDefaults((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->importColors(); break;
        case 3: _t->deleteColor(); break;
        case 4: _t->deleteUnusedColors(); break;
        case 5: _t->duplicateColor(); break;
        case 6: _t->newColor(); break;
        case 7: _t->editColor(); break;
        case 8: _t->selColor((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->selEditColor((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->updateCList(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ColorManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ColorManager::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ColorManager,
      qt_meta_data_ColorManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ColorManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ColorManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ColorManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColorManager))
        return static_cast<void*>(const_cast< ColorManager*>(this));
    return QDialog::qt_metacast(_clname);
}

int ColorManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
