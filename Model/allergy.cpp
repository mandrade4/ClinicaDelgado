#include "allergy.h"

int Allergy::getId_allergy() const
{
    return id_allergy;
}

void Allergy::setId_allergy(int value)
{
    id_allergy = value;
}

std::string Allergy::getDescription() const
{
    return description;
}

void Allergy::setDescription(const std::string &value)
{
    description = value;
}

Allergy::Allergy()
{

}

Allergy::~Allergy(){

}
