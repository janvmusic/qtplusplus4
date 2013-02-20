#-------------------------------------------------
#
# Project created by QtCreator 2013-01-10T14:21:54
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = CppTest
CONFIG   += console
CONFIG   -= app_bundle
unix:LIBS   = -L../qcppunit -lqcppunit
INCLUDEPATH = ../qcppunit ../qcppunit/testlib
TEMPLATE = app


SOURCES += main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h


