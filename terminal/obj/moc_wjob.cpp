/****************************************************************************
** Meta object code from reading C++ file 'wjob.h'
**
** Created: Sat 2. Feb 04:51:46 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/wjob.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wJob[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x0a,
      26,    5,    5,    5, 0x0a,
      33,    5,    5,    5, 0x0a,
      42,    5,    5,    5, 0x0a,
      52,    5,    5,    5, 0x0a,
      64,    5,    5,    5, 0x0a,
      75,    5,    5,    5, 0x0a,
      88,   86,    5,    5, 0x0a,
     112,  109,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wJob[] = {
    "wJob\0\0refreshWorkorders()\0save()\0"
    "cancel()\0reprint()\0cloneWork()\0"
    "addWorks()\0cloneJob()\0w\0delWorks(workorder*)\0"
    "id\0showWorkorder(quint64)\0"
};

void wJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
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

const QMetaObjectExtraData wJob::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wJob::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_wJob,
      qt_meta_data_wJob, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wJob::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wJob::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wJob))
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
    }
    return _id;
}
QT_END_MOC_NAMESPACE
