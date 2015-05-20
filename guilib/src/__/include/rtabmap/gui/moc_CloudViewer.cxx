/****************************************************************************
** Meta object code from reading C++ file 'CloudViewer.h'
**
** Created: Mon May 18 14:41:46 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/rtabmap/gui/CloudViewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CloudViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rtabmap__CloudViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   38,   21,   21, 0x0a,
      78,   38,   21,   21, 0x0a,
     118,  105,   21,   21, 0x0a,
     166,  155,   21,   21, 0x0a,
     205,  202,   21,   21, 0x2a,
     242,  234,   21,   21, 0x0a,
     277,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_rtabmap__CloudViewer[] = {
    "rtabmap::CloudViewer\0\0configChanged()\0"
    "color\0setDefaultBackgroundColor(QColor)\0"
    "setBackgroundColor(QColor)\0id,isVisible\0"
    "setCloudVisibility(std::string,bool)\0"
    "id,opacity\0setCloudOpacity(std::string,double)\0"
    "id\0setCloudOpacity(std::string)\0id,size\0"
    "setCloudPointSize(std::string,int)\0"
    "clear()\0"
};

void rtabmap::CloudViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CloudViewer *_t = static_cast<CloudViewer *>(_o);
        switch (_id) {
        case 0: _t->configChanged(); break;
        case 1: _t->setDefaultBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->setBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->setCloudVisibility((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->setCloudOpacity((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->setCloudOpacity((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 6: _t->setCloudPointSize((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->clear(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData rtabmap::CloudViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rtabmap::CloudViewer::staticMetaObject = {
    { &QVTKWidget::staticMetaObject, qt_meta_stringdata_rtabmap__CloudViewer,
      qt_meta_data_rtabmap__CloudViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rtabmap::CloudViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rtabmap::CloudViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rtabmap::CloudViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__CloudViewer))
        return static_cast<void*>(const_cast< CloudViewer*>(this));
    return QVTKWidget::qt_metacast(_clname);
}

int rtabmap::CloudViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVTKWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void rtabmap::CloudViewer::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
