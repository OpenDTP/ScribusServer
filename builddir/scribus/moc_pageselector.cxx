/****************************************************************************
** Meta object code from reading C++ file 'pageselector.h'
**
** Created: Sun Feb 24 21:37:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/pageselector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageselector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PageSelector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x0a,
      40,   27,   27,   27, 0x0a,
      56,   27,   27,   27, 0x0a,
      73,   27,   27,   27, 0x0a,
      86,   27,   27,   27, 0x08,
      99,   27,   27,   27, 0x08,
     110,   27,   27,   27, 0x08,
     120,   27,   27,   27, 0x08,
     128,   27,   27,   27, 0x08,
     135,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PageSelector[] = {
    "PageSelector\0GotoPage(int)\0\0GotoPg(int)\0"
    "setMaximum(int)\0languageChange()\0"
    "clearFocus()\0GotoPgE(int)\0GotoPage()\0"
    "ToStart()\0ToEnd()\0goBk()\0goFw()\0"
};

void PageSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PageSelector *_t = static_cast<PageSelector *>(_o);
        switch (_id) {
        case 0: _t->GotoPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->GotoPg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setMaximum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->languageChange(); break;
        case 4: _t->clearFocus(); break;
        case 5: _t->GotoPgE((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->GotoPage(); break;
        case 7: _t->ToStart(); break;
        case 8: _t->ToEnd(); break;
        case 9: _t->goBk(); break;
        case 10: _t->goFw(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PageSelector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PageSelector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PageSelector,
      qt_meta_data_PageSelector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageSelector))
        return static_cast<void*>(const_cast< PageSelector*>(this));
    return QWidget::qt_metacast(_clname);
}

int PageSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void PageSelector::GotoPage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
