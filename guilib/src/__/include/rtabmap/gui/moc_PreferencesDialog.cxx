/****************************************************************************
** Meta object code from reading C++ file 'PreferencesDialog.h'
**
** Created: Mon May 18 14:41:46 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../include/rtabmap/gui/PreferencesDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PreferencesDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rtabmap__PreferencesDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x05,
      76,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
     122,  116,   27,   27, 0x0a,
     143,  116,   27,   27, 0x0a,
     168,  116,   27,   27, 0x0a,
     196,  188,   27,   27, 0x0a,
     218,  214,   27,   27, 0x0a,
     241,   27,   27,   27, 0x2a,
     266,  261,   27,   27, 0x0a,
     293,   27,   27,   27, 0x2a,
     316,  214,   27,   27, 0x0a,
     338,   27,   27,   27, 0x2a,
     357,   27,   27,   27, 0x0a,
     376,  369,   27,   27, 0x08,
     406,  369,   27,   27, 0x08,
     447,  435,   27,   27, 0x08,
     466,   27,   27,   27, 0x08,
     488,   27,  483,   27, 0x08,
     503,   27,   27,   27, 0x08,
     517,   27,   27,   27, 0x08,
     544,   27,   27,   27, 0x08,
     578,   27,   27,   27, 0x08,
     605,   27,   27,   27, 0x08,
     637,  631,   27,   27, 0x08,
     658,  116,   27,   27, 0x08,
     676,  116,   27,   27, 0x08,
     695,  116,   27,   27, 0x08,
     716,  116,   27,   27, 0x08,
     738,   27,   27,   27, 0x08,
     761,   27,   27,   27, 0x08,
     775,   27,   27,   27, 0x08,
     800,   27,   27,   27, 0x08,
     823,   27,   27,   27, 0x08,
     841,   27,   27,   27, 0x08,
     857,   27,   27,   27, 0x08,
     880,   27,   27,   27, 0x08,
     901,   27,   27,   27, 0x08,
     938,   27,   27,   27, 0x08,
     953,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_rtabmap__PreferencesDialog[] = {
    "rtabmap::PreferencesDialog\0\0"
    "settingsChanged(PreferencesDialog::PANEL_FLAGS)\0"
    "settingsChanged(rtabmap::ParametersMap)\0"
    "value\0setInputRate(double)\0"
    "setDetectionRate(double)\0setTimeLimit(float)\0"
    "enabled\0setSLAMMode(bool)\0src\0"
    "selectSourceImage(Src)\0selectSourceImage()\0"
    "user\0selectSourceDatabase(bool)\0"
    "selectSourceDatabase()\0selectSourceRGBD(Src)\0"
    "selectSourceRGBD()\0calibrate()\0button\0"
    "closeDialog(QAbstractButton*)\0"
    "resetApply(QAbstractButton*)\0panelNumber\0"
    "resetSettings(int)\0loadConfigFrom()\0"
    "bool\0saveConfigTo()\0resetConfig()\0"
    "makeObsoleteGeneralPanel()\0"
    "makeObsoleteCloudRenderingPanel()\0"
    "makeObsoleteLoggingPanel()\0"
    "makeObsoleteSourcePanel()\0index\0"
    "clicked(QModelIndex)\0addParameter(int)\0"
    "addParameter(bool)\0addParameter(double)\0"
    "addParameter(QString)\0updatePredictionPlot()\0"
    "updateKpROI()\0changeWorkingDirectory()\0"
    "changeDictionaryPath()\0readSettingsEnd()\0"
    "setupTreeView()\0updateBasicParameter()\0"
    "openDatabaseViewer()\0"
    "updateRGBDCameraGroupBoxVisibility()\0"
    "testOdometry()\0testRGBDCamera()\0"
};

void rtabmap::PreferencesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PreferencesDialog *_t = static_cast<PreferencesDialog *>(_o);
        switch (_id) {
        case 0: _t->settingsChanged((*reinterpret_cast< PreferencesDialog::PANEL_FLAGS(*)>(_a[1]))); break;
        case 1: _t->settingsChanged((*reinterpret_cast< rtabmap::ParametersMap(*)>(_a[1]))); break;
        case 2: _t->setInputRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setDetectionRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setTimeLimit((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setSLAMMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->selectSourceImage((*reinterpret_cast< Src(*)>(_a[1]))); break;
        case 7: _t->selectSourceImage(); break;
        case 8: _t->selectSourceDatabase((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->selectSourceDatabase(); break;
        case 10: _t->selectSourceRGBD((*reinterpret_cast< Src(*)>(_a[1]))); break;
        case 11: _t->selectSourceRGBD(); break;
        case 12: _t->calibrate(); break;
        case 13: _t->closeDialog((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 14: _t->resetApply((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 15: _t->resetSettings((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->loadConfigFrom(); break;
        case 17: { bool _r = _t->saveConfigTo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->resetConfig(); break;
        case 19: _t->makeObsoleteGeneralPanel(); break;
        case 20: _t->makeObsoleteCloudRenderingPanel(); break;
        case 21: _t->makeObsoleteLoggingPanel(); break;
        case 22: _t->makeObsoleteSourcePanel(); break;
        case 23: _t->clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 24: _t->addParameter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->addParameter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->addParameter((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 27: _t->addParameter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->updatePredictionPlot(); break;
        case 29: _t->updateKpROI(); break;
        case 30: _t->changeWorkingDirectory(); break;
        case 31: _t->changeDictionaryPath(); break;
        case 32: _t->readSettingsEnd(); break;
        case 33: _t->setupTreeView(); break;
        case 34: _t->updateBasicParameter(); break;
        case 35: _t->openDatabaseViewer(); break;
        case 36: _t->updateRGBDCameraGroupBoxVisibility(); break;
        case 37: _t->testOdometry(); break;
        case 38: _t->testRGBDCamera(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData rtabmap::PreferencesDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rtabmap::PreferencesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_rtabmap__PreferencesDialog,
      qt_meta_data_rtabmap__PreferencesDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rtabmap::PreferencesDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rtabmap::PreferencesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rtabmap::PreferencesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__PreferencesDialog))
        return static_cast<void*>(const_cast< PreferencesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int rtabmap::PreferencesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void rtabmap::PreferencesDialog::settingsChanged(PreferencesDialog::PANEL_FLAGS _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void rtabmap::PreferencesDialog::settingsChanged(rtabmap::ParametersMap _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
