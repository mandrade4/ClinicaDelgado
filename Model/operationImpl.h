#ifndef OPERATIONIMPL_H
#define OPERATIONIMPL_H

#include "ioperation.h"
#include <QSqlDatabase>

class OperationImpl : public Ioperation
{
    QSqlDatabase sqlObject;
public:
    OperationImpl(){}
    Operation* getOperationById(int id_operation);
    std::vector<Operation>* getOperations();
};

#endif // OPERATIONIMPL_H
