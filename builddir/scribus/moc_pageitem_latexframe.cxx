/****************************************************************************
** Meta object code from reading C++ file 'pageitem_latexframe.h'
**
** Created: Sun Feb 24 21:37:13 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/pageitem_latexframe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageitem_latexframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PageItem_LatexFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   55,   71,   71, 0x05,
      72,   71,   71,   71, 0x05,
      88,  125,   71,   71, 0x05,
     131,   71,   71,   71, 0x05,

 // slots: signature, parameters, type, tag, flags
     152,  190,   71,   71, 0x09,
     210,  245,   71,   71, 0x09,
     251,   71,   71,   71, 0x0a,
     265,  277,   71,   71, 0x0a,
     281,   71,   71,   71, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PageItem_LatexFrame[] = {
    "PageItem_LatexFrame\0"
    "formulaAutoUpdate(QString,QString)\0"
    "oldText,newText\0\0latexFinished()\0"
    "stateChanged(QProcess::ProcessState)\0"
    "state\0applicationChanged()\0"
    "updateImage(int,QProcess::ExitStatus)\0"
    "exitCode,exitStatus\0"
    "latexError(QProcess::ProcessError)\0"
    "error\0killProcess()\0setDpi(int)\0dpi\0"
    "setUsePreamble(bool)\0"
};

void PageItem_LatexFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PageItem_LatexFrame *_t = static_cast<PageItem_LatexFrame *>(_o);
        switch (_id) {
        case 0: _t->formulaAutoUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->latexFinished(); break;
        case 2: _t->stateChanged((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        case 3: _t->applicationChanged(); break;
        case 4: _t->updateImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 5: _t->latexError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 6: _t->killProcess(); break;
        case 7: _t->setDpi((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setUsePreamble((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PageItem_LatexFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PageItem_LatexFrame::staticMetaObject = {
    { &PageItem_ImageFrame::staticMetaObject, qt_meta_stringdata_PageItem_LatexFrame,
      qt_meta_data_PageItem_LatexFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageItem_LatexFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageItem_LatexFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageItem_LatexFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageItem_LatexFrame))
        return static_cast<void*>(const_cast< PageItem_LatexFrame*>(this));
    return PageItem_ImageFrame::qt_metacast(_clname);
}

int PageItem_LatexFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PageItem_ImageFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PageItem_LatexFrame::formulaAutoUpdate(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PageItem_LatexFrame::latexFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void PageItem_LatexFrame::stateChanged(QProcess::ProcessState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PageItem_LatexFrame::applicationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
