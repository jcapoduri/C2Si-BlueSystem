/****************************************************************************
** Meta object code from reading C++ file 'wanillado.h'
**
** Created: Sat 2. Feb 03:26:31 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wanillado.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wanillado.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wanillado[] = {

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
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   10,   10,   10, 0x0a,
      43,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wanillado[] = {
    "wanillado\0\0anilladoAdded(anillado*)\0"
    "save()\0cancel()\0"
};

void wanillado::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        wanillado *_t = static_cast<wanillado *>(_o);
        switch (_id) {
        case 0: _t->anilladoAdded((*reinterpret_cast< anillado*(*)>(_a[1]))); break;
        case 1: _t->save(); break;
        case 2: _t->cancel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wanillado::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wanillado::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_wanillado,
      qt_meta_data_wanillado, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wanillado::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wanillado::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wanillado::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wanillado))
        return static_cast<void*>(const_cast< wanillado*>(this));
    return QDialog::qt_metacast(_clname);
}

int wanillado::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void wanillado::anilladoAdded(anillado * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
