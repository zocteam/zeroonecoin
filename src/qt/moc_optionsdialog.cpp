/****************************************************************************
** Meta object code from reading C++ file 'optionsdialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/optionsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ProxyAddressValidator_t {
    QByteArrayData data[1];
    char stringdata[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ProxyAddressValidator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ProxyAddressValidator_t qt_meta_stringdata_ProxyAddressValidator = {
    {
QT_MOC_LITERAL(0, 0, 21)
    },
    "ProxyAddressValidator\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProxyAddressValidator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ProxyAddressValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ProxyAddressValidator::staticMetaObject = {
    { &QValidator::staticMetaObject, qt_meta_stringdata_ProxyAddressValidator.data,
      qt_meta_data_ProxyAddressValidator,  qt_static_metacall, 0, 0}
};


const QMetaObject *ProxyAddressValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProxyAddressValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProxyAddressValidator.stringdata))
        return static_cast<void*>(const_cast< ProxyAddressValidator*>(this));
    return QValidator::qt_metacast(_clname);
}

int ProxyAddressValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_OptionsDialog_t {
    QByteArrayData data[16];
    char stringdata[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_OptionsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_OptionsDialog_t qt_meta_stringdata_OptionsDialog = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 13),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 19),
QT_MOC_LITERAL(4, 49, 10),
QT_MOC_LITERAL(5, 60, 10),
QT_MOC_LITERAL(6, 71, 16),
QT_MOC_LITERAL(7, 88, 6),
QT_MOC_LITERAL(8, 95, 22),
QT_MOC_LITERAL(9, 118, 19),
QT_MOC_LITERAL(10, 138, 23),
QT_MOC_LITERAL(11, 162, 18),
QT_MOC_LITERAL(12, 181, 11),
QT_MOC_LITERAL(13, 193, 16),
QT_MOC_LITERAL(14, 210, 26),
QT_MOC_LITERAL(15, 237, 22)
    },
    "OptionsDialog\0proxyIpChecks\0\0"
    "QValidatedLineEdit*\0pUiProxyIp\0"
    "nProxyPort\0setOkButtonState\0fState\0"
    "on_resetButton_clicked\0on_okButton_clicked\0"
    "on_cancelButton_clicked\0showRestartWarning\0"
    "fPersistent\0clearStatusLabel\0"
    "updateProxyValidationState\0"
    "updateDefaultProxyNets\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OptionsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    1,   69,    2, 0x08,
       8,    0,   72,    2, 0x08,
       9,    0,   73,    2, 0x08,
      10,    0,   74,    2, 0x08,
      11,    1,   75,    2, 0x08,
      11,    0,   78,    2, 0x28,
      13,    0,   79,    2, 0x08,
      14,    0,   80,    2, 0x08,
      15,    0,   81,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OptionsDialog *_t = static_cast<OptionsDialog *>(_o);
        switch (_id) {
        case 0: _t->proxyIpChecks((*reinterpret_cast< QValidatedLineEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->setOkButtonState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_resetButton_clicked(); break;
        case 3: _t->on_okButton_clicked(); break;
        case 4: _t->on_cancelButton_clicked(); break;
        case 5: _t->showRestartWarning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showRestartWarning(); break;
        case 7: _t->clearStatusLabel(); break;
        case 8: _t->updateProxyValidationState(); break;
        case 9: _t->updateDefaultProxyNets(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OptionsDialog::*_t)(QValidatedLineEdit * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionsDialog::proxyIpChecks)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OptionsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OptionsDialog.data,
      qt_meta_data_OptionsDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *OptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsDialog.stringdata))
        return static_cast<void*>(const_cast< OptionsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int OptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void OptionsDialog::proxyIpChecks(QValidatedLineEdit * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
