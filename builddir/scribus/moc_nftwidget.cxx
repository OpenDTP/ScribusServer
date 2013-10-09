/****************************************************************************
** Meta object code from reading C++ file 'nftwidget.h'
**
** Created: Sun Feb 24 21:37:13 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/nftwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nftwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_nftwidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,   20,   20,   20, 0x05,
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   20,   20,   20, 0x08,
      55,   20,   20,   20, 0x08,
      65,  110,   20,   20, 0x08,
     115,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_nftwidget[] = {
    "nftwidget\0leaveOK()\0\0ButtonBoxEnable(bool)\0"
    "setTNails()\0setInfo()\0"
    "getCurrentDocumentTemplate(QListWidgetItem*)\0"
    "item\0removeTemplate()\0"
};

void nftwidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        nftwidget *_t = static_cast<nftwidget *>(_o);
        switch (_id) {
        case 0: _t->leaveOK(); break;
        case 1: _t->ButtonBoxEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setTNails(); break;
        case 3: _t->setInfo(); break;
        case 4: _t->getCurrentDocumentTemplate((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->removeTemplate(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData nftwidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject nftwidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_nftwidget,
      qt_meta_data_nftwidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &nftwidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *nftwidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *nftwidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_nftwidget))
        return static_cast<void*>(const_cast< nftwidget*>(this));
    if (!strcmp(_clname, "Ui::nftwidget"))
        return static_cast< Ui::nftwidget*>(const_cast< nftwidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int nftwidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void nftwidget::leaveOK()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void nftwidget::ButtonBoxEnable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
