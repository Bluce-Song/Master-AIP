/****************************************************************************
** Meta object code from reading C++ file 'Widget_DCW.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Function-Module/Widget_DCW.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Widget_DCW.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Widget_DCW[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Widget_DCW[] = {
    "Widget_DCW\0\0frame\0canSend(can_frame)\0"
};

void Widget_DCW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Widget_DCW *_t = static_cast<Widget_DCW *>(_o);
        switch (_id) {
        case 0: _t->canSend((*reinterpret_cast< can_frame(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Widget_DCW::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Widget_DCW::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget_DCW,
      qt_meta_data_Widget_DCW, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Widget_DCW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Widget_DCW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Widget_DCW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget_DCW))
        return static_cast<void*>(const_cast< Widget_DCW*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget_DCW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Widget_DCW::canSend(can_frame _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
