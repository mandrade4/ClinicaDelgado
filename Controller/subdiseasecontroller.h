#ifndef SUBDISEASECONTROLLER_H
#define SUBDISEASECONTROLLER_H



#include "Model/subdisease.h"
#include "Model/isubdisease.h"
#include "Model/subdiseaseimpl.h"
#include <QList>
class subDiseasesController
{
public:
    subDiseasesController();
    QList<subDisease> getsubDiseases();
};



#endif // SUBDISEASECONTROLLER_H
