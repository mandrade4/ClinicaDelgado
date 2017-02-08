#include "diseasecontroller.h"

QList<Disease> diseaseController::getDiseases()
{
    iDisease *iDisease = new diseaseImpl();
    QList<Disease> diseases;
    std::vector<Disease>* stdDisease = iDisease->getDiseases();
    for(int i=0;i<stdDisease->size();i++){
        diseases.push_back(stdDisease->at()i);
    }
}
