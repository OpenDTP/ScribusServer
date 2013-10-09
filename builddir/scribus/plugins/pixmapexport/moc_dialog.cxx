/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created: Sun Feb 24 21:57:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scribus/plugins/pixmapexport/dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExportForm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   43,   43,   43, 0x0a,
      44,   43,   43,   43, 0x0a,
      78,   43,   43,   43, 0x0a,
     107,   43,   43,   43, 0x0a,
     135,   43,   43,   43, 0x0a,
     149,   43,   43,   43, 0x09,
     173,   43,   43,   43, 0x09,
     190,   43,   43,   43, 0x09,
     203,   43,   43,   43, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ExportForm[] = {
    "ExportForm\0OutputDirectoryButton_pressed()\0"
    "\0IntervalPagesRadio_stateChanged()\0"
    "AllPagesRadio_stateChanged()\0"
    "OnePageRadio_stateChanged()\0computeSize()\0"
    "createPageNumberRange()\0languageChange()\0"
    "readConfig()\0writeConfig()\0"
};

void ExportForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExportForm *_t = static_cast<ExportForm *>(_o);
        switch (_id) {
        case 0: _t->OutputDirectoryButton_pressed(); break;
        case 1: _t->IntervalPagesRadio_stateChanged(); break;
        case 2: _t->AllPagesRadio_stateChanged(); break;
        case 3: _t->OnePageRadio_stateChanged(); break;
        case 4: _t->computeSize(); break;
        case 5: _t->createPageNumberRange(); break;
        case 6: _t->languageChange(); break;
        case 7: _t->readConfig(); break;
        case 8: _t->writeConfig(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ExportForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExportForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ExportForm,
      qt_meta_data_ExportForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExportForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExportForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExportForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExportForm))
        return static_cast<void*>(const_cast< ExportForm*>(this));
    if (!strcmp(_clname, "Ui::ExportForm"))
        return static_cast< Ui::ExportForm*>(const_cast< ExportForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int ExportForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
