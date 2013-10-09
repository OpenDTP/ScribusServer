/****************************************************************************
** Meta object code from reading C++ file 'smreplacedia.h'
**
** Created: Sun Feb 24 21:37:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/smreplacedia.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smreplacedia.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SMRowWidget[] = {

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

static const char qt_meta_stringdata_SMRowWidget[] = {
    "SMRowWidget\0"
};

void SMRowWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SMRowWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SMRowWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SMRowWidget,
      qt_meta_data_SMRowWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SMRowWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SMRowWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SMRowWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SMRowWidget))
        return static_cast<void*>(const_cast< SMRowWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SMRowWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_SMReplaceDia[] = {

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

static const char qt_meta_stringdata_SMReplaceDia[] = {
    "SMReplaceDia\0"
};

void SMReplaceDia::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SMReplaceDia::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SMReplaceDia::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SMReplaceDia,
      qt_meta_data_SMReplaceDia, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SMReplaceDia::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SMReplaceDia::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SMReplaceDia::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SMReplaceDia))
        return static_cast<void*>(const_cast< SMReplaceDia*>(this));
    if (!strcmp(_clname, "Ui::SMReplaceDia"))
        return static_cast< Ui::SMReplaceDia*>(const_cast< SMReplaceDia*>(this));
    return QDialog::qt_metacast(_clname);
}

int SMReplaceDia::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
