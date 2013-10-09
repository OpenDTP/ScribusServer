/****************************************************************************
** Meta object code from reading C++ file 'filesearch.h'
**
** Created: Sun Feb 24 21:37:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/filesearch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileSearch[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   47,   62,   62, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   62,   62,   62, 0x0a,
      71,   62,   62,   62, 0x0a,
      87,   62,  100,   62, 0x0a,
     104,   62,   62,   62, 0x0a,
     115,   62,   62,   62, 0x0a,
     128,   62,   62,   62, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FileSearch[] = {
    "FileSearch\0searchComplete(QStringList,QString)\0"
    "paths,filename\0\0start()\0matchingFiles()\0"
    "foundCount()\0int\0fileName()\0currentDir()\0"
    "next()\0"
};

void FileSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileSearch *_t = static_cast<FileSearch *>(_o);
        switch (_id) {
        case 0: _t->searchComplete((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->start(); break;
        case 2: _t->matchingFiles(); break;
        case 3: { int _r = _t->foundCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: _t->fileName(); break;
        case 5: _t->currentDir(); break;
        case 6: _t->next(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileSearch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileSearch::staticMetaObject = {
    { &DeferredTask::staticMetaObject, qt_meta_stringdata_FileSearch,
      qt_meta_data_FileSearch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileSearch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileSearch))
        return static_cast<void*>(const_cast< FileSearch*>(this));
    return DeferredTask::qt_metacast(_clname);
}

int FileSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeferredTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void FileSearch::searchComplete(const QStringList & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
