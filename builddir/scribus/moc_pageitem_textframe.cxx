/****************************************************************************
** Meta object code from reading C++ file 'pageitem_textframe.h'
**
** Created: Sun Feb 24 21:37:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/pageitem_textframe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageitem_textframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PageItem_TextFrame[] = {

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
      19,   42,   42,   42, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PageItem_TextFrame[] = {
    "PageItem_TextFrame\0slotInvalidateLayout()\0"
    "\0"
};

void PageItem_TextFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PageItem_TextFrame *_t = static_cast<PageItem_TextFrame *>(_o);
        switch (_id) {
        case 0: _t->slotInvalidateLayout(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PageItem_TextFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PageItem_TextFrame::staticMetaObject = {
    { &PageItem::staticMetaObject, qt_meta_stringdata_PageItem_TextFrame,
      qt_meta_data_PageItem_TextFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageItem_TextFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageItem_TextFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageItem_TextFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageItem_TextFrame))
        return static_cast<void*>(const_cast< PageItem_TextFrame*>(this));
    return PageItem::qt_metacast(_clname);
}

int PageItem_TextFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PageItem::qt_metacall(_c, _id, _a);
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
