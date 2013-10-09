/****************************************************************************
** Meta object code from reading C++ file 'pagepalette.h'
**
** Created: Sun Feb 24 21:37:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/pagepalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagepalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SeList[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,   26,   26,   26, 0x05,
      27,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SeList[] = {
    "SeList\0thumbnailChanged()\0\0"
    "DelMaster(QString)\0toggleThumbnail()\0"
};

void SeList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SeList *_t = static_cast<SeList *>(_o);
        switch (_id) {
        case 0: _t->thumbnailChanged(); break;
        case 1: _t->DelMaster((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->toggleThumbnail(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SeList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SeList::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_SeList,
      qt_meta_data_SeList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SeList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SeList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SeList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SeList))
        return static_cast<void*>(const_cast< SeList*>(this));
    return QListWidget::qt_metacast(_clname);
}

int SeList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SeList::thumbnailChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SeList::DelMaster(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_SeView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,   28,   30,   30, 0x05,
      31,   28,   30,   30, 0x05,
      52,   28,   30,   30, 0x05,
      70,   89,   30,   30, 0x05,
      92,   30,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
     105,   30,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SeView[] = {
    "SeView\0UseTemp(QString,int)\0,\0\0"
    "NewPage(int,QString)\0movePage(int,int)\0"
    "Click(int,int,int)\0,,\0DelPage(int)\0"
    "ToggleNam()\0"
};

void SeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SeView *_t = static_cast<SeView *>(_o);
        switch (_id) {
        case 0: _t->UseTemp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->NewPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->movePage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->Click((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->DelPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ToggleNam(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SeView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SeView::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_SeView,
      qt_meta_data_SeView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SeView))
        return static_cast<void*>(const_cast< SeView*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int SeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SeView::UseTemp(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SeView::NewPage(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SeView::movePage(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SeView::Click(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SeView::DelPage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
static const uint qt_meta_data_TrashBin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,   22,   22,   22, 0x05,
      23,   22,   22,   22, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_TrashBin[] = {
    "TrashBin\0DelPage(int)\0\0DelMaster(QString)\0"
};

void TrashBin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TrashBin *_t = static_cast<TrashBin *>(_o);
        switch (_id) {
        case 0: _t->DelPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->DelMaster((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TrashBin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TrashBin::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_TrashBin,
      qt_meta_data_TrashBin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TrashBin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TrashBin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TrashBin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TrashBin))
        return static_cast<void*>(const_cast< TrashBin*>(this));
    return QLabel::qt_metacast(_clname);
}

int TrashBin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void TrashBin::DelPage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TrashBin::DelMaster(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_PagePalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   30,   30,   30, 0x05,
      31,   30,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   67,   30,   30, 0x0a,
      72,   98,   30,   30, 0x0a,
     102,  129,   30,   30, 0x0a,
     133,  164,   30,   30, 0x0a,
     170,   30,   30,   30, 0x0a,
     190,  212,   30,   30, 0x0a,
     219,  240,   30,   30, 0x0a,
     243,   30,   30,   30, 0x0a,
     260,   30,   30,   30, 0x0a,
     275,   30,   30,   30, 0x0a,
     285,  300,   30,   30, 0x0a,
     303,   30,   30,   30, 0x0a,
     319,  343,  352,   30, 0x0a,
     360,   30,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PagePalette[] = {
    "PagePalette\0EditTemp(QString)\0\0"
    "gotoPage(int)\0setView(ScribusView*)\0"
    "view\0deleteMasterPage(QString)\0tmp\0"
    "pageView_movePage(int,int)\0r,c\0"
    "pageView_gotoPage(int,int,int)\0r,c,b\0"
    "enablePalette(bool)\0handlePageLayout(int)\0"
    "layout\0handleFirstPage(int)\0fp\0"
    "rebuildMasters()\0rebuildPages()\0"
    "Rebuild()\0markPage(uint)\0nr\0selMasterPage()\0"
    "CreateIcon(int,QPixmap)\0nr,pixin\0"
    "QPixmap\0languageChange()\0"
};

void PagePalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PagePalette *_t = static_cast<PagePalette *>(_o);
        switch (_id) {
        case 0: _t->EditTemp((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->gotoPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setView((*reinterpret_cast< ScribusView*(*)>(_a[1]))); break;
        case 3: _t->deleteMasterPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->pageView_movePage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->pageView_gotoPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->enablePalette((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: _t->handlePageLayout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->handleFirstPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->rebuildMasters(); break;
        case 10: _t->rebuildPages(); break;
        case 11: _t->Rebuild(); break;
        case 12: _t->markPage((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 13: _t->selMasterPage(); break;
        case 14: { QPixmap _r = _t->CreateIcon((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QPixmap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 15: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PagePalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PagePalette::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_PagePalette,
      qt_meta_data_PagePalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PagePalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PagePalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PagePalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PagePalette))
        return static_cast<void*>(const_cast< PagePalette*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int PagePalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void PagePalette::EditTemp(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PagePalette::gotoPage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
