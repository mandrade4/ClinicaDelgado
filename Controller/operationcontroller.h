#ifndef OPERATIONCONTROLLER_H
#define OPERATIONCONTROLLER_H

#include "Model/operation.h"
#include "Model/ioperation.h"
#include "Model/operationImpl.h"
#include <QList>

class operationController{
public:
    operationController();
    QList<Operation> getOperations();
};

#endif // OPERATIONCONTROLLER_H
