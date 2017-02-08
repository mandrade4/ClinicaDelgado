#ifndef ALLERGYIMPL_H
#define ALLERGYIMPL_H

#include "iallergy.h"
#include <QSqlDatabase>

class AllergyImpl : public IAllergy
{
    QSqlDatabase sqlObject;
public:
    AllergyImpl(){}
    Allergy* getAllergybyId(int id_alergy);
    std::vector<Allergy>* getAllergies();
};

#endif // ALLERGYIMPL_H
