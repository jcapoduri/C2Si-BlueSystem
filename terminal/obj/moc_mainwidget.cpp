/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created: Sat 2. Feb 04:51:43 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mainwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mainWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      26,   11,   11,   11, 0x0a,
      45,   41,   11,   11, 0x0a,
      62,   41,   11,   11, 0x0a,
      77,   41,   11,   11, 0x0a,
      95,   11,   11,   11, 0x0a,
     115,   11,   11,   11, 0x0a,
     128,   11,   11,   11, 0x0a,
     141,   11,   11,   11, 0x0a,
     160,   11,   11,   11, 0x0a,
     167,   11,   11,   11, 0x0a,
     179,   11,   11,   11, 0x0a,
     195,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_mainWidget[] = {
    "mainWidget\0\0connectToDB()\0refreshUsers()\0"
    "usr\0loginUser(user*)\0addUser(user*)\0"
    "logoutUser(user*)\0userButtonClicked()\0"
    "logNewUser()\0checkWorks()\0checkRemoteLogin()\0"
    "sync()\0listWorks()\0listBookWorks()\0"
    "listOthers()\0"
};

void mainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
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
    }
}

const QMetaObjectExtraData mainWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mainWidget,
      qt_meta_data_mainWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mainWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mainWidget))
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
    }
    return _id;
}
QT_END_MOC_NAMESPACE
