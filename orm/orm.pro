#-------------------------------------------------
#
# Project created by QtCreator 2012-05-11T00:10:09
#
#-------------------------------------------------

QT       += core sql
QT       -= gui
TARGET = nd
DESTDIR = ../bin
#-Wl,--enable-auto-import
TEMPLATE = lib

CONFIG += orderer thread c++11

DEFINES += ND_LIBRARY

MOC_DIR = obj
OBJECTS_DIR = obj

SOURCES +=\
    interface.cpp \
    neodymium.cpp \
    object.cpp \
    connection.cpp \
    config.cpp \
    logger.cpp \
    db.cpp \
    utils.cpp \
    queryresult.cpp

HEADERS  += neodymium.h \
    interface.h \ 
    object.h \
    connection.h \
    config.h \
    logger.h \
    db.h \
    utils.h \
    relation.h \
    queryresult.h \
    nd_global.h

#QMAKE_LFLAGS += -Xlinker -Bstatic
