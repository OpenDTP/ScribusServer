/****************************************************************************
** Meta object code from reading C++ file 'pagelayout.h'
**
** Created: Sun Feb 24 21:37:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/pagelayout.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagelayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PageListWidget[] = {

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

static const char qt_meta_stringdata_PageListWidget[] = {
    "PageListWidget\0"
};

void PageListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PageListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PageListWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_PageListWidget,
      qt_meta_data_PageListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageListWidget))
        return static_cast<void*>(const_cast< PageListWidget*>(this));
    return QListWidget::qt_metacast(_clname);
}

int PageListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PageLayouts[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   32,   32,   32, 0x05,
      33,   32,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   87,   32,   32, 0x0a,
      90,   87,   32,   32, 0x0a,
     108,   32,   32,   32, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PageLayouts[] = {
    "PageLayouts\0selectedLayout(int)\0\0"
    "selectedFirstPage(int)\0"
    "itemSelected(QListWidgetItem*)\0ic\0"
    "itemSelected(int)\0languageChange()\0"
};

void PageLayouts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PageLayouts *_t = static_cast<PageLayouts *>(_o);
        switch (_id) {
        case 0: _t->selectedLayout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->selectedFirstPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->itemSelected((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->itemSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PageLayouts::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PageLayouts::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_PageLayouts,
      qt_meta_data_PageLayouts, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageLayouts::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageLayouts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageLayouts::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageLayouts))
        return static_cast<void*>(const_cast< PageLayouts*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int PageLayouts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
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
void PageLayouts::selectedLayout(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PageLayouts::selectedFirstPage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
