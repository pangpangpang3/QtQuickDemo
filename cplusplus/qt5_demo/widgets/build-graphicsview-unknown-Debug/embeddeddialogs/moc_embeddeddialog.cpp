/****************************************************************************
** Meta object code from reading C++ file 'embeddeddialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../graphicsview/embeddeddialogs/embeddeddialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'embeddeddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EmbeddedDialog_t {
    QByteArrayData data[10];
    char stringdata[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EmbeddedDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EmbeddedDialog_t qt_meta_stringdata_EmbeddedDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "EmbeddedDialog"
QT_MOC_LITERAL(1, 15, 22), // "layoutDirectionChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "index"
QT_MOC_LITERAL(4, 45, 14), // "spacingChanged"
QT_MOC_LITERAL(5, 60, 7), // "spacing"
QT_MOC_LITERAL(6, 68, 11), // "fontChanged"
QT_MOC_LITERAL(7, 80, 4), // "font"
QT_MOC_LITERAL(8, 85, 12), // "styleChanged"
QT_MOC_LITERAL(9, 98, 9) // "styleName"

    },
    "EmbeddedDialog\0layoutDirectionChanged\0"
    "\0index\0spacingChanged\0spacing\0fontChanged\0"
    "font\0styleChanged\0styleName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmbeddedDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       6,    1,   40,    2, 0x08 /* Private */,
       8,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QFont,    7,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void EmbeddedDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EmbeddedDialog *_t = static_cast<EmbeddedDialog *>(_o);
        switch (_id) {
        case 0: _t->layoutDirectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->spacingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->fontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 3: _t->styleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject EmbeddedDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EmbeddedDialog.data,
      qt_meta_data_EmbeddedDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EmbeddedDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmbeddedDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EmbeddedDialog.stringdata))
        return static_cast<void*>(const_cast< EmbeddedDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int EmbeddedDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
