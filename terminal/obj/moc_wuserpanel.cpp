/****************************************************************************
** Meta object code from reading C++ file 'wuserpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wuserpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wuserpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_wUserPanel_t {
    QByteArrayData data[8];
    char stringdata[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wUserPanel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wUserPanel_t qt_meta_stringdata_wUserPanel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "wUserPanel"
QT_MOC_LITERAL(1, 11, 6), // "logout"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 6), // "addJob"
QT_MOC_LITERAL(4, 26, 8), // "checkJob"
QT_MOC_LITERAL(5, 35, 9), // "searchJob"
QT_MOC_LITERAL(6, 45, 7), // "options"
QT_MOC_LITERAL(7, 53, 11) // "manageUsers"

    },
    "wUserPanel\0logout\0\0addJob\0checkJob\0"
    "searchJob\0options\0manageUsers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wUserPanel[] = {

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
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void wUserPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        wUserPanel *_t = static_cast<wUserPanel *>(_o);
        switch (_id) {
        case 0: _t->logout(); break;
        case 1: _t->addJob(); break;
        case 2: _t->checkJob(); break;
        case 3: _t->searchJob(); break;
        case 4: _t->options(); break;
        case 5: _t->manageUsers(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject wUserPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wUserPanel.data,
      qt_meta_data_wUserPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *wUserPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wUserPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_wUserPanel.stringdata))
        return static_cast<void*>(const_cast< wUserPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int wUserPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
