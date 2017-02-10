#ifndef PERSONCONTROLLER_H
#define PERSONCONTROLLER_H

#include "Model/person.h"
#include "Model/iperson.h"
#include "Model/personimpl.h"
#include <QList>
class personController
{
public:
    personController();
   // QList<person> getPersonsDNI();//todas las personas por dni
    QList<person> getPersonsNAME();//todas las personas por nombre
    void insertPerson();
};

#endif // PERSONCONTROLLER_H
