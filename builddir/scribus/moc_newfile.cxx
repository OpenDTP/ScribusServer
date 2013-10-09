/****************************************************************************
** Meta object code from reading C++ file 'newfile.h'
**
** Created: Sun Feb 24 21:37:12 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/newfile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PageLayoutsWidget[] = {

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

static const char qt_meta_stringdata_PageLayoutsWidget[] = {
    "PageLayoutsWidget\0"
};

void PageLayoutsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PageLayoutsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PageLayoutsWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_PageLayoutsWidget,
      qt_meta_data_PageLayoutsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageLayoutsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageLayoutsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageLayoutsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageLayoutsWidget))
        return static_cast<void*>(const_cast< PageLayoutsWidget*>(this));
    return QListWidget::qt_metacast(_clname);
}

int PageLayoutsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_NewDoc[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,   25,   27,   27, 0x0a,
      28,   25,   27,   27, 0x0a,
      45,   62,   27,   27, 0x0a,
      65,   96,   27,   27, 0x0a,
      99,   27,   27,   27, 0x0a,
     117,   25,   27,   27, 0x0a,
     137,  150,   27,   27, 0x0a,
     152,   27,   27,   27, 0x0a,
     161,  181,   27,   27, 0x0a,
     185,   27,   27,   27, 0x0a,
     206,  224,   27,   27, 0x0a,
     231,   27,   27,   27, 0x0a,
     264,   27,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NewDoc[] = {
    "NewDoc\0setHeight(double)\0v\0\0"
    "setWidth(double)\0selectItem(uint)\0nr\0"
    "itemSelected(QListWidgetItem*)\0ic\0"
    "handleAutoFrame()\0setDistance(double)\0"
    "setUnit(int)\0u\0ExitOK()\0setOrientation(int)\0"
    "ori\0setPageSize(QString)\0setDocLayout(int)\0"
    "layout\0recentDocListBox_doubleClicked()\0"
    "openFile()\0"
};

void NewDoc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NewDoc *_t = static_cast<NewDoc *>(_o);
        switch (_id) {
        case 0: _t->setHeight((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->selectItem((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->itemSelected((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->handleAutoFrame(); break;
        case 5: _t->setDistance((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setUnit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->ExitOK(); break;
        case 8: _t->setOrientation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setPageSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->setDocLayout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->recentDocListBox_doubleClicked(); break;
        case 12: _t->openFile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NewDoc::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NewDoc::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NewDoc,
      qt_meta_data_NewDoc, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NewDoc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NewDoc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NewDoc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NewDoc))
        return static_cast<void*>(const_cast< NewDoc*>(this));
    return QDialog::qt_metacast(_clname);
}

int NewDoc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
