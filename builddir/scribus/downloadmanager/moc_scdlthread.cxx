/****************************************************************************
** Meta object code from reading C++ file 'scdlthread.h'
**
** Created: Sun Feb 24 21:37:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/downloadmanager/scdlthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scdlthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ScDLThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   22,   22,   22, 0x05,
      23,   22,   22,   22, 0x05,
      35,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   22,   22,   22, 0x08,
      73,   22,   22,   22, 0x08,
      92,   22,   22,   22, 0x08,
     112,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ScDLThread[] = {
    "ScDLThread\0finished()\0\0runSignal()\0"
    "received(QString)\0startNextDownload()\0"
    "downloadFinished()\0downloadReadyRead()\0"
    "runSlot()\0"
};

void ScDLThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScDLThread *_t = static_cast<ScDLThread *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->runSignal(); break;
        case 2: _t->received((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->startNextDownload(); break;
        case 4: _t->downloadFinished(); break;
        case 5: _t->downloadReadyRead(); break;
        case 6: _t->runSlot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ScDLThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScDLThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ScDLThread,
      qt_meta_data_ScDLThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScDLThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScDLThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScDLThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScDLThread))
        return static_cast<void*>(const_cast< ScDLThread*>(this));
    return QThread::qt_metacast(_clname);
}

int ScDLThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void ScDLThread::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ScDLThread::runSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ScDLThread::received(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
