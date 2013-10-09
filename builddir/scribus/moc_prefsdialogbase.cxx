/****************************************************************************
** Meta object code from reading C++ file 'prefsdialogbase.h'
**
** Created: Sun Feb 24 21:37:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/prefsdialogbase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefsdialogbase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OptionListWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_OptionListWidget[] = {
    "OptionListWidget\0"
};

void OptionListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData OptionListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OptionListWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_OptionListWidget,
      qt_meta_data_OptionListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OptionListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OptionListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OptionListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionListWidget))
        return static_cast<void*>(const_cast< OptionListWidget*>(this));
    return QListWidget::qt_metacast(_clname);
}

int OptionListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PrefsDialogBase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   38,   38,   38, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   70,   38,   38, 0x0a,
      73,   38,   38,   38, 0x0a,
      91,   38,   38,   38, 0x09,
     108,   38,   38,   38, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PrefsDialogBase[] = {
    "PrefsDialogBase\0aboutToShow(QWidget*)\0"
    "\0itemSelected(QListWidgetItem*)\0ic\0"
    "newItemSelected()\0languageChange()\0"
    "saveButton_clicked()\0"
};

void PrefsDialogBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrefsDialogBase *_t = static_cast<PrefsDialogBase *>(_o);
        switch (_id) {
        case 0: _t->aboutToShow((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->itemSelected((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->newItemSelected(); break;
        case 3: _t->languageChange(); break;
        case 4: _t->saveButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PrefsDialogBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PrefsDialogBase::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PrefsDialogBase,
      qt_meta_data_PrefsDialogBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrefsDialogBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrefsDialogBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrefsDialogBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrefsDialogBase))
        return static_cast<void*>(const_cast< PrefsDialogBase*>(this));
    return QDialog::qt_metacast(_clname);
}

int PrefsDialogBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PrefsDialogBase::aboutToShow(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
