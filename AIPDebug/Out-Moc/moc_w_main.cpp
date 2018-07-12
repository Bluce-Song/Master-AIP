/****************************************************************************
** Meta object code from reading C++ file 'w_main.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Display-Interface/w_main.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'w_main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_w_Main[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      44,   42,    7,    7, 0x05,
      78,   42,    7,    7, 0x05,
     122,  119,    7,    7, 0x05,
     177,  169,    7,    7, 0x05,
     224,    7,    7,    7, 0x05,
     251,    7,    7,    7, 0x05,
     270,    7,    7,    7, 0x05,
     293,    7,    7,    7, 0x05,
     313,    7,    7,    7, 0x05,
     330,    7,    7,    7, 0x05,
     349,    7,    7,    7, 0x05,
     367,    7,    7,    7, 0x05,
     389,  119,    7,    7, 0x05,
     430,  119,    7,    7, 0x05,
     470,  119,    7,    7, 0x05,
     513,  119,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     552,    7,    7,    7, 0x0a,
     575,    7,    7,    7, 0x0a,
     594,    7,    7,    7, 0x0a,
     618,    7,    7,    7, 0x0a,
     642,   42,    7,    7, 0x0a,
     666,  119,    7,    7, 0x0a,
     702,  119,    7,    7, 0x0a,
     739,  119,    7,    7, 0x0a,
     775,   42,    7,    7, 0x0a,
     799,  119,    7,    7, 0x0a,
     836,  832,    7,    7, 0x0a,
     884,  880,    7,    7, 0x0a,
     920,  907,    7,    7, 0x0a,
     960,   42,    7,    7, 0x0a,
     989,  119,    7,    7, 0x0a,
    1027, 1020,    7,    7, 0x08,
    1050,    7,    7,    7, 0x08,
    1079,    7,    7,    7, 0x08,
    1093,    7,    7,    7, 0x08,
    1109,    7,    7,    7, 0x08,
    1126,    7,    7,    7, 0x08,
    1143,    7,    7,    7, 0x08,
    1160,    7,    7,    7, 0x08,
    1177,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_w_Main[] = {
    "w_Main\0\0Sigmain_data_to_test(QStringList)\0"
    ",\0Sigmain_data_to_syst(QString,int)\0"
    "Sigmain_save_DayRecoord(QString,QString)\0"
    ",,\0Sigmain_data_to_debug(QStringList,QString,int)\0"
    "frame,,\0Sigmain_can_to_conf(can_frame,QStringList,int)\0"
    "Serial_SendString(QString)\0"
    "Serial_SendEnter()\0Serial_SendBackspace()\0"
    "Serial_SendEscape()\0Serial_Upspace()\0"
    "Serial_Downspace()\0Serial_Tabspace()\0"
    "Serial_BackTabspace()\0"
    "WriteMessage(quint16,quint16,QByteArray)\0"
    "Signal_main_to_pic(QStringList,int,int)\0"
    "Signal_main_to_Switchover(int,int32_t,int)\0"
    "Singal_to_SQL(QString,QStringList,int)\0"
    "Pubs_ChangeWindow(int)\0Pubs_Cheak_Ready()\0"
    "Pubs_Cheak_Main_Finsh()\0Pubs_Cheak_Syst_Finsh()\0"
    "Pubs_from_pass(int,int)\0"
    "Pubs_from_data(QStringList,int,int)\0"
    "Pubs_from_debug(QStringList,int,int)\0"
    "Pubs_from_syst(QStringList,int,int)\0"
    "Pubs_from_test(int,int)\0"
    "Pubs_from_color(QString,int,int)\0,,,\0"
    "Pubs_from_conf(QStringList,QString,int,int)\0"
    "Buf\0Pubs_Usart_Send(char*)\0addr,cmd,msg\0"
    "ReadMessage(quint16,quint16,QByteArray)\0"
    "Pubs_UDisk_Data(int,QString)\0"
    "Pubs_from_pic(QString,int,int)\0frame,\0"
    "canSend(can_frame,int)\0"
    "Button_Main_Group_Judge(int)\0Mouse_Judge()\0"
    "System_Runing()\0Out_Board_Stop()\0"
    "Dcr_Board_Stop()\0Acw_Board_Stop()\0"
    "PG_State_Check()\0Jump_wTest_Surface()\0"
};

void w_Main::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        w_Main *_t = static_cast<w_Main *>(_o);
        switch (_id) {
        case 0: _t->Sigmain_data_to_test((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->Sigmain_data_to_syst((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->Sigmain_save_DayRecoord((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->Sigmain_data_to_debug((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->Sigmain_can_to_conf((*reinterpret_cast< can_frame(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->Serial_SendString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->Serial_SendEnter(); break;
        case 7: _t->Serial_SendBackspace(); break;
        case 8: _t->Serial_SendEscape(); break;
        case 9: _t->Serial_Upspace(); break;
        case 10: _t->Serial_Downspace(); break;
        case 11: _t->Serial_Tabspace(); break;
        case 12: _t->Serial_BackTabspace(); break;
        case 13: _t->WriteMessage((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 14: _t->Signal_main_to_pic((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->Signal_main_to_Switchover((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int32_t(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 16: _t->Singal_to_SQL((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 17: _t->Pubs_ChangeWindow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->Pubs_Cheak_Ready(); break;
        case 19: _t->Pubs_Cheak_Main_Finsh(); break;
        case 20: _t->Pubs_Cheak_Syst_Finsh(); break;
        case 21: _t->Pubs_from_pass((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->Pubs_from_data((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 23: _t->Pubs_from_debug((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 24: _t->Pubs_from_syst((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 25: _t->Pubs_from_test((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->Pubs_from_color((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 27: _t->Pubs_from_conf((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 28: _t->Pubs_Usart_Send((*reinterpret_cast< char*(*)>(_a[1]))); break;
        case 29: _t->ReadMessage((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 30: _t->Pubs_UDisk_Data((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 31: _t->Pubs_from_pic((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 32: _t->canSend((*reinterpret_cast< can_frame(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 33: _t->Button_Main_Group_Judge((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->Mouse_Judge(); break;
        case 35: _t->System_Runing(); break;
        case 36: _t->Out_Board_Stop(); break;
        case 37: _t->Dcr_Board_Stop(); break;
        case 38: _t->Acw_Board_Stop(); break;
        case 39: _t->PG_State_Check(); break;
        case 40: _t->Jump_wTest_Surface(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData w_Main::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject w_Main::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_w_Main,
      qt_meta_data_w_Main, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &w_Main::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *w_Main::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *w_Main::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_w_Main))
        return static_cast<void*>(const_cast< w_Main*>(this));
    return QWidget::qt_metacast(_clname);
}

int w_Main::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    return _id;
}

// SIGNAL 0
void w_Main::Sigmain_data_to_test(QStringList _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void w_Main::Sigmain_data_to_syst(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void w_Main::Sigmain_save_DayRecoord(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void w_Main::Sigmain_data_to_debug(QStringList _t1, QString _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void w_Main::Sigmain_can_to_conf(can_frame _t1, QStringList _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void w_Main::Serial_SendString(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void w_Main::Serial_SendEnter()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void w_Main::Serial_SendBackspace()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void w_Main::Serial_SendEscape()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void w_Main::Serial_Upspace()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void w_Main::Serial_Downspace()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void w_Main::Serial_Tabspace()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void w_Main::Serial_BackTabspace()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void w_Main::WriteMessage(quint16 _t1, quint16 _t2, QByteArray _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void w_Main::Signal_main_to_pic(QStringList _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void w_Main::Signal_main_to_Switchover(int _t1, int32_t _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void w_Main::Singal_to_SQL(QString _t1, QStringList _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_END_MOC_NAMESPACE
