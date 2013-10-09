/****************************************************************************
** Meta object code from reading C++ file 'prefs.h'
**
** Created: Sun Feb 24 21:37:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/prefs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Preferences[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   21,   21,   21, 0x0a,
      22,   33,   21,   21, 0x0a,
      40,   21,   21,   21, 0x0a,
      53,   69,   21,   21, 0x0a,
      76,  104,   21,   21, 0x09,
     117,   21,   21,   21, 0x09,
     142,   21,   21,   21, 0x09,
     171,   21,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Preferences[] = {
    "Preferences\0accept()\0\0setDS(int)\0"
    "layout\0unitChange()\0switchCMS(bool)\0"
    "enable\0showWidgetInStack(QWidget*)\0"
    "widgetToShow\0setActionHistoryLength()\0"
    "applyChangesButton_clicked()\0"
    "backToDefaults_clicked()\0"
};

void Preferences::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Preferences *_t = static_cast<Preferences *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->setDS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->unitChange(); break;
        case 3: _t->switchCMS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showWidgetInStack((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 5: _t->setActionHistoryLength(); break;
        case 6: _t->applyChangesButton_clicked(); break;
        case 7: _t->backToDefaults_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Preferences::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Preferences::staticMetaObject = {
    { &PrefsDialogBase::staticMetaObject, qt_meta_stringdata_Preferences,
      qt_meta_data_Preferences, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Preferences::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Preferences::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Preferences::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Preferences))
        return static_cast<void*>(const_cast< Preferences*>(this));
    return PrefsDialogBase::qt_metacast(_clname);
}

int Preferences::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PrefsDialogBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
