/****************************************************************************
** Meta object code from reading C++ file 'swprefsgui.h'
**
** Created: Sun Feb 24 21:58:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scribus/plugins/short-words/swprefsgui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'swprefsgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SWPrefsGui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   19,   19,   19, 0x0a,
      20,   19,   19,   19, 0x0a,
      39,   19,   19,   19, 0x0a,
      61,   19,   19,   19, 0x0a,
      79,   19,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SWPrefsGui[] = {
    "SWPrefsGui\0apply()\0\0okButton_pressed()\0"
    "resetButton_pressed()\0cfgEdit_changed()\0"
    "languageChange()\0"
};

void SWPrefsGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SWPrefsGui *_t = static_cast<SWPrefsGui *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->okButton_pressed(); break;
        case 2: _t->resetButton_pressed(); break;
        case 3: _t->cfgEdit_changed(); break;
        case 4: _t->languageChange(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SWPrefsGui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SWPrefsGui::staticMetaObject = {
    { &PrefsPanel::staticMetaObject, qt_meta_stringdata_SWPrefsGui,
      qt_meta_data_SWPrefsGui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SWPrefsGui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SWPrefsGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SWPrefsGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SWPrefsGui))
        return static_cast<void*>(const_cast< SWPrefsGui*>(this));
    return PrefsPanel::qt_metacast(_clname);
}

int SWPrefsGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PrefsPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
