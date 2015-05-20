/****************************************************************************
** Meta object code from reading C++ file 'PostProcessingDialog.h'
**
** Created: Mon May 18 14:41:46 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PostProcessingDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PostProcessingDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rtabmap__PostProcessingDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   30,   30,   30, 0x0a,
      65,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_rtabmap__PostProcessingDialog[] = {
    "rtabmap::PostProcessingDialog\0\0"
    "configChanged()\0restoreDefaults()\0"
    "updateButtonBox()\0"
};

void rtabmap::PostProcessingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PostProcessingDialog *_t = static_cast<PostProcessingDialog *>(_o);
        switch (_id) {
        case 0: _t->configChanged(); break;
        case 1: _t->restoreDefaults(); break;
        case 2: _t->updateButtonBox(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData rtabmap::PostProcessingDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rtabmap::PostProcessingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_rtabmap__PostProcessingDialog,
      qt_meta_data_rtabmap__PostProcessingDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rtabmap::PostProcessingDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rtabmap::PostProcessingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rtabmap::PostProcessingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__PostProcessingDialog))
        return static_cast<void*>(const_cast< PostProcessingDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int rtabmap::PostProcessingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void rtabmap::PostProcessingDialog::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
