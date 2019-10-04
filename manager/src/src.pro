#-------------------------------------------------
#
# Project created by QtCreator 2012-07-23T13:34:16
#
#-------------------------------------------------

QT       += core gui sql network widgets printsupport

TARGET = BlueSystemManager
TEMPLATE = app
DESTDIR = ../../bin

MOC_DIR = ../obj
OBJECTS_DIR = ../obj

DEPENDPATH  += ../../orm/
INCLUDEPATH += ../../orm/
INCLUDEPATH += ../../orm/bin
INCLUDEPATH += ../../terminal/src

LIBS += -L ../../bin -lnd

CONFIG += ordered thread c++11

SOURCES += main.cpp\
        mainwindow.cpp\
        ../../terminal/src/user.cpp\
        ../../terminal/src/folder.cpp\
        ../../terminal/src/business.cpp\
        ../../terminal/src/books.cpp\
        ../../terminal/src/client.cpp\
        ../../terminal/src/job.cpp\
        ../../terminal/src/workorder.cpp\
        ../../terminal/src/workorder_pages.cpp\
        ../../terminal/src/anillado.cpp\
        ../../terminal/src/userlog.cpp\
        ../../terminal/src/configmanager.cpp\
        wanillado.cpp\
    wbusiness.cpp \
    wbusinessbrowse.cpp \
    ../../terminal/src/logindialog.cpp \
    ../../terminal/src/wbooks.cpp\
    ../../terminal/src/printobject.cpp\
    wuser.cpp \
    wuserbrowse.cpp \
    wbooksbrowser.cpp \
    wworksbrowser.cpp \
    wuserlogbrowser.cpp \
    wbackups.cpp \
    wbackupdialog.cpp \
    woptiondialog.cpp



HEADERS  += mainwindow.h\
        ../../terminal/src/user.h\
        ../../terminal/src/business.h\
        ../../terminal/src/folder.h\
        ../../terminal/src/books.h\
        ../../terminal/src/client.h\
        ../../terminal/src/job.h\
        ../../terminal/src/workorder.h\
        ../../terminal/src/workorder_pages.h\
        ../../terminal/src/anillado.h\
        ../../terminal/src/userlog.h\
        ../../terminal/src/configmanager.h\
        wanillado.h\
    wbusiness.h \
    wbusinessbrowse.h \
    ../../terminal/src/logindialog.h \
    ../../terminal/src/wbooks.h\
    ../../terminal/src/printobject.h\
    version.h \
    wuser.h \
    wuserbrowse.h \
    wbooksbrowser.h \
    wworksbrowser.h \
    wuserlogbrowser.h \
    wbackups.h \
    wbackupdialog.h \
    woptiondialog.h


FORMS    += mainwindow.ui \
    wbusiness.ui \
    wbusinessbrowse.ui\
    ../../terminal/src/logindialog.ui \
    ../../terminal/src/wbooks.ui\
    wanillado.ui\
    wuser.ui \
    wuserbrowse.ui \
    wbooksbrowser.ui \
    wworksbrowser.ui \
    wuserlogbrowser.ui \
    wbackups.ui \
    wbackupdialog.ui \
    woptiondialog.ui

RESOURCES += ../../terminal/src/resources.qrc
RC_FILE = icons.rc
OTHER_FILES += \
    ToDo.txt
