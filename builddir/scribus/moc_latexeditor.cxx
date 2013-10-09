/****************************************************************************
** Meta object code from reading C++ file 'latexeditor.h'
**
** Created: Sun Feb 24 21:37:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/latexeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'latexeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LatexEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   56,   76,   76, 0x09,
      77,  107,   76,   76, 0x09,
     116,  155,   76,   76, 0x09,
     161,   76,   76,   76, 0x0a,
     173,   76,   76,   76, 0x0a,
     189,   76,   76,   76, 0x0a,
     209,   76,   76,   76, 0x0a,
     229,  261,   76,   76, 0x0a,
     263,   76,   76,   76, 0x0a,
     284,   76,   76,   76, 0x0a,
     300,   76,   76,   76, 0x0a,
     337,   76,   76,   76, 0x0a,
     363,   76,   76,   76, 0x0a,
     393,  261,   76,   76, 0x0a,
     444,   76,   76,   76, 0x0a,
     480,   76,   76,   76, 0x0a,
     499,   76,   76,   76, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LatexEditor[] = {
    "LatexEditor\0extEditorFinished(int,QProcess::ExitStatus)\0"
    "exitCode,exitStatus\0\0extEditorFileChanged(QString)\0"
    "filename\0extEditorError(QProcess::ProcessError)\0"
    "error\0okClicked()\0cancelClicked()\0"
    "updateClicked(bool)\0revertClicked(bool)\0"
    "formulaChanged(QString,QString)\0,\0"
    "applicationChanged()\0latexFinished()\0"
    "stateChanged(QProcess::ProcessState)\0"
    "tagButtonClicked(QString)\0"
    "insertButtonClicked(QObject*)\0"
    "newItemSelected(QListWidgetItem*,QListWidgetItem*)\0"
    "itemDoubleClicked(QListWidgetItem*)\0"
    "updateConfigFile()\0extEditorClicked()\0"
};

void LatexEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LatexEditor *_t = static_cast<LatexEditor *>(_o);
        switch (_id) {
        case 0: _t->extEditorFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 1: _t->extEditorFileChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->extEditorError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 3: _t->okClicked(); break;
        case 4: _t->cancelClicked(); break;
        case 5: _t->updateClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->revertClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->formulaChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->applicationChanged(); break;
        case 9: _t->latexFinished(); break;
        case 10: _t->stateChanged((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        case 11: _t->tagButtonClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->insertButtonClicked((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 13: _t->newItemSelected((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 14: _t->itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 15: _t->updateConfigFile(); break;
        case 16: _t->extEditorClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LatexEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LatexEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LatexEditor,
      qt_meta_data_LatexEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LatexEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LatexEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LatexEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LatexEditor))
        return static_cast<void*>(const_cast< LatexEditor*>(this));
    if (!strcmp(_clname, "Ui::LatexEditor"))
        return static_cast< Ui::LatexEditor*>(const_cast< LatexEditor*>(this));
    return QDialog::qt_metacast(_clname);
}

int LatexEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
static const uint qt_meta_data_DataPushButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   41,   46,   46, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   67,   46,   46, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DataPushButton[] = {
    "DataPushButton\0clickedWithData(QObject*)\0"
    "data\0\0buttonClicked(bool)\0checked\0"
};

void DataPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DataPushButton *_t = static_cast<DataPushButton *>(_o);
        switch (_id) {
        case 0: _t->clickedWithData((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->buttonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DataPushButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DataPushButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_DataPushButton,
      qt_meta_data_DataPushButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataPushButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataPushButton))
        return static_cast<void*>(const_cast< DataPushButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int DataPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void DataPushButton::clickedWithData(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_StringPushButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   42,   47,   47, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   68,   47,   47, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StringPushButton[] = {
    "StringPushButton\0clickedWithData(QString)\0"
    "data\0\0buttonClicked(bool)\0checked\0"
};

void StringPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StringPushButton *_t = static_cast<StringPushButton *>(_o);
        switch (_id) {
        case 0: _t->clickedWithData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->buttonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StringPushButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StringPushButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_StringPushButton,
      qt_meta_data_StringPushButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StringPushButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StringPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StringPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StringPushButton))
        return static_cast<void*>(const_cast< StringPushButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int StringPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void StringPushButton::clickedWithData(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
