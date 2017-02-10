#ifndef ALLERGYIMPL_H
#define ALLERGYIMPL_H

#include "iallergy.h"
#include <QSqlQueryModel>
#include <QSqlDatabase>



class AllergyImpl : public IAllergy
{
    QSqlDatabase sqlObject;
public:

    AllergyImpl(){}
    Allergy* getAllergybyId(int id_alergy);
    std::vector<Allergy>* getAllergies();
    void insertAllergy(QString nuevaAlergia);
};

#endif // ALLERGYIMPL_H
