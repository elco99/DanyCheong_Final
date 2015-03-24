#-------------------------------------------------
#
# Project created by QtCreator 2015-03-21T21:33:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Final
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    agua.cpp \
    aire.cpp \
    tierra.cpp \
    transporte.cpp \
    transport.cpp \
    agregar.cpp \
    modificar.cpp \
    eliminar.cpp \
    trip.cpp \
    viaje.cpp \
    cambio.cpp \
    report.cpp

HEADERS  += mainwindow.h \
    agua.h \
    aire.h \
    tierra.h \
    transporte.h \
    transport.h \
    agregar.h \
    modificar.h \
    eliminar.h \
    trip.h \
    viaje.h \
    cambio.h \
    report.h

FORMS    += mainwindow.ui \
    transport.ui \
    agregar.ui \
    modificar.ui \
    eliminar.ui \
    trip.ui \
    cambio.ui \
    report.ui

RESOURCES += \
    images.qrc
