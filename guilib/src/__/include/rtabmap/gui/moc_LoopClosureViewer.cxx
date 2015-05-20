/****************************************************************************
** Meta object code from reading C++ file 'LoopClosureViewer.h'
**
** Created: Mon May 18 14:41:46 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/rtabmap/gui/LoopClosureViewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoopClosureViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rtabmap__LoopClosureViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      39,   28,   27,   27, 0x0a,
      67,   58,   27,   27, 0x0a,
      92,   84,   27,   27, 0x0a,
     113,  108,   27,   27, 0x0a,
     135,   27,   27,   27, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_rtabmap__LoopClosureViewer[] = {
    "rtabmap::LoopClosureViewer\0\0decimation\0"
    "setDecimation(int)\0maxDepth\0"
    "setMaxDepth(int)\0samples\0setSamples(int)\0"
    "AtoB\0updateView(Transform)\0updateView()\0"
};

void rtabmap::LoopClosureViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LoopClosureViewer *_t = static_cast<LoopClosureViewer *>(_o);
        switch (_id) {
        case 0: _t->setDecimation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setMaxDepth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setSamples((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateView((*reinterpret_cast< const Transform(*)>(_a[1]))); break;
        case 4: _t->updateView(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData rtabmap::LoopClosureViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rtabmap::LoopClosureViewer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_rtabmap__LoopClosureViewer,
      qt_meta_data_rtabmap__LoopClosureViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rtabmap::LoopClosureViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rtabmap::LoopClosureViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rtabmap::LoopClosureViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__LoopClosureViewer))
        return static_cast<void*>(const_cast< LoopClosureViewer*>(this));
    return QWidget::qt_metacast(_clname);
}

int rtabmap::LoopClosureViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
