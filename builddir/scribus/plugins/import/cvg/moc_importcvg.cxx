/****************************************************************************
** Meta object code from reading C++ file 'importcvg.h'
**
** Created: Sun Feb 24 21:56:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../scribus/plugins/import/cvg/importcvg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'importcvg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CvgPlug[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CvgPlug[] = {
    "CvgPlug\0cancelRequested()\0\0"
};

void CvgPlug::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CvgPlug *_t = static_cast<CvgPlug *>(_o);
        switch (_id) {
        case 0: _t->cancelRequested(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CvgPlug::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CvgPlug::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CvgPlug,
      qt_meta_data_CvgPlug, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CvgPlug::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CvgPlug::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CvgPlug::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CvgPlug))
        return static_cast<void*>(const_cast< CvgPlug*>(this));
    return QObject::qt_metacast(_clname);
}

int CvgPlug::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
