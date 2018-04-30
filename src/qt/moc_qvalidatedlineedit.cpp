/****************************************************************************
** Meta object code from reading C++ file 'qvalidatedlineedit.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/qvalidatedlineedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qvalidatedlineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QValidatedLineEdit_t {
    QByteArrayData data[11];
    char stringdata[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QValidatedLineEdit_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QValidatedLineEdit_t qt_meta_stringdata_QValidatedLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 19),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 19),
QT_MOC_LITERAL(4, 60, 17),
QT_MOC_LITERAL(5, 78, 8),
QT_MOC_LITERAL(6, 87, 5),
QT_MOC_LITERAL(7, 93, 10),
QT_MOC_LITERAL(8, 104, 7),
QT_MOC_LITERAL(9, 112, 9),
QT_MOC_LITERAL(10, 122, 13)
    },
    "QValidatedLineEdit\0validationDidChange\0"
    "\0QValidatedLineEdit*\0validatedLineEdit\0"
    "setValid\0valid\0setEnabled\0enabled\0"
    "markValid\0checkValidity\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QValidatedLineEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x0a,
       7,    1,   45,    2, 0x0a,
       9,    0,   48,    2, 0x08,
      10,    0,   49,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QValidatedLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QValidatedLineEdit *_t = static_cast<QValidatedLineEdit *>(_o);
        switch (_id) {
        case 0: _t->validationDidChange((*reinterpret_cast< QValidatedLineEdit*(*)>(_a[1]))); break;
        case 1: _t->setValid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->markValid(); break;
        case 4: _t->checkValidity(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QValidatedLineEdit* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QValidatedLineEdit::*_t)(QValidatedLineEdit * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QValidatedLineEdit::validationDidChange)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QValidatedLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_QValidatedLineEdit.data,
      qt_meta_data_QValidatedLineEdit,  qt_static_metacall, 0, 0}
};


const QMetaObject *QValidatedLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QValidatedLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QValidatedLineEdit.stringdata))
        return static_cast<void*>(const_cast< QValidatedLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int QValidatedLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QValidatedLineEdit::validationDidChange(QValidatedLineEdit * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
