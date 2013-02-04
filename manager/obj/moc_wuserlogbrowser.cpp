/****************************************************************************
** Meta object code from reading C++ file 'wuserlogbrowser.h'
**
** Created: Sat 2. Feb 03:27:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wuserlogbrowser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wuserlogbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wUserLogBrowser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      32,   16,   16,   16, 0x0a,
      50,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wUserLogBrowser[] = {
    "wUserLogBrowser\0\0comboChanged()\0"
    "refreshEmployee()\0refreshEmployeeLog()\0"
};

void wUserLogBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        wUserLogBrowser *_t = static_cast<wUserLogBrowser *>(_o);
        switch (_id) {
        case 0: _t->comboChanged(); break;
        case 1: _t->refreshEmployee(); break;
        case 2: _t->refreshEmployeeLog(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData wUserLogBrowser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wUserLogBrowser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wUserLogBrowser,
      qt_meta_data_wUserLogBrowser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wUserLogBrowser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wUserLogBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wUserLogBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wUserLogBrowser))
        return static_cast<void*>(const_cast< wUserLogBrowser*>(this));
    return QWidget::qt_metacast(_clname);
}

int wUserLogBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
