#ifndef ALLERGYCONTROLLER_H
#define ALLERGYCONTROLLER_H

#include "Model/allergy.h"
#include "Model/iallergy.h"
#include "Model/allergyimpl.h"
#include <QList>
class AllergyController
{
public:
    AllergyController();
    QList<Allergy> getAllergies();
    Allergy setAllergy();
};

#endif // ALLERGYCONTROLLER_H
