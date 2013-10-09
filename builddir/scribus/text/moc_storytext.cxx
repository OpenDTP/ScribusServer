/****************************************************************************
** Meta object code from reading C++ file 'storytext.h'
**
** Created: Sun Feb 24 21:36:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../scribus/text/storytext.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'storytext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StoryText[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StoryText[] = {
    "StoryText\0changed()\0\0invalidateAll()\0"
};

void StoryText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StoryText *_t = static_cast<StoryText *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->invalidateAll(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData StoryText::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StoryText::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StoryText,
      qt_meta_data_StoryText, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StoryText::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StoryText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StoryText::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StoryText))
        return static_cast<void*>(const_cast< StoryText*>(this));
    if (!strcmp(_clname, "SaxIO"))
        return static_cast< SaxIO*>(const_cast< StoryText*>(this));
    return QObject::qt_metacast(_clname);
}

int StoryText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void StoryText::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
