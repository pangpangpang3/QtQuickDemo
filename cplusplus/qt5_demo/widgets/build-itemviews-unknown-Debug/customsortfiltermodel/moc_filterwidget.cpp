/****************************************************************************
** Meta object code from reading C++ file 'filterwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemviews/customsortfiltermodel/filterwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filterwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FilterWidget_t {
    QByteArrayData data[7];
    char stringdata[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FilterWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FilterWidget_t qt_meta_stringdata_FilterWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FilterWidget"
QT_MOC_LITERAL(1, 13, 13), // "filterChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "caseSensitivity"
QT_MOC_LITERAL(4, 44, 19), // "Qt::CaseSensitivity"
QT_MOC_LITERAL(5, 64, 13), // "patternSyntax"
QT_MOC_LITERAL(6, 78, 22) // "QRegExp::PatternSyntax"

    },
    "FilterWidget\0filterChanged\0\0caseSensitivity\0"
    "Qt::CaseSensitivity\0patternSyntax\0"
    "QRegExp::PatternSyntax"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FilterWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x0009510b,
       5, 0x80000000 | 6, 0x0009510b,

       0        // eod
};

void FilterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FilterWidget *_t = static_cast<FilterWidget *>(_o);
        switch (_id) {
        case 0: _t->filterChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FilterWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FilterWidget::filterChanged)) {
                *result = 0;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRegExp::PatternSyntax >(); break;
        }
    }

}

const QMetaObject FilterWidget::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_FilterWidget.data,
      qt_meta_data_FilterWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FilterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FilterWidget.stringdata))
        return static_cast<void*>(const_cast< FilterWidget*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int FilterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::CaseSensitivity*>(_v) = caseSensitivity(); break;
        case 1: *reinterpret_cast< QRegExp::PatternSyntax*>(_v) = patternSyntax(); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCaseSensitivity(*reinterpret_cast< Qt::CaseSensitivity*>(_v)); break;
        case 1: setPatternSyntax(*reinterpret_cast< QRegExp::PatternSyntax*>(_v)); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FilterWidget::filterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
