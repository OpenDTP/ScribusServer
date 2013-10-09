/****************************************************************************
** Meta object code from reading C++ file 'pluginmanagerprefsgui.h'
**
** Created: Sun Feb 24 21:37:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/pluginmanagerprefsgui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pluginmanagerprefsgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PluginManagerPrefsGui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   30,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PluginManagerPrefsGui[] = {
    "PluginManagerPrefsGui\0apply()\0\0"
};

void PluginManagerPrefsGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginManagerPrefsGui *_t = static_cast<PluginManagerPrefsGui *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PluginManagerPrefsGui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PluginManagerPrefsGui::staticMetaObject = {
    { &PrefsPanel::staticMetaObject, qt_meta_stringdata_PluginManagerPrefsGui,
      qt_meta_data_PluginManagerPrefsGui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PluginManagerPrefsGui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PluginManagerPrefsGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PluginManagerPrefsGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PluginManagerPrefsGui))
        return static_cast<void*>(const_cast< PluginManagerPrefsGui*>(this));
    if (!strcmp(_clname, "Ui::PluginManagerPrefsGui"))
        return static_cast< Ui::PluginManagerPrefsGui*>(const_cast< PluginManagerPrefsGui*>(this));
    return PrefsPanel::qt_metacast(_clname);
}

int PluginManagerPrefsGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PrefsPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
