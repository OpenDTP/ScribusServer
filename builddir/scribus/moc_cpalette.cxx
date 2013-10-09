/****************************************************************************
** Meta object code from reading C++ file 'cpalette.h'
**
** Created: Sun Feb 24 21:37:06 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/cpalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cpalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GradientVectorDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   61,   65,   65, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   65,   65,   65, 0x0a,
      83,  122,   65,   65, 0x0a,
     134,   65,   65,   65, 0x0a,
     150,  166,   65,   65, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GradientVectorDialog[] = {
    "GradientVectorDialog\0"
    "NewSpecial(double,double,double,double)\0"
    ",,,\0\0languageChange()\0"
    "setValues(double,double,double,double)\0"
    "x1,y1,x2,y2\0changeSpecial()\0unitChange(int)\0"
    "unitIndex\0"
};

void GradientVectorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GradientVectorDialog *_t = static_cast<GradientVectorDialog *>(_o);
        switch (_id) {
        case 0: _t->NewSpecial((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 1: _t->languageChange(); break;
        case 2: _t->setValues((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 3: _t->changeSpecial(); break;
        case 4: _t->unitChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GradientVectorDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GradientVectorDialog::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_GradientVectorDialog,
      qt_meta_data_GradientVectorDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GradientVectorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GradientVectorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GradientVectorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GradientVectorDialog))
        return static_cast<void*>(const_cast< GradientVectorDialog*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int GradientVectorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
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
void GradientVectorDialog::NewSpecial(double _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Cpalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,   25,   25,   25, 0x05,
      26,   25,   25,   25, 0x05,
      44,   25,   25,   25, 0x05,
      61,   25,   25,   25, 0x05,
      80,   25,   25,   25, 0x05,
      97,   25,   25,   25, 0x05,
     117,  169,   25,   25, 0x05,
     174,  214,   25,   25, 0x05,
     218,   25,   25,   25, 0x05,
     235,   25,   25,   25, 0x05,
     253,   25,   25,   25, 0x05,
     267,   25,   25,   25, 0x05,
     282,   25,   25,   25, 0x05,
     296,   25,   25,   25, 0x05,
     314,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     329,   25,   25,   25, 0x0a,
     359,   25,   25,   25, 0x0a,
     389,  410,   25,   25, 0x0a,
     423,   25,   25,   25, 0x0a,
     437,  475,   25,   25, 0x0a,
     487,  519,   25,   25, 0x0a,
     521,   25,   25,   25, 0x0a,
     542,   25,   25,   25, 0x0a,
     556,   25,   25,   25, 0x0a,
     566,   25,   25,   25, 0x0a,
     576,   25,   25,   25, 0x0a,
     596,  616,   25,   25, 0x0a,
     622,  519,   25,   25, 0x0a,
     652,  674,  685,   25, 0x0a,
     692,  706,   25,   25, 0x0a,
     709,  732,   25,   25, 0x0a,
     736,  706,   25,   25, 0x0a,
     752,  790,   25,   25, 0x0a,
     802,  822,   25,   25, 0x0a,
     826,  884,   25,   25, 0x0a,
     931,  979,   25,   25, 0x0a,
     991,   25,   25,   25, 0x0a,
    1012, 1035,   25,   25, 0x0a,
    1042,   25,   25,   25, 0x0a,
    1056, 1083,   25,   25, 0x0a,
    1085,   25,   25,   25, 0x0a,
    1106, 1083,   25,   25, 0x0a,
    1127, 1148,   25,   25, 0x0a,
    1152, 1148,   25,   25, 0x0a,
    1167, 1197,   25,   25, 0x0a,
    1210,   25,   25,   25, 0x0a,
    1227,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Cpalette[] = {
    "Cpalette\0NewPen(QString)\0\0NewBrush(QString)\0"
    "NewPenShade(int)\0NewBrushShade(int)\0"
    "NewGradient(int)\0NewPattern(QString)\0"
    "NewPatternProps(double,double,double,double,double)\0"
    ",,,,\0NewSpecial(double,double,double,double)\0"
    ",,,\0NewTrans(double)\0NewTransS(double)\0"
    "NewBlend(int)\0NewBlendS(int)\0modeChanged()\0"
    "gradientChanged()\0editGradient()\0"
    "editLineColorSelectorButton()\0"
    "editFillColorSelectorButton()\0"
    "SetColors(ColorList)\0newColorList\0"
    "updateCList()\0SetPatterns(QMap<QString,ScPattern>*)\0"
    "docPatterns\0selectPattern(QListWidgetItem*)\0"
    "c\0changePatternProps()\0ToggleKette()\0"
    "HChange()\0VChange()\0updatePatternList()\0"
    "updateBoxS(QString)\0Farbe\0"
    "selectColor(QListWidgetItem*)\0"
    "setColor(QString,int)\0farbe,shad\0"
    "QColor\0slotGrad(int)\0nr\0slotColor(QString,int)\0"
    "n,s\0ChooseGrad(int)\0"
    "setActFarben(QString,QString,int,int)\0"
    "p,b,shp,shb\0setActGradient(int)\0typ\0"
    "setActPattern(QString,double,double,double,double,double)\0"
    "pattern,scaleX,scaleY,offsetX,offsetY,rotation\0"
    "setSpecialGradient(double,double,double,double)\0"
    "x1,y1,x2,y2\0editGradientVector()\0"
    "setActiveGradDia(bool)\0active\0"
    "setActShade()\0setActTrans(double,double)\0"
    ",\0changeBlendMode(int)\0setActBlend(int,int)\0"
    "setGradTrans(double)\0val\0slotTrans(int)\0"
    "unitChange(double,double,int)\0"
    "old,neww,ein\0languageChange()\0"
    "ToggleColorDisplay()\0"
};

void Cpalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Cpalette *_t = static_cast<Cpalette *>(_o);
        switch (_id) {
        case 0: _t->NewPen((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->NewBrush((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->NewPenShade((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->NewBrushShade((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->NewGradient((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->NewPattern((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->NewPatternProps((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 7: _t->NewSpecial((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 8: _t->NewTrans((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->NewTransS((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->NewBlend((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->NewBlendS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->modeChanged(); break;
        case 13: _t->gradientChanged(); break;
        case 14: _t->editGradient(); break;
        case 15: _t->editLineColorSelectorButton(); break;
        case 16: _t->editFillColorSelectorButton(); break;
        case 17: _t->SetColors((*reinterpret_cast< ColorList(*)>(_a[1]))); break;
        case 18: _t->updateCList(); break;
        case 19: _t->SetPatterns((*reinterpret_cast< QMap<QString,ScPattern>*(*)>(_a[1]))); break;
        case 20: _t->selectPattern((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 21: _t->changePatternProps(); break;
        case 22: _t->ToggleKette(); break;
        case 23: _t->HChange(); break;
        case 24: _t->VChange(); break;
        case 25: _t->updatePatternList(); break;
        case 26: _t->updateBoxS((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: _t->selectColor((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 28: { QColor _r = _t->setColor((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 29: _t->slotGrad((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->slotColor((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->ChooseGrad((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->setActFarben((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 33: _t->setActGradient((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->setActPattern((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 35: _t->setSpecialGradient((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 36: _t->editGradientVector(); break;
        case 37: _t->setActiveGradDia((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->setActShade(); break;
        case 39: _t->setActTrans((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 40: _t->changeBlendMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->setActBlend((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 42: _t->setGradTrans((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 43: _t->slotTrans((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->unitChange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 45: _t->languageChange(); break;
        case 46: _t->ToggleColorDisplay(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Cpalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Cpalette::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Cpalette,
      qt_meta_data_Cpalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Cpalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Cpalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Cpalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Cpalette))
        return static_cast<void*>(const_cast< Cpalette*>(this));
    return QWidget::qt_metacast(_clname);
}

int Cpalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    }
    return _id;
}

// SIGNAL 0
void Cpalette::NewPen(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Cpalette::NewBrush(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Cpalette::NewPenShade(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Cpalette::NewBrushShade(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Cpalette::NewGradient(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Cpalette::NewPattern(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Cpalette::NewPatternProps(double _t1, double _t2, double _t3, double _t4, double _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Cpalette::NewSpecial(double _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Cpalette::NewTrans(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Cpalette::NewTransS(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Cpalette::NewBlend(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Cpalette::NewBlendS(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Cpalette::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void Cpalette::gradientChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void Cpalette::editGradient()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}
QT_END_MOC_NAMESPACE
