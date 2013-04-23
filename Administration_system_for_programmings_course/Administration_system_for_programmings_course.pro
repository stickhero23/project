#-------------------------------------------------
#
# Project created by QtCreator 2013-04-22T18:22:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Administration_system_for_programmings_course
TEMPLATE = app


SOURCES += main.cpp\
        courseadminwindow.cpp \
    ../person.cpp \
    course.cpp \
    ../student.cpp \
    ../course.cpp \
    teacher.cpp \
    ../teacher.cpp \
    ../../assignment.cpp \
    ../assignment.cpp \
    ../answer.cpp \
    ../register.cpp

HEADERS  += courseadminwindow.h \
    ../person.h \
    course.h \
    ../student.h \
    ../course.h \
    ../teacher.h \
    ../../assignment.h \
    ../../assignment.h \
    ../assignment.h \
    ../answer.h \
    ../register.h

FORMS    += courseadminwindow.ui
