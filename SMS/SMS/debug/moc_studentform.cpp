/****************************************************************************
** Meta object code from reading C++ file 'studentform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../studentform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'studentform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_studentForm_t {
    QByteArrayData data[9];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_studentForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_studentForm_t qt_meta_stringdata_studentForm = {
    {
QT_MOC_LITERAL(0, 0, 11), // "studentForm"
QT_MOC_LITERAL(1, 12, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(4, 59, 30), // "on_stu_find_dormButton_clicked"
QT_MOC_LITERAL(5, 90, 32), // "on_stu_find_coursebutton_clicked"
QT_MOC_LITERAL(6, 123, 27), // "on_stu_award_button_clicked"
QT_MOC_LITERAL(7, 151, 36), // "on_stu_findclass_inforButton_..."
QT_MOC_LITERAL(8, 188, 31) // "on_stu_query_fee_Button_clicked"

    },
    "studentForm\0on_pushButton_clicked\0\0"
    "on_pushButton_3_clicked\0"
    "on_stu_find_dormButton_clicked\0"
    "on_stu_find_coursebutton_clicked\0"
    "on_stu_award_button_clicked\0"
    "on_stu_findclass_inforButton_clicked\0"
    "on_stu_query_fee_Button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_studentForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void studentForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        studentForm *_t = static_cast<studentForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_3_clicked(); break;
        case 2: _t->on_stu_find_dormButton_clicked(); break;
        case 3: _t->on_stu_find_coursebutton_clicked(); break;
        case 4: _t->on_stu_award_button_clicked(); break;
        case 5: _t->on_stu_findclass_inforButton_clicked(); break;
        case 6: _t->on_stu_query_fee_Button_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject studentForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_studentForm.data,
      qt_meta_data_studentForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *studentForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *studentForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_studentForm.stringdata0))
        return static_cast<void*>(const_cast< studentForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int studentForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE