######################################################################
# Automatically generated by qmake (2.01a) Thu Feb 7 21:00:26 2008
######################################################################

TEMPLATE = lib 
TARGET = ../bin/lidarconverter
DEPENDPATH += .
INCLUDEPATH += . /usr/include/hdf

LIBS += -lmfhdf
# Input
HEADERS += common.h \
	   datasource.h \
	   helper.h \
	   segment.h \
	   calipsol1datasource.h
SOURCES += datasource.cpp \
	   helper.cpp \
	   segment.cpp \
	   common.cpp \
	   calipsol1datasource.cpp
