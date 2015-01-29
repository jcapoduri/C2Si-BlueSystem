/****************************************************************************
** Meta object code from reading C++ file 'wjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_wJob_t {
    QByteArrayData data[14];
    char stringdata[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wJob_t qt_meta_stringdata_wJob = {
    {
QT_MOC_LITERAL(0, 0, 4), // "wJob"
QT_MOC_LITERAL(1, 5, 17), // "refreshWorkorders"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "save"
QT_MOC_LITERAL(4, 29, 6), // "cancel"
QT_MOC_LITERAL(5, 36, 7), // "reprint"
QT_MOC_LITERAL(6, 44, 9), // "cloneWork"
QT_MOC_LITERAL(7, 54, 8), // "addWorks"
QT_MOC_LITERAL(8, 63, 8), // "cloneJob"
QT_MOC_LITERAL(9, 72, 8), // "delWorks"
QT_MOC_LITERAL(10, 81, 10), // "workorder*"
QT_MOC_LITERAL(11, 92, 1), // "w"
QT_MOC_LITERAL(12, 94, 13), // "showWorkorder"
QT_MOC_LITERAL(13, 108, 2) // "id"

    },
    "wJob\0refreshWorkorders\0\0save\0cancel\0"
    "reprint\0cloneWork\0addWorks\0cloneJob\0"
    "delWorks\0workorder*\0w\0showWorkorder\0"
    "id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    1,   66,    2, 0x0a /* Public */,
      12,    1,   69,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::ULongLong,   13,

       0        // eod
};

void wJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        wJob *_t = static_cast<wJob *>(_o);
        switch (_id) {
        case 0: _t->refreshWorkorders(); break;
        case 1: _t->save(); break;
        case 2: _t->cancel(); break;
        case 3: _t->reprint(); break;
        case 4: _t->cloneWork(); break;
        case 5: _t->addWorks(); break;
        case 6: _t->cloneJob(); break;
        case 7: _t->delWorks((*reinterpret_cast< workorder*(*)>(_a[1]))); break;
        case 8: _t->showWorkorder((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject wJob::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wJob.data,
      qt_meta_data_wJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *wJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_wJob.stringdata))
        return static_cast<void*>(const_cast< wJob*>(this));
    return QWidget::qt_metacast(_clname);
}

int wJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
