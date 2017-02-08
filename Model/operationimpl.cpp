#include "operationImpl.h"
#include <QSqlQuery>
#include <QDebug>

Operation* OperationImpl::getOperationById(int id_operation)
{
    QSqlQuery query;
    bool ok = query.exec(QString("select * from tbl_operation where tbl_operation_id =")+QString::number(id_operation));
    Operation* operation = new Operation();
    while(query.next()){
        operation->setId_operation(query.value(0).toInt());
        operation->setDescription(query.value(1).toString().toStdString());
    }
    return operation;
}

std::vector<Operation>* OperationImpl::getOperations()
{
    QSqlQuery query;
    bool ok = query.exec(QString("select * from tbl_operation"));
    std::vector<Operation>* operations = new std::vector<Operation>();
    while(query.next()){
        Operation operation;
        operation.setId_operation(query.value(0).toInt());
        operation.setDescription(query.value(1).toString().toStdString());
        operations->push_back(operation);
    }
    return operations;
}
