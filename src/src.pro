#Includes common configuration for all subdirectory .pro files.
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
    bluebar.cpp \
    manager.cpp

# libraries
DEPENDPATH  += ../../ndlite/c++/src
INCLUDEPATH += ../../ndlite/c++/src
INCLUDEPATH += ../../ndlite/c++/bin
INCLUDEPATH += ../../ndlite/c++
LIBS += -L ../../ndlite/c++/bin -lndlite

HEADERS += \
    bluebar.h \
    manager.h

FORMS += \
    ../ui/bluebar.ui \
    ../ui/test.ui \
    ../ui/userlogin.ui \
    ../ui/jobForm.ui \
    ../ui/workorderForm.ui \
    ../ui/workorderViewForm.ui \
    ../ui/queryItemWidget.ui \
    ../ui/queryGeneratorForm.ui \
    ../ui/searchWidget.ui

OTHER_FILES += \
    icons.rc

RESOURCES += \
    resources.qrc
