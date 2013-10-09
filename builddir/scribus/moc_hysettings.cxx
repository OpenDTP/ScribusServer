/****************************************************************************
** Meta object code from reading C++ file 'hysettings.h'
**
** Created: Sun Feb 24 21:37:10 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/hysettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hysettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HySettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   29,   29,   29, 0x08,
      30,   29,   29,   29, 0x08,
      52,   29,   29,   29, 0x08,
      76,   29,   29,   29, 0x08,
      98,   29,   29,   29, 0x08,
     116,   29,   29,   29, 0x08,
     138,   29,   29,   29, 0x08,
     162,   29,   29,   29, 0x08,
     184,   29,   29,   29, 0x08,
     205,   29,   29,   29, 0x08,
     222,   29,   29,   29, 0x08,
     244,   29,   29,   29, 0x08,
     271,   29,   29,   29, 0x08,
     300,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HySettings[] = {
    "HySettings\0addToIgnoreList()\0\0"
    "editIgnoreListEntry()\0removeIgnoreListEntry()\0"
    "enableIgnoreButtons()\0addToExceptList()\0"
    "editExceptListEntry()\0removeExceptListEntry()\0"
    "enableExceptButtons()\0downloadSpellDicts()\0"
    "updateDictList()\0updateAvailDictList()\0"
    "downloadDictListFinished()\0"
    "downloadSpellDictsFinished()\0"
    "updateProgressBar()\0"
};

void HySettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HySettings *_t = static_cast<HySettings *>(_o);
        switch (_id) {
        case 0: _t->addToIgnoreList(); break;
        case 1: _t->editIgnoreListEntry(); break;
        case 2: _t->removeIgnoreListEntry(); break;
        case 3: _t->enableIgnoreButtons(); break;
        case 4: _t->addToExceptList(); break;
        case 5: _t->editExceptListEntry(); break;
        case 6: _t->removeExceptListEntry(); break;
        case 7: _t->enableExceptButtons(); break;
        case 8: _t->downloadSpellDicts(); break;
        case 9: _t->updateDictList(); break;
        case 10: _t->updateAvailDictList(); break;
        case 11: _t->downloadDictListFinished(); break;
        case 12: _t->downloadSpellDictsFinished(); break;
        case 13: _t->updateProgressBar(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData HySettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HySettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HySettings,
      qt_meta_data_HySettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HySettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HySettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HySettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HySettings))
        return static_cast<void*>(const_cast< HySettings*>(this));
    if (!strcmp(_clname, "Ui::hysettingsBase"))
        return static_cast< Ui::hysettingsBase*>(const_cast< HySettings*>(this));
    return QWidget::qt_metacast(_clname);
}

int HySettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
