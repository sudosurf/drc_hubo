/****************************************************************************
** Meta object code from reading C++ file 'RBTCPClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PODOGUI/LAN/RBTCPClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RBTCPClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RBTCPClient_t {
    QByteArrayData data[7];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RBTCPClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RBTCPClient_t qt_meta_stringdata_RBTCPClient = {
    {
QT_MOC_LITERAL(0, 0, 11), // "RBTCPClient"
QT_MOC_LITERAL(1, 12, 13), // "SIG_Connected"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 16), // "SIG_Disconnected"
QT_MOC_LITERAL(4, 44, 17), // "RBClientConnected"
QT_MOC_LITERAL(5, 62, 20), // "RBClientDisconnected"
QT_MOC_LITERAL(6, 83, 10) // "RBReadData"

    },
    "RBTCPClient\0SIG_Connected\0\0SIG_Disconnected\0"
    "RBClientConnected\0RBClientDisconnected\0"
    "RBReadData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RBTCPClient[] = {

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
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RBTCPClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RBTCPClient *_t = static_cast<RBTCPClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SIG_Connected(); break;
        case 1: _t->SIG_Disconnected(); break;
        case 2: _t->RBClientConnected(); break;
        case 3: _t->RBClientDisconnected(); break;
        case 4: _t->RBReadData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RBTCPClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RBTCPClient::SIG_Connected)) {
                *result = 0;
            }
        }
        {
            typedef void (RBTCPClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RBTCPClient::SIG_Disconnected)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RBTCPClient::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_RBTCPClient.data,
      qt_meta_data_RBTCPClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RBTCPClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RBTCPClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RBTCPClient.stringdata0))
        return static_cast<void*>(const_cast< RBTCPClient*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int RBTCPClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
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
void RBTCPClient::SIG_Connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void RBTCPClient::SIG_Disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
