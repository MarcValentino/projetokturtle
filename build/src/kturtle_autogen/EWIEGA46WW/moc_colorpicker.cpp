/****************************************************************************
** Meta object code from reading C++ file 'colorpicker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/colorpicker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorpicker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColorPatch_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorPatch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorPatch_t qt_meta_stringdata_ColorPatch = {
    {
QT_MOC_LITERAL(0, 0, 10) // "ColorPatch"

    },
    "ColorPatch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorPatch[] = {

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

void ColorPatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ColorPatch::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_ColorPatch.data,
      qt_meta_data_ColorPatch,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ColorPatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorPatch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorPatch.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ColorPatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ColorPicker_t {
    QByteArrayData data[12];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorPicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorPicker_t qt_meta_stringdata_ColorPicker = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ColorPicker"
QT_MOC_LITERAL(1, 12, 9), // "pasteText"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "updateResult"
QT_MOC_LITERAL(4, 36, 1), // "r"
QT_MOC_LITERAL(5, 38, 1), // "g"
QT_MOC_LITERAL(6, 40, 1), // "b"
QT_MOC_LITERAL(7, 42, 10), // "redChanged"
QT_MOC_LITERAL(8, 53, 12), // "greenChanged"
QT_MOC_LITERAL(9, 66, 11), // "blueChanged"
QT_MOC_LITERAL(10, 78, 9), // "copyProxy"
QT_MOC_LITERAL(11, 88, 10) // "pasteProxy"

    },
    "ColorPicker\0pasteText\0\0updateResult\0"
    "r\0g\0b\0redChanged\0greenChanged\0blueChanged\0"
    "copyProxy\0pasteProxy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorPicker[] = {

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
       3,    3,   52,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
       9,    1,   65,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ColorPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColorPicker *_t = static_cast<ColorPicker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pasteText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->redChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->greenChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->blueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->copyProxy(); break;
        case 6: _t->pasteProxy(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ColorPicker::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorPicker::pasteText)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ColorPicker::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ColorPicker.data,
      qt_meta_data_ColorPicker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ColorPicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorPicker.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ColorPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ColorPicker::pasteText(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
