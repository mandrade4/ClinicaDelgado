//#ifndef SUBDISEASEIMPL_H
//#define SUBDISEASEIMPL_H

//#include "isubdisease.h"
//#include <QSqlDatabase>

//class subdiseaseImpl : public isubDisease{
//    QSqlDatabase sqlObjectP;
//public:
//    subdiseaseImpl();
//    Disease* getdiseasebyID_subdisease(int id);
//   // subDisease* getsubdiseasebyID(int id);
//    subDisease* getsubdiseasebyNAME(std::string name);
//};

//#endif // SUBDISEASEIMPL_H

#ifndef SUBDISEASEIMPL_H
#define SUBDISEASEIMPL_H

#include "isubdisease.h"
#include <QSqlDatabase>

class subdiseaseImpl : public isubDisease{
    QSqlDatabase sqlObjectP;
public:
    subdiseaseImpl();
    Disease* getdiseasebyID_subdisease(int id);
    subDisease* getsubdiseasebyID(int id);
    subDisease* getsubdiseasebyNAME(std::string name);
    std::vector<subDisease>* getSubDiseases();

};

#endif // SUBDISEASEIMPL_H
