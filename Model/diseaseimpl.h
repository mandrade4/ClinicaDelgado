#ifndef OPERATIONIMPL_H
#define OPERATIONIMPL_H

#include "idisease.h"
#include <QSqlDatabase>

class diseaseImpl : public iDisease{
    QSqlDatabase sqlObjectP;
public:
    diseaseImpl();
    Disease* getdiseasebyID(int id);
    Disease* getdiseasebyNAME(std::string name);
    std::vector<Disease> getDiseases();
};

#endif // OPERATIONIMPL_H
