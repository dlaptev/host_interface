#############################################################################
# Makefile for building: host_interface
# Generated by qmake (2.01a) (Qt 4.5.2) on: Tue Jul 21 18:35:35 2009
# Project:  host_interface.pro
# Template: app
# Command: /usr/bin/qmake -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile host_interface.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_SVG_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtSvg -I/usr/include/qt4 -I.
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS)  -L/usr/lib/qt4 -lQtSvg -L/usr/lib/qt4 -L/usr/X11R6/lib -pthread -pthread -pthread -pthread -pthread -pthread -pthread -pthread -lQtGui -pthread -lpng -lfreetype -lSM -lICE -pthread -pthread -lXrender -lXrandr -lfontconfig -lXext -lX11 -lQtCore -lz -lm -pthread -lgthread-2.0 -lrt -lglib-2.0 -ldl -lpthread
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		qtsvgbutton.cpp \
		qt_hostview.cpp \
		terminal_manager.cpp \
		terminal_interface.cpp \
		interface_view.cpp moc_qtsvgbutton.cpp \
		moc_interface_view.cpp
OBJECTS       = main.o \
		qtsvgbutton.o \
		qt_hostview.o \
		terminal_manager.o \
		terminal_interface.o \
		interface_view.o \
		moc_qtsvgbutton.o \
		moc_interface_view.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		host_interface.pro
QMAKE_TARGET  = host_interface
DESTDIR       = 
TARGET        = host_interface

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: host_interface.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/qt4/libQtSvg.prl \
		/usr/lib/qt4/libQtGui.prl \
		/usr/lib/qt4/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile host_interface.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/qt4/libQtSvg.prl:
/usr/lib/qt4/libQtGui.prl:
/usr/lib/qt4/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile host_interface.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/host_interface1.0.0 || $(MKDIR) .tmp/host_interface1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/host_interface1.0.0/ && $(COPY_FILE) --parents qtsvgbutton.h qt_hostview.h terminal_manager.h terminal_interface.h interface_view.h .tmp/host_interface1.0.0/ && $(COPY_FILE) --parents main.cpp qtsvgbutton.cpp qt_hostview.cpp terminal_manager.cpp terminal_interface.cpp interface_view.cpp .tmp/host_interface1.0.0/ && (cd `dirname .tmp/host_interface1.0.0` && $(TAR) host_interface1.0.0.tar host_interface1.0.0 && $(COMPRESS) host_interface1.0.0.tar) && $(MOVE) `dirname .tmp/host_interface1.0.0`/host_interface1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/host_interface1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_qtsvgbutton.cpp moc_interface_view.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_qtsvgbutton.cpp moc_interface_view.cpp
moc_qtsvgbutton.cpp: qtsvgbutton.h
	/usr/bin/moc $(DEFINES) $(INCPATH) qtsvgbutton.h -o moc_qtsvgbutton.cpp

moc_interface_view.cpp: interface_view.h
	/usr/bin/moc $(DEFINES) $(INCPATH) interface_view.h -o moc_interface_view.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

main.o: main.cpp mainwindow.h \
		qtsvgbutton.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

qtsvgbutton.o: qtsvgbutton.cpp qtsvgbutton.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qtsvgbutton.o qtsvgbutton.cpp

qt_hostview.o: qt_hostview.cpp qt_hostview.h \
		qtsvgbutton.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qt_hostview.o qt_hostview.cpp

terminal_manager.o: terminal_manager.cpp terminal_manager.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o terminal_manager.o terminal_manager.cpp

terminal_interface.o: terminal_interface.cpp terminal_interface.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o terminal_interface.o terminal_interface.cpp

interface_view.o: interface_view.cpp interface_view.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o interface_view.o interface_view.cpp

moc_qtsvgbutton.o: moc_qtsvgbutton.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qtsvgbutton.o moc_qtsvgbutton.cpp

moc_interface_view.o: moc_interface_view.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_interface_view.o moc_interface_view.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

