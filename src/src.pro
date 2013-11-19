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
    ../ui/bluebar.cpp

# libraries
DEPENDPATH  += ../../ndlite/c++/src
INCLUDEPATH += ../../ndlite/c++/src
INCLUDEPATH += ../../ndlite/c++/bin
INCLUDEPATH += ../../ndlite/c++
LIBS += -L ../../ndlite/c++/bin -lndlite

HEADERS += \
    ../ui/bluebar.h

FORMS += \
    ../ui/bluebar.ui \
    ../ui/test.ui \
    ../ui/userlogin.ui \
    ../ui/jobForm.ui \
    ../ui/workorderForm.ui \
    ../ui/workorderViewForm.ui

OTHER_FILES += \
    icons.rc

RESOURCES += \
    resources.qrc
