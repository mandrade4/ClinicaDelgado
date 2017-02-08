#ifndef DISEASECONTROLLER_H
#define DISEASECONTROLLER_H

#include "Model/disease.h"
#include "Model/idisease.h"
#include "Model/diseaseimpl.h"
#include <QList>


class diseaseController{
public:
    diseaseController();
    QList<Disease> getDiseases();
};

#endif // DISEASECONTROLLER_H
