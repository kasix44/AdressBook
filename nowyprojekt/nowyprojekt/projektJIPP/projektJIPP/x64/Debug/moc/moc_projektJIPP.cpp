/****************************************************************************
** Meta object code from reading C++ file 'projektJIPP.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../projektJIPP.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projektJIPP.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSprojektJIPPENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSprojektJIPPENDCLASS = QtMocHelpers::stringData(
    "projektJIPP",
    "wyswietlMainWindow",
    "",
    "wyswietlManageWindow",
    "wyswietlViewWindow",
    "sortujListeStudentow",
    "wyszukajStudentaPoDanych",
    "aktualizujListeStudentow",
    "std::vector<Student>",
    "studenci",
    "on_dodajButton_clicked",
    "on_saveButton_clicked",
    "on_removeButton_clicked",
    "policzElementyKolejki"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSprojektJIPPENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    0,   84,    2, 0x08,    5 /* Private */,
       7,    0,   85,    2, 0x08,    6 /* Private */,
       7,    1,   86,    2, 0x08,    7 /* Private */,
      10,    0,   89,    2, 0x08,    9 /* Private */,
      11,    0,   90,    2, 0x08,   10 /* Private */,
      12,    0,   91,    2, 0x08,   11 /* Private */,
      13,    0,   92,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject projektJIPP::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSprojektJIPPENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSprojektJIPPENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSprojektJIPPENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<projektJIPP, std::true_type>,
        // method 'wyswietlMainWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wyswietlManageWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wyswietlViewWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sortujListeStudentow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wyszukajStudentaPoDanych'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aktualizujListeStudentow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aktualizujListeStudentow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<Student> &, std::false_type>,
        // method 'on_dodajButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_removeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'policzElementyKolejki'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void projektJIPP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<projektJIPP *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->wyswietlMainWindow(); break;
        case 1: _t->wyswietlManageWindow(); break;
        case 2: _t->wyswietlViewWindow(); break;
        case 3: _t->sortujListeStudentow(); break;
        case 4: _t->wyszukajStudentaPoDanych(); break;
        case 5: _t->aktualizujListeStudentow(); break;
        case 6: _t->aktualizujListeStudentow((*reinterpret_cast< std::add_pointer_t<std::vector<Student>>>(_a[1]))); break;
        case 7: _t->on_dodajButton_clicked(); break;
        case 8: _t->on_saveButton_clicked(); break;
        case 9: _t->on_removeButton_clicked(); break;
        case 10: _t->policzElementyKolejki(); break;
        default: ;
        }
    }
}

const QMetaObject *projektJIPP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *projektJIPP::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSprojektJIPPENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int projektJIPP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
