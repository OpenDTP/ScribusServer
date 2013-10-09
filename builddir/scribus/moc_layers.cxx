/****************************************************************************
** Meta object code from reading C++ file 'layers.h'
**
** Created: Sun Feb 24 21:37:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/layers.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LayerPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   28,   28,   28, 0x05,
      29,   28,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   28,   28,   28, 0x0a,
      60,   28,   28,   28, 0x0a,
      71,   28,   28,   28, 0x0a,
      85,   28,   28,   28, 0x0a,
      95,   28,   28,   28, 0x0a,
     107,  127,   28,   28, 0x0a,
     135,   28,   28,   28, 0x0a,
     150,   28,   28,   28, 0x0a,
     163,   28,   28,   28, 0x0a,
     175,   28,   28,   28, 0x0a,
     193,   28,   28,   28, 0x0a,
     214,  239,   28,   28, 0x0a,
     245,   28,   28,   28, 0x0a,
     257,   28,   28,   28, 0x0a,
     273,  294,   28,   28, 0x0a,
     300,  127,   28,   28, 0x0a,
     324,   28,   28,   28, 0x0a,
     338,  359,   28,   28, 0x0a,
     371,   28,   28,   28, 0x2a,
     389,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LayerPalette[] = {
    "LayerPalette\0LayerChanged()\0\0"
    "LayerActivated(int)\0addLayer()\0"
    "dupLayer()\0removeLayer()\0upLayer()\0"
    "downLayer()\0changeName(int,int)\0row,col\0"
    "visibleLayer()\0printLayer()\0lockLayer()\0"
    "flowToggleLayer()\0outlineToggleLayer()\0"
    "toggleAllfromHeader(int)\0index\0"
    "markLayer()\0changeOpacity()\0"
    "changeBlendMode(int)\0blend\0"
    "setActiveLayer(int,int)\0ClearInhalt()\0"
    "markActiveLayer(int)\0layerNumber\0"
    "markActiveLayer()\0languageChange()\0"
};

void LayerPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LayerPalette *_t = static_cast<LayerPalette *>(_o);
        switch (_id) {
        case 0: _t->LayerChanged(); break;
        case 1: _t->LayerActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->addLayer(); break;
        case 3: _t->dupLayer(); break;
        case 4: _t->removeLayer(); break;
        case 5: _t->upLayer(); break;
        case 6: _t->downLayer(); break;
        case 7: _t->changeName((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->visibleLayer(); break;
        case 9: _t->printLayer(); break;
        case 10: _t->lockLayer(); break;
        case 11: _t->flowToggleLayer(); break;
        case 12: _t->outlineToggleLayer(); break;
        case 13: _t->toggleAllfromHeader((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->markLayer(); break;
        case 15: _t->changeOpacity(); break;
        case 16: _t->changeBlendMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->setActiveLayer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->ClearInhalt(); break;
        case 19: _t->markActiveLayer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->markActiveLayer(); break;
        case 21: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LayerPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LayerPalette::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_LayerPalette,
      qt_meta_data_LayerPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LayerPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LayerPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LayerPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LayerPalette))
        return static_cast<void*>(const_cast< LayerPalette*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int LayerPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void LayerPalette::LayerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void LayerPalette::LayerActivated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
