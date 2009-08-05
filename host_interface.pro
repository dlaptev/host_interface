# -------------------------------------------------
# Project created by QtCreator 2009-07-05T18:48:16
# -------------------------------------------------
TARGET = host_interface
TEMPLATE = app subdirs
SUBDIRS = mysql
SOURCES += main.cpp \
	qtsvgbutton.cpp \
	terminal_manager.cpp \
	terminal_interface.cpp \
	interface_view.cpp \
	second_view.cpp \
	first_view.cpp \
	help_view.cpp \
	mysql/db_manager.cpp
QT += svg
QT += webkit
QT += sql
HEADERS += qtsvgbutton.h \
	terminal_manager.h \
	terminal_interface.h \
	interface_view.h \
	second_view.h \
	first_view.h \
	help_view.h \
	mysql/db_manager.h
