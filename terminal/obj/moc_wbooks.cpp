/****************************************************************************
** Meta object code from reading C++ file 'wbooks.h'
**
** Created: Sat 2. Feb 04:51:55 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wbooks.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wbooks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wBooks[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    8,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      26,    7,    7,    7, 0x0a,
      35,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wBooks[] = {
    "wBooks\0\0u\0updated(books*)\0closed()\0"
    "saved()\0"
};

void wBooks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        wBooks *_t = static_cast<wBooks *>(_o);
        switch (_id) {
        case 0: _t->updated((*reinterpret_cast< books*(*)>(_a[1]))); break;
        case 1: _t->closed(); break;
        case 2: _t->saved(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wBooks::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wBooks::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wBooks,
      qt_meta_data_wBooks, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wBooks::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wBooks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wBooks::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wBooks))
        return static_cast<void*>(const_cast< wBooks*>(this));
    return QWidget::qt_metacast(_clname);
}

int wBooks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void wBooks::updated(books * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
