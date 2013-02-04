/****************************************************************************
** Meta object code from reading C++ file 'wbusiness.h'
**
** Created: Sat 2. Feb 03:26:37 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wbusiness.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wbusiness.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wBusiness[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   10,   10,   10, 0x0a,
      42,   10,   10,   10, 0x0a,
      52,   11,   10,   10, 0x0a,
      69,   10,   10,   10, 0x0a,
      83,   10,   10,   10, 0x0a,
     100,   97,   10,   10, 0x0a,
     125,   10,   10,   10, 0x0a,
     133,   10,   10,   10, 0x0a,
     142,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wBusiness[] = {
    "wBusiness\0\0u\0updated(business*)\0"
    "addUser()\0delUser()\0userAdded(user*)\0"
    "addAnillado()\0delAnillado()\0an\0"
    "anilladoAdded(anillado*)\0saved()\0"
    "closed()\0refresh()\0"
};

void wBusiness::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        wBusiness *_t = static_cast<wBusiness *>(_o);
        switch (_id) {
        case 0: _t->updated((*reinterpret_cast< business*(*)>(_a[1]))); break;
        case 1: _t->addUser(); break;
        case 2: _t->delUser(); break;
        case 3: _t->userAdded((*reinterpret_cast< user*(*)>(_a[1]))); break;
        case 4: _t->addAnillado(); break;
        case 5: _t->delAnillado(); break;
        case 6: _t->anilladoAdded((*reinterpret_cast< anillado*(*)>(_a[1]))); break;
        case 7: _t->saved(); break;
        case 8: _t->closed(); break;
        case 9: _t->refresh(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wBusiness::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wBusiness::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wBusiness,
      qt_meta_data_wBusiness, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wBusiness::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wBusiness::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wBusiness::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wBusiness))
        return static_cast<void*>(const_cast< wBusiness*>(this));
    return QWidget::qt_metacast(_clname);
}

int wBusiness::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void wBusiness::updated(business * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
