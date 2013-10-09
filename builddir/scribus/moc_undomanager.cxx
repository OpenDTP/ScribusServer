/****************************************************************************
** Meta object code from reading C++ file 'undomanager.h'
**
** Created: Sun Feb 24 21:37:25 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/undomanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'undomanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UndoManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   46,   59,   59, 0x05,
      60,   76,   59,   59, 0x05,
      82,   76,   59,   59, 0x05,
      98,   59,   59,   59, 0x05,
     110,   59,   59,   59, 0x05,
     120,   59,   59,   59, 0x05,
     136,   59,   59,   59, 0x05,

 // slots: signature, parameters, type, tag, flags
     151,   59,   59,   59, 0x0a,
     168,  208,   59,   59, 0x0a,
     234,   46,   59,   59, 0x2a,
     265,  313,   59,   59, 0x0a,
     350,  389,   59,   59, 0x2a,
     413,   76,   59,   59, 0x0a,
     423,   76,   59,   59, 0x0a,
     433,  449,   59,   59, 0x0a,
     453,   76,   59,   59, 0x0a,
     475,   76,   59,   59, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UndoManager[] = {
    "UndoManager\0newAction(UndoObject*,UndoState*)\0"
    "target,state\0\0undoSignal(int)\0steps\0"
    "redoSignal(int)\0clearRedo()\0popBack()\0"
    "undoRedoBegin()\0undoRedoDone()\0"
    "languageChange()\0"
    "action(UndoObject*,UndoState*,QPixmap*)\0"
    "target,state,targetPixmap\0"
    "action(UndoObject*,UndoState*)\0"
    "action(UndoObject*,UndoState*,QString,QPixmap*)\0"
    "target,state,targetName,targetPixmap\0"
    "action(UndoObject*,UndoState*,QString)\0"
    "target,state,targetName\0undo(int)\0"
    "redo(int)\0showObject(int)\0uid\0"
    "setHistoryLength(int)\0setAllHistoryLengths(int)\0"
};

void UndoManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UndoManager *_t = static_cast<UndoManager *>(_o);
        switch (_id) {
        case 0: _t->newAction((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2]))); break;
        case 1: _t->undoSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->redoSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->clearRedo(); break;
        case 4: _t->popBack(); break;
        case 5: _t->undoRedoBegin(); break;
        case 6: _t->undoRedoDone(); break;
        case 7: _t->languageChange(); break;
        case 8: _t->action((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2])),(*reinterpret_cast< QPixmap*(*)>(_a[3]))); break;
        case 9: _t->action((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2]))); break;
        case 10: _t->action((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QPixmap*(*)>(_a[4]))); break;
        case 11: _t->action((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 12: _t->undo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->redo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->showObject((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setHistoryLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->setAllHistoryLengths((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UndoManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UndoManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UndoManager,
      qt_meta_data_UndoManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UndoManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UndoManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UndoManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UndoManager))
        return static_cast<void*>(const_cast< UndoManager*>(this));
    return QObject::qt_metacast(_clname);
}

int UndoManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void UndoManager::newAction(UndoObject * _t1, UndoState * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UndoManager::undoSignal(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UndoManager::redoSignal(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UndoManager::clearRedo()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UndoManager::popBack()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void UndoManager::undoRedoBegin()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void UndoManager::undoRedoDone()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
