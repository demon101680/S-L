/****************************************************************************
** Meta object code from reading C++ file 'processmanage.h'
**
** Created: Sat Jun 30 19:36:44 2012
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
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x08,
      38,   15,   14,   14, 0x08,
      71,   14,   14,   14, 0x08,
      86,   14,   14,   14, 0x08,
      93,   14,   14,   14, 0x08,
     103,   14,   14,   14, 0x08,
     117,   14,   14,   14, 0x08,
     130,   14,   14,   14, 0x08,
     141,   14,   14,   14, 0x08,
     152,   14,   14,   14, 0x08,
     162,   14,   14,   14, 0x08,
     171,   14,   14,   14, 0x08,
     182,   14,   14,   14, 0x08,
     191,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ProcessManage[] = {
    "ProcessManage\0\0index\0showTabInfo(int)\0"
    "on_tabWidget_currentChanged(int)\0"
    "printProcess()\0Info()\0NewWork()\0"
    "killProcess()\0refreshPro()\0shutdown()\0"
    "printNet()\0restart()\0detail()\0shuoming()\0"
    "getcpu()\0timer_update_TabInfo()\0"
};

void ProcessManage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProcessManage *_t = static_cast<ProcessManage *>(_o);
        switch (_id) {
        case 0: _t->showTabInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->printProcess(); break;
        case 3: _t->Info(); break;
        case 4: _t->NewWork(); break;
        case 5: _t->killProcess(); break;
        case 6: _t->refreshPro(); break;
        case 7: _t->shutdown(); break;
        case 8: _t->printNet(); break;
        case 9: _t->restart(); break;
        case 10: _t->detail(); break;
        case 11: _t->shuoming(); break;
        case 12: _t->getcpu(); break;
        case 13: _t->timer_update_TabInfo(); break;
        default: ;
        }
    }
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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
