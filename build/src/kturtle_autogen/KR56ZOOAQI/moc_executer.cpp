/****************************************************************************
** Meta object code from reading C++ file 'executer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/interpreter/executer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'executer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Executer_t {
    QByteArrayData data[41];
    char stringdata0[351];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Executer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Executer_t qt_meta_stringdata_Executer = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Executer"
QT_MOC_LITERAL(1, 9, 18), // "currentlyExecuting"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "TreeNode*"
QT_MOC_LITERAL(4, 39, 4), // "node"
QT_MOC_LITERAL(5, 44, 20), // "variableTableUpdated"
QT_MOC_LITERAL(6, 65, 4), // "name"
QT_MOC_LITERAL(7, 70, 5), // "Value"
QT_MOC_LITERAL(8, 76, 5), // "value"
QT_MOC_LITERAL(9, 82, 20), // "functionTableUpdated"
QT_MOC_LITERAL(10, 103, 10), // "parameters"
QT_MOC_LITERAL(11, 114, 4), // "getX"
QT_MOC_LITERAL(12, 119, 7), // "double&"
QT_MOC_LITERAL(13, 127, 4), // "getY"
QT_MOC_LITERAL(14, 132, 3), // "ask"
QT_MOC_LITERAL(15, 136, 8), // "QString&"
QT_MOC_LITERAL(16, 145, 7), // "message"
QT_MOC_LITERAL(17, 153, 4), // "text"
QT_MOC_LITERAL(18, 158, 12), // "getDirection"
QT_MOC_LITERAL(19, 171, 5), // "reset"
QT_MOC_LITERAL(20, 177, 5), // "clear"
QT_MOC_LITERAL(21, 183, 6), // "center"
QT_MOC_LITERAL(22, 190, 2), // "go"
QT_MOC_LITERAL(23, 193, 3), // "goX"
QT_MOC_LITERAL(24, 197, 3), // "goY"
QT_MOC_LITERAL(25, 201, 7), // "forward"
QT_MOC_LITERAL(26, 209, 8), // "backward"
QT_MOC_LITERAL(27, 218, 9), // "direction"
QT_MOC_LITERAL(28, 228, 8), // "turnLeft"
QT_MOC_LITERAL(29, 237, 9), // "turnRight"
QT_MOC_LITERAL(30, 247, 8), // "penWidth"
QT_MOC_LITERAL(31, 256, 5), // "penUp"
QT_MOC_LITERAL(32, 262, 7), // "penDown"
QT_MOC_LITERAL(33, 270, 8), // "penColor"
QT_MOC_LITERAL(34, 279, 11), // "canvasColor"
QT_MOC_LITERAL(35, 291, 10), // "canvasSize"
QT_MOC_LITERAL(36, 302, 10), // "spriteShow"
QT_MOC_LITERAL(37, 313, 10), // "spriteHide"
QT_MOC_LITERAL(38, 324, 5), // "print"
QT_MOC_LITERAL(39, 330, 8), // "fontSize"
QT_MOC_LITERAL(40, 339, 11) // "stopWaiting"

    },
    "Executer\0currentlyExecuting\0\0TreeNode*\0"
    "node\0variableTableUpdated\0name\0Value\0"
    "value\0functionTableUpdated\0parameters\0"
    "getX\0double&\0getY\0ask\0QString&\0message\0"
    "text\0getDirection\0reset\0clear\0center\0"
    "go\0goX\0goY\0forward\0backward\0direction\0"
    "turnLeft\0turnRight\0penWidth\0penUp\0"
    "penDown\0penColor\0canvasColor\0canvasSize\0"
    "spriteShow\0spriteHide\0print\0fontSize\0"
    "stopWaiting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Executer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      29,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  164,    2, 0x06 /* Public */,
       5,    2,  167,    2, 0x06 /* Public */,
       9,    2,  172,    2, 0x06 /* Public */,
      11,    1,  177,    2, 0x06 /* Public */,
      13,    1,  180,    2, 0x06 /* Public */,
      14,    1,  183,    2, 0x06 /* Public */,
      16,    1,  186,    2, 0x06 /* Public */,
      18,    1,  189,    2, 0x06 /* Public */,
      19,    0,  192,    2, 0x06 /* Public */,
      20,    0,  193,    2, 0x06 /* Public */,
      21,    0,  194,    2, 0x06 /* Public */,
      22,    2,  195,    2, 0x06 /* Public */,
      23,    1,  200,    2, 0x06 /* Public */,
      24,    1,  203,    2, 0x06 /* Public */,
      25,    1,  206,    2, 0x06 /* Public */,
      26,    1,  209,    2, 0x06 /* Public */,
      27,    1,  212,    2, 0x06 /* Public */,
      28,    1,  215,    2, 0x06 /* Public */,
      29,    1,  218,    2, 0x06 /* Public */,
      30,    1,  221,    2, 0x06 /* Public */,
      31,    0,  224,    2, 0x06 /* Public */,
      32,    0,  225,    2, 0x06 /* Public */,
      33,    3,  226,    2, 0x06 /* Public */,
      34,    3,  233,    2, 0x06 /* Public */,
      35,    2,  240,    2, 0x06 /* Public */,
      36,    0,  245,    2, 0x06 /* Public */,
      37,    0,  246,    2, 0x06 /* Public */,
      38,    1,  247,    2, 0x06 /* Public */,
      39,    1,  250,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      40,    0,  253,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    6,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    6,   10,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 15,    8,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Executer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Executer *_t = static_cast<Executer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentlyExecuting((*reinterpret_cast< TreeNode*(*)>(_a[1]))); break;
        case 1: _t->variableTableUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Value(*)>(_a[2]))); break;
        case 2: _t->functionTableUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 3: _t->getX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->getY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->ask((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->getDirection((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->reset(); break;
        case 9: _t->clear(); break;
        case 10: _t->center(); break;
        case 11: _t->go((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 12: _t->goX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->goY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->forward((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->backward((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->direction((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->turnLeft((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->turnRight((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->penWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->penUp(); break;
        case 21: _t->penDown(); break;
        case 22: _t->penColor((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 23: _t->canvasColor((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 24: _t->canvasSize((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 25: _t->spriteShow(); break;
        case 26: _t->spriteHide(); break;
        case 27: _t->print((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->fontSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 29: _t->stopWaiting(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Executer::*_t)(TreeNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::currentlyExecuting)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(const QString & , const Value & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::variableTableUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(const QString & , const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::functionTableUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(double & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::getX)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(double & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::getY)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::ask)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::message)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(double & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::getDirection)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Executer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::reset)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Executer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::clear)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Executer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::center)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::go)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::goX)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::goY)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::forward)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::backward)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::direction)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::turnLeft)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::turnRight)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::penWidth)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (Executer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::penUp)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (Executer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::penDown)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::penColor)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::canvasColor)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::canvasSize)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (Executer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::spriteShow)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (Executer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::spriteHide)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::print)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (Executer::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Executer::fontSize)) {
                *result = 28;
                return;
            }
        }
    }
}

const QMetaObject Executer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Executer.data,
      qt_meta_data_Executer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Executer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Executer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Executer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Executer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void Executer::currentlyExecuting(TreeNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Executer::variableTableUpdated(const QString & _t1, const Value & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Executer::functionTableUpdated(const QString & _t1, const QStringList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Executer::getX(double & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Executer::getY(double & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Executer::ask(QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Executer::message(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Executer::getDirection(double & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Executer::reset()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Executer::clear()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Executer::center()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Executer::go(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Executer::goX(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Executer::goY(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Executer::forward(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Executer::backward(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Executer::direction(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Executer::turnLeft(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Executer::turnRight(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Executer::penWidth(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Executer::penUp()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void Executer::penDown()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void Executer::penColor(double _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Executer::canvasColor(double _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Executer::canvasSize(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Executer::spriteShow()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void Executer::spriteHide()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void Executer::print(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Executer::fontSize(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
