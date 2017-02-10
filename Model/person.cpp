#include "person.h"

std::string person::getName() const
{
    return name;
}

void person::setName(const std::string &value)
{
name = value;
}

std::string person::getSurname() const
{
return surname;
}

void person::setSurname(const std::string &value)
{
surname = value;
}

void person::setId_roletype(int value)
{
id_roletype = value;
}

std::string person::getSex() const
{
return sex;
}

void person::setSex(const std::string &value)
{
sex = value;
}

int person::getPhone() const
{
return phone;
}

void person::setPhone(int value)
{
phone = value;
}

int person::getDni() const
{
return dni;
}

void person::setDni(int value)
{
dni = value;
}

std::string person::getCivilstate() const
{
return civilstate;
}

void person::setCivilstate(const std::string &value)
{
civilstate = value;
}

std::string person::getAddress() const
{
return address;
}

void person::setAddress(const std::string &value)
{
address = value;
}

person::person()
{

}

person::~person()
{

}

void person::setId_person(int value)
{
    id_person = value;
}
