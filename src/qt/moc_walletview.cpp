/****************************************************************************
** Meta object code from reading C++ file 'walletview.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/walletview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletView_t {
    QByteArrayData data[39];
    char stringdata[504];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_WalletView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_WalletView_t qt_meta_stringdata_WalletView = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 21),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 7),
QT_MOC_LITERAL(4, 42, 5),
QT_MOC_LITERAL(5, 48, 5),
QT_MOC_LITERAL(6, 54, 23),
QT_MOC_LITERAL(7, 78, 6),
QT_MOC_LITERAL(8, 85, 19),
QT_MOC_LITERAL(9, 105, 4),
QT_MOC_LITERAL(10, 110, 4),
QT_MOC_LITERAL(11, 115, 7),
QT_MOC_LITERAL(12, 123, 6),
QT_MOC_LITERAL(13, 130, 4),
QT_MOC_LITERAL(14, 135, 7),
QT_MOC_LITERAL(15, 143, 5),
QT_MOC_LITERAL(16, 149, 16),
QT_MOC_LITERAL(17, 166, 15),
QT_MOC_LITERAL(18, 182, 18),
QT_MOC_LITERAL(19, 201, 20),
QT_MOC_LITERAL(20, 222, 17),
QT_MOC_LITERAL(21, 240, 4),
QT_MOC_LITERAL(22, 245, 18),
QT_MOC_LITERAL(23, 264, 20),
QT_MOC_LITERAL(24, 285, 21),
QT_MOC_LITERAL(25, 307, 6),
QT_MOC_LITERAL(26, 314, 5),
QT_MOC_LITERAL(27, 320, 13),
QT_MOC_LITERAL(28, 334, 12),
QT_MOC_LITERAL(29, 347, 16),
QT_MOC_LITERAL(30, 364, 12),
QT_MOC_LITERAL(31, 377, 14),
QT_MOC_LITERAL(32, 392, 10),
QT_MOC_LITERAL(33, 403, 20),
QT_MOC_LITERAL(34, 424, 22),
QT_MOC_LITERAL(35, 447, 22),
QT_MOC_LITERAL(36, 470, 12),
QT_MOC_LITERAL(37, 483, 9),
QT_MOC_LITERAL(38, 493, 9)
    },
    "WalletView\0showNormalIfMinimized\0\0"
    "message\0title\0style\0encryptionStatusChanged\0"
    "status\0incomingTransaction\0date\0unit\0"
    "CAmount\0amount\0type\0address\0label\0"
    "gotoOverviewPage\0gotoHistoryPage\0"
    "gotoMasternodePage\0gotoReceiveCoinsPage\0"
    "gotoSendCoinsPage\0addr\0gotoSignMessageTab\0"
    "gotoVerifyMessageTab\0processNewTransaction\0"
    "parent\0start\0encryptWallet\0backupWallet\0"
    "changePassphrase\0unlockWallet\0"
    "fAnonymizeOnly\0lockWallet\0"
    "usedSendingAddresses\0usedReceivingAddresses\0"
    "updateEncryptionStatus\0showProgress\0"
    "nProgress\0trxAmount\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x06,
       3,    3,  145,    2, 0x06,
       6,    1,  152,    2, 0x06,
       8,    6,  155,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      16,    0,  168,    2, 0x0a,
      17,    0,  169,    2, 0x0a,
      18,    0,  170,    2, 0x0a,
      19,    0,  171,    2, 0x0a,
      20,    1,  172,    2, 0x0a,
      20,    0,  175,    2, 0x2a,
      22,    1,  176,    2, 0x0a,
      22,    0,  179,    2, 0x2a,
      23,    1,  180,    2, 0x0a,
      23,    0,  183,    2, 0x2a,
      24,    3,  184,    2, 0x0a,
      27,    1,  191,    2, 0x0a,
      28,    0,  194,    2, 0x0a,
      29,    0,  195,    2, 0x0a,
      30,    1,  196,    2, 0x0a,
      30,    0,  199,    2, 0x2a,
      32,    0,  200,    2, 0x0a,
      33,    0,  201,    2, 0x0a,
      34,    0,  202,    2, 0x0a,
      35,    0,  203,    2, 0x0a,
      36,    2,  204,    2, 0x0a,
      38,    1,  209,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    4,    3,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, 0x80000000 | 11, QMetaType::QString, QMetaType::QString, QMetaType::QString,    9,   10,   12,   13,   14,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   25,   26,    2,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,   37,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void WalletView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletView *_t = static_cast<WalletView *>(_o);
        switch (_id) {
        case 0: _t->showNormalIfMinimized(); break;
        case 1: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 2: _t->encryptionStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->incomingTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 4: _t->gotoOverviewPage(); break;
        case 5: _t->gotoHistoryPage(); break;
        case 6: _t->gotoMasternodePage(); break;
        case 7: _t->gotoReceiveCoinsPage(); break;
        case 8: _t->gotoSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->gotoSendCoinsPage(); break;
        case 10: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->gotoSignMessageTab(); break;
        case 12: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->gotoVerifyMessageTab(); break;
        case 14: _t->processNewTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->backupWallet(); break;
        case 17: _t->changePassphrase(); break;
        case 18: _t->unlockWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->unlockWallet(); break;
        case 20: _t->lockWallet(); break;
        case 21: _t->usedSendingAddresses(); break;
        case 22: _t->usedReceivingAddresses(); break;
        case 23: _t->updateEncryptionStatus(); break;
        case 24: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->trxAmount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WalletView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletView::showNormalIfMinimized)) {
                *result = 0;
            }
        }
        {
            typedef void (WalletView::*_t)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletView::message)) {
                *result = 1;
            }
        }
        {
            typedef void (WalletView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletView::encryptionStatusChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (WalletView::*_t)(const QString & , int , const CAmount & , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletView::incomingTransaction)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject WalletView::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_WalletView.data,
      qt_meta_data_WalletView,  qt_static_metacall, 0, 0}
};


const QMetaObject *WalletView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WalletView.stringdata))
        return static_cast<void*>(const_cast< WalletView*>(this));
    return QStackedWidget::qt_metacast(_clname);
}

int WalletView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void WalletView::showNormalIfMinimized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void WalletView::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletView::encryptionStatusChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WalletView::incomingTransaction(const QString & _t1, int _t2, const CAmount & _t3, const QString & _t4, const QString & _t5, const QString & _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
