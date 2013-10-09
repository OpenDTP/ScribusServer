/****************************************************************************
** Meta object code from reading C++ file 'modetoolbar.h'
**
** Created: Sun Feb 24 21:37:24 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/ui/modetoolbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modetoolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ModeToolBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   27,   27,   27, 0x0a,
      28,   53,   27,   27, 0x0a,
      62,   27,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ModeToolBar[] = {
    "ModeToolBar\0GetPolyProps()\0\0"
    "SelShape(int,int,qreal*)\0s,c,vals\0"
    "languageChange()\0"
};

void ModeToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModeToolBar *_t = static_cast<ModeToolBar *>(_o);
        switch (_id) {
        case 0: _t->GetPolyProps(); break;
        case 1: _t->SelShape((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal*(*)>(_a[3]))); break;
        case 2: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ModeToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ModeToolBar::staticMetaObject = {
    { &ScToolBar::staticMetaObject, qt_meta_stringdata_ModeToolBar,
      qt_meta_data_ModeToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModeToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModeToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModeToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModeToolBar))
        return static_cast<void*>(const_cast< ModeToolBar*>(this));
    return ScToolBar::qt_metacast(_clname);
}

int ModeToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
