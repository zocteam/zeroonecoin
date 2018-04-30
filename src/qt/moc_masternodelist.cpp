/****************************************************************************
** Meta object code from reading C++ file 'masternodelist.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/masternodelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masternodelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MasternodeList_t {
    QByteArrayData data[18];
    char stringdata[332];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MasternodeList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MasternodeList_t qt_meta_stringdata_MasternodeList = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 22),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 8),
QT_MOC_LITERAL(4, 48, 7),
QT_MOC_LITERAL(5, 56, 18),
QT_MOC_LITERAL(6, 75, 6),
QT_MOC_LITERAL(7, 82, 16),
QT_MOC_LITERAL(8, 99, 6),
QT_MOC_LITERAL(9, 106, 14),
QT_MOC_LITERAL(10, 121, 15),
QT_MOC_LITERAL(11, 137, 29),
QT_MOC_LITERAL(12, 167, 11),
QT_MOC_LITERAL(13, 179, 22),
QT_MOC_LITERAL(14, 202, 25),
QT_MOC_LITERAL(15, 228, 29),
QT_MOC_LITERAL(16, 258, 48),
QT_MOC_LITERAL(17, 307, 23)
    },
    "MasternodeList\0updateMyMasternodeInfo\0"
    "\0strAlias\0strAddr\0masternode_info_t&\0"
    "infoMn\0updateMyNodeList\0fForce\0"
    "updateNodeList\0showContextMenu\0"
    "on_filterLineEdit_textChanged\0strFilterIn\0"
    "on_startButton_clicked\0on_startAllButton_clicked\0"
    "on_startMissingButton_clicked\0"
    "on_tableWidgetMyMasternodes_itemSelectionChanged\0"
    "on_UpdateButton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasternodeList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   69,    2, 0x0a,
       7,    1,   76,    2, 0x0a,
       7,    0,   79,    2, 0x2a,
       9,    0,   80,    2, 0x0a,
      10,    1,   81,    2, 0x08,
      11,    1,   84,    2, 0x08,
      13,    0,   87,    2, 0x08,
      14,    0,   88,    2, 0x08,
      15,    0,   89,    2, 0x08,
      16,    0,   90,    2, 0x08,
      17,    0,   91,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MasternodeList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MasternodeList *_t = static_cast<MasternodeList *>(_o);
        switch (_id) {
        case 0: _t->updateMyMasternodeInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< masternode_info_t(*)>(_a[3]))); break;
        case 1: _t->updateMyNodeList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateMyNodeList(); break;
        case 3: _t->updateNodeList(); break;
        case 4: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->on_filterLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_startButton_clicked(); break;
        case 7: _t->on_startAllButton_clicked(); break;
        case 8: _t->on_startMissingButton_clicked(); break;
        case 9: _t->on_tableWidgetMyMasternodes_itemSelectionChanged(); break;
        case 10: _t->on_UpdateButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MasternodeList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MasternodeList.data,
      qt_meta_data_MasternodeList,  qt_static_metacall, 0, 0}
};


const QMetaObject *MasternodeList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasternodeList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MasternodeList.stringdata))
        return static_cast<void*>(const_cast< MasternodeList*>(this));
    return QWidget::qt_metacast(_clname);
}

int MasternodeList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
