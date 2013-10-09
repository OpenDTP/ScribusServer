/****************************************************************************
** Meta object code from reading C++ file 'propertiespalette.h'
**
** Created: Sun Feb 24 21:37:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/propertiespalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertiespalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NameWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   20,   20,   20, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_NameWidget[] = {
    "NameWidget\0Leaved()\0\0"
};

void NameWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NameWidget *_t = static_cast<NameWidget *>(_o);
        switch (_id) {
        case 0: _t->Leaved(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData NameWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NameWidget::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_NameWidget,
      qt_meta_data_NameWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NameWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NameWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NameWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NameWidget))
        return static_cast<void*>(const_cast< NameWidget*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int NameWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void NameWidget::Leaved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_PropertiesPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
     148,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   31,   31,   31, 0x05,
      32,   31,   31,   31, 0x05,
      49,   31,   31,   31, 0x05,
      67,   31,   31,   31, 0x05,
      83,   31,   31,   31, 0x05,
      95,   31,   31,   31, 0x05,
     112,   31,   31,   31, 0x05,

 // slots: signature, parameters, type, tag, flags
     125,  159,   31,   31, 0x0a,
     162,   31,   31,   31, 0x0a,
     179,  199,   31,   31, 0x0a,
     201,   31,   31,   31, 0x0a,
     212,   31,   31,   31, 0x0a,
     224,   31,   31,   31, 0x0a,
     251,  263,   31,   31, 0x0a,
     266,  288,   31,   31, 0x0a,
     290,   31,   31,   31, 0x0a,
     303,  318,   31,   31, 0x0a,
     320,  341,   31,   31, 0x0a,
     345,  341,   31,   31, 0x0a,
     366,  379,   31,   31, 0x0a,
     381,  379,   31,   31, 0x0a,
     395,  415,   31,   31, 0x0a,
     419,  443,   31,   31, 0x0a,
     446,  379,   31,   31, 0x0a,
     461,  497,   31,   31, 0x0a,
     508,  524,   31,   31, 0x0a,
     526,   31,   31,   31, 0x0a,
     547,  564,   31,   31, 0x0a,
     566,  619,   31,   31, 0x0a,
     641,   31,   31,   31, 0x0a,
     657,  704,   31,   31, 0x0a,
     716,  524,   31,   31, 0x0a,
     737,  795,   31,   31, 0x0a,
     803,   31,   31,   31, 0x0a,
     834,  862,   31,   31, 0x0a,
     873,  524,   31,   31, 0x0a,
     886,  564,   31,   31, 0x0a,
     898,  919,   31,   31, 0x0a,
     924,  919,   31,   31, 0x0a,
     946,   31,   31,   31, 0x0a,
     966,   31,   31,   31, 0x0a,
     988, 1025,   31,   31, 0x0a,
    1032,   31,   31,   31, 0x0a,
    1053,   31,   31,   31, 0x0a,
    1075,   31,   31,   31, 0x0a,
    1098,   31,   31,   31, 0x0a,
    1121,  341,   31,   31, 0x0a,
    1150, 1178,   31,   31, 0x0a,
    1182,   31,   31,   31, 0x0a,
    1197, 1178,   31,   31, 0x0a,
    1222,   31,   31,   31, 0x0a,
    1234, 1254,   31,   31, 0x0a,
    1256,   31,   31,   31, 0x0a,
    1270,  564,   31,   31, 0x0a,
    1288,   31,   31,   31, 0x0a,
    1300,   31,   31,   31, 0x0a,
    1313,   31,   31,   31, 0x0a,
    1324,  564,   31,   31, 0x0a,
    1343,  564,   31,   31, 0x0a,
    1360, 1388,   31,   31, 0x0a,
    1391, 1419,   31,   31, 0x0a,
    1421,   31,   31,   31, 0x0a,
    1439,   31,   31,   31, 0x0a,
    1452,   31,   31,   31, 0x0a,
    1467,   31,   31,   31, 0x0a,
    1481, 1525,   31,   31, 0x0a,
    1537,   31,   31,   31, 0x0a,
    1550,   31,   31,   31, 0x0a,
    1566,   31,   31,   31, 0x0a,
    1586,   31,   31,   31, 0x0a,
    1611,   31,   31,   31, 0x0a,
    1629,   31,   31,   31, 0x0a,
    1647,   31,   31,   31, 0x0a,
    1658, 1670,   31,   31, 0x08,
    1672,   31,   31,   31, 0x08,
    1679,   31,   31,   31, 0x08,
    1686,   31,   31,   31, 0x08,
    1693,   31,   31,   31, 0x08,
    1700,   31,   31,   31, 0x08,
    1714,   31,   31,   31, 0x08,
    1732,   31,   31,   31, 0x08,
    1749,   31,   31,   31, 0x08,
    1767,   31,   31,   31, 0x08,
    1777,   31,   31,   31, 0x08,
    1786,   31,   31,   31, 0x08,
    1796,   31,   31,   31, 0x08,
    1810,   31,   31,   31, 0x08,
    1824,   31,   31,   31, 0x08,
    1838,   31,   31,   31, 0x08,
    1848,   31,   31,   31, 0x08,
    1862,   31,   31,   31, 0x08,
    1872,   31,   31,   31, 0x08,
    1882,   31,   31,   31, 0x08,
    1897,   31,   31,   31, 0x08,
    1908,   31,   31,   31, 0x08,
    1919,   31,   31,   31, 0x08,
    1932,   31,   31,   31, 0x08,
    1945,   31,   31,   31, 0x08,
    1959,   31,   31,   31, 0x08,
    1974,   31,   31,   31, 0x08,
    1989,   31,   31,   31, 0x08,
    2003,   31,   31,   31, 0x08,
    2016,   31,   31,   31, 0x08,
    2030, 2049,   31,   31, 0x08,
    2051,  524,   31,   31, 0x08,
    2069,   31,   31,   31, 0x08,
    2085,   31,   31,   31, 0x08,
    2095,   31,   31,   31, 0x08,
    2105,   31,   31,   31, 0x08,
    2115,   31,   31,   31, 0x08,
    2124, 2140,   31,   31, 0x08,
    2142,   31,   31,   31, 0x08,
    2151, 2176,   31,   31, 0x08,
    2185,   31,   31,   31, 0x08,
    2196, 2239,   31,   31, 0x08,
    2251,   31,   31,   31, 0x08,
    2272,   31,   31,   31, 0x08,
    2283,   31,   31,   31, 0x08,
    2299,   31,   31,   31, 0x08,
    2315,   31,   31,   31, 0x08,
    2333,   31,   31,   31, 0x08,
    2352,   31,   31,   31, 0x08,
    2373,   31,   31,   31, 0x08,
    2398,   31,   31,   31, 0x08,
    2411,   31,   31,   31, 0x08,
    2428,   31,   31,   31, 0x08,
    2442,   31,   31,   31, 0x08,
    2459,   31,   31,   31, 0x08,
    2476,   31,   31,   31, 0x08,
    2493,   31,   31,   31, 0x08,
    2510,   31,   31,   31, 0x08,
    2527,   31,   31,   31, 0x08,
    2544,   31,   31,   31, 0x08,
    2562, 2585,   31,   31, 0x08,
    2589,   31,   31,   31, 0x08,
    2604,   31,   31,   31, 0x08,
    2614,   31,   31,   31, 0x08,
    2628,   31,   31,   31, 0x08,
    2643,  443,   31,   31, 0x08,
    2662,  443,   31,   31, 0x08,
    2679, 2705,   31,   31, 0x08,
    2711, 2733,   31,   31, 0x08,
    2739,   31,   31,   31, 0x08,
    2752,   31,   31,   31, 0x08,
    2765,   31,   31,   31, 0x08,
    2775,   31,   31,   31, 0x09,
    2800,   31,   31,   31, 0x09,
    2826,   31,   31,   31, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PropertiesPalette[] = {
    "PropertiesPalette\0DocChanged()\0\0"
    "NewParStyle(int)\0NewAlignment(int)\0"
    "NewEffects(int)\0ShapeEdit()\0"
    "NewFont(QString)\0UpdtGui(int)\0"
    "setMainWindow(ScribusMainWindow*)\0mw\0"
    "languageChange()\0setDoc(ScribusDoc*)\0"
    "d\0unsetDoc()\0unsetItem()\0"
    "setMultipleSelection(bool)\0NewSel(int)\0"
    "nr\0SetCurItem(PageItem*)\0i\0unitChange()\0"
    "setLevel(uint)\0l\0setXY(double,double)\0"
    "x,y\0setBH(double,double)\0setR(double)\0"
    "r\0setRR(double)\0setCols(int,double)\0"
    "r,g\0setLineSpacingMode(int)\0id\0"
    "setLsp(double)\0setupLineSpacingSpinbox(int,double)\0"
    "mode,value\0setSize(double)\0s\0"
    "setFontFace(QString)\0setExtra(double)\0"
    "e\0setTextToFrameDistances(double,double,double,double)\0"
    "left,top,bottom,right\0ChangeScaling()\0"
    "setScaleAndOffset(double,double,double,double)\0"
    "scx,scy,x,y\0setLineWidth(double)\0"
    "setLIvalue(Qt::PenStyle,Qt::PenCapStyle,Qt::PenJoinStyle)\0"
    "p,pc,pj\0setFlop(FirstLineOffsetPolicy)\0"
    "updateStyle(ParagraphStyle)\0newCurrent\0"
    "setStil(int)\0setAli(int)\0setParStyle(QString)\0"
    "name\0setCharStyle(QString)\0"
    "setOpticalMargins()\0resetOpticalMargins()\0"
    "updateOpticalMargins(ParagraphStyle)\0"
    "pStyle\0setMinWordTracking()\0"
    "setNormWordTracking()\0setMinGlyphExtension()\0"
    "setMaxGlyphExtension()\0"
    "setShadowOffs(double,double)\0"
    "setUnderline(double,double)\0p,w\0"
    "newUnderline()\0setStrike(double,double)\0"
    "newStrike()\0setOutlineW(double)\0x\0"
    "newOutlineW()\0setTScale(double)\0"
    "NewTScale()\0NewTScaleV()\0NewTBase()\0"
    "setTScaleV(double)\0setTBase(double)\0"
    "SetLineFormats(ScribusDoc*)\0dd\0"
    "SetSTline(QListWidgetItem*)\0c\0"
    "NewTFont(QString)\0newTxtFill()\0"
    "newTxtStroke()\0setActShade()\0"
    "setActFarben(QString,QString,double,double)\0"
    "p,b,shp,shb\0ManageTabs()\0setLocked(bool)\0"
    "setSizeLocked(bool)\0setPrintingEnabled(bool)\0"
    "setFlippedH(bool)\0setFlippedV(bool)\0"
    "endEdit2()\0SelTab(int)\0t\0NewX()\0NewY()\0"
    "NewW()\0NewH()\0setRotation()\0"
    "NewCornerRadius()\0NewLineSpacing()\0"
    "HandleGapSwitch()\0NewCols()\0NewGap()\0"
    "NewSize()\0NewTracking()\0handleFlipH()\0"
    "handleFlipV()\0NewPage()\0ToggleKette()\0"
    "HChange()\0VChange()\0ToggleKetteD()\0"
    "HChangeD()\0VChangeD()\0NewLocalXY()\0"
    "NewLocalSC()\0NewLocalDpi()\0NewLineWidth()\0"
    "NewLineStyle()\0NewLineJoin()\0NewLineEnd()\0"
    "NewLineMode()\0NewAlignement(int)\0a\0"
    "setTypeStyle(int)\0newShadowOffs()\0"
    "DoLower()\0DoRaise()\0DoFront()\0DoBack()\0"
    "NewRotMode(int)\0m\0DoFlow()\0"
    "MakeIrre(int,int,qreal*)\0f,c,vals\0"
    "NewTDist()\0NewSpGradient(double,double,double,double)\0"
    "x1,y1,x2,y2\0toggleGradientEdit()\0"
    "DoRevert()\0doClearCStyle()\0doClearPStyle()\0"
    "handleShapeEdit()\0handleShapeEdit2()\0"
    "handleImageEffects()\0handleExtImgProperties()\0"
    "handleLock()\0handleLockSize()\0"
    "handlePrint()\0handlePathType()\0"
    "handlePathFlip()\0handlePathLine()\0"
    "handlePathDist()\0handlePathOffs()\0"
    "handleFillRule()\0handleOverprint()\0"
    "ChangeProfile(QString)\0prn\0ChangeIntent()\0"
    "NewName()\0NewLanguage()\0HandleTLines()\0"
    "setStartArrow(int)\0setEndArrow(int)\0"
    "setGroupTransparency(int)\0trans\0"
    "setGroupBlending(int)\0blend\0doGrouping()\0"
    "dashChange()\0flop(int)\0spinboxStartUserAction()\0"
    "spinboxFinishUserAction()\0"
    "updateSpinBoxConstants()\0"
};

void PropertiesPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PropertiesPalette *_t = static_cast<PropertiesPalette *>(_o);
        switch (_id) {
        case 0: _t->DocChanged(); break;
        case 1: _t->NewParStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->NewAlignment((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->NewEffects((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->ShapeEdit(); break;
        case 5: _t->NewFont((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->UpdtGui((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setMainWindow((*reinterpret_cast< ScribusMainWindow*(*)>(_a[1]))); break;
        case 8: _t->languageChange(); break;
        case 9: _t->setDoc((*reinterpret_cast< ScribusDoc*(*)>(_a[1]))); break;
        case 10: _t->unsetDoc(); break;
        case 11: _t->unsetItem(); break;
        case 12: _t->setMultipleSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->NewSel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->SetCurItem((*reinterpret_cast< PageItem*(*)>(_a[1]))); break;
        case 15: _t->unitChange(); break;
        case 16: _t->setLevel((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 17: _t->setXY((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 18: _t->setBH((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 19: _t->setR((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->setRR((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 21: _t->setCols((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 22: _t->setLineSpacingMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->setLsp((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 24: _t->setupLineSpacingSpinbox((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 25: _t->setSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 26: _t->setFontFace((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->setExtra((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 28: _t->setTextToFrameDistances((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 29: _t->ChangeScaling(); break;
        case 30: _t->setScaleAndOffset((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 31: _t->setLineWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 32: _t->setLIvalue((*reinterpret_cast< Qt::PenStyle(*)>(_a[1])),(*reinterpret_cast< Qt::PenCapStyle(*)>(_a[2])),(*reinterpret_cast< Qt::PenJoinStyle(*)>(_a[3]))); break;
        case 33: _t->setFlop((*reinterpret_cast< FirstLineOffsetPolicy(*)>(_a[1]))); break;
        case 34: _t->updateStyle((*reinterpret_cast< const ParagraphStyle(*)>(_a[1]))); break;
        case 35: _t->setStil((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->setAli((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->setParStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: _t->setCharStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 39: _t->setOpticalMargins(); break;
        case 40: _t->resetOpticalMargins(); break;
        case 41: _t->updateOpticalMargins((*reinterpret_cast< const ParagraphStyle(*)>(_a[1]))); break;
        case 42: _t->setMinWordTracking(); break;
        case 43: _t->setNormWordTracking(); break;
        case 44: _t->setMinGlyphExtension(); break;
        case 45: _t->setMaxGlyphExtension(); break;
        case 46: _t->setShadowOffs((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 47: _t->setUnderline((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 48: _t->newUnderline(); break;
        case 49: _t->setStrike((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 50: _t->newStrike(); break;
        case 51: _t->setOutlineW((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 52: _t->newOutlineW(); break;
        case 53: _t->setTScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 54: _t->NewTScale(); break;
        case 55: _t->NewTScaleV(); break;
        case 56: _t->NewTBase(); break;
        case 57: _t->setTScaleV((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 58: _t->setTBase((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 59: _t->SetLineFormats((*reinterpret_cast< ScribusDoc*(*)>(_a[1]))); break;
        case 60: _t->SetSTline((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 61: _t->NewTFont((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 62: _t->newTxtFill(); break;
        case 63: _t->newTxtStroke(); break;
        case 64: _t->setActShade(); break;
        case 65: _t->setActFarben((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 66: _t->ManageTabs(); break;
        case 67: _t->setLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 68: _t->setSizeLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 69: _t->setPrintingEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 70: _t->setFlippedH((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: _t->setFlippedV((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 72: _t->endEdit2(); break;
        case 73: _t->SelTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 74: _t->NewX(); break;
        case 75: _t->NewY(); break;
        case 76: _t->NewW(); break;
        case 77: _t->NewH(); break;
        case 78: _t->setRotation(); break;
        case 79: _t->NewCornerRadius(); break;
        case 80: _t->NewLineSpacing(); break;
        case 81: _t->HandleGapSwitch(); break;
        case 82: _t->NewCols(); break;
        case 83: _t->NewGap(); break;
        case 84: _t->NewSize(); break;
        case 85: _t->NewTracking(); break;
        case 86: _t->handleFlipH(); break;
        case 87: _t->handleFlipV(); break;
        case 88: _t->NewPage(); break;
        case 89: _t->ToggleKette(); break;
        case 90: _t->HChange(); break;
        case 91: _t->VChange(); break;
        case 92: _t->ToggleKetteD(); break;
        case 93: _t->HChangeD(); break;
        case 94: _t->VChangeD(); break;
        case 95: _t->NewLocalXY(); break;
        case 96: _t->NewLocalSC(); break;
        case 97: _t->NewLocalDpi(); break;
        case 98: _t->NewLineWidth(); break;
        case 99: _t->NewLineStyle(); break;
        case 100: _t->NewLineJoin(); break;
        case 101: _t->NewLineEnd(); break;
        case 102: _t->NewLineMode(); break;
        case 103: _t->NewAlignement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 104: _t->setTypeStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 105: _t->newShadowOffs(); break;
        case 106: _t->DoLower(); break;
        case 107: _t->DoRaise(); break;
        case 108: _t->DoFront(); break;
        case 109: _t->DoBack(); break;
        case 110: _t->NewRotMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 111: _t->DoFlow(); break;
        case 112: _t->MakeIrre((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal*(*)>(_a[3]))); break;
        case 113: _t->NewTDist(); break;
        case 114: _t->NewSpGradient((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 115: _t->toggleGradientEdit(); break;
        case 116: _t->DoRevert(); break;
        case 117: _t->doClearCStyle(); break;
        case 118: _t->doClearPStyle(); break;
        case 119: _t->handleShapeEdit(); break;
        case 120: _t->handleShapeEdit2(); break;
        case 121: _t->handleImageEffects(); break;
        case 122: _t->handleExtImgProperties(); break;
        case 123: _t->handleLock(); break;
        case 124: _t->handleLockSize(); break;
        case 125: _t->handlePrint(); break;
        case 126: _t->handlePathType(); break;
        case 127: _t->handlePathFlip(); break;
        case 128: _t->handlePathLine(); break;
        case 129: _t->handlePathDist(); break;
        case 130: _t->handlePathOffs(); break;
        case 131: _t->handleFillRule(); break;
        case 132: _t->handleOverprint(); break;
        case 133: _t->ChangeProfile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 134: _t->ChangeIntent(); break;
        case 135: _t->NewName(); break;
        case 136: _t->NewLanguage(); break;
        case 137: _t->HandleTLines(); break;
        case 138: _t->setStartArrow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 139: _t->setEndArrow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 140: _t->setGroupTransparency((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 141: _t->setGroupBlending((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 142: _t->doGrouping(); break;
        case 143: _t->dashChange(); break;
        case 144: _t->flop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 145: _t->spinboxStartUserAction(); break;
        case 146: _t->spinboxFinishUserAction(); break;
        case 147: _t->updateSpinBoxConstants(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PropertiesPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PropertiesPalette::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_PropertiesPalette,
      qt_meta_data_PropertiesPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PropertiesPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PropertiesPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PropertiesPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PropertiesPalette))
        return static_cast<void*>(const_cast< PropertiesPalette*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int PropertiesPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 148)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 148;
    }
    return _id;
}

// SIGNAL 0
void PropertiesPalette::DocChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PropertiesPalette::NewParStyle(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PropertiesPalette::NewAlignment(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PropertiesPalette::NewEffects(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PropertiesPalette::ShapeEdit()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void PropertiesPalette::NewFont(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PropertiesPalette::UpdtGui(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
static const uint qt_meta_data_UserActionSniffer[] = {

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
      18,   32,   32,   32, 0x05,
      33,   32,   32,   32, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UserActionSniffer[] = {
    "UserActionSniffer\0actionStart()\0\0"
    "actionEnd()\0"
};

void UserActionSniffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UserActionSniffer *_t = static_cast<UserActionSniffer *>(_o);
        switch (_id) {
        case 0: _t->actionStart(); break;
        case 1: _t->actionEnd(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UserActionSniffer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UserActionSniffer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UserActionSniffer,
      qt_meta_data_UserActionSniffer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UserActionSniffer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UserActionSniffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UserActionSniffer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserActionSniffer))
        return static_cast<void*>(const_cast< UserActionSniffer*>(this));
    return QObject::qt_metacast(_clname);
}

int UserActionSniffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void UserActionSniffer::actionStart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UserActionSniffer::actionEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
