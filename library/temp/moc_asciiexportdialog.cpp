/****************************************************************************
** Meta object code from reading C++ file 'asciiexportdialog.h'
**
** Created: Mon Jan 17 10:52:49 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../asciiexportdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'asciiexportdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ASCIIExportDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      49,   18,   18,   18, 0x0a,
      79,   73,   18,   18, 0x0a,
     108,   73,   18,   18, 0x0a,
     136,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ASCIIExportDialog[] = {
    "ASCIIExportDialog\0\0on_filePath_editingFinished()\0"
    "on_selectFile_clicked()\0value\0"
    "on_tabSize_valueChanged(int)\0"
    "on_pgCols_valueChanged(int)\0updateReport()\0"
};

const QMetaObject ASCIIExportDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ASCIIExportDialog,
      qt_meta_data_ASCIIExportDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ASCIIExportDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ASCIIExportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ASCIIExportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ASCIIExportDialog))
        return static_cast<void*>(const_cast< ASCIIExportDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ASCIIExportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_filePath_editingFinished(); break;
        case 1: on_selectFile_clicked(); break;
        case 2: on_tabSize_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_pgCols_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: updateReport(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
