#include "disease.h"

int Disease::getId_disease() const
{
    return id_disease;
}

void Disease::setId_disease(const int value){
    id_disease = value;
}

std::string Disease::getName() const
{
    return name;
}

void Disease::setName(const std::string &value)
{
    name = value;
}

std::string Disease::getDescription() const
{
    return description;
}

void Disease::setDescription(const std::string &value)
{
    description = value;
}
