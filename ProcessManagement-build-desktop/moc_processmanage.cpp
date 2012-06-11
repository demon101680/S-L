/****************************************************************************
** Meta object code from reading C++ file 'processmanage.h'
**
** Created: Mon Jun 11 18:01:46 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ProcessManagement/processmanage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'processmanage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProcessManage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      24,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ProcessManage[] = {
    "ProcessManage\0\0getcpu()\0timer_update_TabInfo()\0"
};

void ProcessManage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProcessManage *_t = static_cast<ProcessManage *>(_o);
        switch (_id) {
        case 0: _t->getcpu(); break;
        case 1: _t->timer_update_TabInfo(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ProcessManage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProcessManage::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ProcessManage,
      qt_meta_data_ProcessManage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProcessManage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProcessManage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProcessManage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessManage))
        return static_cast<void*>(const_cast< ProcessManage*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ProcessManage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
