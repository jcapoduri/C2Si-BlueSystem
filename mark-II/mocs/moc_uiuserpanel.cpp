/****************************************************************************
** Meta object code from reading C++ file 'uiuserpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/uiuserpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uiuserpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_uiUserPanel_t {
    QByteArrayData data[9];
    char stringdata[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_uiUserPanel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_uiUserPanel_t qt_meta_stringdata_uiUserPanel = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 11),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 3),
QT_MOC_LITERAL(4, 29, 6),
QT_MOC_LITERAL(5, 36, 7),
QT_MOC_LITERAL(6, 44, 9),
QT_MOC_LITERAL(7, 54, 6),
QT_MOC_LITERAL(8, 61, 6)
    },
    "uiUserPanel\0userLoggout\0\0obj\0newJob\0"
    "openJob\0searchJob\0logout\0config\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_uiUserPanel[] = {

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
       1,    1,   44,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a,
       5,    0,   48,    2, 0x0a,
       6,    0,   49,    2, 0x0a,
       7,    0,   50,    2, 0x0a,
       8,    0,   51,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonObject,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void uiUserPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        uiUserPanel *_t = static_cast<uiUserPanel *>(_o);
        switch (_id) {
        case 0: _t->userLoggout((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 1: _t->newJob(); break;
        case 2: _t->openJob(); break;
        case 3: _t->searchJob(); break;
        case 4: _t->logout(); break;
        case 5: _t->config(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (uiUserPanel::*_t)(QJsonObject );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&uiUserPanel::userLoggout)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject uiUserPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_uiUserPanel.data,
      qt_meta_data_uiUserPanel,  qt_static_metacall, 0, 0}
};


const QMetaObject *uiUserPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *uiUserPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_uiUserPanel.stringdata))
        return static_cast<void*>(const_cast< uiUserPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int uiUserPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void uiUserPanel::userLoggout(QJsonObject _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
