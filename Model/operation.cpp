#include "operation.h"


int Operation::getId_operation() const
{
    return id_operation;
}

void Operation::setId_operation(int value)
{
    id_operation = value;
}

std::string Operation::getDescription() const
{
    return description;
}

void Operation::setDescription(const std::string &value)
{
    description = value;
}

Operation::Operation()
{

}

Operation::~Operation()
{

}

std::string Operation::getType() const
{
    return type;
}

void Operation::setType(const std::string &value)
{
    type = value;
}

std::string Operation::getDate() const
{
    return date;
}

void Operation::setDate(const std::string &value)
{
    date = value;
}
