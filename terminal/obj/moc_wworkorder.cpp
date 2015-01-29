/****************************************************************************
** Meta object code from reading C++ file 'wworkorder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wworkorder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wworkorder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_wworkorder_t {
    QByteArrayData data[13];
    char stringdata[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wworkorder_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wworkorder_t qt_meta_stringdata_wworkorder = {
    {
QT_MOC_LITERAL(0, 0, 10), // "wworkorder"
QT_MOC_LITERAL(1, 11, 4), // "save"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 8), // "addPages"
QT_MOC_LITERAL(4, 26, 8), // "delPages"
QT_MOC_LITERAL(5, 35, 10), // "pagesAdded"
QT_MOC_LITERAL(6, 46, 16), // "workorder_pages*"
QT_MOC_LITERAL(7, 63, 5), // "pages"
QT_MOC_LITERAL(8, 69, 8), // "deleteMe"
QT_MOC_LITERAL(9, 78, 10), // "updateCost"
QT_MOC_LITERAL(10, 89, 11), // "setBookInfo"
QT_MOC_LITERAL(11, 101, 6), // "books*"
QT_MOC_LITERAL(12, 108, 2) // "bk"

    },
    "wworkorder\0save\0\0addPages\0delPages\0"
    "pagesAdded\0workorder_pages*\0pages\0"
    "deleteMe\0updateCost\0setBookInfo\0books*\0"
    "bk"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wworkorder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    1,   52,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,
       9,    0,   56,    2, 0x0a /* Public */,
      10,    1,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void wworkorder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        wworkorder *_t = static_cast<wworkorder *>(_o);
        switch (_id) {
        case 0: _t->save(); break;
        case 1: _t->addPages(); break;
        case 2: _t->delPages(); break;
        case 3: _t->pagesAdded((*reinterpret_cast< workorder_pages*(*)>(_a[1]))); break;
        case 4: _t->deleteMe(); break;
        case 5: _t->updateCost(); break;
        case 6: _t->setBookInfo((*reinterpret_cast< books*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject wworkorder::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wworkorder.data,
      qt_meta_data_wworkorder,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *wworkorder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wworkorder::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_wworkorder.stringdata))
        return static_cast<void*>(const_cast< wworkorder*>(this));
    return QWidget::qt_metacast(_clname);
}

int wworkorder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
