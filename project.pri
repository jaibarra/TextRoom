TOPDIR = $${PWD}
UI_DIR = $$TOPDIR/uic 
MOC_DIR = $$TOPDIR/moc  
RCC_DIR = $$TOPDIR/rcc
 
TEMPLATE = app
TARGET = textroom

INCLUDEPATH += $$TOPDIR/library \
	$$TOPDIR/library/qmodeladaptor \
	$$TOPDIR/library/qdomutils \
	$$TOPDIR/library/extra/creole \
	$$TOPDIR/library/sxfile \
	$$TOPDIR/application/src/include \
	$$TOPDIR/application/src \
	$$TOPDIR/application/usr/include \
	$$TOPDIR/application/usr/include/hunspell \
	$$TOPDIR/application/usr/include/SDL

CONFIG += release depend_includepath warn_on
win32:CONFIG += windows
QT += svg

release{
    OBJECTS_DIR = obj-release 
}

debug{
    OBJECTS_DIR = obj-debug
}

BIN_DIR = $$TOPDIR
LIB_DIR = $$TOPDIR/lib
LIBS += -L$${PWD}/lib


