#ifndef IALLERGY_H
#define IALLERGY_H

#include <vector>
#include "allergy.h"

class IAllergy
{


public:
    IAllergy(){}
    virtual Allergy* getAllergybyId(int id_alergy) = 0;
    virtual std::vector<Allergy>* getAllergies() = 0 ;
};

#endif // IALLERGY_H
