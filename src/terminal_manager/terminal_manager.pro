TEMPLATE = app
TARGET = terminal_manager
DESTDIR = ../../
INCLUDEPATH += .

include (../qtsvgbutton/qtsvgbutton.pro)
include (../terminal_interface/terminal_interface.pro)

SOURCES += main.cpp
#HEADERS += $$PWD/terminal_manager.h

CONFIG += debug
CONFIG += release

QT += sql
#HEADERS += terminal_manager.h
#SOURCES += $$PWD/main.cpp #termnal_manager.cpp
