/****************************************************************************
** Meta object code from reading C++ file 'wlistworkorder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wlistworkorder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wlistworkorder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_wListWorkorder_t {
    QByteArrayData data[7];
    char stringdata[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wListWorkorder_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wListWorkorder_t qt_meta_stringdata_wListWorkorder = {
    {
QT_MOC_LITERAL(0, 0, 14), // "wListWorkorder"
QT_MOC_LITERAL(1, 15, 10), // "dblClicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "update"
QT_MOC_LITERAL(4, 34, 21), // "mouseDoubleClickEvent"
QT_MOC_LITERAL(5, 56, 12), // "QMouseEvent*"
QT_MOC_LITERAL(6, 69, 5) // "event"

    },
    "wListWorkorder\0dblClicked\0\0update\0"
    "mouseDoubleClickEvent\0QMouseEvent*\0"
    "event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wListWorkorder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x0a /* Public */,
       4,    1,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void wListWorkorder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        wListWorkorder *_t = static_cast<wListWorkorder *>(_o);
        switch (_id) {
        case 0: _t->dblClicked(); break;
        case 1: _t->update(); break;
        case 2: _t->mouseDoubleClickEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (wListWorkorder::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&wListWorkorder::dblClicked)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject wListWorkorder::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wListWorkorder.data,
      qt_meta_data_wListWorkorder,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *wListWorkorder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wListWorkorder::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_wListWorkorder.stringdata))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void wListWorkorder::dblClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
