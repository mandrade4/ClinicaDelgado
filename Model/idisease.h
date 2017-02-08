#ifndef IOPERATION_H
#define IOPERATION_H

#include "disease.h"

class iDisease{
public:
    iDisease();
    virtual Disease* getdiseasebyID(int id)=0;
    virtual Disease* getdiseasebyNAME(std::string name)=0;
    virtual std::vector<Disease>* getDiseases() = 0;
};

#endif // IOPERATION_H
