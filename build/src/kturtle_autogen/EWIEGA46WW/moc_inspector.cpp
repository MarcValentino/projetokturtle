/****************************************************************************
** Meta object code from reading C++ file 'inspector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/inspector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Inspector_t {
    QByteArrayData data[16];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Inspector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Inspector_t qt_meta_stringdata_Inspector = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Inspector"
QT_MOC_LITERAL(1, 10, 14), // "updateVariable"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "name"
QT_MOC_LITERAL(4, 31, 5), // "Value"
QT_MOC_LITERAL(5, 37, 5), // "value"
QT_MOC_LITERAL(6, 43, 14), // "updateFunction"
QT_MOC_LITERAL(7, 58, 10), // "parameters"
QT_MOC_LITERAL(8, 69, 10), // "updateTree"
QT_MOC_LITERAL(9, 80, 9), // "TreeNode*"
QT_MOC_LITERAL(10, 90, 8), // "rootNode"
QT_MOC_LITERAL(11, 99, 12), // "markVariable"
QT_MOC_LITERAL(12, 112, 12), // "markFunction"
QT_MOC_LITERAL(13, 125, 12), // "markTreeNode"
QT_MOC_LITERAL(14, 138, 13), // "clearAllMarks"
QT_MOC_LITERAL(15, 152, 7) // "disable"

    },
    "Inspector\0updateVariable\0\0name\0Value\0"
    "value\0updateFunction\0parameters\0"
    "updateTree\0TreeNode*\0rootNode\0"
    "markVariable\0markFunction\0markTreeNode\0"
    "clearAllMarks\0disable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Inspector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x0a /* Public */,
       6,    2,   59,    2, 0x0a /* Public */,
       8,    1,   64,    2, 0x0a /* Public */,
      11,    1,   67,    2, 0x0a /* Public */,
      12,    1,   70,    2, 0x0a /* Public */,
      13,    1,   73,    2, 0x0a /* Public */,
      14,    0,   76,    2, 0x0a /* Public */,
      15,    0,   77,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Inspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Inspector *_t = static_cast<Inspector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateVariable((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Value(*)>(_a[2]))); break;
        case 1: _t->updateFunction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 2: _t->updateTree((*reinterpret_cast< TreeNode*(*)>(_a[1]))); break;
        case 3: _t->markVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->markFunction((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->markTreeNode((*reinterpret_cast< TreeNode*(*)>(_a[1]))); break;
        case 6: _t->clearAllMarks(); break;
        case 7: _t->disable(); break;
        default: ;
        }
    }
}

const QMetaObject Inspector::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Inspector.data,
      qt_meta_data_Inspector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Inspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Inspector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Inspector.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int Inspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
