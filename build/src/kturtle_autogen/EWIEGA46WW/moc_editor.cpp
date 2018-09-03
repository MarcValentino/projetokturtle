/****************************************************************************
** Meta object code from reading C++ file 'editor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/editor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LineNumbers_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LineNumbers_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LineNumbers_t qt_meta_stringdata_LineNumbers = {
    {
QT_MOC_LITERAL(0, 0, 11) // "LineNumbers"

    },
    "LineNumbers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LineNumbers[] = {

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

void LineNumbers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject LineNumbers::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LineNumbers.data,
      qt_meta_data_LineNumbers,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LineNumbers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LineNumbers::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LineNumbers.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LineNumbers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TextEdit_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextEdit_t qt_meta_stringdata_TextEdit = {
    {
QT_MOC_LITERAL(0, 0, 8) // "TextEdit"

    },
    "TextEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextEdit[] = {

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

void TextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TextEdit::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_TextEdit.data,
      qt_meta_data_TextEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextEdit.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int TextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Editor_t {
    QByteArrayData data[40];
    char stringdata0[442];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Editor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Editor_t qt_meta_stringdata_Editor = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Editor"
QT_MOC_LITERAL(1, 7, 18), // "contentNameChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "fileOpened"
QT_MOC_LITERAL(4, 38, 9), // "fileSaved"
QT_MOC_LITERAL(5, 48, 19), // "modificationChanged"
QT_MOC_LITERAL(6, 68, 14), // "contentChanged"
QT_MOC_LITERAL(7, 83, 21), // "cursorPositionChanged"
QT_MOC_LITERAL(8, 105, 7), // "newFile"
QT_MOC_LITERAL(9, 113, 8), // "openFile"
QT_MOC_LITERAL(10, 122, 3), // "url"
QT_MOC_LITERAL(11, 126, 11), // "openExample"
QT_MOC_LITERAL(12, 138, 7), // "example"
QT_MOC_LITERAL(13, 146, 11), // "exampleName"
QT_MOC_LITERAL(14, 158, 8), // "saveFile"
QT_MOC_LITERAL(15, 167, 10), // "saveFileAs"
QT_MOC_LITERAL(16, 178, 17), // "toggleLineNumbers"
QT_MOC_LITERAL(17, 196, 1), // "b"
QT_MOC_LITERAL(18, 198, 11), // "setModified"
QT_MOC_LITERAL(19, 210, 16), // "setOverwriteMode"
QT_MOC_LITERAL(20, 227, 15), // "markCurrentWord"
QT_MOC_LITERAL(21, 243, 9), // "TreeNode*"
QT_MOC_LITERAL(22, 253, 4), // "node"
QT_MOC_LITERAL(23, 258, 16), // "markCurrentError"
QT_MOC_LITERAL(24, 275, 8), // "startRow"
QT_MOC_LITERAL(25, 284, 8), // "startCol"
QT_MOC_LITERAL(26, 293, 6), // "endRow"
QT_MOC_LITERAL(27, 300, 6), // "endCol"
QT_MOC_LITERAL(28, 307, 4), // "find"
QT_MOC_LITERAL(29, 312, 8), // "findNext"
QT_MOC_LITERAL(30, 321, 8), // "findPrev"
QT_MOC_LITERAL(31, 330, 15), // "insertPlainText"
QT_MOC_LITERAL(32, 346, 3), // "txt"
QT_MOC_LITERAL(33, 350, 11), // "rehighlight"
QT_MOC_LITERAL(34, 362, 11), // "textChanged"
QT_MOC_LITERAL(35, 374, 3), // "pos"
QT_MOC_LITERAL(36, 378, 5), // "added"
QT_MOC_LITERAL(37, 384, 7), // "removed"
QT_MOC_LITERAL(38, 392, 28), // "updateOnCursorPositionChange"
QT_MOC_LITERAL(39, 421, 20) // "highlightCurrentLine"

    },
    "Editor\0contentNameChanged\0\0fileOpened\0"
    "fileSaved\0modificationChanged\0"
    "contentChanged\0cursorPositionChanged\0"
    "newFile\0openFile\0url\0openExample\0"
    "example\0exampleName\0saveFile\0saveFileAs\0"
    "toggleLineNumbers\0b\0setModified\0"
    "setOverwriteMode\0markCurrentWord\0"
    "TreeNode*\0node\0markCurrentError\0"
    "startRow\0startCol\0endRow\0endCol\0find\0"
    "findNext\0findPrev\0insertPlainText\0txt\0"
    "rehighlight\0textChanged\0pos\0added\0"
    "removed\0updateOnCursorPositionChange\0"
    "highlightCurrentLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Editor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       3,    1,  147,    2, 0x06 /* Public */,
       4,    1,  150,    2, 0x06 /* Public */,
       5,    0,  153,    2, 0x06 /* Public */,
       6,    0,  154,    2, 0x06 /* Public */,
       7,    0,  155,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  156,    2, 0x0a /* Public */,
       9,    1,  157,    2, 0x0a /* Public */,
       9,    0,  160,    2, 0x2a /* Public | MethodCloned */,
      11,    2,  161,    2, 0x0a /* Public */,
      14,    1,  166,    2, 0x0a /* Public */,
      14,    0,  169,    2, 0x2a /* Public | MethodCloned */,
      15,    0,  170,    2, 0x0a /* Public */,
      16,    1,  171,    2, 0x0a /* Public */,
      18,    1,  174,    2, 0x0a /* Public */,
      19,    1,  177,    2, 0x0a /* Public */,
      20,    1,  180,    2, 0x0a /* Public */,
      23,    4,  183,    2, 0x0a /* Public */,
      28,    0,  192,    2, 0x0a /* Public */,
      29,    0,  193,    2, 0x0a /* Public */,
      30,    0,  194,    2, 0x0a /* Public */,
      31,    1,  195,    2, 0x0a /* Public */,
      33,    0,  198,    2, 0x0a /* Public */,
      34,    3,  199,    2, 0x09 /* Protected */,
      38,    0,  206,    2, 0x08 /* Private */,
      39,    0,  207,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QUrl,   10,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,
    QMetaType::Bool, QMetaType::QUrl,   10,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   24,   25,   26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   35,   36,   37,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Editor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Editor *_t = static_cast<Editor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contentNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->fileOpened((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->fileSaved((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->modificationChanged(); break;
        case 4: _t->contentChanged(); break;
        case 5: _t->cursorPositionChanged(); break;
        case 6: { bool _r = _t->newFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->openFile((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->openFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->openExample((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: { bool _r = _t->saveFile((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->saveFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->saveFileAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->toggleLineNumbers((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setOverwriteMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->markCurrentWord((*reinterpret_cast< TreeNode*(*)>(_a[1]))); break;
        case 17: _t->markCurrentError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 18: _t->find(); break;
        case 19: _t->findNext(); break;
        case 20: _t->findPrev(); break;
        case 21: _t->insertPlainText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->rehighlight(); break;
        case 23: _t->textChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 24: _t->updateOnCursorPositionChange(); break;
        case 25: _t->highlightCurrentLine(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Editor::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Editor::contentNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Editor::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Editor::fileOpened)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Editor::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Editor::fileSaved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Editor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Editor::modificationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Editor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Editor::contentChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Editor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Editor::cursorPositionChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject Editor::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Editor.data,
      qt_meta_data_Editor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Editor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Editor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Editor.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int Editor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void Editor::contentNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Editor::fileOpened(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Editor::fileSaved(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Editor::modificationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Editor::contentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Editor::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
