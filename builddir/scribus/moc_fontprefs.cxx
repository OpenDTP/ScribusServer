/****************************************************************************
** Meta object code from reading C++ file 'fontprefs.h'
**
** Created: Sun Feb 24 21:37:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/fontprefs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fontprefs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FontPrefs[] = {

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
      10,   30,   34,   34, 0x0a,
      35,   34,   34,   34, 0x0a,
      50,   34,   34,   34, 0x0a,
      61,   90,   34,   34, 0x0a,
      92,   34,   34,   34, 0x0a,
     102,   34,   34,   34, 0x0a,
     115,   34,   34,   34, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FontPrefs[] = {
    "FontPrefs\0ReplaceSel(int,int)\0r,c\0\0"
    "UpdateFliste()\0DelEntry()\0"
    "SelectPath(QListWidgetItem*)\0c\0AddPath()\0"
    "ChangePath()\0DelPath()\0"
};

void FontPrefs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FontPrefs *_t = static_cast<FontPrefs *>(_o);
        switch (_id) {
        case 0: _t->ReplaceSel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->UpdateFliste(); break;
        case 2: _t->DelEntry(); break;
        case 3: _t->SelectPath((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->AddPath(); break;
        case 5: _t->ChangePath(); break;
        case 6: _t->DelPath(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FontPrefs::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FontPrefs::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_FontPrefs,
      qt_meta_data_FontPrefs, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FontPrefs::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FontPrefs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FontPrefs::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FontPrefs))
        return static_cast<void*>(const_cast< FontPrefs*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int FontPrefs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
