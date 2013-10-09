/****************************************************************************
** Meta object code from reading C++ file 'cmykfw.h'
**
** Created: Sun Feb 24 21:37:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/cmykfw.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cmykfw.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CMYKChoose[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   28,   28,   28, 0x0a,
      29,   51,   28,   28, 0x0a,
      57,   72,   28,   28, 0x0a,
      76,   28,   28,   28, 0x0a,
      87,  102,  108,   28, 0x0a,
     116,   28,  108,   28, 0x0a,
     130,  145,   28,   28, 0x0a,
     147,   28,   28,   28, 0x0a,
     157,  175,   28,   28, 0x0a,
     179,   28,   28,   28, 0x0a,
     190,  214,   28,   28, 0x0a,
     223,  255,   28,   28, 0x0a,
     257,   28,   28,   28, 0x0a,
     269,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CMYKChoose[] = {
    "CMYKChoose\0slotRightClick()\0\0"
    "setValSLiders(double)\0value\0SetValueS(int)\0"
    "val\0ToggleSL()\0SliderPix(int)\0farbe\0"
    "QPixmap\0SliderBlack()\0SelSwatch(int)\0"
    "n\0setSpot()\0SelModel(QString)\0mod\0"
    "setColor()\0setColor2(int,int,bool)\0"
    "h,s,ende\0SelFromSwatch(QListWidgetItem*)\0"
    "c\0setValues()\0Verlassen()\0"
};

void CMYKChoose::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CMYKChoose *_t = static_cast<CMYKChoose *>(_o);
        switch (_id) {
        case 0: _t->slotRightClick(); break;
        case 1: _t->setValSLiders((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->SetValueS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->ToggleSL(); break;
        case 4: { QPixmap _r = _t->SliderPix((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 5: { QPixmap _r = _t->SliderBlack();
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 6: _t->SelSwatch((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setSpot(); break;
        case 8: _t->SelModel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setColor(); break;
        case 10: _t->setColor2((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 11: _t->SelFromSwatch((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->setValues(); break;
        case 13: _t->Verlassen(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CMYKChoose::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CMYKChoose::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CMYKChoose,
      qt_meta_data_CMYKChoose, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CMYKChoose::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CMYKChoose::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CMYKChoose::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CMYKChoose))
        return static_cast<void*>(const_cast< CMYKChoose*>(this));
    return QDialog::qt_metacast(_clname);
}

int CMYKChoose::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
