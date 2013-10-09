/****************************************************************************
** Meta object code from reading C++ file 'sctextbrowser.h'
**
** Created: Sun Feb 24 21:37:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/sctextbrowser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sctextbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ScTextBrowser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   32,   37,   37, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   32,   37,   37, 0x09,
      58,   32,   37,   37, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ScTextBrowser[] = {
    "ScTextBrowser\0overLink(QString)\0link\0"
    "\0hoverMouse(QString)\0navigateOverride(QUrl)\0"
};

void ScTextBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScTextBrowser *_t = static_cast<ScTextBrowser *>(_o);
        switch (_id) {
        case 0: _t->overLink((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->hoverMouse((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->navigateOverride((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ScTextBrowser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScTextBrowser::staticMetaObject = {
    { &QTextBrowser::staticMetaObject, qt_meta_stringdata_ScTextBrowser,
      qt_meta_data_ScTextBrowser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScTextBrowser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScTextBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScTextBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScTextBrowser))
        return static_cast<void*>(const_cast< ScTextBrowser*>(this));
    return QTextBrowser::qt_metacast(_clname);
}

int ScTextBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ScTextBrowser::overLink(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
