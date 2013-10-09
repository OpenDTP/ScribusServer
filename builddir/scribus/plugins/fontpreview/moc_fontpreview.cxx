/****************************************************************************
** Meta object code from reading C++ file 'fontpreview.h'
**
** Created: Sun Feb 24 21:56:06 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scribus/plugins/fontpreview/fontpreview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fontpreview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FontPreview[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   29,   29,   29, 0x09,
      30,   62,   29,   29, 0x09,
      64,  113,   29,   29, 0x09,
     115,   29,   29,   29, 0x09,
     139,   29,   29,   29, 0x09,
     168,   29,   29,   29, 0x09,
     195,   29,   29,   29, 0x09,
     218,  240,   29,   29, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FontPreview[] = {
    "FontPreview\0languageChange()\0\0"
    "searchEdit_textChanged(QString)\0s\0"
    "fontList_currentChanged(QModelIndex,QModelIndex)\0"
    ",\0displayButton_clicked()\0"
    "resetDisplayButton_clicked()\0"
    "sizeSpin_valueChanged(int)\0"
    "cancelButton_clicked()\0setExtendedView(bool)\0"
    "state\0"
};

void FontPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FontPreview *_t = static_cast<FontPreview *>(_o);
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->searchEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->fontList_currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->displayButton_clicked(); break;
        case 4: _t->resetDisplayButton_clicked(); break;
        case 5: _t->sizeSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->cancelButton_clicked(); break;
        case 7: _t->setExtendedView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FontPreview::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FontPreview::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FontPreview,
      qt_meta_data_FontPreview, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FontPreview::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FontPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FontPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FontPreview))
        return static_cast<void*>(const_cast< FontPreview*>(this));
    if (!strcmp(_clname, "Ui::FontPreview"))
        return static_cast< Ui::FontPreview*>(const_cast< FontPreview*>(this));
    return QDialog::qt_metacast(_clname);
}

int FontPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
