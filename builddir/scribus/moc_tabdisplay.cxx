/****************************************************************************
** Meta object code from reading C++ file 'tabdisplay.h'
**
** Created: Sun Feb 24 21:37:23 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/tabdisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabdisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TabDisplay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   23,   23,   23, 0x08,
      24,   23,   23,   23, 0x08,
      42,   23,   23,   23, 0x08,
      56,   23,   23,   23, 0x08,
      75,   23,   23,   23, 0x08,
      94,   23,   23,   23, 0x08,
     117,   23,   23,   23, 0x08,
     141,   23,   23,   23, 0x08,
     165,   23,   23,   23, 0x08,
     188,   23,   23,   23, 0x08,
     212,   23,   23,   23, 0x08,
     236,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TabDisplay[] = {
    "TabDisplay\0drawRuler()\0\0restoreDisScale()\0"
    "setDisScale()\0changePaperColor()\0"
    "changeFrameColor()\0changeNormFrameColor()\0"
    "changeGroupFrameColor()\0changeChainFrameColor()\0"
    "changeLockFrameColor()\0changeAnnotFrameColor()\0"
    "changePageBorderColor()\0"
    "changeControlCharsColor()\0"
};

void TabDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabDisplay *_t = static_cast<TabDisplay *>(_o);
        switch (_id) {
        case 0: _t->drawRuler(); break;
        case 1: _t->restoreDisScale(); break;
        case 2: _t->setDisScale(); break;
        case 3: _t->changePaperColor(); break;
        case 4: _t->changeFrameColor(); break;
        case 5: _t->changeNormFrameColor(); break;
        case 6: _t->changeGroupFrameColor(); break;
        case 7: _t->changeChainFrameColor(); break;
        case 8: _t->changeLockFrameColor(); break;
        case 9: _t->changeAnnotFrameColor(); break;
        case 10: _t->changePageBorderColor(); break;
        case 11: _t->changeControlCharsColor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TabDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TabDisplay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TabDisplay,
      qt_meta_data_TabDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabDisplay))
        return static_cast<void*>(const_cast< TabDisplay*>(this));
    if (!strcmp(_clname, "Ui::TabDisplay"))
        return static_cast< Ui::TabDisplay*>(const_cast< TabDisplay*>(this));
    return QWidget::qt_metacast(_clname);
}

int TabDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
