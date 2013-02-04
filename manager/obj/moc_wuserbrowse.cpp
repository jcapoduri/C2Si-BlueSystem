/****************************************************************************
** Meta object code from reading C++ file 'wuserbrowse.h'
**
** Created: Sat 2. Feb 03:27:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wuserbrowse.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wuserbrowse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wUserBrowse[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   12,   12,   12, 0x0a,
      41,   12,   12,   12, 0x0a,
      47,   12,   12,   12, 0x0a,
      53,   12,   12,   12, 0x0a,
      63,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wUserBrowse[] = {
    "wUserBrowse\0\0u\0userSelected(user*)\0"
    "add()\0mod()\0del()\0refresh()\0select()\0"
};

void wUserBrowse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        wUserBrowse *_t = static_cast<wUserBrowse *>(_o);
        switch (_id) {
        case 0: _t->userSelected((*reinterpret_cast< user*(*)>(_a[1]))); break;
        case 1: _t->add(); break;
        case 2: _t->mod(); break;
        case 3: _t->del(); break;
        case 4: _t->refresh(); break;
        case 5: _t->select(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wUserBrowse::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wUserBrowse::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wUserBrowse,
      qt_meta_data_wUserBrowse, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wUserBrowse::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wUserBrowse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wUserBrowse::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wUserBrowse))
        return static_cast<void*>(const_cast< wUserBrowse*>(this));
    return QWidget::qt_metacast(_clname);
}

int wUserBrowse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void wUserBrowse::userSelected(user * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
