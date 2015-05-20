/****************************************************************************
** Meta object code from reading C++ file 'OdometryViewer.h'
**
** Created: Mon May 18 14:41:46 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/rtabmap/gui/OdometryViewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OdometryViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rtabmap__OdometryViewer[] = {

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
      25,   24,   24,   24, 0x0a,
      43,   33,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_rtabmap__OdometryViewer[] = {
    "rtabmap::OdometryViewer\0\0clear()\0"
    "data,info\0"
    "processData(rtabmap::SensorData,rtabmap::OdometryInfo)\0"
};

void rtabmap::OdometryViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OdometryViewer *_t = static_cast<OdometryViewer *>(_o);
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->processData((*reinterpret_cast< const rtabmap::SensorData(*)>(_a[1])),(*reinterpret_cast< const rtabmap::OdometryInfo(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData rtabmap::OdometryViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rtabmap::OdometryViewer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_rtabmap__OdometryViewer,
      qt_meta_data_rtabmap__OdometryViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rtabmap::OdometryViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rtabmap::OdometryViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rtabmap::OdometryViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__OdometryViewer))
        return static_cast<void*>(const_cast< OdometryViewer*>(this));
    if (!strcmp(_clname, "UEventsHandler"))
        return static_cast< UEventsHandler*>(const_cast< OdometryViewer*>(this));
    return QDialog::qt_metacast(_clname);
}

int rtabmap::OdometryViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
