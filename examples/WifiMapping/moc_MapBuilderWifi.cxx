/****************************************************************************
** Meta object code from reading C++ file 'MapBuilderWifi.h'
**
** Created: Mon May 18 14:46:03 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MapBuilderWifi.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MapBuilderWifi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MapBuilderWifi[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MapBuilderWifi[] = {
    "MapBuilderWifi\0\0stats\0"
    "processStatistics(rtabmap::Statistics)\0"
};

void MapBuilderWifi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MapBuilderWifi *_t = static_cast<MapBuilderWifi *>(_o);
        switch (_id) {
        case 0: _t->processStatistics((*reinterpret_cast< const rtabmap::Statistics(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MapBuilderWifi::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MapBuilderWifi::staticMetaObject = {
    { &MapBuilder::staticMetaObject, qt_meta_stringdata_MapBuilderWifi,
      qt_meta_data_MapBuilderWifi, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MapBuilderWifi::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MapBuilderWifi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MapBuilderWifi::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MapBuilderWifi))
        return static_cast<void*>(const_cast< MapBuilderWifi*>(this));
    return MapBuilder::qt_metacast(_clname);
}

int MapBuilderWifi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapBuilder::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
