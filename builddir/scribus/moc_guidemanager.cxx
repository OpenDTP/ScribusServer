/****************************************************************************
** Meta object code from reading C++ file 'guidemanager.h'
**
** Created: Sun Feb 24 21:37:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/guidemanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guidemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GuideManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   60,   62,   62, 0x08,
      63,   62,   62,   62, 0x08,
      92,   62,   62,   62, 0x08,
     123,   62,   62,   62, 0x08,
     146,   62,   62,   62, 0x08,
     169,   62,   62,   62, 0x08,
     192,   62,   62,   62, 0x08,
     215,   62,   62,   62, 0x08,
     245,   62,   62,   62, 0x08,
     273,   62,   62,   62, 0x08,
     314,   62,   62,   62, 0x08,
     353,   62,   62,   62, 0x08,
     384,   62,   62,   62, 0x08,
     426,   62,   62,   62, 0x08,
     466,   62,   62,   62, 0x08,
     509,   62,   62,   62, 0x08,
     550,   62,   62,   62, 0x08,
     589,   62,   62,   62, 0x08,
     631,   62,   62,   62, 0x08,
     675,   62,   62,   62, 0x08,
     712,   62,   62,   62, 0x08,
     752,   62,   62,   62, 0x08,
     794,   62,   62,   62, 0x08,
     829,   62,   62,   62, 0x08,
     856,   62,   62,   62, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GuideManager[] = {
    "GuideManager\0"
    "forceDrawGuides(QItemSelection,QItemSelection)\0"
    ",\0\0verticalModel_valueChanged()\0"
    "horizontalModel_valueChanged()\0"
    "addHorButton_clicked()\0delHorButton_clicked()\0"
    "addVerButton_clicked()\0delVerButton_clicked()\0"
    "applyToAllStdButton_clicked()\0"
    "lockCheck_stateChanged(int)\0"
    "horizontalAutoGapCheck_stateChanged(int)\0"
    "verticalAutoGapCheck_stateChanged(int)\0"
    "applyToAllAutoButton_clicked()\0"
    "horizontalAutoCountSpin_valueChanged(int)\0"
    "verticalAutoCountSpin_valueChanged(int)\0"
    "horizontalAutoGapSpin_valueChanged(double)\0"
    "verticalAutoGapSpin_valueChanged(double)\0"
    "horizontalPageAutoButton_toggled(bool)\0"
    "horizontalMarginsAutoButton_toggled(bool)\0"
    "horizontalSelectionAutoButton_toggled(bool)\0"
    "verticalPageAutoButton_toggled(bool)\0"
    "verticalMarginsAutoButton_toggled(bool)\0"
    "verticalSelectionAutoButton_toggled(bool)\0"
    "tabWidget_currentChanged(QWidget*)\0"
    "deletePageButton_clicked()\0"
    "deleteAllGuides_clicked()\0"
};

void GuideManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GuideManager *_t = static_cast<GuideManager *>(_o);
        switch (_id) {
        case 0: _t->forceDrawGuides((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 1: _t->verticalModel_valueChanged(); break;
        case 2: _t->horizontalModel_valueChanged(); break;
        case 3: _t->addHorButton_clicked(); break;
        case 4: _t->delHorButton_clicked(); break;
        case 5: _t->addVerButton_clicked(); break;
        case 6: _t->delVerButton_clicked(); break;
        case 7: _t->applyToAllStdButton_clicked(); break;
        case 8: _t->lockCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->horizontalAutoGapCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->verticalAutoGapCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->applyToAllAutoButton_clicked(); break;
        case 12: _t->horizontalAutoCountSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->verticalAutoCountSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->horizontalAutoGapSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->verticalAutoGapSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->horizontalPageAutoButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->horizontalMarginsAutoButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->horizontalSelectionAutoButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->verticalPageAutoButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->verticalMarginsAutoButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->verticalSelectionAutoButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->tabWidget_currentChanged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 23: _t->deletePageButton_clicked(); break;
        case 24: _t->deleteAllGuides_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GuideManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GuideManager::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_GuideManager,
      qt_meta_data_GuideManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GuideManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GuideManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GuideManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GuideManager))
        return static_cast<void*>(const_cast< GuideManager*>(this));
    if (!strcmp(_clname, "Ui::GuideManager"))
        return static_cast< Ui::GuideManager*>(const_cast< GuideManager*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int GuideManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
