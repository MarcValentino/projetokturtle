/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LocalDockWidget_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocalDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocalDockWidget_t qt_meta_stringdata_LocalDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "LocalDockWidget"
QT_MOC_LITERAL(1, 16, 17), // "visibilityChanged"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "LocalDockWidget\0visibilityChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocalDockWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void LocalDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LocalDockWidget *_t = static_cast<LocalDockWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (LocalDockWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalDockWidget::visibilityChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject LocalDockWidget::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_LocalDockWidget.data,
      qt_meta_data_LocalDockWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LocalDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocalDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LocalDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int LocalDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void LocalDockWidget::visibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[45];
    char stringdata0[608];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 20), // "addToRecentFilesList"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "showErrorDialog"
QT_MOC_LITERAL(4, 49, 4), // "show"
QT_MOC_LITERAL(5, 54, 11), // "openExample"
QT_MOC_LITERAL(6, 66, 19), // "getNewExampleDialog"
QT_MOC_LITERAL(7, 86, 21), // "openDownloadedExample"
QT_MOC_LITERAL(8, 108, 15), // "filePrintDialog"
QT_MOC_LITERAL(9, 124, 17), // "canvasPrintDialog"
QT_MOC_LITERAL(10, 142, 11), // "exportToPng"
QT_MOC_LITERAL(11, 154, 11), // "exportToSvg"
QT_MOC_LITERAL(12, 166, 12), // "exportToHtml"
QT_MOC_LITERAL(13, 179, 11), // "contextHelp"
QT_MOC_LITERAL(14, 191, 19), // "documentWasModified"
QT_MOC_LITERAL(15, 211, 19), // "showDirectionDialog"
QT_MOC_LITERAL(16, 231, 15), // "showColorPicker"
QT_MOC_LITERAL(17, 247, 11), // "setRunSpeed"
QT_MOC_LITERAL(18, 259, 3), // "run"
QT_MOC_LITERAL(19, 263, 5), // "pause"
QT_MOC_LITERAL(20, 269, 5), // "abort"
QT_MOC_LITERAL(21, 275, 7), // "iterate"
QT_MOC_LITERAL(22, 283, 7), // "execute"
QT_MOC_LITERAL(23, 291, 17), // "setDedicatedSpeed"
QT_MOC_LITERAL(24, 309, 12), // "setFullSpeed"
QT_MOC_LITERAL(25, 322, 12), // "setSlowSpeed"
QT_MOC_LITERAL(26, 335, 14), // "setSlowerSpeed"
QT_MOC_LITERAL(27, 350, 15), // "setSlowestSpeed"
QT_MOC_LITERAL(28, 366, 12), // "setStepSpeed"
QT_MOC_LITERAL(29, 379, 15), // "slotInputDialog"
QT_MOC_LITERAL(30, 395, 8), // "QString&"
QT_MOC_LITERAL(31, 404, 5), // "value"
QT_MOC_LITERAL(32, 410, 17), // "slotMessageDialog"
QT_MOC_LITERAL(33, 428, 4), // "text"
QT_MOC_LITERAL(34, 433, 18), // "setCurrentLanguage"
QT_MOC_LITERAL(35, 452, 11), // "setLanguage"
QT_MOC_LITERAL(36, 464, 8), // "QAction*"
QT_MOC_LITERAL(37, 473, 17), // "updateContentName"
QT_MOC_LITERAL(38, 491, 3), // "str"
QT_MOC_LITERAL(39, 495, 23), // "updateModificationState"
QT_MOC_LITERAL(40, 519, 16), // "addToRecentFiles"
QT_MOC_LITERAL(41, 536, 19), // "toggleOverwriteMode"
QT_MOC_LITERAL(42, 556, 1), // "b"
QT_MOC_LITERAL(43, 558, 28), // "updateOnCursorPositionChange"
QT_MOC_LITERAL(44, 587, 20) // "saveNewToolbarConfig"

    },
    "MainWindow\0addToRecentFilesList\0\0"
    "showErrorDialog\0show\0openExample\0"
    "getNewExampleDialog\0openDownloadedExample\0"
    "filePrintDialog\0canvasPrintDialog\0"
    "exportToPng\0exportToSvg\0exportToHtml\0"
    "contextHelp\0documentWasModified\0"
    "showDirectionDialog\0showColorPicker\0"
    "setRunSpeed\0run\0pause\0abort\0iterate\0"
    "execute\0setDedicatedSpeed\0setFullSpeed\0"
    "setSlowSpeed\0setSlowerSpeed\0setSlowestSpeed\0"
    "setStepSpeed\0slotInputDialog\0QString&\0"
    "value\0slotMessageDialog\0text\0"
    "setCurrentLanguage\0setLanguage\0QAction*\0"
    "updateContentName\0str\0updateModificationState\0"
    "addToRecentFiles\0toggleOverwriteMode\0"
    "b\0updateOnCursorPositionChange\0"
    "saveNewToolbarConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  204,    2, 0x08 /* Private */,
       3,    1,  207,    2, 0x08 /* Private */,
       3,    0,  210,    2, 0x28 /* Private | MethodCloned */,
       5,    0,  211,    2, 0x08 /* Private */,
       6,    0,  212,    2, 0x08 /* Private */,
       7,    0,  213,    2, 0x08 /* Private */,
       8,    0,  214,    2, 0x08 /* Private */,
       9,    0,  215,    2, 0x08 /* Private */,
      10,    0,  216,    2, 0x08 /* Private */,
      11,    0,  217,    2, 0x08 /* Private */,
      12,    0,  218,    2, 0x08 /* Private */,
      13,    0,  219,    2, 0x08 /* Private */,
      14,    0,  220,    2, 0x08 /* Private */,
      15,    0,  221,    2, 0x08 /* Private */,
      16,    0,  222,    2, 0x08 /* Private */,
      17,    1,  223,    2, 0x08 /* Private */,
      18,    0,  226,    2, 0x08 /* Private */,
      19,    0,  227,    2, 0x08 /* Private */,
      20,    0,  228,    2, 0x08 /* Private */,
      21,    0,  229,    2, 0x08 /* Private */,
      22,    1,  230,    2, 0x08 /* Private */,
      23,    0,  233,    2, 0x08 /* Private */,
      24,    0,  234,    2, 0x08 /* Private */,
      25,    0,  235,    2, 0x08 /* Private */,
      26,    0,  236,    2, 0x08 /* Private */,
      27,    0,  237,    2, 0x08 /* Private */,
      28,    0,  238,    2, 0x08 /* Private */,
      29,    1,  239,    2, 0x08 /* Private */,
      32,    1,  242,    2, 0x08 /* Private */,
      34,    1,  245,    2, 0x08 /* Private */,
      35,    1,  248,    2, 0x08 /* Private */,
      37,    1,  251,    2, 0x08 /* Private */,
      37,    0,  254,    2, 0x28 /* Private | MethodCloned */,
      39,    0,  255,    2, 0x08 /* Private */,
      40,    1,  256,    2, 0x08 /* Private */,
      41,    1,  259,    2, 0x08 /* Private */,
      43,    0,  262,    2, 0x08 /* Private */,
      44,    0,  263,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Bool, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 36,    2,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::Bool,   42,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addToRecentFilesList((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->showErrorDialog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->showErrorDialog(); break;
        case 3: _t->openExample(); break;
        case 4: _t->getNewExampleDialog(); break;
        case 5: _t->openDownloadedExample(); break;
        case 6: _t->filePrintDialog(); break;
        case 7: _t->canvasPrintDialog(); break;
        case 8: _t->exportToPng(); break;
        case 9: _t->exportToSvg(); break;
        case 10: _t->exportToHtml(); break;
        case 11: _t->contextHelp(); break;
        case 12: _t->documentWasModified(); break;
        case 13: _t->showDirectionDialog(); break;
        case 14: _t->showColorPicker(); break;
        case 15: _t->setRunSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->run(); break;
        case 17: _t->pause(); break;
        case 18: _t->abort(); break;
        case 19: _t->iterate(); break;
        case 20: { QString _r = _t->execute((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->setDedicatedSpeed(); break;
        case 22: _t->setFullSpeed(); break;
        case 23: _t->setSlowSpeed(); break;
        case 24: _t->setSlowerSpeed(); break;
        case 25: _t->setSlowestSpeed(); break;
        case 26: _t->setStepSpeed(); break;
        case 27: _t->slotInputDialog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->slotMessageDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: { bool _r = _t->setCurrentLanguage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->setLanguage((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 31: _t->updateContentName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->updateContentName(); break;
        case 33: _t->updateModificationState(); break;
        case 34: _t->addToRecentFiles((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 35: _t->toggleOverwriteMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->updateOnCursorPositionChange(); break;
        case 37: _t->saveNewToolbarConfig(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &KXmlGuiWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return KXmlGuiWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KXmlGuiWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
