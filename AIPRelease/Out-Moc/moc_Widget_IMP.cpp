/****************************************************************************
** Meta object code from reading C++ file 'Widget_IMP.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AIPDebug/Function-Module/Widget_IMP.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Widget_IMP.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Widget_IMP[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   11,   11,   11, 0x08,
      72,   11,   11,   11, 0x08,
     106,   11,   11,   11, 0x08,
     141,   11,   11,   11, 0x08,
     177,  166,   11,   11, 0x08,
     208,  166,   11,   11, 0x08,
     239,   11,   11,   11, 0x08,
     278,   11,   11,   11, 0x08,
     325,  319,   11,   11, 0x08,
     366,   11,   11,   11, 0x08,
     392,   11,   11,   11, 0x08,
     425,  422,   11,   11, 0x08,
     459,  457,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Widget_IMP[] = {
    "Widget_IMP\0\0frame\0canSend(can_frame)\0"
    "on_button_sample_collect_clicked()\0"
    "on_button_sample_cancle_clicked()\0"
    "on_button_sample_average_clicked()\0"
    "on_button_back_clicked()\0row,column\0"
    "on_ittTab_cellChanged(int,int)\0"
    "on_ittTab_cellClicked(int,int)\0"
    "on_doubleSpinBox_red_editingFinished()\0"
    "on_doubleSpinBox_green_editingFinished()\0"
    "index\0on_comb_Station_currentIndexChanged(int)\0"
    "slot_imp_buttonJudge(int)\0"
    "slot_imp_buttonJudge_set(int)\0,,\0"
    "slot_imp_set_point(int,int,int)\0,\0"
    "slot_big_shape(int,bool)\0"
};

void Widget_IMP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Widget_IMP *_t = static_cast<Widget_IMP *>(_o);
        switch (_id) {
        case 0: _t->canSend((*reinterpret_cast< can_frame(*)>(_a[1]))); break;
        case 1: _t->on_button_sample_collect_clicked(); break;
        case 2: _t->on_button_sample_cancle_clicked(); break;
        case 3: _t->on_button_sample_average_clicked(); break;
        case 4: _t->on_button_back_clicked(); break;
        case 5: _t->on_ittTab_cellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->on_ittTab_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->on_doubleSpinBox_red_editingFinished(); break;
        case 8: _t->on_doubleSpinBox_green_editingFinished(); break;
        case 9: _t->on_comb_Station_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->slot_imp_buttonJudge((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->slot_imp_buttonJudge_set((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->slot_imp_set_point((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->slot_big_shape((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Widget_IMP::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Widget_IMP::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget_IMP,
      qt_meta_data_Widget_IMP, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Widget_IMP::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Widget_IMP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Widget_IMP::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget_IMP))
        return static_cast<void*>(const_cast< Widget_IMP*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget_IMP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Widget_IMP::canSend(can_frame _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
