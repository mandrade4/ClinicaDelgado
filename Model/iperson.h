#ifndef IPERSON_H
#define IPERSON_H
#include "person.h"

class iPerson{
public:
    iPerson();
    virtual person* getpersonbyDNI(int dni)=0;
    virtual person* getpersonbyName(std::string name)=0;
};


#endif // IPERSON_H
