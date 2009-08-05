TEMPLATE = app 
INCLUDEPATH += . 

include (../qtsvgbutton/qtsvgbutton.pro) 

CONFIG += debug 

HEADERS += 	first_view.h \ 
		second_view.h \
		help_view.h \
		interface_view.h \
		interface_view.h

SOURCES += 	first_view.cpp \
		help_view.cpp 
		interface_view.cpp \
		second_view.cpp \
		terminal_interface.cpp
