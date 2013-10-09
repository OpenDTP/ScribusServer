/****************************************************************************
** Meta object code from reading C++ file 'helpbrowser.h'
**
** Created: Sun Feb 24 21:37:10 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/helpbrowser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helpbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HelpBrowser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      22,   62,   21,   21, 0x0a,
     113,  148,   21,   21, 0x2a,
     173,  200,   21,   21, 0x2a,
     214,   21,   21,   21, 0x09,
     231,  252,   21,   21, 0x09,
     254,  272,   21,   21, 0x09,
     281,   21,   21,   21, 0x09,
     292,  318,   21,   21, 0x09,
     323,   21,  338,   21, 0x09,
     346,   21,  338,   21, 0x09,
     360,  404,   21,   21, 0x09,
     424,  465,   21,   21, 0x09,
     467,  465,   21,   21, 0x09,
     510,   21,   21,   21, 0x09,
     536,   21,   21,   21, 0x09,
     543,   21,   21,   21, 0x09,
     554,   21,   21,   21, 0x09,
     569,   21,   21,   21, 0x09,
     577,   21,   21,   21, 0x09,
     602,   21,   21,   21, 0x09,
     633,   21,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_HelpBrowser[] = {
    "HelpBrowser\0closed()\0\0"
    "jumpToHelpSection(QString,QString,bool)\0"
    "jumpToSection,jumpToFile,dontChangeIfAlreadyLoaded\0"
    "jumpToHelpSection(QString,QString)\0"
    "jumpToSection,jumpToFile\0"
    "jumpToHelpSection(QString)\0jumpToSection\0"
    "languageChange()\0histChosen(QAction*)\0"
    "i\0loadHelp(QString)\0filename\0loadMenu()\0"
    "showLinkContents(QString)\0link\0"
    "bookmarkFile()\0QString\0historyFile()\0"
    "itemSelected(QItemSelection,QItemSelection)\0"
    "selected,deselected\0"
    "itemSearchSelected(QTreeWidgetItem*,int)\0"
    ",\0itemBookmarkSelected(QTreeWidgetItem*,int)\0"
    "searchingButton_clicked()\0find()\0"
    "findNext()\0findPrevious()\0print()\0"
    "bookmarkButton_clicked()\0"
    "deleteBookmarkButton_clicked()\0"
    "deleteAllBookmarkButton_clicked()\0"
};

void HelpBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HelpBrowser *_t = static_cast<HelpBrowser *>(_o);
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->jumpToHelpSection((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->jumpToHelpSection((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->jumpToHelpSection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->languageChange(); break;
        case 5: _t->histChosen((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->loadHelp((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->loadMenu(); break;
        case 8: _t->showLinkContents((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: { QString _r = _t->bookmarkFile();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->historyFile();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: _t->itemSelected((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 12: _t->itemSearchSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->itemBookmarkSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->searchingButton_clicked(); break;
        case 15: _t->find(); break;
        case 16: _t->findNext(); break;
        case 17: _t->findPrevious(); break;
        case 18: _t->print(); break;
        case 19: _t->bookmarkButton_clicked(); break;
        case 20: _t->deleteBookmarkButton_clicked(); break;
        case 21: _t->deleteAllBookmarkButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HelpBrowser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HelpBrowser::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_HelpBrowser,
      qt_meta_data_HelpBrowser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HelpBrowser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HelpBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HelpBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HelpBrowser))
        return static_cast<void*>(const_cast< HelpBrowser*>(this));
    if (!strcmp(_clname, "Ui::HelpBrowser"))
        return static_cast< Ui::HelpBrowser*>(const_cast< HelpBrowser*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int HelpBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void HelpBrowser::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
