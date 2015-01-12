#-------------------------------------------------
#
# Project created by QtCreator 2015-01-12T20:21:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT += dbus

TARGET = DBusMenuPlayground
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

INCLUDEPATH += /usr/include/dbusmenu-qt


QMAKE_CXXFLAGS += -std=c++11

FORMS    += mainwindow.ui
unix: LIBS += -ldbusmenu-qt

DISTFILES +=
