#include "allergycontroller.h"

AllergyController::AllergyController()
{

}

QList<Allergy> AllergyController::getAllergies(){//todas las alergias
    IAllergy *iAllergy = new AllergyImpl();
    QList<Allergy> allergies;
    std::vector<Allergy>* stdAllergies = iAllergy->getAllergies();
    for(int i=0;i<stdAllergies->size();i++){
        allergies.push_back(stdAllergies->at(i));
    }
    return allergies;
}
