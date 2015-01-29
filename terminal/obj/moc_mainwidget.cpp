/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mainwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mainWidget_t {
    QByteArrayData data[17];
    char stringdata[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainWidget_t qt_meta_stringdata_mainWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "mainWidget"
QT_MOC_LITERAL(1, 11, 11), // "connectToDB"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "refreshUsers"
QT_MOC_LITERAL(4, 37, 9), // "loginUser"
QT_MOC_LITERAL(5, 47, 5), // "user*"
QT_MOC_LITERAL(6, 53, 3), // "usr"
QT_MOC_LITERAL(7, 57, 7), // "addUser"
QT_MOC_LITERAL(8, 65, 10), // "logoutUser"
QT_MOC_LITERAL(9, 76, 17), // "userButtonClicked"
QT_MOC_LITERAL(10, 94, 10), // "logNewUser"
QT_MOC_LITERAL(11, 105, 10), // "checkWorks"
QT_MOC_LITERAL(12, 116, 16), // "checkRemoteLogin"
QT_MOC_LITERAL(13, 133, 4), // "sync"
QT_MOC_LITERAL(14, 138, 9), // "listWorks"
QT_MOC_LITERAL(15, 148, 13), // "listBookWorks"
QT_MOC_LITERAL(16, 162, 10) // "listOthers"

    },
    "mainWidget\0connectToDB\0\0refreshUsers\0"
    "loginUser\0user*\0usr\0addUser\0logoutUser\0"
    "userButtonClicked\0logNewUser\0checkWorks\0"
    "checkRemoteLogin\0sync\0listWorks\0"
    "listBookWorks\0listOthers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    1,   81,    2, 0x0a /* Public */,
       7,    1,   84,    2, 0x0a /* Public */,
       8,    1,   87,    2, 0x0a /* Public */,
       9,    0,   90,    2, 0x0a /* Public */,
      10,    0,   91,    2, 0x0a /* Public */,
      11,    0,   92,    2, 0x0a /* Public */,
      12,    0,   93,    2, 0x0a /* Public */,
      13,    0,   94,    2, 0x0a /* Public */,
      14,    0,   95,    2, 0x0a /* Public */,
      15,    0,   96,    2, 0x0a /* Public */,
      16,    0,   97,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mainWidget *_t = static_cast<mainWidget *>(_o);
        switch (_id) {
        case 0: _t->connectToDB(); break;
        case 1: _t->refreshUsers(); break;
        case 2: _t->loginUser((*reinterpret_cast< user*(*)>(_a[1]))); break;
        case 3: _t->addUser((*reinterpret_cast< user*(*)>(_a[1]))); break;
        case 4: _t->logoutUser((*reinterpret_cast< user*(*)>(_a[1]))); break;
        case 5: _t->userButtonClicked(); break;
        case 6: _t->logNewUser(); break;
        case 7: _t->checkWorks(); break;
        case 8: _t->checkRemoteLogin(); break;
        case 9: _t->sync(); break;
        case 10: _t->listWorks(); break;
        case 11: _t->listBookWorks(); break;
        case 12: _t->listOthers(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< user* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< user* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< user* >(); break;
            }
            break;
        }
    }
}

const QMetaObject mainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mainWidget.data,
      qt_meta_data_mainWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mainWidget.stringdata))
        return static_cast<void*>(const_cast< mainWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int mainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
