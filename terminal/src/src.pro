#-------------------------------------------------
#
# Project created by QtCreator 2012-05-24T16:26:57
#
#-------------------------------------------------

QT       += core gui sql network widgets printsupport

TARGET = BlueSystem
DESTDIR = ../bin
TEMPLATE = app

MOC_DIR = ../obj
OBJECTS_DIR = ../obj

DEPENDPATH += ../../../Neodymium/
INCLUDEPATH += ../../../Neodymium/

#win32:LIBS += -L $$PWD/../../../Neodymium/bin/ -lnd
LIBS += -L"D:/dev/from backup/Neodymium/bin" -lnd
#LIBS += -L "../../Neodymium/bin/libnd.a"

CONFIG += ordered thread

SOURCES += main.cpp\
        mainwidget.cpp\
    business.cpp \
    user.cpp \
    workorder.cpp \
    workorder_pages.cpp \
    client.cpp \
    job.cpp \
    wjob.cpp \
    wworkorder.cpp \
    wuserpanel.cpp \
    books.cpp \
    wbooks.cpp \
    wbookswidget.cpp \
    logindialog.cpp \
    shortlogindialog.cpp \
    wworkorder_pages.cpp \
    printobject.cpp \
    userlog.cpp \
    wlist.cpp \
    wlistworkorder.cpp \
    wlistlista.cpp \
    wlistclient.cpp \
    woptions.cpp \
    wseachjob.cpp \
    anillado.cpp \
    wuserlist.cpp \
    userstamp.cpp \
    folder.cpp \
    log.cpp \
    workorderlist.cpp \
    bookslist.cpp \
    wworklist.cpp \
    wworkbooklist.cpp \
    syncthread.cpp \
    configmanager.cpp

HEADERS  += mainwidget.h\            
    business.h \
    user.h \
    workorder.h \
    workorder_pages.h \
    client.h \
    job.h \
    version.h \
    wjob.h \
    wworkorder.h \
    wuserpanel.h \
    books.h \
    wbooks.h \
    wbookswidget.h \
    logindialog.h \
    shortlogindialog.h \
    wworkorder_pages.h \
    printobject.h \
    userlog.h \
    wlist.h \
    wlistworkorder.h \
    wlistlista.h \
    wlistclient.h \
    woptions.h \
    wseachjob.h \
    anillado.h \
    wuserlist.h \
    userstamp.h \
    folder.h \
    log.h \
    workorderlist.h \
    bookslist.h \
    wworklist.h \
    wworkbooklist.h \
    syncthread.h \
    configmanager.h

FORMS    += mainwidget.ui \
    wjob.ui \
    wworkorder.ui \
    wuserpanel.ui \
    wbooks.ui \
    wbookswidget.ui \
    logindialog.ui \
    shortlogindialog.ui \
    wworkorder_pages.ui \
    pworkorder.ui \
    piworkorder.ui \
    wlist.ui \
    wlistworkorder.ui \
    woptions.ui \
    wseachjob.ui \
    wuserlist.ui \
    plist.ui \
    pmodellist.ui \
    wworklist.ui \
    wworkbooklist.ui

RESOURCES += \
    resources.qrc
RC_FILE = icons.rc
OTHER_FILES += \
    todo.txt
