/****************************************************************************
** Meta object code from reading C++ file 'printdialog.h'
**
** Created: Sun Feb 24 21:37:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/printdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrintDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,   48,   24,   24, 0x0a,
      60,   24,   24,   24, 0x09,
      74,   24,   24,   24, 0x09,
      98,   24,   24,   24, 0x09,
     111,  130,   24,   24, 0x09,
     134,  154,   24,   24, 0x09,
     158,  173,   24,   24, 0x09,
     175,  173,   24,   24, 0x09,
     188,   24,   24,   24, 0x09,
     198,   24,   24,   24, 0x09,
     208,   24,   24,   24, 0x09,
     226,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PrintDialog[] = {
    "PrintDialog\0doPreview()\0\0"
    "setMinMax(int,int,int)\0min,max,cur\0"
    "doDocBleeds()\0createPageNumberRange()\0"
    "SetOptions()\0SelEngine(QString)\0eng\0"
    "SelPrinter(QString)\0prn\0SelRange(bool)\0"
    "e\0SelMode(int)\0SelFile()\0SelComm()\0"
    "okButtonClicked()\0previewButtonClicked()\0"
};

void PrintDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrintDialog *_t = static_cast<PrintDialog *>(_o);
        switch (_id) {
        case 0: _t->doPreview(); break;
        case 1: _t->setMinMax((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->doDocBleeds(); break;
        case 3: _t->createPageNumberRange(); break;
        case 4: _t->SetOptions(); break;
        case 5: _t->SelEngine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->SelPrinter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->SelRange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->SelMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->SelFile(); break;
        case 10: _t->SelComm(); break;
        case 11: _t->okButtonClicked(); break;
        case 12: _t->previewButtonClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PrintDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PrintDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PrintDialog,
      qt_meta_data_PrintDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrintDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrintDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrintDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrintDialog))
        return static_cast<void*>(const_cast< PrintDialog*>(this));
    if (!strcmp(_clname, "Ui::PrintDialogBase"))
        return static_cast< Ui::PrintDialogBase*>(const_cast< PrintDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PrintDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void PrintDialog::doPreview()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
