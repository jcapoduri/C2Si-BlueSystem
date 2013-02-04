/****************************************************************************
** Meta object code from reading C++ file 'wbackupdialog.h'
**
** Created: Sat 2. Feb 03:27:25 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wbackupdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wbackupdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wBackupDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x09,
      26,   14,   14,   14, 0x09,
      48,   42,   14,   14, 0x09,
      84,   76,   14,   14, 0x09,
     116,  112,   14,   14, 0x29,
     137,   14,   14,   14, 0x29,
     156,  152,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_wBackupDialog[] = {
    "wBackupDialog\0\0doBackup()\0restoreBackup()\0"
    "reply\0replyFinish(QNetworkReply*)\0"
    "val,max\0progressMade(qint64,qint64)\0"
    "val\0progressMade(qint64)\0progressMade()\0"
    "txt\0log(QString)\0"
};

void wBackupDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
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

const QMetaObjectExtraData wBackupDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wBackupDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_wBackupDialog,
      qt_meta_data_wBackupDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wBackupDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wBackupDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wBackupDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wBackupDialog))
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
    }
    return _id;
}
QT_END_MOC_NAMESPACE
