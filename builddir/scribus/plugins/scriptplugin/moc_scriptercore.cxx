/****************************************************************************
** Meta object code from reading C++ file 'scriptercore.h'
**
** Created: Sun Feb 24 21:57:38 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scribus/plugins/scriptplugin/scriptercore.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scriptercore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ScripterCore[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   31,   31,   31, 0x0a,
      32,   51,   31,   31, 0x0a,
      64,   86,   31,   31, 0x0a,
      89,  121,   31,   31, 0x0a,
     148,  175,   31,   31, 0x2a,
     184,  207,   31,   31, 0x0a,
     214,   31,   31,   31, 0x0a,
     242,   31,   31,   31, 0x0a,
     256,   31,   31,   31, 0x0a,
     270,   31,  293,   31, 0x0a,
     298,   31,   31,   31, 0x0a,
     321,   31,   31,   31, 0x0a,
     340,   31,   31,   31, 0x0a,
     357,   31,   31,   31, 0x0a,
     373,   31,  293,   31, 0x0a,
     393,  419,   31,   31, 0x0a,
     429,  456,   31,   31, 0x0a,
     463,   31,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ScripterCore[] = {
    "ScripterCore\0runScriptDialog()\0\0"
    "StdScript(QString)\0filebasename\0"
    "RecentScript(QString)\0fn\0"
    "slotRunScriptFile(QString,bool)\0"
    "fileName,inMainInterpreter\0"
    "slotRunScriptFile(QString)\0fileName\0"
    "slotRunScript(QString)\0Script\0"
    "slotInteractiveScript(bool)\0slotExecute()\0"
    "aboutScript()\0setupMainInterpreter()\0"
    "bool\0initExtensionScripts()\0"
    "runStartupScript()\0languageChange()\0"
    "startupScript()\0extensionsEnabled()\0"
    "setStartupScript(QString)\0newScript\0"
    "setExtensionsEnabled(bool)\0enable\0"
    "updateSyntaxHighlighter()\0"
};

void ScripterCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScripterCore *_t = static_cast<ScripterCore *>(_o);
        switch (_id) {
        case 0: _t->runScriptDialog(); break;
        case 1: _t->StdScript((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->RecentScript((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->slotRunScriptFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->slotRunScriptFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->slotRunScript((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slotInteractiveScript((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->slotExecute(); break;
        case 8: _t->aboutScript(); break;
        case 9: { bool _r = _t->setupMainInterpreter();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->initExtensionScripts(); break;
        case 11: _t->runStartupScript(); break;
        case 12: _t->languageChange(); break;
        case 13: _t->startupScript(); break;
        case 14: { bool _r = _t->extensionsEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: _t->setStartupScript((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->setExtensionsEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->updateSyntaxHighlighter(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ScripterCore::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScripterCore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ScripterCore,
      qt_meta_data_ScripterCore, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScripterCore::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScripterCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScripterCore::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScripterCore))
        return static_cast<void*>(const_cast< ScripterCore*>(this));
    return QObject::qt_metacast(_clname);
}

int ScripterCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
