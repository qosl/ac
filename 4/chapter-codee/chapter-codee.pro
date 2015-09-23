TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    student_info.cc \
    grade.cc \
    median.cc

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    student_info.h \
    grade.h \
    median.h

