#-------------------------------------------------
#
# Project created by QtCreator 2015-01-04T12:14:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Network
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    displayer.cpp \
    displayparam.cpp \
    paquet.cpp

HEADERS  += mainwindow.h \
    displayer.h \
    displayparam.h \
    paquet.h

FORMS    += mainwindow.ui
