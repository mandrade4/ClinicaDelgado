#include "allergyimpl.h"
#include <QSqlQuery>
#include <QDebug>

Allergy* AllergyImpl::getAllergybyId(int id_allergy)
{
    QSqlQuery query;
    bool ok = query.exec(QString("select * from tbl_allergy where tbl_allergy_id =")+QString::number(id_allergy));
    Allergy* allergy = new Allergy();
    while(query.next()){
        allergy->setId_allergy(query.value(0).toInt());
        allergy->setDescription(query.value(1).toString().toStdString());
    }
    return allergy;
}

std::vector<Allergy>* AllergyImpl::getAllergies()
{
    QSqlQuery query;
    bool ok = query.exec(QString("select * from tbl_allergy"));
    std::vector<Allergy>* allergies = new std::vector<Allergy>();
    while(query.next()){
        Allergy allergy;
        allergy.setId_allergy(query.value(0).toInt());
        allergy.setDescription(query.value(1).toString().toStdString());
        allergies->push_back(allergy);
    }
    return allergies;
}
