/****************************************************************************
** Meta object code from reading C++ file 'tabruler.h'
**
** Created: Sun Feb 24 21:37:24 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/tabruler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabruler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RulerT[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,   24,   24,   24, 0x05,
      25,   24,   24,   24, 0x05,
      42,   24,   24,   24, 0x05,
      65,   24,   24,   24, 0x05,
      89,   24,   24,   24, 0x05,
     112,   24,   24,   24, 0x05,
     121,   24,   24,   24, 0x05,
     130,   24,   24,   24, 0x05,
     146,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     160,   24,   24,   24, 0x0a,
     177,   24,   24,   24, 0x0a,
     194,   24,   24,   24, 0x0a,
     211,  226,   24,   24, 0x0a,
     228,  226,   24,   24, 0x0a,
     249,  226,   24,   24, 0x0a,
     265,  226,   24,   24, 0x0a,
     287,  226,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RulerT[] = {
    "RulerT\0tabMoved(double)\0\0typeChanged(int)\0"
    "fillCharChanged(QChar)\0leftIndentMoved(double)\0"
    "firstLineMoved(double)\0noTabs()\0"
    "newTab()\0mouseReleased()\0tabSelected()\0"
    "resetOffsetInc()\0decreaseOffset()\0"
    "increaseOffset()\0changeTab(int)\0t\0"
    "changeTabChar(QChar)\0moveTab(double)\0"
    "moveFirstLine(double)\0moveLeftIndent(double)\0"
};

void RulerT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RulerT *_t = static_cast<RulerT *>(_o);
        switch (_id) {
        case 0: _t->tabMoved((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->typeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->fillCharChanged((*reinterpret_cast< QChar(*)>(_a[1]))); break;
        case 3: _t->leftIndentMoved((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->firstLineMoved((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->noTabs(); break;
        case 6: _t->newTab(); break;
        case 7: _t->mouseReleased(); break;
        case 8: _t->tabSelected(); break;
        case 9: _t->resetOffsetInc(); break;
        case 10: _t->decreaseOffset(); break;
        case 11: _t->increaseOffset(); break;
        case 12: _t->changeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->changeTabChar((*reinterpret_cast< QChar(*)>(_a[1]))); break;
        case 14: _t->moveTab((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->moveFirstLine((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->moveLeftIndent((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RulerT::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RulerT::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RulerT,
      qt_meta_data_RulerT, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RulerT::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RulerT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RulerT::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RulerT))
        return static_cast<void*>(const_cast< RulerT*>(this));
    return QWidget::qt_metacast(_clname);
}

int RulerT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void RulerT::tabMoved(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RulerT::typeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RulerT::fillCharChanged(QChar _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RulerT::leftIndentMoved(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RulerT::firstLineMoved(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RulerT::noTabs()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void RulerT::newTab()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void RulerT::mouseReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void RulerT::tabSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
static const uint qt_meta_data_Tabruler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,   27,   27,   27, 0x05,
      28,   27,   27,   27, 0x05,
      42,   27,   27,   27, 0x05,
      68,   27,   27,   27, 0x05,
      95,   27,   27,   27, 0x05,
     120,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
     136,   27,   27,   27, 0x0a,
     148,   27,   27,   27, 0x0a,
     160,   27,   27,   27, 0x0a,
     171,   27,   27,   27, 0x0a,
     182,   27,   27,   27, 0x0a,
     199,  215,   27,   27, 0x0a,
     217,   27,   27,   27, 0x0a,
     227,  215,   27,   27, 0x0a,
     246,   27,   27,   27, 0x0a,
     255,  215,   27,   27, 0x0a,
     280,   27,   27,   27, 0x0a,
     295,  215,   27,   27, 0x0a,
     321,   27,   27,   27, 0x0a,
     337,  215,   27,   27, 0x0a,
     364,   27,   27,   27, 0x0a,
     381,  215,   27,   27, 0x0a,
     403,   27,   27,   27, 0x0a,
     417,  444,   27,   27, 0x0a,
     448,   27,   27,   27, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Tabruler[] = {
    "Tabruler\0tabrulerChanged()\0\0tabsChanged()\0"
    "leftIndentChanged(double)\0"
    "rightIndentChanged(double)\0"
    "firstLineChanged(double)\0mouseReleased()\0"
    "resetOFfL()\0resetOFfR()\0clearAll()\0"
    "tabAdded()\0lastTabRemoved()\0setTabType(int)\0"
    "t\0setType()\0setTabData(double)\0setTab()\0"
    "setFirstLineData(double)\0setFirstLine()\0"
    "setLeftIndentData(double)\0setLeftIndent()\0"
    "setRightIndentData(double)\0setRightIndent()\0"
    "setTabFillChar(QChar)\0setFillChar()\0"
    "setCustomFillChar(QString)\0txt\0"
    "slotMouseReleased()\0"
};

void Tabruler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Tabruler *_t = static_cast<Tabruler *>(_o);
        switch (_id) {
        case 0: _t->tabrulerChanged(); break;
        case 1: _t->tabsChanged(); break;
        case 2: _t->leftIndentChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->rightIndentChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->firstLineChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->mouseReleased(); break;
        case 6: _t->resetOFfL(); break;
        case 7: _t->resetOFfR(); break;
        case 8: _t->clearAll(); break;
        case 9: _t->tabAdded(); break;
        case 10: _t->lastTabRemoved(); break;
        case 11: _t->setTabType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setType(); break;
        case 13: _t->setTabData((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->setTab(); break;
        case 15: _t->setFirstLineData((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->setFirstLine(); break;
        case 17: _t->setLeftIndentData((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->setLeftIndent(); break;
        case 19: _t->setRightIndentData((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->setRightIndent(); break;
        case 21: _t->setTabFillChar((*reinterpret_cast< QChar(*)>(_a[1]))); break;
        case 22: _t->setFillChar(); break;
        case 23: _t->setCustomFillChar((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->slotMouseReleased(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Tabruler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Tabruler::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Tabruler,
      qt_meta_data_Tabruler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tabruler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tabruler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tabruler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tabruler))
        return static_cast<void*>(const_cast< Tabruler*>(this));
    return QWidget::qt_metacast(_clname);
}

int Tabruler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void Tabruler::tabrulerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Tabruler::tabsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Tabruler::leftIndentChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tabruler::rightIndentChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Tabruler::firstLineChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Tabruler::mouseReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
