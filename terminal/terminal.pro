TARGET = terminal
CONFIG += ordered
TEMPLATE = subdirs
VERSION = 1.1.3

SUBDIRS = src 

win32: LIBS += -L'C:/Program Files (x86)/MySQL/MySQL Connector C 6.1/lib/' -llibmysql

INCLUDEPATH += 'C:/Program Files (x86)/MySQL/MySQL Connector C 6.1/include'
DEPENDPATH += 'C:/Program Files (x86)/MySQL/MySQL Connector C 6.1/include'
