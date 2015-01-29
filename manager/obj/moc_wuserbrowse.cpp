/****************************************************************************
** Meta object code from reading C++ file 'wuserbrowse.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wuserbrowse.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wuserbrowse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_wUserBrowse_t {
    QByteArrayData data[10];
    char stringdata[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wUserBrowse_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wUserBrowse_t qt_meta_stringdata_wUserBrowse = {
    {
QT_MOC_LITERAL(0, 0, 11), // "wUserBrowse"
QT_MOC_LITERAL(1, 12, 12), // "userSelected"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "user*"
QT_MOC_LITERAL(4, 32, 1), // "u"
QT_MOC_LITERAL(5, 34, 3), // "add"
QT_MOC_LITERAL(6, 38, 3), // "mod"
QT_MOC_LITERAL(7, 42, 3), // "del"
QT_MOC_LITERAL(8, 46, 7), // "refresh"
QT_MOC_LITERAL(9, 54, 6) // "select"

    },
    "wUserBrowse\0userSelected\0\0user*\0u\0add\0"
    "mod\0del\0refresh\0select"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wUserBrowse[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,
       8,    0,   50,    2, 0x0a /* Public */,
       9,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void wUserBrowse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
            typedef void (wUserBrowse::*_t)(user * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&wUserBrowse::userSelected)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject wUserBrowse::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wUserBrowse.data,
      qt_meta_data_wUserBrowse,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *wUserBrowse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wUserBrowse::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_wUserBrowse.stringdata))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void wUserBrowse::userSelected(user * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
