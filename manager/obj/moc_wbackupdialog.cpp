/****************************************************************************
** Meta object code from reading C++ file 'wbackupdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wbackupdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wbackupdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_wBackupDialog_t {
    QByteArrayData data[12];
    char stringdata[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wBackupDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wBackupDialog_t qt_meta_stringdata_wBackupDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "wBackupDialog"
QT_MOC_LITERAL(1, 14, 8), // "doBackup"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "restoreBackup"
QT_MOC_LITERAL(4, 38, 11), // "replyFinish"
QT_MOC_LITERAL(5, 50, 14), // "QNetworkReply*"
QT_MOC_LITERAL(6, 65, 5), // "reply"
QT_MOC_LITERAL(7, 71, 12), // "progressMade"
QT_MOC_LITERAL(8, 84, 3), // "val"
QT_MOC_LITERAL(9, 88, 3), // "max"
QT_MOC_LITERAL(10, 92, 3), // "log"
QT_MOC_LITERAL(11, 96, 3) // "txt"

    },
    "wBackupDialog\0doBackup\0\0restoreBackup\0"
    "replyFinish\0QNetworkReply*\0reply\0"
    "progressMade\0val\0max\0log\0txt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wBackupDialog[] = {

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
       1,    0,   49,    2, 0x09 /* Protected */,
       3,    0,   50,    2, 0x09 /* Protected */,
       4,    1,   51,    2, 0x09 /* Protected */,
       7,    2,   54,    2, 0x09 /* Protected */,
       7,    1,   59,    2, 0x29 /* Protected | MethodCloned */,
       7,    0,   62,    2, 0x29 /* Protected | MethodCloned */,
      10,    1,   63,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    8,    9,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void wBackupDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        wBackupDialog *_t = static_cast<wBackupDialog *>(_o);
        switch (_id) {
        case 0: _t->doBackup(); break;
        case 1: _t->restoreBackup(); break;
        case 2: _t->replyFinish((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->progressMade((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->progressMade((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->progressMade(); break;
        case 6: _t->log((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject wBackupDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_wBackupDialog.data,
      qt_meta_data_wBackupDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *wBackupDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wBackupDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_wBackupDialog.stringdata))
        return static_cast<void*>(const_cast< wBackupDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int wBackupDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
