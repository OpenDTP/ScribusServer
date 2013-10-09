/****************************************************************************
** Meta object code from reading C++ file 'unicodesearch.h'
**
** Created: Sun Feb 24 21:37:25 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/unicodesearch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'unicodesearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UnicodeSearch[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   36,   36,   36, 0x05,
      37,   60,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   36,   36,   36, 0x08,
      91,  115,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UnicodeSearch[] = {
    "UnicodeSearch\0setVisibleState(bool)\0"
    "\0glyphSelected(QString)\0hex\0"
    "searchEdit_returnPressed()\0"
    "itemChosen(QModelIndex)\0index\0"
};

void UnicodeSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UnicodeSearch *_t = static_cast<UnicodeSearch *>(_o);
        switch (_id) {
        case 0: _t->setVisibleState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->glyphSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->searchEdit_returnPressed(); break;
        case 3: _t->itemChosen((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UnicodeSearch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UnicodeSearch::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UnicodeSearch,
      qt_meta_data_UnicodeSearch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UnicodeSearch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UnicodeSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UnicodeSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UnicodeSearch))
        return static_cast<void*>(const_cast< UnicodeSearch*>(this));
    if (!strcmp(_clname, "Ui::UnicodeSearch"))
        return static_cast< Ui::UnicodeSearch*>(const_cast< UnicodeSearch*>(this));
    return QDialog::qt_metacast(_clname);
}

int UnicodeSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void UnicodeSearch::setVisibleState(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UnicodeSearch::glyphSelected(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_UnicodeSearchModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_UnicodeSearchModel[] = {
    "UnicodeSearchModel\0"
};

void UnicodeSearchModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UnicodeSearchModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UnicodeSearchModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_UnicodeSearchModel,
      qt_meta_data_UnicodeSearchModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UnicodeSearchModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UnicodeSearchModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UnicodeSearchModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UnicodeSearchModel))
        return static_cast<void*>(const_cast< UnicodeSearchModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int UnicodeSearchModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UnicodeChooseButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   43,   43,   43, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   43,   43,   43, 0x0a,
      61,   43,   43,   43, 0x08,
      80,  103,   43,   43, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UnicodeChooseButton[] = {
    "UnicodeChooseButton\0chosenUnicode(QString)\0"
    "\0languageChange()\0self_toggled(bool)\0"
    "glyphSelected(QString)\0hex\0"
};

void UnicodeChooseButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UnicodeChooseButton *_t = static_cast<UnicodeChooseButton *>(_o);
        switch (_id) {
        case 0: _t->chosenUnicode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->languageChange(); break;
        case 2: _t->self_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->glyphSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UnicodeChooseButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UnicodeChooseButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_UnicodeChooseButton,
      qt_meta_data_UnicodeChooseButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UnicodeChooseButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UnicodeChooseButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UnicodeChooseButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UnicodeChooseButton))
        return static_cast<void*>(const_cast< UnicodeChooseButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int UnicodeChooseButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void UnicodeChooseButton::chosenUnicode(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
