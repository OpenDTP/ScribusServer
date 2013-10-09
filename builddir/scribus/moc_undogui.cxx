/****************************************************************************
** Meta object code from reading C++ file 'undogui.h'
**
** Created: Sun Feb 24 21:37:25 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/undogui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'undogui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UndoGui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,   47,   60,   60, 0x0a,
      61,   47,   60,   60, 0x0a,
     100,  116,   60,   60, 0x0a,
     122,  116,   60,   60, 0x0a,
     138,   60,   60,   60, 0x0a,
     158,   60,   60,   60, 0x0a,
     170,   60,   60,   60, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UndoGui[] = {
    "UndoGui\0insertUndoItem(UndoObject*,UndoState*)\0"
    "target,state\0\0insertRedoItem(UndoObject*,UndoState*)\0"
    "updateUndo(int)\0steps\0updateRedo(int)\0"
    "updateUndoActions()\0clearRedo()\0"
    "popBack()\0"
};

void UndoGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UndoGui *_t = static_cast<UndoGui *>(_o);
        switch (_id) {
        case 0: _t->insertUndoItem((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2]))); break;
        case 1: _t->insertRedoItem((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2]))); break;
        case 2: _t->updateUndo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateRedo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateUndoActions(); break;
        case 5: _t->clearRedo(); break;
        case 6: _t->popBack(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UndoGui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UndoGui::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_UndoGui,
      qt_meta_data_UndoGui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UndoGui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UndoGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UndoGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UndoGui))
        return static_cast<void*>(const_cast< UndoGui*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int UndoGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_UndoWidget[] = {

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
      11,   21,   27,   27, 0x05,
      28,   21,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   27,   27,   27, 0x08,
      52,   27,   27,   27, 0x08,
      66,   92,   27,   27, 0x08,
      95,   92,   27,   27, 0x08,
     121,  160,   27,   27, 0x0a,
     173,  160,   27,   27, 0x0a,
     212,   21,   27,   27, 0x0a,
     228,   21,   27,   27, 0x0a,
     244,   27,   27,   27, 0x0a,
     256,   27,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UndoWidget[] = {
    "UndoWidget\0undo(int)\0steps\0\0redo(int)\0"
    "undoClicked()\0redoClicked()\0"
    "undoMenuClicked(QAction*)\0id\0"
    "redoMenuClicked(QAction*)\0"
    "insertUndoItem(UndoObject*,UndoState*)\0"
    "target,state\0insertRedoItem(UndoObject*,UndoState*)\0"
    "updateUndo(int)\0updateRedo(int)\0"
    "clearRedo()\0popBack()\0"
};

void UndoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UndoWidget *_t = static_cast<UndoWidget *>(_o);
        switch (_id) {
        case 0: _t->undo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->redo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->undoClicked(); break;
        case 3: _t->redoClicked(); break;
        case 4: _t->undoMenuClicked((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->redoMenuClicked((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->insertUndoItem((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2]))); break;
        case 7: _t->insertRedoItem((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2]))); break;
        case 8: _t->updateUndo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->updateRedo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->clearRedo(); break;
        case 11: _t->popBack(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UndoWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UndoWidget::staticMetaObject = {
    { &UndoGui::staticMetaObject, qt_meta_stringdata_UndoWidget,
      qt_meta_data_UndoWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UndoWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UndoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UndoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UndoWidget))
        return static_cast<void*>(const_cast< UndoWidget*>(this));
    return UndoGui::qt_metacast(_clname);
}

int UndoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UndoGui::qt_metacall(_c, _id, _a);
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
void UndoWidget::undo(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UndoWidget::redo(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_UndoPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   29,   39,   39, 0x05,
      40,   50,   39,   39, 0x05,
      56,   50,   39,   39, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   39,   39,   39, 0x08,
      80,   39,   39,   39, 0x08,
      94,  115,   39,   39, 0x08,
     117,  115,   39,   39, 0x08,
     147,   39,   39,   39, 0x08,
     163,  191,   39,   39, 0x08,
     194,   39,   39,   39, 0x0a,
     211,  250,   39,   39, 0x0a,
     263,  250,   39,   39, 0x0a,
     302,   50,   39,   39, 0x0a,
     318,   50,   39,   39, 0x0a,
     334,   39,   39,   39, 0x0a,
     346,   39,   39,   39, 0x0a,
     356,   39,   39,   39, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UndoPalette[] = {
    "UndoPalette\0objectMode(bool)\0isEnabled\0"
    "\0undo(int)\0steps\0redo(int)\0undoClicked()\0"
    "redoClicked()\0undoListClicked(int)\0i\0"
    "showToolTip(QListWidgetItem*)\0"
    "removeToolTip()\0objectCheckBoxClicked(bool)\0"
    "on\0languageChange()\0"
    "insertUndoItem(UndoObject*,UndoState*)\0"
    "target,state\0insertRedoItem(UndoObject*,UndoState*)\0"
    "updateUndo(int)\0updateRedo(int)\0"
    "clearRedo()\0popBack()\0updateFromPrefs()\0"
};

void UndoPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UndoPalette *_t = static_cast<UndoPalette *>(_o);
        switch (_id) {
        case 0: _t->objectMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->undo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->redo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->undoClicked(); break;
        case 4: _t->redoClicked(); break;
        case 5: _t->undoListClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->showToolTip((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->removeToolTip(); break;
        case 8: _t->objectCheckBoxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->languageChange(); break;
        case 10: _t->insertUndoItem((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2]))); break;
        case 11: _t->insertRedoItem((*reinterpret_cast< UndoObject*(*)>(_a[1])),(*reinterpret_cast< UndoState*(*)>(_a[2]))); break;
        case 12: _t->updateUndo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->updateRedo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->clearRedo(); break;
        case 15: _t->popBack(); break;
        case 16: _t->updateFromPrefs(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UndoPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UndoPalette::staticMetaObject = {
    { &UndoGui::staticMetaObject, qt_meta_stringdata_UndoPalette,
      qt_meta_data_UndoPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UndoPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UndoPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UndoPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UndoPalette))
        return static_cast<void*>(const_cast< UndoPalette*>(this));
    return UndoGui::qt_metacast(_clname);
}

int UndoPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UndoGui::qt_metacall(_c, _id, _a);
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
void UndoPalette::objectMode(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UndoPalette::undo(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UndoPalette::redo(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
