TEMPLATE = app 
INCLUDEPATH += . 

include (../qtsvgbutton.pro) 
include (../terminal_interface.pro) 

CONFIG += debug 
CONFIG += release 

HEADERS += terminal_manager.h
SOURCES += main.cpp termnal_manager.cpp
