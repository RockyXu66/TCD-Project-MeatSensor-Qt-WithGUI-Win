/****************************************************************************
** Meta object code from reading C++ file 'croppingdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TCDMeatApp_Qt_ui/croppingdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'croppingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CroppingDialog_t {
    QByteArrayData data[7];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CroppingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CroppingDialog_t qt_meta_stringdata_CroppingDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CroppingDialog"
QT_MOC_LITERAL(1, 15, 20), // "sendCroppedStripArea"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "sendStripAdjustedFlag"
QT_MOC_LITERAL(4, 59, 20), // "receiveCroppingImage"
QT_MOC_LITERAL(5, 80, 15), // "closeCropWidget"
QT_MOC_LITERAL(6, 96, 4) // "crop"

    },
    "CroppingDialog\0sendCroppedStripArea\0"
    "\0sendStripAdjustedFlag\0receiveCroppingImage\0"
    "closeCropWidget\0crop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CroppingDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   45,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CroppingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CroppingDialog *_t = static_cast<CroppingDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendCroppedStripArea((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->sendStripAdjustedFlag((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->receiveCroppingImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 3: _t->closeCropWidget(); break;
        case 4: _t->crop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CroppingDialog::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CroppingDialog::sendCroppedStripArea)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CroppingDialog::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CroppingDialog::sendStripAdjustedFlag)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CroppingDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CroppingDialog.data,
      qt_meta_data_CroppingDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CroppingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CroppingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CroppingDialog.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CroppingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CroppingDialog::sendCroppedStripArea(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CroppingDialog::sendStripAdjustedFlag(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
