/****************************************************************************
** Meta object code from reading C++ file 'wbackups.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wbackups.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wbackups.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_wBackups_t {
    QByteArrayData data[6];
    char stringdata[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wBackups_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wBackups_t qt_meta_stringdata_wBackups = {
    {
QT_MOC_LITERAL(0, 0, 8), // "wBackups"
QT_MOC_LITERAL(1, 9, 8), // "createBk"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 7), // "applyBk"
QT_MOC_LITERAL(4, 27, 8), // "deleteBk"
QT_MOC_LITERAL(5, 36, 9) // "refreshBk"

    },
    "wBackups\0createBk\0\0applyBk\0deleteBk\0"
    "refreshBk"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wBackups[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    0,   35,    2, 0x09 /* Protected */,
       4,    0,   36,    2, 0x09 /* Protected */,
       5,    0,   37,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void wBackups::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        wBackups *_t = static_cast<wBackups *>(_o);
        switch (_id) {
        case 0: _t->createBk(); break;
        case 1: _t->applyBk(); break;
        case 2: _t->deleteBk(); break;
        case 3: _t->refreshBk(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject wBackups::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wBackups.data,
      qt_meta_data_wBackups,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *wBackups::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wBackups::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_wBackups.stringdata))
        return static_cast<void*>(const_cast< wBackups*>(this));
    return QWidget::qt_metacast(_clname);
}

int wBackups::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
