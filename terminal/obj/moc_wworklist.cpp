/****************************************************************************
** Meta object code from reading C++ file 'wworklist.h'
**
** Created: Sat 2. Feb 04:52:31 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wworklist.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wworklist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wWorkList[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      26,   20,   10,   10, 0x0a,
      41,   10,   10,   10, 0x0a,
      49,   10,   10,   10, 0x0a,
      62,   10,   10,   10, 0x0a,
      75,   20,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wWorkList[] = {
    "wWorkList\0\0search()\0title\0print(QString)\0"
    "print()\0hideFilter()\0showFilter()\0"
    "setTitle(QString)\0"
};

void wWorkList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        wWorkList *_t = static_cast<wWorkList *>(_o);
        switch (_id) {
        case 0: _t->search(); break;
        case 1: _t->print((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->print(); break;
        case 3: _t->hideFilter(); break;
        case 4: _t->showFilter(); break;
        case 5: _t->setTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wWorkList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wWorkList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wWorkList,
      qt_meta_data_wWorkList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wWorkList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wWorkList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wWorkList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wWorkList))
        return static_cast<void*>(const_cast< wWorkList*>(this));
    return QWidget::qt_metacast(_clname);
}

int wWorkList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
