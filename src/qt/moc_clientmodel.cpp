/****************************************************************************
** Meta object code from reading C++ file 'clientmodel.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/clientmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClientModel_t {
    QByteArrayData data[32];
    char stringdata[427];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ClientModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ClientModel_t qt_meta_stringdata_ClientModel = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 21),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 5),
QT_MOC_LITERAL(4, 41, 21),
QT_MOC_LITERAL(5, 63, 14),
QT_MOC_LITERAL(6, 78, 16),
QT_MOC_LITERAL(7, 95, 9),
QT_MOC_LITERAL(8, 105, 21),
QT_MOC_LITERAL(9, 127, 33),
QT_MOC_LITERAL(10, 161, 13),
QT_MOC_LITERAL(11, 175, 18),
QT_MOC_LITERAL(12, 194, 6),
QT_MOC_LITERAL(13, 201, 18),
QT_MOC_LITERAL(14, 220, 13),
QT_MOC_LITERAL(15, 234, 8),
QT_MOC_LITERAL(16, 243, 12),
QT_MOC_LITERAL(17, 256, 12),
QT_MOC_LITERAL(18, 269, 13),
QT_MOC_LITERAL(19, 283, 7),
QT_MOC_LITERAL(20, 291, 5),
QT_MOC_LITERAL(21, 297, 5),
QT_MOC_LITERAL(22, 303, 12),
QT_MOC_LITERAL(23, 316, 9),
QT_MOC_LITERAL(24, 326, 11),
QT_MOC_LITERAL(25, 338, 13),
QT_MOC_LITERAL(26, 352, 20),
QT_MOC_LITERAL(27, 373, 14),
QT_MOC_LITERAL(28, 388, 11),
QT_MOC_LITERAL(29, 400, 4),
QT_MOC_LITERAL(30, 405, 6),
QT_MOC_LITERAL(31, 412, 13)
    },
    "ClientModel\0numConnectionsChanged\0\0"
    "count\0strMasternodesChanged\0strMasternodes\0"
    "numBlocksChanged\0blockDate\0"
    "nVerificationProgress\0"
    "additionalDataSyncProgressChanged\0"
    "nSyncProgress\0mempoolSizeChanged\0"
    "size_t\0mempoolSizeInBytes\0alertsChanged\0"
    "warnings\0bytesChanged\0totalBytesIn\0"
    "totalBytesOut\0message\0title\0style\0"
    "showProgress\0nProgress\0updateTimer\0"
    "updateMnTimer\0updateNumConnections\0"
    "numConnections\0updateAlert\0hash\0status\0"
    "updateBanlist\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06,
       4,    1,   87,    2, 0x06,
       6,    3,   90,    2, 0x06,
       9,    1,   97,    2, 0x06,
      11,    2,  100,    2, 0x06,
      14,    1,  105,    2, 0x06,
      16,    2,  108,    2, 0x06,
      19,    3,  113,    2, 0x06,
      22,    2,  120,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      24,    0,  125,    2, 0x0a,
      25,    0,  126,    2, 0x0a,
      26,    1,  127,    2, 0x0a,
      28,    2,  130,    2, 0x0a,
      31,    0,  135,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QDateTime, QMetaType::Double,    3,    7,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Long, 0x80000000 | 12,    3,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   20,   19,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   20,   23,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   29,   30,
    QMetaType::Void,

       0        // eod
};

void ClientModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientModel *_t = static_cast<ClientModel *>(_o);
        switch (_id) {
        case 0: _t->numConnectionsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->strMasternodesChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->numBlocksChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 3: _t->additionalDataSyncProgressChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->mempoolSizeChanged((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2]))); break;
        case 5: _t->alertsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->bytesChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 7: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 8: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->updateTimer(); break;
        case 10: _t->updateMnTimer(); break;
        case 11: _t->updateNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->updateAlert((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->updateBanlist(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ClientModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::numConnectionsChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ClientModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::strMasternodesChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (ClientModel::*_t)(int , const QDateTime & , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::numBlocksChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (ClientModel::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::additionalDataSyncProgressChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (ClientModel::*_t)(long , size_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::mempoolSizeChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (ClientModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::alertsChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (ClientModel::*_t)(quint64 , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::bytesChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (ClientModel::*_t)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::message)) {
                *result = 7;
            }
        }
        {
            typedef void (ClientModel::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::showProgress)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject ClientModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClientModel.data,
      qt_meta_data_ClientModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *ClientModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClientModel.stringdata))
        return static_cast<void*>(const_cast< ClientModel*>(this));
    return QObject::qt_metacast(_clname);
}

int ClientModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ClientModel::numConnectionsChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientModel::strMasternodesChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClientModel::numBlocksChanged(int _t1, const QDateTime & _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClientModel::additionalDataSyncProgressChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ClientModel::mempoolSizeChanged(long _t1, size_t _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ClientModel::alertsChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ClientModel::bytesChanged(quint64 _t1, quint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ClientModel::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ClientModel::showProgress(const QString & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
