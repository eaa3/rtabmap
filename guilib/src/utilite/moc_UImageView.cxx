/****************************************************************************
** Meta object code from reading C++ file 'UImageView.h'
**
** Created: Mon May 18 14:41:46 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "UImageView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UImageView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UImageView[] = {

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
      18,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UImageView[] = {
    "UImageView\0\0image\0setImage(QImage)\0"
};

void UImageView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UImageView *_t = static_cast<UImageView *>(_o);
        switch (_id) {
        case 0: _t->setImage((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UImageView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UImageView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UImageView,
      qt_meta_data_UImageView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UImageView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UImageView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UImageView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UImageView))
        return static_cast<void*>(const_cast< UImageView*>(this));
    return QWidget::qt_metacast(_clname);
}

int UImageView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
