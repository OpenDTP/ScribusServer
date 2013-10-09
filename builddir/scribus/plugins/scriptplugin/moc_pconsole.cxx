/****************************************************************************
** Meta object code from reading C++ file 'pconsole.h'
**
** Created: Sun Feb 24 21:57:37 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scribus/plugins/scriptplugin/pconsole.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonConsole[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   33,   33,   33, 0x05,
      34,   33,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   33,   33,   33, 0x0a,
      64,   33,   33,   33, 0x0a,
      90,   33,   33,   33, 0x0a,
     102,   33,   33,   33, 0x0a,
     114,   33,   33,   33, 0x0a,
     128,   33,   33,   33, 0x0a,
     146,   33,   33,   33, 0x0a,
     158,   33,   33,   33, 0x0a,
     194,   33,   33,   33, 0x09,
     211,  233,   33,   33, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PythonConsole[] = {
    "PythonConsole\0paletteShown(bool)\0\0"
    "runCommand()\0slot_runScript()\0"
    "slot_runScriptAsConsole()\0slot_open()\0"
    "slot_save()\0slot_saveAs()\0slot_saveOutput()\0"
    "slot_quit()\0commandEdit_cursorPositionChanged()\0"
    "languageChange()\0documentChanged(bool)\0"
    "state\0"
};

void PythonConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonConsole *_t = static_cast<PythonConsole *>(_o);
        switch (_id) {
        case 0: _t->paletteShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->runCommand(); break;
        case 2: _t->slot_runScript(); break;
        case 3: _t->slot_runScriptAsConsole(); break;
        case 4: _t->slot_open(); break;
        case 5: _t->slot_save(); break;
        case 6: _t->slot_saveAs(); break;
        case 7: _t->slot_saveOutput(); break;
        case 8: _t->slot_quit(); break;
        case 9: _t->commandEdit_cursorPositionChanged(); break;
        case 10: _t->languageChange(); break;
        case 11: _t->documentChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonConsole::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonConsole::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PythonConsole,
      qt_meta_data_PythonConsole, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonConsole::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonConsole))
        return static_cast<void*>(const_cast< PythonConsole*>(this));
    if (!strcmp(_clname, "Ui::PythonConsole"))
        return static_cast< Ui::PythonConsole*>(const_cast< PythonConsole*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PythonConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PythonConsole::paletteShown(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PythonConsole::runCommand()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
