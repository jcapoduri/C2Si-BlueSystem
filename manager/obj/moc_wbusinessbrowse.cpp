/****************************************************************************
** Meta object code from reading C++ file 'wbusinessbrowse.h'
**
** Created: Sat 2. Feb 03:26:42 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wbusinessbrowse.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wbusinessbrowse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wBusinessBrowse[] = {

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
      19,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   16,   16,   16, 0x0a,
      58,   16,   16,   16, 0x0a,
      64,   16,   16,   16, 0x0a,
      70,   16,   16,   16, 0x0a,
      76,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wBusinessBrowse[] = {
    "wBusinessBrowse\0\0b\0businessSelected(business*)\0"
    "selected()\0add()\0mod()\0del()\0refresh()\0"
};

void wBusinessBrowse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        wBusinessBrowse *_t = static_cast<wBusinessBrowse *>(_o);
        switch (_id) {
        case 0: _t->businessSelected((*reinterpret_cast< business*(*)>(_a[1]))); break;
        case 1: _t->selected(); break;
        case 2: _t->add(); break;
        case 3: _t->mod(); break;
        case 4: _t->del(); break;
        case 5: _t->refresh(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wBusinessBrowse::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wBusinessBrowse::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wBusinessBrowse,
      qt_meta_data_wBusinessBrowse, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wBusinessBrowse::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wBusinessBrowse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wBusinessBrowse::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wBusinessBrowse))
        return static_cast<void*>(const_cast< wBusinessBrowse*>(this));
    return QWidget::qt_metacast(_clname);
}

int wBusinessBrowse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void wBusinessBrowse::businessSelected(business * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
