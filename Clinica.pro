#-------------------------------------------------
#
# Project created by QtCreator 2017-02-05T18:19:36
#
#-------------------------------------------------

QT       += core gui sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Clinica
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        View/clinica.cpp \
        Model/allergy.cpp \
    Model/allergyimpl.cpp \
    Controller/allergycontroller.cpp \
    Model/person.cpp \
    Model/personimpl.cpp \
    Controller/personcontroller.cpp \
    Model/disease.cpp \
    Model/diseaseimpl.cpp \
    Model/subdisease.cpp \
    Model/subdiseaseimpl.cpp \
    Model/operation.cpp \
    Model/operationimpl.cpp \
    Controller/operationcontroller.cpp \
    Controller/diseasecontroller.cpp \
    E:/Nueva carpeta/subdiseasescontroller.cpp \
    Controller/subdiseasecontroller.cpp

HEADERS  += clinica.h \
        View/clinica.h \
        Model/allergy.h \
        Model/iallergy.h \
    Model/allergyimpl.h \
    Controller/allergycontroller.h \
    Model/person.h \
    Model/iperson.h \
    Model/personimpl.h \
    Controller/personcontroller.h \
    Model/disease.h \
    Model/idisease.h \
    Model/diseaseimpl.h \
    Model/subdisease.h \
    Model/isubdisease.h \
    Model/subdiseaseimpl.h \
    Model/ioperation.h \
    Model/operation.h \
    Model/operationImpl.h \
    Controller/operationcontroller.h \
    Controller/diseasecontroller.h \
    Controller/subdiseasecontroller.h

FORMS    += View/clinica.ui
