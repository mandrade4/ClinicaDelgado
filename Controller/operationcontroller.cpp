#include "operationcontroller.h"

QList<Operation> operationController::getOperations(){
    Ioperation *iOperation = new OperationImpl();
    QList<Operation> operations;
    std::vector<Operation>* stdOperations = iOperation->getOperations();
    for(int i=0;i<stdOperations->size();i++){
        operations.push_back(stdOperations->at(i));
    }
    return operations;
}
