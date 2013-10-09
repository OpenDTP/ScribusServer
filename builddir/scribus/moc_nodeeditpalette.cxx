/****************************************************************************
** Meta object code from reading C++ file 'nodeeditpalette.h'
**
** Created: Sun Feb 24 21:37:13 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/nodeeditpalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nodeeditpalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NodePalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   25,   25,   25, 0x05,
      26,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   25,   25,   25, 0x08,
      64,   25,   25,   25, 0x08,
      72,   25,   25,   25, 0x08,
      79,   25,   25,   25, 0x08,
      86,   25,   25,   25, 0x08,
      98,   25,   25,   25, 0x08,
     107,   25,   25,   25, 0x08,
     117,   25,   25,   25, 0x08,
     132,   25,   25,   25, 0x08,
     148,   25,   25,   25, 0x08,
     163,   25,   25,   25, 0x08,
     189,   25,   25,   25, 0x08,
     213,   25,   25,   25, 0x08,
     227,   25,   25,   25, 0x08,
     239,   25,   25,   25, 0x08,
     249,   25,   25,   25, 0x08,
     259,   25,   25,   25, 0x08,
     270,   25,   25,   25, 0x08,
     280,   25,   25,   25, 0x08,
     291,   25,   25,   25, 0x08,
     302,   25,   25,   25, 0x08,
     313,   25,   25,   25, 0x08,
     325,   25,   25,   25, 0x08,
     334,   25,   25,   25, 0x08,
     343,   25,   25,   25, 0x08,
     352,   25,   25,   25, 0x08,
     361,   25,   25,   25, 0x08,
     377,   25,   25,   25, 0x08,
     393,   25,   25,   25, 0x0a,
     401,  422,   25,   25, 0x0a,
     426,  446,   25,   25, 0x0a,
     455,   25,   25,   25, 0x0a,
     464,  485,   25,   25, 0x0a,
     494,   25,   25,   25, 0x0a,
     511,   25,   25,   25, 0x0a,
     524,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NodePalette[] = {
    "NodePalette\0Schliessen()\0\0DocChanged()\0"
    "closeEvent(QCloseEvent*)\0MoveK()\0"
    "AddN()\0DelN()\0MovePoint()\0SetSym()\0"
    "SetAsym()\0ResetControl()\0Reset1Control()\0"
    "ResetContour()\0ResetContourToImageClip()\0"
    "ResetShapeToImageClip()\0CloseBezier()\0"
    "SplitPoly()\0MirrorH()\0MirrorV()\0"
    "doRotCCW()\0doRotCW()\0doShrink()\0"
    "doExpand()\0doReduce()\0doEnlarge()\0"
    "ShearR()\0ShearL()\0ShearU()\0ShearD()\0"
    "ToggleAbsMode()\0ToggleConMode()\0MoveN()\0"
    "SetXY(double,double)\0x,y\0HaveNode(bool,bool)\0"
    "have,mov\0IsOpen()\0PolyStatus(int,uint)\0"
    "typ,size\0languageChange()\0unitChange()\0"
    "EndEdit()\0"
};

void NodePalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NodePalette *_t = static_cast<NodePalette *>(_o);
        switch (_id) {
        case 0: _t->Schliessen(); break;
        case 1: _t->DocChanged(); break;
        case 2: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 3: _t->MoveK(); break;
        case 4: _t->AddN(); break;
        case 5: _t->DelN(); break;
        case 6: _t->MovePoint(); break;
        case 7: _t->SetSym(); break;
        case 8: _t->SetAsym(); break;
        case 9: _t->ResetControl(); break;
        case 10: _t->Reset1Control(); break;
        case 11: _t->ResetContour(); break;
        case 12: _t->ResetContourToImageClip(); break;
        case 13: _t->ResetShapeToImageClip(); break;
        case 14: _t->CloseBezier(); break;
        case 15: _t->SplitPoly(); break;
        case 16: _t->MirrorH(); break;
        case 17: _t->MirrorV(); break;
        case 18: _t->doRotCCW(); break;
        case 19: _t->doRotCW(); break;
        case 20: _t->doShrink(); break;
        case 21: _t->doExpand(); break;
        case 22: _t->doReduce(); break;
        case 23: _t->doEnlarge(); break;
        case 24: _t->ShearR(); break;
        case 25: _t->ShearL(); break;
        case 26: _t->ShearU(); break;
        case 27: _t->ShearD(); break;
        case 28: _t->ToggleAbsMode(); break;
        case 29: _t->ToggleConMode(); break;
        case 30: _t->MoveN(); break;
        case 31: _t->SetXY((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 32: _t->HaveNode((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 33: _t->IsOpen(); break;
        case 34: _t->PolyStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 35: _t->languageChange(); break;
        case 36: _t->unitChange(); break;
        case 37: _t->EndEdit(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NodePalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NodePalette::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_NodePalette,
      qt_meta_data_NodePalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NodePalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NodePalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NodePalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NodePalette))
        return static_cast<void*>(const_cast< NodePalette*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int NodePalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    return _id;
}

// SIGNAL 0
void NodePalette::Schliessen()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void NodePalette::DocChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
