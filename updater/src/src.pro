#-------------------------------------------------
#
# Project created by QtCreator 2012-09-11T13:39:33
#
#-------------------------------------------------

QT       += core gui network

TARGET = BlueUpdater

DESTDIR = ../bin
TEMPLATE = app

MOC_DIR = ../obj
OBJECTS_DIR = ../obj

SOURCES += main.cpp\
        widget.cpp \
    httpget.cpp

HEADERS  += widget.h \
    VERSION.h \
    httpget.h

RESOURCES += \
    ../../terminal/src/resources.qrc

FORMS    += widget.ui


INCLUDEPATH += ..\..\libs\qjson-qjson\src
LIBS += -L..\..\libs\qjson-qjson\lib -lqjson

LANG=es_ES

OTHER_FILES += \
    ToDo.txt
