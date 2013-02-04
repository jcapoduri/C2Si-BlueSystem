/****************************************************************************
** Meta object code from reading C++ file 'wlistworkorder.h'
**
** Created: Sat 2. Feb 04:52:10 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wlistworkorder.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wlistworkorder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wListWorkorder[] = {

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
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      29,   15,   15,   15, 0x0a,
      44,   38,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wListWorkorder[] = {
    "wListWorkorder\0\0dblClicked()\0update()\0"
    "event\0mouseDoubleClickEvent(QMouseEvent*)\0"
};

void wListWorkorder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        wListWorkorder *_t = static_cast<wListWorkorder *>(_o);
        switch (_id) {
        case 0: _t->dblClicked(); break;
        case 1: _t->update(); break;
        case 2: _t->mouseDoubleClickEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wListWorkorder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wListWorkorder::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wListWorkorder,
      qt_meta_data_wListWorkorder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wListWorkorder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wListWorkorder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wListWorkorder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wListWorkorder))
        return static_cast<void*>(const_cast< wListWorkorder*>(this));
    return QWidget::qt_metacast(_clname);
}

int wListWorkorder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void wListWorkorder::dblClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
