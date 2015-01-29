/****************************************************************************
** Meta object code from reading C++ file 'wbooksbrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wbooksbrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wbooksbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_wBooksBrowser_t {
    QByteArrayData data[12];
    char stringdata[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wBooksBrowser_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wBooksBrowser_t qt_meta_stringdata_wBooksBrowser = {
    {
QT_MOC_LITERAL(0, 0, 13), // "wBooksBrowser"
QT_MOC_LITERAL(1, 14, 16), // "businessSelected"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "add"
QT_MOC_LITERAL(4, 36, 6), // "addSon"
QT_MOC_LITERAL(5, 43, 3), // "mod"
QT_MOC_LITERAL(6, 47, 3), // "del"
QT_MOC_LITERAL(7, 51, 9), // "bookAdded"
QT_MOC_LITERAL(8, 61, 6), // "books*"
QT_MOC_LITERAL(9, 68, 2), // "bk"
QT_MOC_LITERAL(10, 71, 12), // "sonBookAdded"
QT_MOC_LITERAL(11, 84, 7) // "refresh"

    },
    "wBooksBrowser\0businessSelected\0\0add\0"
    "addSon\0mod\0del\0bookAdded\0books*\0bk\0"
    "sonBookAdded\0refresh"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wBooksBrowser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    1,   59,    2, 0x0a /* Public */,
      10,    1,   62,    2, 0x0a /* Public */,
      11,    0,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void wBooksBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        wBooksBrowser *_t = static_cast<wBooksBrowser *>(_o);
        switch (_id) {
        case 0: _t->businessSelected(); break;
        case 1: _t->add(); break;
        case 2: _t->addSon(); break;
        case 3: _t->mod(); break;
        case 4: _t->del(); break;
        case 5: _t->bookAdded((*reinterpret_cast< books*(*)>(_a[1]))); break;
        case 6: _t->sonBookAdded((*reinterpret_cast< books*(*)>(_a[1]))); break;
        case 7: _t->refresh(); break;
        default: ;
        }
    }
}

const QMetaObject wBooksBrowser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wBooksBrowser.data,
      qt_meta_data_wBooksBrowser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *wBooksBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wBooksBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_wBooksBrowser.stringdata))
        return static_cast<void*>(const_cast< wBooksBrowser*>(this));
    return QWidget::qt_metacast(_clname);
}

int wBooksBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
