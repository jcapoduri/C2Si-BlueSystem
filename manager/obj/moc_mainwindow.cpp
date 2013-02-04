/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat 2. Feb 03:26:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      30,   26,   11,   11, 0x0a,
      52,   11,   11,   11, 0x0a,
      60,   11,   11,   11, 0x0a,
      74,   11,   11,   11, 0x0a,
      91,   11,   11,   11, 0x0a,
     101,   11,   11,   11, 0x0a,
     114,   11,   11,   11, 0x0a,
     126,   11,   11,   11, 0x0a,
     141,   11,   11,   11, 0x0a,
     155,   11,   11,   11, 0x0a,
     169,   11,   11,   11, 0x0a,
     187,   11,   11,   11, 0x0a,
     205,   11,   11,   11, 0x0a,
     222,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0connectToDB()\0usr\0"
    "setCurrentUser(user*)\0login()\0"
    "businessAdd()\0businessBrowse()\0userAdd()\0"
    "userBrowse()\0showWorks()\0showEmployee()\0"
    "showBackups()\0showOptions()\0"
    "makeCloudBackup()\0makeLocalBackup()\0"
    "makeOutOfSerie()\0booksBrowse()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->connectToDB(); break;
        case 1: _t->setCurrentUser((*reinterpret_cast< user*(*)>(_a[1]))); break;
        case 2: _t->login(); break;
        case 3: _t->businessAdd(); break;
        case 4: _t->businessBrowse(); break;
        case 5: _t->userAdd(); break;
        case 6: _t->userBrowse(); break;
        case 7: _t->showWorks(); break;
        case 8: _t->showEmployee(); break;
        case 9: _t->showBackups(); break;
        case 10: _t->showOptions(); break;
        case 11: _t->makeCloudBackup(); break;
        case 12: _t->makeLocalBackup(); break;
        case 13: _t->makeOutOfSerie(); break;
        case 14: _t->booksBrowse(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
