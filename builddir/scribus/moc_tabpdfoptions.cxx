/****************************************************************************
** Meta object code from reading C++ file 'tabpdfoptions.h'
**
** Created: Sun Feb 24 21:37:23 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/tabpdfoptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabpdfoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TabPDFOptions[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   23,   23,   23, 0x05,
      24,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   23,   23,   23, 0x0a,
      48,   23,   23,   23, 0x0a,
      61,   77,   23,   23, 0x0a,
      79,   23,   23,   23, 0x0a,
      94,   23,   23,   23, 0x0a,
     108,   23,   23,   23, 0x0a,
     121,   23,   23,   23, 0x0a,
     137,   23,   23,   23, 0x0a,
     152,   23,   23,   23, 0x0a,
     179,   23,   23,   23, 0x0a,
     206,   23,   23,   23, 0x0a,
     233,   23,   23,   23, 0x0a,
     244,   23,   23,   23, 0x0a,
     257,   23,   23,   23, 0x0a,
     266,   23,   23,   23, 0x0a,
     277,  293,   23,   23, 0x0a,
     296,  293,   23,   23, 0x0a,
     309,   23,   23,   23, 0x0a,
     321,  335,   23,   23, 0x0a,
     341,   23,   23,   23, 0x0a,
     353,   23,   23,   23, 0x0a,
     367,  382,   23,   23, 0x0a,
     384,   77,   23,   23, 0x0a,
     398,   23,   23,   23, 0x0a,
     409,   23,   23,   23, 0x0a,
     421,   23,   23,   23, 0x0a,
     434,   77,   23,   23, 0x0a,
     449,   23,   23,   23, 0x0a,
     462,   23,   23,   23, 0x0a,
     477,  493,   23,   23, 0x0a,
     500,   23,   23,   23, 0x0a,
     512,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TabPDFOptions[] = {
    "TabPDFOptions\0noInfo()\0\0hasInfo()\0"
    "doDocBleeds()\0ToggleEncr()\0EnablePDFX(int)\0"
    "a\0DoDownsample()\0RemoveEmbed()\0"
    "PutToEmbed()\0RemoveOutline()\0"
    "PutToOutline()\0SelAFont(QListWidgetItem*)\0"
    "SelEFont(QListWidgetItem*)\0"
    "SelSFont(QListWidgetItem*)\0EmbedAll()\0"
    "OutlineAll()\0PagePr()\0SetPgEff()\0"
    "SetEffOpts(int)\0nr\0ValidDI(int)\0"
    "PDFMirror()\0Rotation(int)\0value\0"
    "DoEffects()\0EffectOnAll()\0SelRange(bool)\0"
    "e\0EnablePr(int)\0EnablePG()\0EnablePGI()\0"
    "EnablePGI2()\0EnableLPI(int)\0EnableLPI2()\0"
    "SelLPIcol(int)\0enableCMS(bool)\0enable\0"
    "checkInfo()\0createPageNumberRange()\0"
};

void TabPDFOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabPDFOptions *_t = static_cast<TabPDFOptions *>(_o);
        switch (_id) {
        case 0: _t->noInfo(); break;
        case 1: _t->hasInfo(); break;
        case 2: _t->doDocBleeds(); break;
        case 3: _t->ToggleEncr(); break;
        case 4: _t->EnablePDFX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->DoDownsample(); break;
        case 6: _t->RemoveEmbed(); break;
        case 7: _t->PutToEmbed(); break;
        case 8: _t->RemoveOutline(); break;
        case 9: _t->PutToOutline(); break;
        case 10: _t->SelAFont((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->SelEFont((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->SelSFont((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 13: _t->EmbedAll(); break;
        case 14: _t->OutlineAll(); break;
        case 15: _t->PagePr(); break;
        case 16: _t->SetPgEff(); break;
        case 17: _t->SetEffOpts((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->ValidDI((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->PDFMirror(); break;
        case 20: _t->Rotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->DoEffects(); break;
        case 22: _t->EffectOnAll(); break;
        case 23: _t->SelRange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->EnablePr((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->EnablePG(); break;
        case 26: _t->EnablePGI(); break;
        case 27: _t->EnablePGI2(); break;
        case 28: _t->EnableLPI((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->EnableLPI2(); break;
        case 30: _t->SelLPIcol((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->enableCMS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->checkInfo(); break;
        case 33: _t->createPageNumberRange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TabPDFOptions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TabPDFOptions::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_TabPDFOptions,
      qt_meta_data_TabPDFOptions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabPDFOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabPDFOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabPDFOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabPDFOptions))
        return static_cast<void*>(const_cast< TabPDFOptions*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int TabPDFOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void TabPDFOptions::noInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void TabPDFOptions::hasInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
