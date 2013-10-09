/****************************************************************************
** Meta object code from reading C++ file 'scripterprefsgui.h'
**
** Created: Sun Feb 24 21:57:38 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scribus/plugins/scriptplugin/scripterprefsgui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scripterprefsgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ScripterPrefsGui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   32,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x0a,
      41,   32,   32,   32, 0x09,
      58,   32,   32,   32, 0x09,
      69,   32,   32,   32, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ScripterPrefsGui[] = {
    "ScripterPrefsGui\0prefsChanged()\0\0"
    "apply()\0languageChange()\0setColor()\0"
    "changeStartupScript()\0"
};

void ScripterPrefsGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScripterPrefsGui *_t = static_cast<ScripterPrefsGui *>(_o);
        switch (_id) {
        case 0: _t->prefsChanged(); break;
        case 1: _t->apply(); break;
        case 2: _t->languageChange(); break;
        case 3: _t->setColor(); break;
        case 4: _t->changeStartupScript(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ScripterPrefsGui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScripterPrefsGui::staticMetaObject = {
    { &PrefsPanel::staticMetaObject, qt_meta_stringdata_ScripterPrefsGui,
      qt_meta_data_ScripterPrefsGui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScripterPrefsGui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScripterPrefsGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScripterPrefsGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScripterPrefsGui))
        return static_cast<void*>(const_cast< ScripterPrefsGui*>(this));
    if (!strcmp(_clname, "Ui::ScripterPrefsGui"))
        return static_cast< Ui::ScripterPrefsGui*>(const_cast< ScripterPrefsGui*>(this));
    return PrefsPanel::qt_metacast(_clname);
}

int ScripterPrefsGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ScripterPrefsGui::prefsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
