#ifndef PERSONIMPL_H
#define PERSONIMPL_H

#include "iperson.h"
#include "View/registerpatient.h"
#include <QSqlDatabase>

namespace Ui {

class personImpl;

}


class personImpl : public iPerson{
    QSqlDatabase sqlObjectP;
public:
    Q_OBJECT
    personImpl();
    person* getpersonbyDNI(int dni);
    person* getpersonbyName(std::string name);
};


#endif // PERSONIMPL_H
