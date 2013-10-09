/****************************************************************************
** Meta object code from reading C++ file 'stylemanager.h'
**
** Created: Sun Feb 24 21:37:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/stylemanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stylemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StyleManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      23,   43,   22,   22, 0x0a,
      47,   22,   22,   22, 0x0a,
      64,   22,   22,   22, 0x0a,
      77,   22,   22,   22, 0x08,
      86,   22,   22,   22, 0x08,
      98,   22,   22,   22, 0x08,
     111,   22,   22,   22, 0x08,
     124,   22,   22,   22, 0x08,
     135,   22,   22,   22, 0x08,
     147,   22,   22,   22, 0x08,
     157,   22,   22,   22, 0x08,
     180,   22,   22,   22, 0x08,
     195,   22,   22,   22, 0x08,
     207,  230,   22,   22, 0x08,
     236,  274,   22,   22, 0x08,
     286,  311,   22,   22, 0x08,
     316,  345,   22,   22, 0x08,
     354,   22,   22,   22, 0x08,
     372,  405,   22,   22, 0x08,
     410,  460,   22,   22, 0x08,
     476,  274,   22,   22, 0x08,
     513,   22,   22,   22, 0x08,
     539,   22,   22,   22, 0x08,
     562,   22,   22,   22, 0x08,
     574,   22,   22,   22, 0x08,
     586,  610,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StyleManager[] = {
    "StyleManager\0closed()\0\0setDoc(ScribusDoc*)\0"
    "doc\0languageChange()\0unitChange()\0"
    "slotOk()\0slotApply()\0slotDelete()\0"
    "slotImport()\0slotEdit()\0slotClone()\0"
    "slotNew()\0slotNewPopup(QAction*)\0"
    "slotNewPopup()\0slotScrap()\0"
    "slotRightClick(QPoint)\0point\0"
    "slotDoubleClick(QTreeWidgetItem*,int)\0"
    "item,column\0slotNameChanged(QString)\0"
    "name\0slotShortcutChanged(QString)\0"
    "shortcut\0slotSetupWidget()\0"
    "slotApplyStyle(QTreeWidgetItem*)\0item\0"
    "slotApplyStyle(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "newitem,olditem\0slotApplyStyle(QTreeWidgetItem*,int)\0"
    "slotDocSelectionChanged()\0"
    "slotDocStylesChanged()\0slotDirty()\0"
    "slotClean()\0slotApplyStyle(QString)\0"
    "keyString\0"
};

void StyleManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StyleManager *_t = static_cast<StyleManager *>(_o);
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->setDoc((*reinterpret_cast< ScribusDoc*(*)>(_a[1]))); break;
        case 2: _t->languageChange(); break;
        case 3: _t->unitChange(); break;
        case 4: _t->slotOk(); break;
        case 5: _t->slotApply(); break;
        case 6: _t->slotDelete(); break;
        case 7: _t->slotImport(); break;
        case 8: _t->slotEdit(); break;
        case 9: _t->slotClone(); break;
        case 10: _t->slotNew(); break;
        case 11: _t->slotNewPopup((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 12: _t->slotNewPopup(); break;
        case 13: _t->slotScrap(); break;
        case 14: _t->slotRightClick((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 15: _t->slotDoubleClick((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->slotNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->slotShortcutChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->slotSetupWidget(); break;
        case 19: _t->slotApplyStyle((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 20: _t->slotApplyStyle((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 21: _t->slotApplyStyle((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->slotDocSelectionChanged(); break;
        case 23: _t->slotDocStylesChanged(); break;
        case 24: _t->slotDirty(); break;
        case 25: _t->slotClean(); break;
        case 26: _t->slotApplyStyle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StyleManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StyleManager::staticMetaObject = {
    { &ScrPaletteBase::staticMetaObject, qt_meta_stringdata_StyleManager,
      qt_meta_data_StyleManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StyleManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StyleManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StyleManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StyleManager))
        return static_cast<void*>(const_cast< StyleManager*>(this));
    if (!strcmp(_clname, "Ui::StyleManager"))
        return static_cast< Ui::StyleManager*>(const_cast< StyleManager*>(this));
    return ScrPaletteBase::qt_metacast(_clname);
}

int StyleManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrPaletteBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void StyleManager::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
