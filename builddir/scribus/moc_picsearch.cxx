/****************************************************************************
** Meta object code from reading C++ file 'picsearch.h'
**
** Created: Sun Feb 24 21:37:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/picsearch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'picsearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PicSearch[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,   30,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x08,
      57,   97,   30,   30, 0x08,
      99,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PicSearch[] = {
    "PicSearch\0rowPicChanged(uint)\0\0"
    "previewCheckBox_clicked()\0"
    "foundFilesBox_clicked(QListWidgetItem*)\0"
    "c\0createPreview()\0"
};

void PicSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PicSearch *_t = static_cast<PicSearch *>(_o);
        switch (_id) {
        case 0: _t->rowPicChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->previewCheckBox_clicked(); break;
        case 2: _t->foundFilesBox_clicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->createPreview(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PicSearch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PicSearch::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PicSearch,
      qt_meta_data_PicSearch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PicSearch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PicSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PicSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PicSearch))
        return static_cast<void*>(const_cast< PicSearch*>(this));
    if (!strcmp(_clname, "Ui::PicSearch"))
        return static_cast< Ui::PicSearch*>(const_cast< PicSearch*>(this));
    return QDialog::qt_metacast(_clname);
}

int PicSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PicSearch::rowPicChanged(unsigned int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
