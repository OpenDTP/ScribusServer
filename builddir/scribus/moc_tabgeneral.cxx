/****************************************************************************
** Meta object code from reading C++ file 'tabgeneral.h'
**
** Created: Sun Feb 24 21:37:23 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/tabgeneral.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabgeneral.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TabGeneral[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   39,   47,   47, 0x08,
      48,   47,   47,   47, 0x08,
      61,   47,   47,   47, 0x08,
      75,   47,   47,   47, 0x08,
      91,   47,   47,   47, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TabGeneral[] = {
    "TabGeneral\0setSelectedGUILang(QString)\0"
    "newLang\0\0changeDocs()\0changeProfs()\0"
    "changeScripts()\0changeDocumentTemplates()\0"
};

void TabGeneral::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabGeneral *_t = static_cast<TabGeneral *>(_o);
        switch (_id) {
        case 0: _t->setSelectedGUILang((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->changeDocs(); break;
        case 2: _t->changeProfs(); break;
        case 3: _t->changeScripts(); break;
        case 4: _t->changeDocumentTemplates(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TabGeneral::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TabGeneral::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TabGeneral,
      qt_meta_data_TabGeneral, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabGeneral::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabGeneral::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabGeneral::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabGeneral))
        return static_cast<void*>(const_cast< TabGeneral*>(this));
    if (!strcmp(_clname, "Ui::TabGeneral"))
        return static_cast< Ui::TabGeneral*>(const_cast< TabGeneral*>(this));
    return QWidget::qt_metacast(_clname);
}

int TabGeneral::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
