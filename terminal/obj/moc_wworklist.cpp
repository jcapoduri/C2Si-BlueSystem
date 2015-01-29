/****************************************************************************
** Meta object code from reading C++ file 'wworklist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wworklist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wworklist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_wWorkList_t {
    QByteArrayData data[8];
    char stringdata[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wWorkList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wWorkList_t qt_meta_stringdata_wWorkList = {
    {
QT_MOC_LITERAL(0, 0, 9), // "wWorkList"
QT_MOC_LITERAL(1, 10, 6), // "search"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 5), // "print"
QT_MOC_LITERAL(4, 24, 5), // "title"
QT_MOC_LITERAL(5, 30, 10), // "hideFilter"
QT_MOC_LITERAL(6, 41, 10), // "showFilter"
QT_MOC_LITERAL(7, 52, 8) // "setTitle"

    },
    "wWorkList\0search\0\0print\0title\0hideFilter\0"
    "showFilter\0setTitle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wWorkList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    1,   45,    2, 0x0a /* Public */,
       3,    0,   48,    2, 0x0a /* Public */,
       5,    0,   49,    2, 0x0a /* Public */,
       6,    0,   50,    2, 0x0a /* Public */,
       7,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void wWorkList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
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

const QMetaObject wWorkList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wWorkList.data,
      qt_meta_data_wWorkList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *wWorkList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wWorkList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_wWorkList.stringdata))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
