/****************************************************************************
** Meta object code from reading C++ file 'downloaddictionaries.h'
**
** Created: Sun Feb 24 21:37:24 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/downloaddictionaries.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downloaddictionaries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DownloadDictionaries[] = {

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
      21,   32,   32,   32, 0x09,
      33,   32,   32,   32, 0x09,
      52,   32,   32,   32, 0x09,
      79,   32,   32,   32, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DownloadDictionaries[] = {
    "DownloadDictionaries\0download()\0\0"
    "downloadDictList()\0downloadDictListFinished()\0"
    "downloadsFinished()\0"
};

void DownloadDictionaries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DownloadDictionaries *_t = static_cast<DownloadDictionaries *>(_o);
        switch (_id) {
        case 0: _t->download(); break;
        case 1: _t->downloadDictList(); break;
        case 2: _t->downloadDictListFinished(); break;
        case 3: _t->downloadsFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DownloadDictionaries::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DownloadDictionaries::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DownloadDictionaries,
      qt_meta_data_DownloadDictionaries, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DownloadDictionaries::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DownloadDictionaries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DownloadDictionaries::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadDictionaries))
        return static_cast<void*>(const_cast< DownloadDictionaries*>(this));
    if (!strcmp(_clname, "Ui::DownloadDictionaries"))
        return static_cast< Ui::DownloadDictionaries*>(const_cast< DownloadDictionaries*>(this));
    return QDialog::qt_metacast(_clname);
}

int DownloadDictionaries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
