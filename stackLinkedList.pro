TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += include

SOURCES += main.cpp \
    src/gtest-all.cc \
    stack.cpp

HEADERS += \
    stack.h \
    node.h
