#Includes common configuration for all subdirectory .pro files.
INCLUDEPATH += . ..
DEPENDPATH += . ..
WARNINGS += -Wall

# The following keeps the generated files at least somewhat separate
# from the source files.
UI_DIR = ../uics
MOC_DIR = ../mocs
OBJECTS_DIR = ../objs

# basic conf
QT += network script widgets

# app data
TARGET = bluesystem
CONFIG += thread
CONFIG += c++11
TEMPLATE = app

# path organization
DESTDIR = ../bin

# files
SOURCES += \
    main.cpp \
    uimanagementmain.cpp \
    uiterminalmain.cpp \
    uiuserlogin.cpp \
    ajax.cpp \
    global_scope.cpp \
    uiuserpanel.cpp \
    uijobwidget.cpp \
    uibookwidget.cpp \
    uiworkordertab.cpp

HEADERS += \
    bluesystemapp.h \
    jsonmodelview.h \
    uimanagementmain.h \
    uiterminalmain.h \
    uiuserlogin.h \
    ajax.h \
    global_scope.h \
    uiuserpanel.h \
    uijobwidget.h \
    uibookwidget.h \
    uiworkordertab.h \
    getset.h

SOURCES += \
    bluesystemapp.cpp \
    jsonmodelview.cpp \

FORMS += \
    wuserpanel.ui \
    logindialog.ui \
    terminal.ui \
    wjob.ui \
    wbookswidget.ui \
    wworkorder.ui \
    wworkorder_pages.ui \
    manager.ui

OTHER_FILES += \
    icons.rc

RESOURCES += \
    resources.qrc


