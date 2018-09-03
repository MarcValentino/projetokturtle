/****************************************************************************
** Meta object code from reading C++ file 'interpreter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/interpreter/interpreter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interpreter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Interpreter_t {
    QByteArrayData data[16];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Interpreter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Interpreter_t qt_meta_stringdata_Interpreter = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Interpreter"
QT_MOC_LITERAL(1, 12, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 28, 27), // "org.kde.kturtle.Interpreter"
QT_MOC_LITERAL(3, 56, 7), // "parsing"
QT_MOC_LITERAL(4, 64, 0), // ""
QT_MOC_LITERAL(5, 65, 9), // "executing"
QT_MOC_LITERAL(6, 75, 8), // "finished"
QT_MOC_LITERAL(7, 84, 11), // "treeUpdated"
QT_MOC_LITERAL(8, 96, 9), // "TreeNode*"
QT_MOC_LITERAL(9, 106, 8), // "rootNode"
QT_MOC_LITERAL(10, 115, 9), // "interpret"
QT_MOC_LITERAL(11, 125, 5), // "state"
QT_MOC_LITERAL(12, 131, 10), // "initialize"
QT_MOC_LITERAL(13, 142, 11), // "inputString"
QT_MOC_LITERAL(14, 154, 17), // "encounteredErrors"
QT_MOC_LITERAL(15, 172, 15) // "getErrorStrings"

    },
    "Interpreter\0D-Bus Interface\0"
    "org.kde.kturtle.Interpreter\0parsing\0"
    "\0executing\0finished\0treeUpdated\0"
    "TreeNode*\0rootNode\0interpret\0state\0"
    "initialize\0inputString\0encounteredErrors\0"
    "getErrorStrings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Interpreter[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       9,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   61,    4, 0x06 /* Public */,
       5,    0,   62,    4, 0x06 /* Public */,
       6,    0,   63,    4, 0x06 /* Public */,
       7,    1,   64,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   67,    4, 0x0a /* Public */,
      11,    0,   68,    4, 0x0a /* Public */,
      12,    1,   69,    4, 0x0a /* Public */,
      14,    0,   72,    4, 0x0a /* Public */,
      15,    0,   73,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Bool,
    QMetaType::QStringList,

       0        // eod
};

void Interpreter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Interpreter *_t = static_cast<Interpreter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parsing(); break;
        case 1: _t->executing(); break;
        case 2: _t->finished(); break;
        case 3: _t->treeUpdated((*reinterpret_cast< TreeNode*(*)>(_a[1]))); break;
        case 4: _t->interpret(); break;
        case 5: { int _r = _t->state();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->initialize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: { bool _r = _t->encounteredErrors();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { QStringList _r = _t->getErrorStrings();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Interpreter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Interpreter::parsing)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Interpreter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Interpreter::executing)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Interpreter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Interpreter::finished)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Interpreter::*_t)(TreeNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Interpreter::treeUpdated)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Interpreter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Interpreter.data,
      qt_meta_data_Interpreter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Interpreter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Interpreter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Interpreter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Interpreter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Interpreter::parsing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Interpreter::executing()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Interpreter::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Interpreter::treeUpdated(TreeNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
