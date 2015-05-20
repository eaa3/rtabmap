/****************************************************************************
** Meta object code from reading C++ file 'CalibrationDialog.h'
**
** Created: Mon May 18 14:41:46 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/rtabmap/gui/CalibrationDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CalibrationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rtabmap__CalibrationDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   28,   27,   27, 0x0a,
      60,   53,   27,   27, 0x0a,
      85,   80,   27,   27, 0x0a,
     139,  107,   27,   27, 0x08,
     178,   27,   27,   27, 0x08,
     188,   27,   27,   27, 0x08,
     205,   27,  200,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_rtabmap__CalibrationDialog[] = {
    "rtabmap::CalibrationDialog\0\0width\0"
    "setBoardWidth(int)\0height\0setBoardHeight(int)\0"
    "size\0setSquareSize(double)\0"
    "imageLeft,imageRight,cameraName\0"
    "processImages(cv::Mat,cv::Mat,QString)\0"
    "restart()\0calibrate()\0bool\0save()\0"
};

void rtabmap::CalibrationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CalibrationDialog *_t = static_cast<CalibrationDialog *>(_o);
        switch (_id) {
        case 0: _t->setBoardWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setBoardHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setSquareSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->processImages((*reinterpret_cast< const cv::Mat(*)>(_a[1])),(*reinterpret_cast< const cv::Mat(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->restart(); break;
        case 5: _t->calibrate(); break;
        case 6: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData rtabmap::CalibrationDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rtabmap::CalibrationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_rtabmap__CalibrationDialog,
      qt_meta_data_rtabmap__CalibrationDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rtabmap::CalibrationDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rtabmap::CalibrationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rtabmap::CalibrationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__CalibrationDialog))
        return static_cast<void*>(const_cast< CalibrationDialog*>(this));
    if (!strcmp(_clname, "UEventsHandler"))
        return static_cast< UEventsHandler*>(const_cast< CalibrationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int rtabmap::CalibrationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
