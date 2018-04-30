/****************************************************************************
** Meta object code from reading C++ file 'overviewpage.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/overviewpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overviewpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OverviewPage_t {
    QByteArrayData data[27];
    char stringdata[426];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_OverviewPage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_OverviewPage_t qt_meta_stringdata_OverviewPage = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 18),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 5),
QT_MOC_LITERAL(4, 39, 17),
QT_MOC_LITERAL(5, 57, 10),
QT_MOC_LITERAL(6, 68, 7),
QT_MOC_LITERAL(7, 76, 7),
QT_MOC_LITERAL(8, 84, 18),
QT_MOC_LITERAL(9, 103, 15),
QT_MOC_LITERAL(10, 119, 17),
QT_MOC_LITERAL(11, 137, 16),
QT_MOC_LITERAL(12, 154, 18),
QT_MOC_LITERAL(13, 173, 20),
QT_MOC_LITERAL(14, 194, 17),
QT_MOC_LITERAL(15, 212, 15),
QT_MOC_LITERAL(16, 228, 16),
QT_MOC_LITERAL(17, 245, 15),
QT_MOC_LITERAL(18, 261, 17),
QT_MOC_LITERAL(19, 279, 25),
QT_MOC_LITERAL(20, 305, 18),
QT_MOC_LITERAL(21, 324, 17),
QT_MOC_LITERAL(22, 342, 24),
QT_MOC_LITERAL(23, 367, 12),
QT_MOC_LITERAL(24, 380, 8),
QT_MOC_LITERAL(25, 389, 21),
QT_MOC_LITERAL(26, 411, 13)
    },
    "OverviewPage\0transactionClicked\0\0index\0"
    "privateSendStatus\0setBalance\0CAmount\0"
    "balance\0unconfirmedBalance\0immatureBalance\0"
    "anonymizedBalance\0watchOnlyBalance\0"
    "watchUnconfBalance\0watchImmatureBalance\0"
    "togglePrivateSend\0privateSendAuto\0"
    "privateSendReset\0privateSendInfo\0"
    "updateDisplayUnit\0updatePrivateSendProgress\0"
    "updateAdvancedPSUI\0fShowAdvancedPSUI\0"
    "handleTransactionClicked\0updateAlerts\0"
    "warnings\0updateWatchOnlyLabels\0"
    "showWatchOnly\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverviewPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   82,    2, 0x0a,
       5,    7,   83,    2, 0x0a,
      14,    0,   98,    2, 0x08,
      15,    0,   99,    2, 0x08,
      16,    0,  100,    2, 0x08,
      17,    0,  101,    2, 0x08,
      18,    0,  102,    2, 0x08,
      19,    0,  103,    2, 0x08,
      20,    1,  104,    2, 0x08,
      22,    1,  107,    2, 0x08,
      23,    1,  110,    2, 0x08,
      25,    1,  113,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6,    7,    8,    9,   10,   11,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::Bool,   26,

       0        // eod
};

void OverviewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OverviewPage *_t = static_cast<OverviewPage *>(_o);
        switch (_id) {
        case 0: _t->transactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->privateSendStatus(); break;
        case 2: _t->setBalance((*reinterpret_cast< const CAmount(*)>(_a[1])),(*reinterpret_cast< const CAmount(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const CAmount(*)>(_a[4])),(*reinterpret_cast< const CAmount(*)>(_a[5])),(*reinterpret_cast< const CAmount(*)>(_a[6])),(*reinterpret_cast< const CAmount(*)>(_a[7]))); break;
        case 3: _t->togglePrivateSend(); break;
        case 4: _t->privateSendAuto(); break;
        case 5: _t->privateSendReset(); break;
        case 6: _t->privateSendInfo(); break;
        case 7: _t->updateDisplayUnit(); break;
        case 8: _t->updatePrivateSendProgress(); break;
        case 9: _t->updateAdvancedPSUI((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->handleTransactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->updateAlerts((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->updateWatchOnlyLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OverviewPage::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewPage::transactionClicked)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject OverviewPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OverviewPage.data,
      qt_meta_data_OverviewPage,  qt_static_metacall, 0, 0}
};


const QMetaObject *OverviewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverviewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OverviewPage.stringdata))
        return static_cast<void*>(const_cast< OverviewPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int OverviewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void OverviewPage::transactionClicked(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
