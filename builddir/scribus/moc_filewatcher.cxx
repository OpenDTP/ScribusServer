/****************************************************************************
** Meta object code from reading C++ file 'filewatcher.h'
**
** Created: Sun Feb 24 21:37:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/filewatcher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filewatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileWatcher[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   33,   33,   33, 0x05,
      34,   33,   33,   33, 0x05,
      55,   33,   33,   33, 0x05,
      75,   33,   33,   33, 0x05,
      95,   33,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
     117,  134,   33,   33, 0x0a,
     143,  134,   33,   33, 0x0a,
     163,  134,   33,   33, 0x0a,
     179,  134,   33,   33, 0x0a,
     198,   33,   33,   33, 0x0a,
     206,   33,   33,   33, 0x0a,
     213,   33,   33,   33, 0x0a,
     225,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FileWatcher[] = {
    "FileWatcher\0fileChanged(QString)\0\0"
    "fileDeleted(QString)\0dirChanged(QString)\0"
    "dirDeleted(QString)\0statePending(QString)\0"
    "addFile(QString)\0fileName\0removeFile(QString)\0"
    "addDir(QString)\0removeDir(QString)\0"
    "start()\0stop()\0forceScan()\0checkFiles()\0"
};

void FileWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileWatcher *_t = static_cast<FileWatcher *>(_o);
        switch (_id) {
        case 0: _t->fileChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->fileDeleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->dirChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->dirDeleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->statePending((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->addFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->removeFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->addDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->removeDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->start(); break;
        case 10: _t->stop(); break;
        case 11: _t->forceScan(); break;
        case 12: _t->checkFiles(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileWatcher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileWatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileWatcher,
      qt_meta_data_FileWatcher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileWatcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileWatcher))
        return static_cast<void*>(const_cast< FileWatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int FileWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void FileWatcher::fileChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileWatcher::fileDeleted(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileWatcher::dirChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileWatcher::dirDeleted(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileWatcher::statePending(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
