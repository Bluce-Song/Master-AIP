/****************************************************************************
** Meta object code from reading C++ file 'w_conf.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Display-Interface/w_conf.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'w_conf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_w_Conf[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,    8,    7,    7, 0x05,
      41,   38,    7,    7, 0x05,
      84,   80,    7,    7, 0x05,
     133,   38,    7,    7, 0x05,
     174,    7,    7,    7, 0x05,
     193,    7,    7,    7, 0x05,
     224,  220,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     254,  248,    7,    7, 0x0a,
     283,    8,    7,    7, 0x0a,
     320,    7,    7,    7, 0x0a,
     341,   38,    7,    7, 0x0a,
     386,  384,    7,    7, 0x0a,
     419,  384,    7,    7, 0x0a,
     465,  457,    7,    7, 0x0a,
     509,    7,    7,    7, 0x08,
     521,    7,    7,    7, 0x08,
     540,    7,    7,    7, 0x08,
     561,    7,    7,    7, 0x08,
     589,    7,    7,    7, 0x08,
     621,    7,    7,    7, 0x08,
     650,    7,    7,    7, 0x08,
     678,    7,    7,    7, 0x08,
     702,    7,    7,    7, 0x08,
     726,    7,    7,    7, 0x08,
     752,    7,    7,    7, 0x08,
     795,  789,  785,    7, 0x08,
     833,  789,    7,    7, 0x08,
     873,  862,    7,    7, 0x08,
     905,    7,    7,    7, 0x08,
     927,    7,    7,    7, 0x08,
     965,    7,    7,    7, 0x08,
    1005,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_w_Conf[] = {
    "w_Conf\0\0frame,\0canSend(can_frame,int)\0"
    ",,\0Singal_Data_Scale(QStringList,int,int)\0"
    ",,,\0Singal_Conf_to_Main(QStringList,QString,int,int)\0"
    "WriteMessage(quint16,quint16,QByteArray)\0"
    "WConf_DeviceOpen()\0WConf_WriteSql(QByteArray)\0"
    "msg\0sendAppMap(QVariantMap)\0frame\0"
    "SlOT_CanSendFrame(can_frame)\0"
    "SlOT_CanSendFrame_PWR(can_frame,int)\0"
    "SlOT_Lable_Display()\0"
    "Slot_test_to_conf(QStringList,QString,int)\0"
    ",\0Slot_Save_Debug(QString,QString)\0"
    "Slot_Save_DayRecoord(QString,QString)\0"
    "frame,,\0SlOT_can_to_conf(can_frame,QStringList,int)\0"
    "beep_stop()\0test_mouse_check()\0"
    "SlOT_ButtonProj(int)\0SlOT_Button_IMP_Sample(int)\0"
    "SlOT_Button_Function_Judge(int)\0"
    "SlOT_Button_Color_Judge(int)\0"
    "SlOT_Button_Conf_Judge(int)\0"
    "on_fileBtnAdd_clicked()\0on_fileBtnDel_clicked()\0"
    "on_fileBtnCheck_clicked()\0"
    "Item_Chose_Box_stateChanged(int)\0int\0"
    "index\0on_MotorType_currentIndexChanged(int)\0"
    "on_test_clicked(QModelIndex)\0row,column\0"
    "on_fileTab_cellClicked(int,int)\0"
    "on_SQL_Task_clicked()\0"
    "SQL_Produce_Plan_textChanged(QString)\0"
    "SQL_Produce_Number_textChanged(QString)\0"
    "SQL_Widget_autoquit()\0"
};

void w_Conf::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        w_Conf *_t = static_cast<w_Conf *>(_o);
        switch (_id) {
        case 0: _t->canSend((*reinterpret_cast< can_frame(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->Singal_Data_Scale((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->Singal_Conf_to_Main((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->WriteMessage((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 4: _t->WConf_DeviceOpen(); break;
        case 5: _t->WConf_WriteSql((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->sendAppMap((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 7: _t->SlOT_CanSendFrame((*reinterpret_cast< can_frame(*)>(_a[1]))); break;
        case 8: _t->SlOT_CanSendFrame_PWR((*reinterpret_cast< can_frame(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->SlOT_Lable_Display(); break;
        case 10: _t->Slot_test_to_conf((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->Slot_Save_Debug((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->Slot_Save_DayRecoord((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 13: _t->SlOT_can_to_conf((*reinterpret_cast< can_frame(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->beep_stop(); break;
        case 15: _t->test_mouse_check(); break;
        case 16: _t->SlOT_ButtonProj((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->SlOT_Button_IMP_Sample((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->SlOT_Button_Function_Judge((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->SlOT_Button_Color_Judge((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->SlOT_Button_Conf_Judge((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_fileBtnAdd_clicked(); break;
        case 22: _t->on_fileBtnDel_clicked(); break;
        case 23: _t->on_fileBtnCheck_clicked(); break;
        case 24: _t->Item_Chose_Box_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: { int _r = _t->on_MotorType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: _t->on_test_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 27: _t->on_fileTab_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->on_SQL_Task_clicked(); break;
        case 29: _t->SQL_Produce_Plan_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->SQL_Produce_Number_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->SQL_Widget_autoquit(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData w_Conf::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject w_Conf::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_w_Conf,
      qt_meta_data_w_Conf, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &w_Conf::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *w_Conf::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *w_Conf::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_w_Conf))
        return static_cast<void*>(const_cast< w_Conf*>(this));
    return QWidget::qt_metacast(_clname);
}

int w_Conf::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void w_Conf::canSend(can_frame _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void w_Conf::Singal_Data_Scale(QStringList _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void w_Conf::Singal_Conf_to_Main(QStringList _t1, QString _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void w_Conf::WriteMessage(quint16 _t1, quint16 _t2, QByteArray _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void w_Conf::WConf_DeviceOpen()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void w_Conf::WConf_WriteSql(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void w_Conf::sendAppMap(QVariantMap _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
