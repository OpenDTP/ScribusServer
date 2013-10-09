/****************************************************************************
** Meta object code from reading C++ file 'tabexternaltoolswidget.h'
**
** Created: Sun Feb 24 21:37:23 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/tabexternaltoolswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabexternaltoolswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TabExternalToolsWidget[] = {

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
      23,   46,   46,   46, 0x0a,
      47,   46,   46,   46, 0x0a,
      65,   46,   46,   46, 0x0a,
      88,   46,   46,   46, 0x0a,
     108,   46,   46,   46, 0x0a,
     125,   46,   46,   46, 0x0a,
     143,   46,   46,   46, 0x0a,
     163,   46,   46,   46, 0x0a,
     175,   46,   46,   46, 0x0a,
     190,   46,   46,   46, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TabExternalToolsWidget[] = {
    "TabExternalToolsWidget\0changePostScriptTool()\0"
    "\0changeImageTool()\0changeExtBrowserTool()\0"
    "changeLatexEditor()\0rescanForTools()\0"
    "upButtonPressed()\0downButtonPressed()\0"
    "addConfig()\0deleteConfig()\0changePath()\0"
};

void TabExternalToolsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabExternalToolsWidget *_t = static_cast<TabExternalToolsWidget *>(_o);
        switch (_id) {
        case 0: _t->changePostScriptTool(); break;
        case 1: _t->changeImageTool(); break;
        case 2: _t->changeExtBrowserTool(); break;
        case 3: _t->changeLatexEditor(); break;
        case 4: _t->rescanForTools(); break;
        case 5: _t->upButtonPressed(); break;
        case 6: _t->downButtonPressed(); break;
        case 7: _t->addConfig(); break;
        case 8: _t->deleteConfig(); break;
        case 9: _t->changePath(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TabExternalToolsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TabExternalToolsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TabExternalToolsWidget,
      qt_meta_data_TabExternalToolsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TabExternalToolsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TabExternalToolsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TabExternalToolsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TabExternalToolsWidget))
        return static_cast<void*>(const_cast< TabExternalToolsWidget*>(this));
    if (!strcmp(_clname, "Ui::TabExternalToolsWidget"))
        return static_cast< Ui::TabExternalToolsWidget*>(const_cast< TabExternalToolsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int TabExternalToolsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
