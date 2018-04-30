/****************************************************************************
** Meta object code from reading C++ file 'paymentservertests.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/test/paymentservertests.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paymentservertests.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PaymentServerTests_t {
    QByteArrayData data[3];
    char stringdata[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PaymentServerTests_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PaymentServerTests_t qt_meta_stringdata_PaymentServerTests = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 18),
QT_MOC_LITERAL(2, 38, 0)
    },
    "PaymentServerTests\0paymentServerTests\0"
    "\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaymentServerTests[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void PaymentServerTests::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PaymentServerTests *_t = static_cast<PaymentServerTests *>(_o);
        switch (_id) {
        case 0: _t->paymentServerTests(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PaymentServerTests::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PaymentServerTests.data,
      qt_meta_data_PaymentServerTests,  qt_static_metacall, 0, 0}
};


const QMetaObject *PaymentServerTests::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaymentServerTests::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PaymentServerTests.stringdata))
        return static_cast<void*>(const_cast< PaymentServerTests*>(this));
    return QObject::qt_metacast(_clname);
}

int PaymentServerTests::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_RecipientCatcher_t {
    QByteArrayData data[5];
    char stringdata[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_RecipientCatcher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_RecipientCatcher_t qt_meta_stringdata_RecipientCatcher = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 12),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 18),
QT_MOC_LITERAL(4, 50, 1)
    },
    "RecipientCatcher\0getRecipient\0\0"
    "SendCoinsRecipient\0r\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RecipientCatcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void RecipientCatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RecipientCatcher *_t = static_cast<RecipientCatcher *>(_o);
        switch (_id) {
        case 0: _t->getRecipient((*reinterpret_cast< SendCoinsRecipient(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject RecipientCatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RecipientCatcher.data,
      qt_meta_data_RecipientCatcher,  qt_static_metacall, 0, 0}
};


const QMetaObject *RecipientCatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RecipientCatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RecipientCatcher.stringdata))
        return static_cast<void*>(const_cast< RecipientCatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int RecipientCatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
