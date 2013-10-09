/****************************************************************************
** Meta object code from reading C++ file 'cmsprefs.h'
**
** Created: Sun Feb 24 21:37:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/cmsprefs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cmsprefs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CMSPrefs[] = {

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
       9,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x0a,
      34,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CMSPrefs[] = {
    "CMSPrefs\0cmsOn(bool)\0\0slotCMSon()\0"
    "setValues()\0"
};

void CMSPrefs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CMSPrefs *_t = static_cast<CMSPrefs *>(_o);
        switch (_id) {
        case 0: _t->cmsOn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->slotCMSon(); break;
        case 2: _t->setValues(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CMSPrefs::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CMSPrefs::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CMSPrefs,
      qt_meta_data_CMSPrefs, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CMSPrefs::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CMSPrefs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CMSPrefs::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CMSPrefs))
        return static_cast<void*>(const_cast< CMSPrefs*>(this));
    if (!strcmp(_clname, "Ui::CMSPrefsBase"))
        return static_cast< Ui::CMSPrefsBase*>(const_cast< CMSPrefs*>(this));
    return QWidget::qt_metacast(_clname);
}

int CMSPrefs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void CMSPrefs::cmsOn(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
