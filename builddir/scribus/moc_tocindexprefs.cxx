/****************************************************************************
** Meta object code from reading C++ file 'tocindexprefs.h'
**
** Created: Sun Feb 24 21:37:24 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/tocindexprefs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tocindexprefs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TOCIndexPrefs[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   49,   63,   63, 0x0a,
      64,   63,   63,   63, 0x0a,
      87,  115,   63,   63, 0x0a,
     124,  139,   63,   63, 0x0a,
     154,   63,   63,   63, 0x0a,
     163,   63,   63,   63, 0x0a,
     182,   63,   63,   63, 0x0a,
     213,   63,   63,   63, 0x0a,
     225,  256,   63,   63, 0x0a,
     274,  301,   63,   63, 0x0a,
     311,  349,   63,   63, 0x0a,
     362,  398,   63,   63, 0x0a,
     408,  428,   63,   63, 0x0a,
     436,  468,   63,   63, 0x0a,
     484,   63,   63,   63, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TOCIndexPrefs[] = {
    "TOCIndexPrefs\0setup(ToCSetupVector*,ScribusDoc*)\0"
    "tocsetups,doc\0\0generatePageItemList()\0"
    "setupItemAttrs(QStringList)\0newNames\0"
    "selectToC(int)\0numberSelected\0addToC()\0"
    "updateToCListBox()\0updateParagraphStyleComboBox()\0"
    "deleteToC()\0itemAttributeSelected(QString)\0"
    "itemAttributeName\0itemFrameSelected(QString)\0"
    "frameName\0itemPageNumberPlacedSelected(QString)\0"
    "pageLocation\0itemParagraphStyleSelected(QString)\0"
    "itemStyle\0setToCName(QString)\0newName\0"
    "nonPrintingFramesSelected(bool)\0"
    "showNonPrinting\0languageChange()\0"
};

void TOCIndexPrefs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TOCIndexPrefs *_t = static_cast<TOCIndexPrefs *>(_o);
        switch (_id) {
        case 0: _t->setup((*reinterpret_cast< ToCSetupVector*(*)>(_a[1])),(*reinterpret_cast< ScribusDoc*(*)>(_a[2]))); break;
        case 1: _t->generatePageItemList(); break;
        case 2: _t->setupItemAttrs((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->selectToC((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->addToC(); break;
        case 5: _t->updateToCListBox(); break;
        case 6: _t->updateParagraphStyleComboBox(); break;
        case 7: _t->deleteToC(); break;
        case 8: _t->itemAttributeSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->itemFrameSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->itemPageNumberPlacedSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->itemParagraphStyleSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->setToCName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->nonPrintingFramesSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TOCIndexPrefs::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TOCIndexPrefs::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TOCIndexPrefs,
      qt_meta_data_TOCIndexPrefs, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TOCIndexPrefs::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TOCIndexPrefs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TOCIndexPrefs::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TOCIndexPrefs))
        return static_cast<void*>(const_cast< TOCIndexPrefs*>(this));
    if (!strcmp(_clname, "Ui::TOCIndexPrefs"))
        return static_cast< Ui::TOCIndexPrefs*>(const_cast< TOCIndexPrefs*>(this));
    return QWidget::qt_metacast(_clname);
}

int TOCIndexPrefs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
