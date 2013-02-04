/****************************************************************************
** Meta object code from reading C++ file 'wbooksbrowser.h'
**
** Created: Sat 2. Feb 03:27:10 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wbooksbrowser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wbooksbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wBooksBrowser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      34,   14,   14,   14, 0x0a,
      40,   14,   14,   14, 0x0a,
      49,   14,   14,   14, 0x0a,
      55,   14,   14,   14, 0x0a,
      64,   61,   14,   14, 0x0a,
      82,   61,   14,   14, 0x0a,
     103,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wBooksBrowser[] = {
    "wBooksBrowser\0\0businessSelected()\0"
    "add()\0addSon()\0mod()\0del()\0bk\0"
    "bookAdded(books*)\0sonBookAdded(books*)\0"
    "refresh()\0"
};

void wBooksBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        wBooksBrowser *_t = static_cast<wBooksBrowser *>(_o);
        switch (_id) {
        case 0: _t->businessSelected(); break;
        case 1: _t->add(); break;
        case 2: _t->addSon(); break;
        case 3: _t->mod(); break;
        case 4: _t->del(); break;
        case 5: _t->bookAdded((*reinterpret_cast< books*(*)>(_a[1]))); break;
        case 6: _t->sonBookAdded((*reinterpret_cast< books*(*)>(_a[1]))); break;
        case 7: _t->refresh(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wBooksBrowser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wBooksBrowser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wBooksBrowser,
      qt_meta_data_wBooksBrowser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wBooksBrowser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wBooksBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wBooksBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wBooksBrowser))
        return static_cast<void*>(const_cast< wBooksBrowser*>(this));
    return QWidget::qt_metacast(_clname);
}

int wBooksBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
