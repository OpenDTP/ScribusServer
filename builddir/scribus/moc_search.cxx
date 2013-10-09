/****************************************************************************
** Meta object code from reading C++ file 'search.h'
**
** Created: Sun Feb 24 21:37:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/search.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'search.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SearchReplace[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   31,   31,   31, 0x05,
      32,   31,   31,   31, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   31,   31,   31, 0x0a,
      57,   31,   31,   31, 0x0a,
      71,   31,   31,   31, 0x0a,
      88,   31,   31,   31, 0x0a,
     105,   31,   31,   31, 0x0a,
     125,   31,   31,   31, 0x0a,
     145,   31,   31,   31, 0x0a,
     164,   31,   31,   31, 0x0a,
     183,   31,   31,   31, 0x0a,
     201,   31,   31,   31, 0x0a,
     220,   31,   31,   31, 0x0a,
     240,   31,   31,   31, 0x0a,
     261,   31,   31,   31, 0x0a,
     283,   31,   31,   31, 0x0a,
     301,   31,   31,   31, 0x0a,
     322,   31,   31,   31, 0x0a,
     343,   31,   31,   31, 0x0a,
     363,   31,   31,   31, 0x0a,
     383,   31,   31,   31, 0x0a,
     402,   31,   31,   31, 0x0a,
     422,   31,   31,   31, 0x0a,
     443,   31,   31,   31, 0x0a,
     465,   31,   31,   31, 0x0a,
     488,   31,   31,   31, 0x0a,
     501,   31,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SearchReplace[] = {
    "SearchReplace\0NewFont(QString)\0\0"
    "NewAbs(int)\0slotSearch()\0slotReplace()\0"
    "slotReplaceAll()\0enableTxSearch()\0"
    "enableStyleSearch()\0enableAlignSearch()\0"
    "enableFontSearch()\0enableSizeSearch()\0"
    "enableEffSearch()\0enableFillSearch()\0"
    "enableFillSSearch()\0enableStrokeSearch()\0"
    "enableStrokeSSearch()\0enableTxReplace()\0"
    "enableStyleReplace()\0enableAlignReplace()\0"
    "enableFontReplace()\0enableSizeReplace()\0"
    "enableEffReplace()\0enableFillReplace()\0"
    "enableFillSReplace()\0enableStrokeReplace()\0"
    "enableStrokeSReplace()\0writePrefs()\0"
    "clear()\0"
};

void SearchReplace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SearchReplace *_t = static_cast<SearchReplace *>(_o);
        switch (_id) {
        case 0: _t->NewFont((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->NewAbs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotSearch(); break;
        case 3: _t->slotReplace(); break;
        case 4: _t->slotReplaceAll(); break;
        case 5: _t->enableTxSearch(); break;
        case 6: _t->enableStyleSearch(); break;
        case 7: _t->enableAlignSearch(); break;
        case 8: _t->enableFontSearch(); break;
        case 9: _t->enableSizeSearch(); break;
        case 10: _t->enableEffSearch(); break;
        case 11: _t->enableFillSearch(); break;
        case 12: _t->enableFillSSearch(); break;
        case 13: _t->enableStrokeSearch(); break;
        case 14: _t->enableStrokeSSearch(); break;
        case 15: _t->enableTxReplace(); break;
        case 16: _t->enableStyleReplace(); break;
        case 17: _t->enableAlignReplace(); break;
        case 18: _t->enableFontReplace(); break;
        case 19: _t->enableSizeReplace(); break;
        case 20: _t->enableEffReplace(); break;
        case 21: _t->enableFillReplace(); break;
        case 22: _t->enableFillSReplace(); break;
        case 23: _t->enableStrokeReplace(); break;
        case 24: _t->enableStrokeSReplace(); break;
        case 25: _t->writePrefs(); break;
        case 26: _t->clear(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SearchReplace::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SearchReplace::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SearchReplace,
      qt_meta_data_SearchReplace, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SearchReplace::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SearchReplace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SearchReplace::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchReplace))
        return static_cast<void*>(const_cast< SearchReplace*>(this));
    return QDialog::qt_metacast(_clname);
}

int SearchReplace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void SearchReplace::NewFont(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SearchReplace::NewAbs(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
