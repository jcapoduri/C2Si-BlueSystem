/****************************************************************************
** Meta object code from reading C++ file 'printobject.h'
**
** Created: Sat 2. Feb 04:53:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../terminal/src/printobject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_printObject[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   13,   12,   12, 0x0a,
      41,   30,   12,   12, 0x0a,
      86,   84,   12,   12, 0x0a,
     125,  113,   12,   12, 0x0a,
     169,  113,  164,   12, 0x0a,
     209,  113,  164,   12, 0x0a,
     260,  243,  164,   12, 0x0a,
     303,  295,   12,   12, 0x0a,
     327,  295,   12,   12, 0x0a,
     354,  295,   12,   12, 0x0a,
     382,  295,   12,   12, 0x0a,
     414,  295,   12,   12, 0x0a,
     443,  295,   12,   12, 0x0a,
     477,  295,   12,   12, 0x0a,
     515,   84,  506,   12, 0x0a,
     549,   84,  506,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_printObject[] = {
    "printObject\0\0j\0printJob(job*)\0list,title\0"
    "printList(QList<wListWorkorder*>&,QString)\0"
    "w\0printWorkorder(workorder*)\0model,title\0"
    "printSQLModel(QSqlQueryModel*,QString)\0"
    "bool\0printModel(QAbstractItemModel*,QString)\0"
    "printTable(QTableWidget*,QString)\0"
    "from,howMany,bus\0printOutOfOrder(int,int,business*)\0"
    "printer\0paintRequest(QPrinter*)\0"
    "paintJobRequest(QPrinter*)\0"
    "paintListRequest(QPrinter*)\0"
    "paintSqlModelRequest(QPrinter*)\0"
    "paintModelRequest(QPrinter*)\0"
    "paintOutOfOrderRequest(QPrinter*)\0"
    "paintTableRequest(QPrinter*)\0QWidget*\0"
    "getInternalWorkOrders(workorder*)\0"
    "getWorkOrders(workorder*)\0"
};

void printObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        printObject *_t = static_cast<printObject *>(_o);
        switch (_id) {
        case 0: _t->printJob((*reinterpret_cast< job*(*)>(_a[1]))); break;
        case 1: _t->printList((*reinterpret_cast< QList<wListWorkorder*>(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->printWorkorder((*reinterpret_cast< workorder*(*)>(_a[1]))); break;
        case 3: _t->printSQLModel((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: { bool _r = _t->printModel((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->printTable((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->printOutOfOrder((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< business*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->paintRequest((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 8: _t->paintJobRequest((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 9: _t->paintListRequest((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 10: _t->paintSqlModelRequest((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 11: _t->paintModelRequest((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 12: _t->paintOutOfOrderRequest((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 13: _t->paintTableRequest((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 14: { QWidget* _r = _t->getInternalWorkOrders((*reinterpret_cast< workorder*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 15: { QWidget* _r = _t->getWorkOrders((*reinterpret_cast< workorder*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData printObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject printObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_printObject,
      qt_meta_data_printObject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &printObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *printObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *printObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_printObject))
        return static_cast<void*>(const_cast< printObject*>(this));
    return QObject::qt_metacast(_clname);
}

int printObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
