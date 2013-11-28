#Includes common configuration for all subdirectory .pro files.
INCLUDEPATH += . ..
DEPENDPATH += . ..
WARNINGS += -Wall

# libraries
DEPENDPATH  += ../../ndlite/cplusplus/src
INCLUDEPATH += ../../ndlite/cplusplus/src
INCLUDEPATH += ../../ndlite/cplusplus/bin
INCLUDEPATH += ../../ndlite/cplusplus
LIBS += -L ../../ndlite/cplusplus/bin -lndlite

# The following keeps the generated files at least somewhat separate
# from the source files.
UI_DIR = ../uics
MOC_DIR = ../mocs
OBJECTS_DIR = ../objs
