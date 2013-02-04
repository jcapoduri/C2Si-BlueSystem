/****************************************************************************
** Meta object code from reading C++ file 'wworkorder_pages.h'
**
** Created: Sat 2. Feb 04:52:01 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wworkorder_pages.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wworkorder_pages.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wworkorder_pages[] = {

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
      23,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   17,   17,   17, 0x0a,
      59,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wworkorder_pages[] = {
    "wworkorder_pages\0\0page\0"
    "pagesSaved(workorder_pages*)\0save()\0"
    "cancel()\0"
};

void wworkorder_pages::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        wworkorder_pages *_t = static_cast<wworkorder_pages *>(_o);
        switch (_id) {
        case 0: _t->pagesSaved((*reinterpret_cast< workorder_pages*(*)>(_a[1]))); break;
        case 1: _t->save(); break;
        case 2: _t->cancel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wworkorder_pages::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wworkorder_pages::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_wworkorder_pages,
      qt_meta_data_wworkorder_pages, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wworkorder_pages::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wworkorder_pages::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wworkorder_pages::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wworkorder_pages))
        return static_cast<void*>(const_cast< wworkorder_pages*>(this));
    return QDialog::qt_metacast(_clname);
}

int wworkorder_pages::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void wworkorder_pages::pagesSaved(workorder_pages * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
