/****************************************************************************
** Meta object code from reading C++ file 'directiondialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/directiondialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'directiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DirectionCanvas_t {
    QByteArrayData data[7];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DirectionCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DirectionCanvas_t qt_meta_stringdata_DirectionCanvas = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DirectionCanvas"
QT_MOC_LITERAL(1, 16, 13), // "degreeChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "deg"
QT_MOC_LITERAL(4, 35, 21), // "previousDegreeChanged"
QT_MOC_LITERAL(5, 57, 16), // "updateDirections"
QT_MOC_LITERAL(6, 74, 11) // "previousDeg"

    },
    "DirectionCanvas\0degreeChanged\0\0deg\0"
    "previousDegreeChanged\0updateDirections\0"
    "previousDeg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DirectionCanvas[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    6,    3,

       0        // eod
};

void DirectionCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DirectionCanvas *_t = static_cast<DirectionCanvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->degreeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->previousDegreeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->updateDirections((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DirectionCanvas::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DirectionCanvas::degreeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DirectionCanvas::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DirectionCanvas::previousDegreeChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DirectionCanvas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DirectionCanvas.data,
      qt_meta_data_DirectionCanvas,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DirectionCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DirectionCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DirectionCanvas.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DirectionCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DirectionCanvas::degreeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DirectionCanvas::previousDegreeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_DirectionDialog_t {
    QByteArrayData data[12];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DirectionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DirectionDialog_t qt_meta_stringdata_DirectionDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DirectionDialog"
QT_MOC_LITERAL(1, 16, 9), // "pasteText"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 16), // "directionChanged"
QT_MOC_LITERAL(4, 44, 5), // "value"
QT_MOC_LITERAL(5, 50, 13), // "changeCommand"
QT_MOC_LITERAL(6, 64, 7), // "command"
QT_MOC_LITERAL(7, 72, 13), // "updateDegrees"
QT_MOC_LITERAL(8, 86, 3), // "deg"
QT_MOC_LITERAL(9, 90, 21), // "updatePreviousDegrees"
QT_MOC_LITERAL(10, 112, 9), // "copyProxy"
QT_MOC_LITERAL(11, 122, 10) // "pasteProxy"

    },
    "DirectionDialog\0pasteText\0\0directionChanged\0"
    "value\0changeCommand\0command\0updateDegrees\0"
    "deg\0updatePreviousDegrees\0copyProxy\0"
    "pasteProxy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DirectionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   52,    2, 0x08 /* Private */,
       5,    1,   55,    2, 0x08 /* Private */,
       7,    1,   58,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DirectionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DirectionDialog *_t = static_cast<DirectionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pasteText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->directionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changeCommand((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateDegrees((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->updatePreviousDegrees((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->copyProxy(); break;
        case 6: _t->pasteProxy(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DirectionDialog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DirectionDialog::pasteText)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DirectionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DirectionDialog.data,
      qt_meta_data_DirectionDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DirectionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DirectionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DirectionDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DirectionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DirectionDialog::pasteText(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
