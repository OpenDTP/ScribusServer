/****************************************************************************
** Meta object code from reading C++ file 'tabkeyboardshortcutswidget.h'
**
** Created: Sun Feb 24 21:37:23 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/tabkeyboardshortcutswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabkeyboardshortcutswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TabKeyboardShortcutsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   40,   40,   40, 0x09,
      41,   84,   40,   40, 0x09,
     101,  127,   40,   40, 0x29,
     135,   40,   40,   40, 0x09,
     146,   40,   40,   40, 0x09,
     163,   40,   40,   40, 0x09,
     182,   40,   40,   40, 0x09,
     201,   40,   40,   40, 0x09,
     215,   40,   40,   40, 0x09,
     235,  256,   40,   40, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TabKeyboardShortcutsWidget[] = {
    "TabKeyboardShortcutsWidget\0setKeyText()\0"
    "\0dispKey(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "current,previous\0dispKey(QTreeWidgetItem*)\0"
    "current\0setNoKey()\0loadKeySetFile()\0"
    "importKeySetFile()\0exportKeySetFile()\0"
    "resetKeySet()\0clearSearchString()\0"
    "applySearch(QString)\0newss\0"
};

void TabKeyboardShortcutsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabKeyboardShortcutsWidget *_t = static_cast<TabKeyboardShortcutsWidget *>(_o);
        switch (_id) {
        case 0: _t->setKeyText(); break;
        case 1: _t->dispKey((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->dispKey((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->setNoKey(); break;
        case 4: _t->loadKeySetFile(); break;
        case 5: _t->importKeySetFile(); break;
        case 6: _t->exportKeySetFile(); break;
        case 7: _t->resetKeySet(); break;
        case 8: _t->clearSearchString(); break;
        case 9: _t->applySearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TabKeyboardShortcutsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TabKeyboardShortcutsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TabKeyboardShortcutsWidget,
      qt_meta_data_TabKeyboardShortcutsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabKeyboardShortcutsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabKeyboardShortcutsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabKeyboardShortcutsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabKeyboardShortcutsWidget))
        return static_cast<void*>(const_cast< TabKeyboardShortcutsWidget*>(this));
    if (!strcmp(_clname, "Ui::TabKeyboardShortcutsWidget"))
        return static_cast< Ui::TabKeyboardShortcutsWidget*>(const_cast< TabKeyboardShortcutsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int TabKeyboardShortcutsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
