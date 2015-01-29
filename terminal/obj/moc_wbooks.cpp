/****************************************************************************
** Meta object code from reading C++ file 'wbooks.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wbooks.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wbooks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_wBooks_t {
    QByteArrayData data[7];
    char stringdata[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wBooks_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wBooks_t qt_meta_stringdata_wBooks = {
    {
QT_MOC_LITERAL(0, 0, 6), // "wBooks"
QT_MOC_LITERAL(1, 7, 7), // "updated"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 6), // "books*"
QT_MOC_LITERAL(4, 23, 1), // "u"
QT_MOC_LITERAL(5, 25, 6), // "closed"
QT_MOC_LITERAL(6, 32, 5) // "saved"

    },
    "wBooks\0updated\0\0books*\0u\0closed\0saved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wBooks[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    2, 0x0a /* Public */,
       6,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void wBooks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        wBooks *_t = static_cast<wBooks *>(_o);
        switch (_id) {
        case 0: _t->updated((*reinterpret_cast< books*(*)>(_a[1]))); break;
        case 1: _t->closed(); break;
        case 2: _t->saved(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (wBooks::*_t)(books * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&wBooks::updated)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject wBooks::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wBooks.data,
      qt_meta_data_wBooks,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *wBooks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wBooks::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_wBooks.stringdata))
        return static_cast<void*>(const_cast< wBooks*>(this));
    return QWidget::qt_metacast(_clname);
}

int wBooks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void wBooks::updated(books * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
