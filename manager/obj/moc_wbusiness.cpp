/****************************************************************************
** Meta object code from reading C++ file 'wbusiness.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wbusiness.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wbusiness.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_wBusiness_t {
    QByteArrayData data[17];
    char stringdata[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wBusiness_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wBusiness_t qt_meta_stringdata_wBusiness = {
    {
QT_MOC_LITERAL(0, 0, 9), // "wBusiness"
QT_MOC_LITERAL(1, 10, 7), // "updated"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 9), // "business*"
QT_MOC_LITERAL(4, 29, 1), // "u"
QT_MOC_LITERAL(5, 31, 7), // "addUser"
QT_MOC_LITERAL(6, 39, 7), // "delUser"
QT_MOC_LITERAL(7, 47, 9), // "userAdded"
QT_MOC_LITERAL(8, 57, 5), // "user*"
QT_MOC_LITERAL(9, 63, 11), // "addAnillado"
QT_MOC_LITERAL(10, 75, 11), // "delAnillado"
QT_MOC_LITERAL(11, 87, 13), // "anilladoAdded"
QT_MOC_LITERAL(12, 101, 9), // "anillado*"
QT_MOC_LITERAL(13, 111, 2), // "an"
QT_MOC_LITERAL(14, 114, 5), // "saved"
QT_MOC_LITERAL(15, 120, 6), // "closed"
QT_MOC_LITERAL(16, 127, 7) // "refresh"

    },
    "wBusiness\0updated\0\0business*\0u\0addUser\0"
    "delUser\0userAdded\0user*\0addAnillado\0"
    "delAnillado\0anilladoAdded\0anillado*\0"
    "an\0saved\0closed\0refresh"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wBusiness[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    1,   69,    2, 0x0a /* Public */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x0a /* Public */,
      11,    1,   74,    2, 0x0a /* Public */,
      14,    0,   77,    2, 0x0a /* Public */,
      15,    0,   78,    2, 0x0a /* Public */,
      16,    0,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void wBusiness::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< user* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (wBusiness::*_t)(business * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&wBusiness::updated)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject wBusiness::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wBusiness.data,
      qt_meta_data_wBusiness,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *wBusiness::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wBusiness::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_wBusiness.stringdata))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void wBusiness::updated(business * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
