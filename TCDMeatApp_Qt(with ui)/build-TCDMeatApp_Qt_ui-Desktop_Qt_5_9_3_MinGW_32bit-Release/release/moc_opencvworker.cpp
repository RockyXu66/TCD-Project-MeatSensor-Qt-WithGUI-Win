/****************************************************************************
** Meta object code from reading C++ file 'opencvworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TCDMeatApp_Qt_ui/opencvworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opencvworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenCvWorker_t {
    QByteArrayData data[28];
    char stringdata0[462];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenCvWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenCvWorker_t qt_meta_stringdata_OpenCvWorker = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OpenCvWorker"
QT_MOC_LITERAL(1, 13, 9), // "sendFrame"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "frameProcessed"
QT_MOC_LITERAL(4, 39, 17), // "sendVideoFinished"
QT_MOC_LITERAL(5, 57, 11), // "sendO2Value"
QT_MOC_LITERAL(6, 69, 7), // "content"
QT_MOC_LITERAL(7, 77, 10), // "sendPrompt"
QT_MOC_LITERAL(8, 88, 18), // "isOxygenCalculated"
QT_MOC_LITERAL(9, 107, 23), // "sendUpdateCurveSettings"
QT_MOC_LITERAL(10, 131, 14), // "QVector<float>"
QT_MOC_LITERAL(11, 146, 27), // "sendUpdateThresholdSettings"
QT_MOC_LITERAL(12, 174, 12), // "QVector<int>"
QT_MOC_LITERAL(13, 187, 15), // "receiveLeftArea"
QT_MOC_LITERAL(14, 203, 3), // "num"
QT_MOC_LITERAL(15, 207, 16), // "receiveRightArea"
QT_MOC_LITERAL(16, 224, 16), // "receiveCurvePara"
QT_MOC_LITERAL(17, 241, 23), // "receiveCroppedStripArea"
QT_MOC_LITERAL(18, 265, 17), // "receiveStripRatio"
QT_MOC_LITERAL(19, 283, 21), // "receiveThresholdValue"
QT_MOC_LITERAL(20, 305, 5), // "value"
QT_MOC_LITERAL(21, 311, 23), // "receiveThresholdValue_2"
QT_MOC_LITERAL(22, 335, 23), // "receiveThresholdValue_3"
QT_MOC_LITERAL(23, 359, 23), // "receiveThresholdValue_4"
QT_MOC_LITERAL(24, 383, 23), // "receiveThresholdValue_5"
QT_MOC_LITERAL(25, 407, 23), // "receiveThresholdValue_6"
QT_MOC_LITERAL(26, 431, 15), // "receiveNextFlag"
QT_MOC_LITERAL(27, 447, 14) // "receivePrintO2"

    },
    "OpenCvWorker\0sendFrame\0\0frameProcessed\0"
    "sendVideoFinished\0sendO2Value\0content\0"
    "sendPrompt\0isOxygenCalculated\0"
    "sendUpdateCurveSettings\0QVector<float>\0"
    "sendUpdateThresholdSettings\0QVector<int>\0"
    "receiveLeftArea\0num\0receiveRightArea\0"
    "receiveCurvePara\0receiveCroppedStripArea\0"
    "receiveStripRatio\0receiveThresholdValue\0"
    "value\0receiveThresholdValue_2\0"
    "receiveThresholdValue_3\0receiveThresholdValue_4\0"
    "receiveThresholdValue_5\0receiveThresholdValue_6\0"
    "receiveNextFlag\0receivePrintO2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenCvWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       4,    0,  112,    2, 0x06 /* Public */,
       5,    1,  113,    2, 0x06 /* Public */,
       7,    1,  116,    2, 0x06 /* Public */,
       9,    3,  119,    2, 0x06 /* Public */,
      11,    1,  126,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  129,    2, 0x08 /* Private */,
      15,    1,  132,    2, 0x08 /* Private */,
      16,    2,  135,    2, 0x08 /* Private */,
      17,    1,  140,    2, 0x08 /* Private */,
      18,    1,  143,    2, 0x08 /* Private */,
      19,    1,  146,    2, 0x08 /* Private */,
      21,    1,  149,    2, 0x08 /* Private */,
      22,    1,  152,    2, 0x08 /* Private */,
      23,    1,  155,    2, 0x08 /* Private */,
      24,    1,  158,    2, 0x08 /* Private */,
      25,    1,  161,    2, 0x08 /* Private */,
      26,    0,  164,    2, 0x08 /* Private */,
      27,    0,  165,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 12,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OpenCvWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpenCvWorker *_t = static_cast<OpenCvWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendFrame((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->sendVideoFinished(); break;
        case 2: _t->sendO2Value((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->sendPrompt((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->sendUpdateCurveSettings((*reinterpret_cast< QVector<float>(*)>(_a[1])),(*reinterpret_cast< QVector<float>(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 5: _t->sendUpdateThresholdSettings((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 6: _t->receiveLeftArea((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->receiveRightArea((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->receiveCurvePara((*reinterpret_cast< QVector<float>(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->receiveCroppedStripArea((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->receiveStripRatio((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->receiveThresholdValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->receiveThresholdValue_2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->receiveThresholdValue_3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->receiveThresholdValue_4((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->receiveThresholdValue_5((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->receiveThresholdValue_6((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->receiveNextFlag(); break;
        case 18: _t->receivePrintO2(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<float> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<float> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (OpenCvWorker::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenCvWorker::sendFrame)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OpenCvWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenCvWorker::sendVideoFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OpenCvWorker::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenCvWorker::sendO2Value)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (OpenCvWorker::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenCvWorker::sendPrompt)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (OpenCvWorker::*_t)(QVector<float> , QVector<float> , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenCvWorker::sendUpdateCurveSettings)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (OpenCvWorker::*_t)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenCvWorker::sendUpdateThresholdSettings)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject OpenCvWorker::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_OpenCvWorker.data,
      qt_meta_data_OpenCvWorker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OpenCvWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenCvWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenCvWorker.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int OpenCvWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void OpenCvWorker::sendFrame(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpenCvWorker::sendVideoFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OpenCvWorker::sendO2Value(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OpenCvWorker::sendPrompt(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OpenCvWorker::sendUpdateCurveSettings(QVector<float> _t1, QVector<float> _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OpenCvWorker::sendUpdateThresholdSettings(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
