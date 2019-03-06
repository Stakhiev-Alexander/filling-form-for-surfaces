#-------------------------------------------------
#
# Project created by QtCreator 2018-10-14T22:05:45
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FillForm
TEMPLATE = app


SOURCES += main.cpp\
    mainwindow.cpp \
    dictionarysearch.cpp \
    elementarysurfacetab.cpp \
    blockstab.cpp \
    blockssubtab.cpp \
    addingnewelementarysurfacewindow.cpp \
    jsonInteractions.cpp

HEADERS  += mainwindow.h \
    dictionarysearch.hpp \
    elementarysurfacetab.hpp \
    blockstab.h \
    blockssubtab.hpp\
    addingnewelementarysurfacewindow.hpp \
    jsonInteractions.hpp

FORMS    += mainwindow.ui \
    dictionarysearch.ui \
    elementarysurfacetab.ui \
    blockstab.ui \
    groupstab.ui \
    blockssubtab.ui \
    addingnewelementarysurfacewindow.ui

QTDIR = C:\Qt\5.2.1

PATH=C:\Qt\5.2.1\mingw48_32\bin; C:\Qt\5.2.1\bin;%PATH%
