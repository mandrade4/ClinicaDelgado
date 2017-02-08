//#ifndef ISUBDISEASE_H
//#define ISUBDISEASE_H

//#include "subDisease.h"
//#include "disease.h"

//class isubDisease{
//public:
//    isubDisease();
//    virtual Disease* getdiseasebyID_subdisease(int id)=0; //se obtiene desde disease
//    //virtual subDisease getsubdiseasebyID(int id)=0;
//    virtual subDisease* getsubdiseasebyNAME(std::string name)=0;
//};

//#endif // ISUBDISEASE_H

#ifndef ISUBDISEASE_H
#define ISUBDISEASE_H
#include <vector>

#include "subDisease.h"
#include "disease.h"

class isubDisease{
public:
    isubDisease();
    virtual Disease* getdiseasebyID_subdisease(int id)=0; //se obtiene desde disease
    //virtual subDisease getsubdiseasebyID(int id)=0;
    virtual subDisease* getsubdiseasebyNAME(std::string name)=0;

    virtual std::vector<subDisease>* getSubDiseases()= 0;
};

#endif // ISUBDISEASE_H
