/****************************************************************************
** Meta object code from reading C++ file 'smtextstyles.h'
**
** Created: Sun Feb 24 21:37:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/smtextstyles.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smtextstyles.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SMParagraphStyle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   34,   34,   34, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   60,   34,   34, 0x08,
      65,   34,   34,   34, 0x08,
      83,   34,   34,   34, 0x08,
     103,  121,   34,   34, 0x08,
     126,  148,   34,   34, 0x08,
     154,   34,   34,   34, 0x08,
     174,   34,   34,   34, 0x08,
     191,   34,   34,   34, 0x08,
     208,   34,   34,   34, 0x08,
     224,  247,   34,   34, 0x08,
     249,   34,   34,   34, 0x08,
     277,   34,   34,   34, 0x08,
     303,   34,   34,   34, 0x08,
     318,   34,   34,   34, 0x08,
     336,   34,   34,   34, 0x08,
     354,   34,   34,   34, 0x08,
     369,   34,   34,   34, 0x08,
     386,   34,   34,   34, 0x08,
     404,   34,   34,   34, 0x08,
     420,   34,   34,   34, 0x08,
     435,  452,   34,   34, 0x08,
     454,   34,   34,   34, 0x08,
     477,   34,   34,   34, 0x08,
     493,   34,   34,   34, 0x08,
     509,   34,   34,   34, 0x08,
     527,   34,   34,   34, 0x08,
     545,   34,   34,   34, 0x08,
     560,   34,   34,   34, 0x08,
     573,   34,   34,   34, 0x08,
     586,   34,   34,   34, 0x08,
     601,   34,   34,   34, 0x08,
     620,   34,   34,   34, 0x08,
     641,  659,   34,   34, 0x08,
     661,  688,   34,   34, 0x08,
     695,  688,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SMParagraphStyle[] = {
    "SMParagraphStyle\0selectionDirty()\0\0"
    "slotLineSpacingMode(int)\0mode\0"
    "slotLineSpacing()\0slotParentDropCap()\0"
    "slotDropCap(bool)\0isOn\0slotDropCapLines(int)\0"
    "lines\0slotDropCapOffset()\0slotSpaceAbove()\0"
    "slotSpaceBelow()\0slotAlignment()\0"
    "slotOpticalMargin(int)\0i\0"
    "slotOpticalMarginSelector()\0"
    "slotParentOpticalMargin()\0slotMinSpace()\0"
    "slotMinGlyphExt()\0slotMaxGlyphExt()\0"
    "slotTabRuler()\0slotLeftIndent()\0"
    "slotRightIndent()\0slotFirstLine()\0"
    "slotFontSize()\0slotEffects(int)\0e\0"
    "slotEffectProperties()\0slotFillColor()\0"
    "slotFillShade()\0slotStrokeColor()\0"
    "slotStrokeShade()\0slotLanguage()\0"
    "slotScaleH()\0slotScaleV()\0slotTracking()\0"
    "slotWordTracking()\0slotBaselineOffset()\0"
    "slotFont(QString)\0s\0slotParentChanged(QString)\0"
    "parent\0slotCharParentChanged(QString)\0"
};

void SMParagraphStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SMParagraphStyle *_t = static_cast<SMParagraphStyle *>(_o);
        switch (_id) {
        case 0: _t->selectionDirty(); break;
        case 1: _t->slotLineSpacingMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotLineSpacing(); break;
        case 3: _t->slotParentDropCap(); break;
        case 4: _t->slotDropCap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slotDropCapLines((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotDropCapOffset(); break;
        case 7: _t->slotSpaceAbove(); break;
        case 8: _t->slotSpaceBelow(); break;
        case 9: _t->slotAlignment(); break;
        case 10: _t->slotOpticalMargin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->slotOpticalMarginSelector(); break;
        case 12: _t->slotParentOpticalMargin(); break;
        case 13: _t->slotMinSpace(); break;
        case 14: _t->slotMinGlyphExt(); break;
        case 15: _t->slotMaxGlyphExt(); break;
        case 16: _t->slotTabRuler(); break;
        case 17: _t->slotLeftIndent(); break;
        case 18: _t->slotRightIndent(); break;
        case 19: _t->slotFirstLine(); break;
        case 20: _t->slotFontSize(); break;
        case 21: _t->slotEffects((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->slotEffectProperties(); break;
        case 23: _t->slotFillColor(); break;
        case 24: _t->slotFillShade(); break;
        case 25: _t->slotStrokeColor(); break;
        case 26: _t->slotStrokeShade(); break;
        case 27: _t->slotLanguage(); break;
        case 28: _t->slotScaleH(); break;
        case 29: _t->slotScaleV(); break;
        case 30: _t->slotTracking(); break;
        case 31: _t->slotWordTracking(); break;
        case 32: _t->slotBaselineOffset(); break;
        case 33: _t->slotFont((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: _t->slotParentChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->slotCharParentChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SMParagraphStyle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SMParagraphStyle::staticMetaObject = {
    { &StyleItem::staticMetaObject, qt_meta_stringdata_SMParagraphStyle,
      qt_meta_data_SMParagraphStyle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SMParagraphStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SMParagraphStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SMParagraphStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SMParagraphStyle))
        return static_cast<void*>(const_cast< SMParagraphStyle*>(this));
    return StyleItem::qt_metacast(_clname);
}

int SMParagraphStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StyleItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void SMParagraphStyle::selectionDirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_SMCharacterStyle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   34,   34,   34, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   34,   34,   34, 0x08,
      50,   67,   34,   34, 0x08,
      69,   34,   34,   34, 0x08,
      92,   34,   34,   34, 0x08,
     108,   34,   34,   34, 0x08,
     124,   34,   34,   34, 0x08,
     142,   34,   34,   34, 0x08,
     160,   34,   34,   34, 0x08,
     175,   34,   34,   34, 0x08,
     188,   34,   34,   34, 0x08,
     201,   34,   34,   34, 0x08,
     216,   34,   34,   34, 0x08,
     235,   34,   34,   34, 0x08,
     256,  274,   34,   34, 0x08,
     276,  303,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SMCharacterStyle[] = {
    "SMCharacterStyle\0selectionDirty()\0\0"
    "slotFontSize()\0slotEffects(int)\0e\0"
    "slotEffectProperties()\0slotFillColor()\0"
    "slotFillShade()\0slotStrokeColor()\0"
    "slotStrokeShade()\0slotLanguage()\0"
    "slotScaleH()\0slotScaleV()\0slotTracking()\0"
    "slotWordTracking()\0slotBaselineOffset()\0"
    "slotFont(QString)\0s\0slotParentChanged(QString)\0"
    "parent\0"
};

void SMCharacterStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SMCharacterStyle *_t = static_cast<SMCharacterStyle *>(_o);
        switch (_id) {
        case 0: _t->selectionDirty(); break;
        case 1: _t->slotFontSize(); break;
        case 2: _t->slotEffects((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotEffectProperties(); break;
        case 4: _t->slotFillColor(); break;
        case 5: _t->slotFillShade(); break;
        case 6: _t->slotStrokeColor(); break;
        case 7: _t->slotStrokeShade(); break;
        case 8: _t->slotLanguage(); break;
        case 9: _t->slotScaleH(); break;
        case 10: _t->slotScaleV(); break;
        case 11: _t->slotTracking(); break;
        case 12: _t->slotWordTracking(); break;
        case 13: _t->slotBaselineOffset(); break;
        case 14: _t->slotFont((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->slotParentChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SMCharacterStyle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SMCharacterStyle::staticMetaObject = {
    { &StyleItem::staticMetaObject, qt_meta_stringdata_SMCharacterStyle,
      qt_meta_data_SMCharacterStyle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SMCharacterStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SMCharacterStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SMCharacterStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SMCharacterStyle))
        return static_cast<void*>(const_cast< SMCharacterStyle*>(this));
    return StyleItem::qt_metacast(_clname);
}

int SMCharacterStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StyleItem::qt_metacall(_c, _id, _a);
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
void SMCharacterStyle::selectionDirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
