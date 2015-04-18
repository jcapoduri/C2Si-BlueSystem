/****************************************************************************
** Meta object code from reading C++ file 'connection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../connection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_nd__connection_t {
    QByteArrayData data[18];
    char stringdata[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nd__connection_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nd__connection_t qt_meta_stringdata_nd__connection = {
    {
QT_MOC_LITERAL(0, 0, 14), // "nd::connection"
QT_MOC_LITERAL(1, 15, 14), // "connectionLost"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "mainConnectionLost"
QT_MOC_LITERAL(4, 50, 18), // "connectionRestored"
QT_MOC_LITERAL(5, 69, 9), // "lastQuery"
QT_MOC_LITERAL(6, 79, 9), // "setMainDb"
QT_MOC_LITERAL(7, 89, 12), // "QSqlDatabase"
QT_MOC_LITERAL(8, 102, 2), // "db"
QT_MOC_LITERAL(9, 105, 13), // "setFallbackDb"
QT_MOC_LITERAL(10, 119, 14), // "setDynamicSync"
QT_MOC_LITERAL(11, 134, 5), // "value"
QT_MOC_LITERAL(12, 140, 4), // "sync"
QT_MOC_LITERAL(13, 145, 8), // "SyncType"
QT_MOC_LITERAL(14, 154, 5), // "check"
QT_MOC_LITERAL(15, 160, 15), // "checkConnection"
QT_MOC_LITERAL(16, 176, 8), // "addTable"
QT_MOC_LITERAL(17, 185, 4) // "name"

    },
    "nd::connection\0connectionLost\0\0"
    "mainConnectionLost\0connectionRestored\0"
    "lastQuery\0setMainDb\0QSqlDatabase\0db\0"
    "setFallbackDb\0setDynamicSync\0value\0"
    "sync\0SyncType\0check\0checkConnection\0"
    "addTable\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nd__connection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   80,    2, 0x0a /* Public */,
       9,    1,   83,    2, 0x0a /* Public */,
      10,    1,   86,    2, 0x0a /* Public */,
      12,    1,   89,    2, 0x0a /* Public */,
      12,    0,   92,    2, 0x2a /* Public | MethodCloned */,
      14,    0,   93,    2, 0x0a /* Public */,
      15,    0,   94,    2, 0x0a /* Public */,
      16,    1,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void nd::connection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        connection *_t = static_cast<connection *>(_o);
        switch (_id) {
        case 0: _t->connectionLost(); break;
        case 1: _t->mainConnectionLost(); break;
        case 2: _t->connectionRestored(); break;
        case 3: _t->lastQuery((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setMainDb((*reinterpret_cast< QSqlDatabase(*)>(_a[1]))); break;
        case 5: _t->setFallbackDb((*reinterpret_cast< QSqlDatabase(*)>(_a[1]))); break;
        case 6: _t->setDynamicSync((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->sync((*reinterpret_cast< SyncType(*)>(_a[1]))); break;
        case 8: _t->sync(); break;
        case 9: _t->check(); break;
        case 10: _t->checkConnection(); break;
        case 11: _t->addTable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (connection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&connection::connectionLost)) {
                *result = 0;
            }
        }
        {
            typedef void (connection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&connection::mainConnectionLost)) {
                *result = 1;
            }
        }
        {
            typedef void (connection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&connection::connectionRestored)) {
                *result = 2;
            }
        }
        {
            typedef void (connection::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&connection::lastQuery)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject nd::connection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_nd__connection.data,
      qt_meta_data_nd__connection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *nd::connection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nd::connection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_nd__connection.stringdata))
        return static_cast<void*>(const_cast< connection*>(this));
    return QObject::qt_metacast(_clname);
}

int nd::connection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void nd::connection::connectionLost()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void nd::connection::mainConnectionLost()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void nd::connection::connectionRestored()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void nd::connection::lastQuery(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
