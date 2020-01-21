/****************************************************************************
** Meta object code from reading C++ file 'proxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Proxy/proxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'proxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Proxy_t {
    QByteArrayData data[13];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Proxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Proxy_t qt_meta_stringdata_Proxy = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Proxy"
QT_MOC_LITERAL(1, 6, 5), // "start"
QT_MOC_LITERAL(2, 12, 0), // ""
QT_MOC_LITERAL(3, 13, 6), // "listen"
QT_MOC_LITERAL(4, 20, 10), // "disconnect"
QT_MOC_LITERAL(5, 31, 5), // "Start"
QT_MOC_LITERAL(6, 37, 6), // "Listen"
QT_MOC_LITERAL(7, 44, 22), // "ClientConnectedCommand"
QT_MOC_LITERAL(8, 67, 19), // "ClientConnectedData"
QT_MOC_LITERAL(9, 87, 20), // "ClientSendingCommand"
QT_MOC_LITERAL(10, 108, 20), // "ServerSendingCommand"
QT_MOC_LITERAL(11, 129, 17), // "ServerSendingData"
QT_MOC_LITERAL(12, 147, 9) // "Disconect"

    },
    "Proxy\0start\0\0listen\0disconnect\0Start\0"
    "Listen\0ClientConnectedCommand\0"
    "ClientConnectedData\0ClientSendingCommand\0"
    "ServerSendingCommand\0ServerSendingData\0"
    "Disconect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Proxy[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Proxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Proxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->listen(); break;
        case 2: _t->disconnect(); break;
        case 3: _t->Start(); break;
        case 4: _t->Listen(); break;
        case 5: _t->ClientConnectedCommand(); break;
        case 6: _t->ClientConnectedData(); break;
        case 7: _t->ClientSendingCommand(); break;
        case 8: _t->ServerSendingCommand(); break;
        case 9: _t->ServerSendingData(); break;
        case 10: _t->Disconect(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Proxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Proxy::start)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Proxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Proxy::listen)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Proxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Proxy::disconnect)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Proxy::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Proxy.data,
    qt_meta_data_Proxy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Proxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Proxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Proxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Proxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Proxy::start()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Proxy::listen()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Proxy::disconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
