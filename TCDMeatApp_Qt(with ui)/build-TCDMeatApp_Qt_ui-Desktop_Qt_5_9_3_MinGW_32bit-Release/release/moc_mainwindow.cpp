/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TCDMeatApp_Qt_ui/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[27];
    char stringdata0[502];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "sendSetup"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "device"
QT_MOC_LITERAL(4, 29, 16), // "sendToggleStream"
QT_MOC_LITERAL(5, 46, 17), // "sendLeftAreaValue"
QT_MOC_LITERAL(6, 64, 3), // "num"
QT_MOC_LITERAL(7, 68, 18), // "sendRightAreaValue"
QT_MOC_LITERAL(8, 87, 19), // "sendUpdateCurvePara"
QT_MOC_LITERAL(9, 107, 16), // "sendCurrentImage"
QT_MOC_LITERAL(10, 124, 14), // "sendStripRatio"
QT_MOC_LITERAL(11, 139, 21), // "receiveProcessedFrame"
QT_MOC_LITERAL(12, 161, 3), // "img"
QT_MOC_LITERAL(13, 165, 14), // "receiveO2Value"
QT_MOC_LITERAL(14, 180, 7), // "content"
QT_MOC_LITERAL(15, 188, 13), // "receivePrompt"
QT_MOC_LITERAL(16, 202, 18), // "isOxygenCalculated"
QT_MOC_LITERAL(17, 221, 24), // "receiveStripAdjustedFlag"
QT_MOC_LITERAL(18, 246, 25), // "on_pushButtonLoad_clicked"
QT_MOC_LITERAL(19, 272, 25), // "on_pushButtonPlay_clicked"
QT_MOC_LITERAL(20, 298, 40), // "on_horizontalSliderLeftArea_v..."
QT_MOC_LITERAL(21, 339, 41), // "on_horizontalSliderRightArea_..."
QT_MOC_LITERAL(22, 381, 28), // "on_pushButtonSetting_clicked"
QT_MOC_LITERAL(23, 410, 31), // "on_pushButtonOpenCamera_clicked"
QT_MOC_LITERAL(24, 442, 25), // "on_pushButtonCrop_clicked"
QT_MOC_LITERAL(25, 468, 28), // "on_lineEditRatio_textChanged"
QT_MOC_LITERAL(26, 497, 4) // "arg1"

    },
    "MainWindow\0sendSetup\0\0device\0"
    "sendToggleStream\0sendLeftAreaValue\0"
    "num\0sendRightAreaValue\0sendUpdateCurvePara\0"
    "sendCurrentImage\0sendStripRatio\0"
    "receiveProcessedFrame\0img\0receiveO2Value\0"
    "content\0receivePrompt\0isOxygenCalculated\0"
    "receiveStripAdjustedFlag\0"
    "on_pushButtonLoad_clicked\0"
    "on_pushButtonPlay_clicked\0"
    "on_horizontalSliderLeftArea_valueChanged\0"
    "on_horizontalSliderRightArea_valueChanged\0"
    "on_pushButtonSetting_clicked\0"
    "on_pushButtonOpenCamera_clicked\0"
    "on_pushButtonCrop_clicked\0"
    "on_lineEditRatio_textChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       4,    0,  112,    2, 0x06 /* Public */,
       5,    1,  113,    2, 0x06 /* Public */,
       7,    1,  116,    2, 0x06 /* Public */,
       8,    4,  119,    2, 0x06 /* Public */,
       9,    1,  128,    2, 0x06 /* Public */,
      10,    1,  131,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  134,    2, 0x08 /* Private */,
      13,    1,  137,    2, 0x08 /* Private */,
      15,    1,  140,    2, 0x08 /* Private */,
      17,    0,  143,    2, 0x08 /* Private */,
      18,    0,  144,    2, 0x08 /* Private */,
      19,    0,  145,    2, 0x08 /* Private */,
      20,    1,  146,    2, 0x08 /* Private */,
      21,    1,  149,    2, 0x08 /* Private */,
      22,    0,  152,    2, 0x08 /* Private */,
      23,    0,  153,    2, 0x08 /* Private */,
      24,    0,  154,    2, 0x08 /* Private */,
      25,    1,  155,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendSetup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sendToggleStream(); break;
        case 2: _t->sendLeftAreaValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sendRightAreaValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sendUpdateCurvePara((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 5: _t->sendCurrentImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 6: _t->sendStripRatio((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->receiveProcessedFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 8: _t->receiveO2Value((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->receivePrompt((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->receiveStripAdjustedFlag(); break;
        case 11: _t->on_pushButtonLoad_clicked(); break;
        case 12: _t->on_pushButtonPlay_clicked(); break;
        case 13: _t->on_horizontalSliderLeftArea_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_horizontalSliderRightArea_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_pushButtonSetting_clicked(); break;
        case 16: _t->on_pushButtonOpenCamera_clicked(); break;
        case 17: _t->on_pushButtonCrop_clicked(); break;
        case 18: _t->on_lineEditRatio_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendSetup)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendToggleStream)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendLeftAreaValue)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendRightAreaValue)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(float , float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendUpdateCurvePara)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendCurrentImage)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendStripRatio)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
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
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sendSetup(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::sendToggleStream()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::sendLeftAreaValue(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::sendRightAreaValue(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::sendUpdateCurvePara(float _t1, float _t2, float _t3, float _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::sendCurrentImage(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::sendStripRatio(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
