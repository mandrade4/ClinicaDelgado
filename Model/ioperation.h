#ifndef IOPERATION_H
#define IOPERATION_H

#include <vector>
#include "operation.h"

class Ioperation
{


public:
    Ioperation(){}
    virtual Operation* getOperationById(int id_operation)=0;
    virtual std::vector<Operation>* getOperations() = 0;
};

#endif // IOPERATION_H
