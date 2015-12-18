#-------------------------------------------------
#
# Project created by QtCreator 2015-12-18T11:19:05
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = KakulaGpio
TEMPLATE = app


SOURCES += main.cpp\
        kakulagpio.cpp \
    gong.cpp \
    GPIOClass.cpp

HEADERS  += kakulagpio.h \
    gong.h \
    GPIOClass.h

FORMS    += kakulagpio.ui
