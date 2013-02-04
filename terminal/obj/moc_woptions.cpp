/****************************************************************************
** Meta object code from reading C++ file 'woptions.h'
**
** Created: Mon 26. Nov 15:49:34 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/woptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'woptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_woptions[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      17,    9,    9,    9, 0x08,
      26,    9,    9,    9, 0x08,
      42,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_woptions[] = {
    "woptions\0\0save()\0cancel()\0resetPassword()\0"
    "resetShortPassword()\0"
};

void woptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        woptions *_t = static_cast<woptions *>(_o);
        switch (_id) {
        case 0: _t->save(); break;
        case 1: _t->cancel(); break;
        case 2: _t->resetPassword(); break;
        case 3: _t->resetShortPassword(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData woptions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject woptions::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_woptions,
      qt_meta_data_woptions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &woptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *woptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *woptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_woptions))
        return static_cast<void*>(const_cast< woptions*>(this));
    return QDialog::qt_metacast(_clname);
}

int woptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
