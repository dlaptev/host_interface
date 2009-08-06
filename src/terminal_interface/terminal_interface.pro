INCLUDEPATH += $$PWD

HEADERS += 	$$PWD/first_view.h \
		$$PWD/second_view.h \
		$$PWD/help_view.h \
		$$PWD/interface_view.h \
		$$PWD/terminal_interface.h


SOURCES += 	$$PWD/first_view.cpp \
		$$PWD/help_view.cpp \
		$$PWD/interface_view.cpp \
		$$PWD/second_view.cpp \
		$$PWD/terminal_interface.cpp

QT += svg
QT += webkit

