TEMPLATE = app
TARGET = UITutorial

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    secondwindow.cpp \
    window.cpp

HEADERS += \
    secondwindow.h \
    window.h
