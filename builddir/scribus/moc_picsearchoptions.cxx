/****************************************************************************
** Meta object code from reading C++ file 'picsearchoptions.h'
**
** Created: Sun Feb 24 21:37:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/picsearchoptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'picsearchoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PicSearchOptions[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   39,   39,   39, 0x08,
      40,   39,   39,   39, 0x08,
      56,   83,   39,   39, 0x08,
      97,  140,   39,   39, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PicSearchOptions[] = {
    "PicSearchOptions\0slotChangeSearchDir()\0"
    "\0slotSearchPic()\0slotSearchPicAborted(bool)\0"
    "userCancelled\0slotSearchPicFinished(QStringList,QString)\0"
    "matches,fileName\0"
};

void PicSearchOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PicSearchOptions *_t = static_cast<PicSearchOptions *>(_o);
        switch (_id) {
        case 0: _t->slotChangeSearchDir(); break;
        case 1: _t->slotSearchPic(); break;
        case 2: _t->slotSearchPicAborted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slotSearchPicFinished((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PicSearchOptions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PicSearchOptions::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PicSearchOptions,
      qt_meta_data_PicSearchOptions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PicSearchOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PicSearchOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PicSearchOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PicSearchOptions))
        return static_cast<void*>(const_cast< PicSearchOptions*>(this));
    if (!strcmp(_clname, "Ui::PicSearchOptions"))
        return static_cast< Ui::PicSearchOptions*>(const_cast< PicSearchOptions*>(this));
    return QDialog::qt_metacast(_clname);
}

int PicSearchOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
