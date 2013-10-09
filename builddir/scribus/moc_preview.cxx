/****************************************************************************
** Meta object code from reading C++ file 'preview.h'
**
** Created: Sun Feb 24 21:37:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/preview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PPreview[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      20,   33,   19,   19, 0x0a,
      37,   19,   19,   19, 0x0a,
      49,   19,   19,   19, 0x0a,
      62,   19,   19,   19, 0x0a,
      82,   99,   19,   19, 0x0a,
     103,   19,   19,   19, 0x0a,
     125,  152,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PPreview[] = {
    "PPreview\0doPrint()\0\0ToSeite(int)\0num\0"
    "redisplay()\0ToggleCMYK()\0ToggleCMYK_Colour()\0"
    "doSpotTable(int)\0row\0toggleAllfromHeader()\0"
    "scaleBox_valueChanged(int)\0value\0"
};

void PPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PPreview *_t = static_cast<PPreview *>(_o);
        switch (_id) {
        case 0: _t->doPrint(); break;
        case 1: _t->ToSeite((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->redisplay(); break;
        case 3: _t->ToggleCMYK(); break;
        case 4: _t->ToggleCMYK_Colour(); break;
        case 5: _t->doSpotTable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->toggleAllfromHeader(); break;
        case 7: _t->scaleBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PPreview::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PPreview::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PPreview,
      qt_meta_data_PPreview, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PPreview::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PPreview))
        return static_cast<void*>(const_cast< PPreview*>(this));
    return QDialog::qt_metacast(_clname);
}

int PPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void PPreview::doPrint()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
