#include "subdiseasecontroller.h"

subDiseasesController::subDiseasesController()
{

}

QList<subDisease> subDiseasesController::getsubDiseases()
{
    isubDisease *iSubDisease= new subdiseaseImpl();
    QList<subDisease> SubDiseases;
    std::vector<subDisease>* stdSubDiseases = iSubDisease->getSubDiseases();
    for(int i=0;i<stdSubDiseases->size();i++){
        SubDiseases.push_back(stdSubDiseases->at(i));
    }
    return SubDiseases;

}
