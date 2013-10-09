/****************************************************************************
** Meta object code from reading C++ file 'scrapbookpalette.h'
**
** Created: Sun Feb 24 21:37:18 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/scrapbookpalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scrapbookpalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BibView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,   28,   28,   28, 0x05,
      29,   28,   28,   28, 0x05,
      42,   28,   28,   28, 0x05,
      54,   28,   28,   28, 0x05,
      66,   86,   28,   28, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_BibView[] = {
    "BibView\0ToggleAllPalettes()\0\0Schliessen()\0"
    "CloseMpal()\0CloseTpal()\0objDropped(QString)\0"
    "text\0"
};

void BibView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BibView *_t = static_cast<BibView *>(_o);
        switch (_id) {
        case 0: _t->ToggleAllPalettes(); break;
        case 1: _t->Schliessen(); break;
        case 2: _t->CloseMpal(); break;
        case 3: _t->CloseTpal(); break;
        case 4: _t->objDropped((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BibView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BibView::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_BibView,
      qt_meta_data_BibView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BibView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BibView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BibView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BibView))
        return static_cast<void*>(const_cast< BibView*>(this));
    return QListWidget::qt_metacast(_clname);
}

int BibView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
void BibView::ToggleAllPalettes()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void BibView::Schliessen()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void BibView::CloseMpal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void BibView::CloseTpal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void BibView::objDropped(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
static const uint qt_meta_data_Biblio[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,   27,   27,   27, 0x05,
      28,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   27,   27,   27, 0x0a,
      72,   93,   27,   27, 0x0a,
      98,  127,   27,   27, 0x0a,
     140,  176,   27,   27, 0x08,
     180,   27,   27,   27, 0x08,
     200,  220,   27,   27, 0x08,
     222,  235,  238,   27, 0x08,
     243,  235,   27,   27, 0x08,
     256,   27,   27,   27, 0x08,
     268,   27,   27,   27, 0x08,
     283,   27,   27,   27, 0x08,
     295,   27,   27,   27, 0x08,
     304,   27,   27,   27, 0x08,
     311,   27,   27,   27, 0x08,
     320,   27,   27,   27, 0x08,
     331,  347,   27,   27, 0x08,
     353,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Biblio[] = {
    "Biblio\0updateRecentMenue()\0\0"
    "pasteToActualPage(QString)\0languageChange()\0"
    "ObjFromMenu(QString)\0text\0"
    "ObjFromMainMenu(QString,int)\0text,scrapID\0"
    "handleDoubleClick(QListWidgetItem*)\0"
    "ite\0handlePasteToPage()\0HandleMouse(QPoint)\0"
    "p\0copyObj(int)\0id\0bool\0moveObj(int)\0"
    "deleteObj()\0deleteAllObj()\0renameObj()\0"
    "NewLib()\0Load()\0SaveAs()\0closeLib()\0"
    "libChanged(int)\0index\0Import()\0"
};

void Biblio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Biblio *_t = static_cast<Biblio *>(_o);
        switch (_id) {
        case 0: _t->updateRecentMenue(); break;
        case 1: _t->pasteToActualPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->languageChange(); break;
        case 3: _t->ObjFromMenu((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->ObjFromMainMenu((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->handleDoubleClick((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->handlePasteToPage(); break;
        case 7: _t->HandleMouse((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 8: { bool _r = _t->copyObj((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->moveObj((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->deleteObj(); break;
        case 11: _t->deleteAllObj(); break;
        case 12: _t->renameObj(); break;
        case 13: _t->NewLib(); break;
        case 14: _t->Load(); break;
        case 15: _t->SaveAs(); break;
        case 16: _t->closeLib(); break;
        case 17: _t->libChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->Import(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Biblio::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Biblio::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_Biblio,
      qt_meta_data_Biblio, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Biblio::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Biblio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Biblio::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Biblio))
        return static_cast<void*>(const_cast< Biblio*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int Biblio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void Biblio::updateRecentMenue()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Biblio::pasteToActualPage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
