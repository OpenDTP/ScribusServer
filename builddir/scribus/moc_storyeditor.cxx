/****************************************************************************
** Meta object code from reading C++ file 'storyeditor.h'
**
** Created: Sun Feb 24 21:37:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scribus/storyeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'storyeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,   26,   28,   28, 0x05,
      29,   28,   28,   28, 0x05,
      45,   28,   28,   28, 0x05,
      61,   28,   28,   28, 0x05,
      74,   26,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
      98,  132,   28,   28, 0x09,
     165,   28,   28,   28, 0x0a,
     171,   28,   28,   28, 0x0a,
     178,   28,   28,   28, 0x0a,
     186,   28,   28,   28, 0x0a,
     199,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SEditor[] = {
    "SEditor\0setProps(int,int)\0,\0\0"
    "SideBarUp(bool)\0SideBarUpdate()\0"
    "PasteAvail()\0contentsMoving(int,int)\0"
    "handleContentsChange(int,int,int)\0"
    "position,charsRemoved,charsAdded\0cut()\0"
    "copy()\0paste()\0ClipChange()\0SelClipChange()\0"
};

void SEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SEditor *_t = static_cast<SEditor *>(_o);
        switch (_id) {
        case 0: _t->setProps((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->SideBarUp((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->SideBarUpdate(); break;
        case 3: _t->PasteAvail(); break;
        case 4: _t->contentsMoving((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->handleContentsChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->cut(); break;
        case 7: _t->copy(); break;
        case 8: _t->paste(); break;
        case 9: _t->ClipChange(); break;
        case 10: _t->SelClipChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SEditor::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_SEditor,
      qt_meta_data_SEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SEditor))
        return static_cast<void*>(const_cast< SEditor*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int SEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SEditor::setProps(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SEditor::SideBarUp(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SEditor::SideBarUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void SEditor::PasteAvail()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void SEditor::contentsMoving(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
static const uint qt_meta_data_SideBar[] = {

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
       8,   33,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   35,   35,   35, 0x0a,
      55,   71,   35,   35, 0x0a,
      75,   35,   35,   35, 0x0a,
      87,  104,   35,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SideBar[] = {
    "SideBar\0ChangeStyle(int,QString)\0,\0\0"
    "setPStyle(QString)\0doMove(int,int)\0"
    "x,y\0doRepaint()\0setRepaint(bool)\0r\0"
};

void SideBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SideBar *_t = static_cast<SideBar *>(_o);
        switch (_id) {
        case 0: _t->ChangeStyle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->setPStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->doMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->doRepaint(); break;
        case 4: _t->setRepaint((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SideBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SideBar::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_SideBar,
      qt_meta_data_SideBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SideBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SideBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SideBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SideBar))
        return static_cast<void*>(const_cast< SideBar*>(this));
    return QLabel::qt_metacast(_clname);
}

int SideBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void SideBar::ChangeStyle(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_SToolBColorF[] = {

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
      13,   31,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   48,   33,   33, 0x0a,
      50,   67,   33,   33, 0x0a,
      69,   33,   33,   33, 0x0a,
      87,   33,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SToolBColorF[] = {
    "SToolBColorF\0NewColor(int,int)\0,\0\0"
    "SetColor(int)\0c\0SetShade(double)\0s\0"
    "newShadeHandler()\0languageChange()\0"
};

void SToolBColorF::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SToolBColorF *_t = static_cast<SToolBColorF *>(_o);
        switch (_id) {
        case 0: _t->NewColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->SetColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SetShade((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->newShadeHandler(); break;
        case 4: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SToolBColorF::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SToolBColorF::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_SToolBColorF,
      qt_meta_data_SToolBColorF, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SToolBColorF::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SToolBColorF::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SToolBColorF::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SToolBColorF))
        return static_cast<void*>(const_cast< SToolBColorF*>(this));
    return QToolBar::qt_metacast(_clname);
}

int SToolBColorF::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
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
void SToolBColorF::NewColor(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_SToolBColorS[] = {

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
      13,   31,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   48,   33,   33, 0x0a,
      50,   67,   33,   33, 0x0a,
      69,   33,   33,   33, 0x0a,
      87,   33,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SToolBColorS[] = {
    "SToolBColorS\0NewColor(int,int)\0,\0\0"
    "SetColor(int)\0c\0SetShade(double)\0s\0"
    "newShadeHandler()\0languageChange()\0"
};

void SToolBColorS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SToolBColorS *_t = static_cast<SToolBColorS *>(_o);
        switch (_id) {
        case 0: _t->NewColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->SetColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SetShade((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->newShadeHandler(); break;
        case 4: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SToolBColorS::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SToolBColorS::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_SToolBColorS,
      qt_meta_data_SToolBColorS, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SToolBColorS::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SToolBColorS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SToolBColorS::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SToolBColorS))
        return static_cast<void*>(const_cast< SToolBColorS*>(this));
    return QToolBar::qt_metacast(_clname);
}

int SToolBColorS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
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
void SToolBColorS::NewColor(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_SToolBStyle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   28,   28,   28, 0x05,
      29,   54,   28,   28, 0x05,
      56,   28,   28,   28, 0x05,
      75,   54,   28,   28, 0x05,
     100,   54,   28,   28, 0x05,
     128,   28,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
     142,   28,   28,   28, 0x0a,
     161,   28,   28,   28, 0x0a,
     183,   28,   28,   28, 0x0a,
     203,   28,   28,   28, 0x0a,
     222,   28,   28,   28, 0x0a,
     239,  264,   28,   28, 0x0a,
     268,  293,   28,   28, 0x0a,
     297,  293,   28,   28, 0x0a,
     325,  344,   28,   28, 0x0a,
     346,  360,   28,   28, 0x0a,
     362,  378,   28,   28, 0x0a,
     380,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SToolBStyle[] = {
    "SToolBStyle\0NewKern(double)\0\0"
    "NewShadow(double,double)\0,\0"
    "newOutline(double)\0newStrike(double,double)\0"
    "newUnderline(double,double)\0newStyle(int)\0"
    "newStrikeHandler()\0newUnderlineHandler()\0"
    "newOutlineHandler()\0newShadowHandler()\0"
    "newKernHandler()\0SetShadow(double,double)\0"
    "x,y\0setStrike(double,double)\0p,w\0"
    "setUnderline(double,double)\0"
    "setOutline(double)\0o\0SetStyle(int)\0s\0"
    "SetKern(double)\0k\0languageChange()\0"
};

void SToolBStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SToolBStyle *_t = static_cast<SToolBStyle *>(_o);
        switch (_id) {
        case 0: _t->NewKern((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->NewShadow((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->newOutline((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->newStrike((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->newUnderline((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->newStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->newStrikeHandler(); break;
        case 7: _t->newUnderlineHandler(); break;
        case 8: _t->newOutlineHandler(); break;
        case 9: _t->newShadowHandler(); break;
        case 10: _t->newKernHandler(); break;
        case 11: _t->SetShadow((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 12: _t->setStrike((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 13: _t->setUnderline((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 14: _t->setOutline((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->SetStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->SetKern((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SToolBStyle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SToolBStyle::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_SToolBStyle,
      qt_meta_data_SToolBStyle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SToolBStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SToolBStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SToolBStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SToolBStyle))
        return static_cast<void*>(const_cast< SToolBStyle*>(this));
    return QToolBar::qt_metacast(_clname);
}

int SToolBStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void SToolBStyle::NewKern(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SToolBStyle::NewShadow(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SToolBStyle::newOutline(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SToolBStyle::newStrike(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SToolBStyle::newUnderline(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SToolBStyle::newStyle(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
static const uint qt_meta_data_SToolBAlign[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   26,   26,   26, 0x05,
      27,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   63,   26,   26, 0x0a,
      65,   63,   26,   26, 0x0a,
      87,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SToolBAlign[] = {
    "SToolBAlign\0newAlign(int)\0\0"
    "newParaStyle(QString)\0SetAlign(int)\0"
    "s\0SetParaStyle(QString)\0languageChange()\0"
};

void SToolBAlign::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SToolBAlign *_t = static_cast<SToolBAlign *>(_o);
        switch (_id) {
        case 0: _t->newAlign((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->newParaStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->SetAlign((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SetParaStyle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SToolBAlign::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SToolBAlign::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_SToolBAlign,
      qt_meta_data_SToolBAlign, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SToolBAlign::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SToolBAlign::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SToolBAlign::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SToolBAlign))
        return static_cast<void*>(const_cast< SToolBAlign*>(this));
    return QToolBar::qt_metacast(_clname);
}

int SToolBAlign::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
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
void SToolBAlign::newAlign(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SToolBAlign::newParaStyle(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_SToolBFont[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   28,   28,   28, 0x05,
      29,   28,   28,   28, 0x05,
      45,   28,   28,   28, 0x05,
      62,   28,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   97,   28,   28, 0x0a,
      99,  115,   28,   28, 0x0a,
     117,  115,   28,   28, 0x0a,
     134,  115,   28,   28, 0x0a,
     152,   28,   28,   28, 0x0a,
     169,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SToolBFont[] = {
    "SToolBFont\0NewFont(QString)\0\0"
    "NewSize(double)\0newScale(double)\0"
    "newScaleV(double)\0SetFont(QString)\0f\0"
    "SetSize(double)\0s\0SetScale(double)\0"
    "SetScaleV(double)\0newSizeHandler()\0"
    "languageChange()\0"
};

void SToolBFont::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SToolBFont *_t = static_cast<SToolBFont *>(_o);
        switch (_id) {
        case 0: _t->NewFont((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->NewSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->newScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->newScaleV((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->SetFont((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->SetSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->SetScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->SetScaleV((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->newSizeHandler(); break;
        case 9: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SToolBFont::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SToolBFont::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_SToolBFont,
      qt_meta_data_SToolBFont, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SToolBFont::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SToolBFont::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SToolBFont::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SToolBFont))
        return static_cast<void*>(const_cast< SToolBFont*>(this));
    return QToolBar::qt_metacast(_clname);
}

int SToolBFont::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void SToolBFont::NewFont(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SToolBFont::NewSize(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SToolBFont::newScale(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SToolBFont::newScaleV(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_StoryEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   25,   25,   25, 0x05,
      26,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   25,   25,   25, 0x0a,
      53,   67,   25,   25, 0x0a,
      70,   89,   25,   25, 0x0a,
      93,   89,   25,   25, 0x0a,
     114,  133,   25,   25, 0x0a,
     135,  153,   25,   25, 0x0a,
     155,  153,   25,   25, 0x0a,
     171,   25,   25,   25, 0x09,
     185,   25,   25,   25, 0x09,
     199,   25,   25,   25, 0x09,
     212,   25,   25,   25, 0x09,
     226,  153,   25,   25, 0x09,
     244,  273,   25,   25, 0x09,
     277,  299,   25,   25, 0x09,
     301,  332,   25,   25, 0x09,
     336,  332,   25,   25, 0x09,
     364,   25,   25,   25, 0x09,
     378,  404,   25,   25, 0x09,
     408,  429,   25,   25, 0x09,
     434,  461,   25,   25, 0x09,
     465,   25,   25,   25, 0x09,
     479,   25,   25,   25, 0x09,
     494,   25,   25,   25, 0x09,
     505,   25,   25,   25, 0x09,
     517,   25,   25,   25, 0x09,
     535,   25,  544,   25, 0x09,
     549,   25,   25,   25, 0x09,
     566,   25,   25,   25, 0x09,
     581,   25,   25,   25, 0x09,
     591,   25,   25,   25, 0x09,
     602,   25,   25,   25, 0x09,
     611,   25,   25,   25, 0x09,
     620,   25,   25,   25, 0x09,
     631,   25,   25,   25, 0x09,
     645,  661,   25,   25, 0x09,
     663,   25,   25,   25, 0x09,
     676,   25,   25,   25, 0x09,
     694,   25,   25,   25, 0x09,
     707,   25,   25,   25, 0x09,
     722,   25,   25,   25, 0x09,
     737,   25,   25,   25, 0x09,
     752,   25,   25,   25, 0x09,
     767,   25,   25,   25, 0x09,
     784,  819,   25,   25, 0x09,
     843,   25,   25,   25, 0x09,
     868,  910,   25,   25, 0x09,
     912,  933,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_StoryEditor[] = {
    "StoryEditor\0DocChanged()\0\0EditSt()\0"
    "newStyle(QString)\0newAlign(int)\0st\0"
    "newTxFill(int,int)\0c,s\0newTxStroke(int,int)\0"
    "newTxFont(QString)\0f\0newTxSize(double)\0"
    "s\0newTxStyle(int)\0setBackPref()\0"
    "setFontPref()\0newTxScale()\0newTxScaleV()\0"
    "newTxKern(double)\0newShadowOffs(double,double)\0"
    "x,y\0newTxtOutline(double)\0o\0"
    "newTxtUnderline(double,double)\0p,w\0"
    "newTxtStrike(double,double)\0updateProps()\0"
    "updateProps(QTextCursor&)\0cur\0"
    "updateProps(int,int)\0p,ch\0"
    "changeStyleSB(int,QString)\0pa,\0"
    "changeStyle()\0updateStatus()\0Do_leave()\0"
    "Do_leave2()\0Do_saveDocument()\0Do_new()\0"
    "bool\0slotFileRevert()\0Do_selectAll()\0"
    "Do_copy()\0Do_paste()\0Do_cut()\0Do_del()\0"
    "Do_insSp()\0Do_fontPrev()\0CopyAvail(bool)\0"
    "u\0PasteAvail()\0updateTextFrame()\0"
    "SearchText()\0modifiedText()\0LoadTextFile()\0"
    "SaveTextFile()\0setSmart(bool)\0"
    "languageChange()\0specialActionKeyEvent(QString,int)\0"
    "actionName,unicodevalue\0"
    "slot_insertSpecialChar()\0"
    "slot_insertUserSpecialChar(QChar,QString)\0"
    ",\0doubleClick(int,int)\0para,pos\0"
};

void StoryEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StoryEditor *_t = static_cast<StoryEditor *>(_o);
        switch (_id) {
        case 0: _t->DocChanged(); break;
        case 1: _t->EditSt(); break;
        case 2: _t->newStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->newAlign((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->newTxFill((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->newTxStroke((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->newTxFont((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->newTxSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->newTxStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setBackPref(); break;
        case 10: _t->setFontPref(); break;
        case 11: _t->newTxScale(); break;
        case 12: _t->newTxScaleV(); break;
        case 13: _t->newTxKern((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->newShadowOffs((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 15: _t->newTxtOutline((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->newTxtUnderline((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 17: _t->newTxtStrike((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 18: _t->updateProps(); break;
        case 19: _t->updateProps((*reinterpret_cast< QTextCursor(*)>(_a[1]))); break;
        case 20: _t->updateProps((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->changeStyleSB((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 22: _t->changeStyle(); break;
        case 23: _t->updateStatus(); break;
        case 24: _t->Do_leave(); break;
        case 25: _t->Do_leave2(); break;
        case 26: _t->Do_saveDocument(); break;
        case 27: { bool _r = _t->Do_new();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: _t->slotFileRevert(); break;
        case 29: _t->Do_selectAll(); break;
        case 30: _t->Do_copy(); break;
        case 31: _t->Do_paste(); break;
        case 32: _t->Do_cut(); break;
        case 33: _t->Do_del(); break;
        case 34: _t->Do_insSp(); break;
        case 35: _t->Do_fontPrev(); break;
        case 36: _t->CopyAvail((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->PasteAvail(); break;
        case 38: _t->updateTextFrame(); break;
        case 39: _t->SearchText(); break;
        case 40: _t->modifiedText(); break;
        case 41: _t->LoadTextFile(); break;
        case 42: _t->SaveTextFile(); break;
        case 43: _t->setSmart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->languageChange(); break;
        case 45: _t->specialActionKeyEvent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 46: _t->slot_insertSpecialChar(); break;
        case 47: _t->slot_insertUserSpecialChar((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 48: _t->doubleClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StoryEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StoryEditor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_StoryEditor,
      qt_meta_data_StoryEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StoryEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StoryEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StoryEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StoryEditor))
        return static_cast<void*>(const_cast< StoryEditor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int StoryEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
    return _id;
}

// SIGNAL 0
void StoryEditor::DocChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void StoryEditor::EditSt()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
