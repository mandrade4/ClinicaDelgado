#ifndef PERSONIMPL_H
#define PERSONIMPL_H

#include "iperson.h"
#include <QSqlDatabase>

class personImpl : public iPerson{
    QSqlDatabase sqlObjectP;
public:
    personImpl();
    person* getpersonbyDNI(int dni);
    person* getpersonbyName(std::string name);
};


#endif // PERSONIMPL_H
