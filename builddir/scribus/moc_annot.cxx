/****************************************************************************
** Meta object code from reading C++ file 'annot.h'
**
** Created: Sun Feb 24 21:37:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/annot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'annot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Annot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,   16,   16,   16, 0x0a,
      17,   16,   16,   16, 0x0a,
      26,   16,   16,   16, 0x0a,
      40,   16,   16,   16, 0x0a,
      54,   16,   16,   16, 0x0a,
      68,   16,   16,   16, 0x0a,
      79,   16,   16,   16, 0x0a,
      90,   16,   16,   16, 0x0a,
     101,   16,   16,   16, 0x0a,
     112,   16,   16,   16, 0x0a,
     127,   16,   16,   16, 0x0a,
     139,   16,   16,   16, 0x0a,
     154,   16,   16,   16, 0x0a,
     168,   16,   16,   16, 0x0a,
     181,   16,   16,   16, 0x0a,
     194,   16,   16,   16, 0x0a,
     207,   16,   16,   16, 0x0a,
     217,   16,   16,   16, 0x0a,
     230,   16,   16,   16, 0x0a,
     240,   16,   16,   16, 0x0a,
     253,   16,   16,   16, 0x0a,
     263,  280,   16,   16, 0x0a,
     283,  308,   16,   16, 0x0a,
     312,  325,   16,   16, 0x0a,
     327,   16,   16,   16, 0x0a,
     338,   16,   16,   16, 0x0a,
     350,  373,   16,   16, 0x0a,
     375,   16,   16,   16, 0x0a,
     385,  280,   16,   16, 0x0a,
     404,   16,   16,   16, 0x0a,
     415,  280,   16,   16, 0x0a,
     436,  459,   16,   16, 0x0a,
     462,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Annot[] = {
    "Annot\0NewName()\0\0IPlace()\0RemoveNIcon()\0"
    "RemovePIcon()\0RemoveRIcon()\0IconsEin()\0"
    "GetNIcon()\0GetPIcon()\0GetRIcon()\0"
    "SelectFelder()\0editKeySc()\0editFormatSc()\0"
    "editValidSc()\0editCalcSc()\0editJavaSc()\0"
    "SetFormNum()\0SetCurr()\0HandleVali()\0"
    "SetVali()\0HandleCalc()\0SetCalc()\0"
    "SetFoScript(int)\0it\0SetCoords(double,double)\0"
    "x,y\0SetPage(int)\0v\0SetCross()\0SetValues()\0"
    "SetAnnotationType(int)\0i\0GetFile()\0"
    "SetActionType(int)\0SetLimit()\0"
    "SetActionScript(int)\0setDateSample(QString)\0"
    "ds\0SetExternLink()\0"
};

void Annot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Annot *_t = static_cast<Annot *>(_o);
        switch (_id) {
        case 0: _t->NewName(); break;
        case 1: _t->IPlace(); break;
        case 2: _t->RemoveNIcon(); break;
        case 3: _t->RemovePIcon(); break;
        case 4: _t->RemoveRIcon(); break;
        case 5: _t->IconsEin(); break;
        case 6: _t->GetNIcon(); break;
        case 7: _t->GetPIcon(); break;
        case 8: _t->GetRIcon(); break;
        case 9: _t->SelectFelder(); break;
        case 10: _t->editKeySc(); break;
        case 11: _t->editFormatSc(); break;
        case 12: _t->editValidSc(); break;
        case 13: _t->editCalcSc(); break;
        case 14: _t->editJavaSc(); break;
        case 15: _t->SetFormNum(); break;
        case 16: _t->SetCurr(); break;
        case 17: _t->HandleVali(); break;
        case 18: _t->SetVali(); break;
        case 19: _t->HandleCalc(); break;
        case 20: _t->SetCalc(); break;
        case 21: _t->SetFoScript((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->SetCoords((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 23: _t->SetPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->SetCross(); break;
        case 25: _t->SetValues(); break;
        case 26: _t->SetAnnotationType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->GetFile(); break;
        case 28: _t->SetActionType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->SetLimit(); break;
        case 30: _t->SetActionScript((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->setDateSample((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->SetExternLink(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Annot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Annot::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Annot,
      qt_meta_data_Annot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Annot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Annot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Annot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Annot))
        return static_cast<void*>(const_cast< Annot*>(this));
    return QDialog::qt_metacast(_clname);
}

int Annot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
