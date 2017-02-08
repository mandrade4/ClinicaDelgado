#ifndef PERSON_H
#define PERSON_H
#include <string>
#endif // PERSON_H

class person{
private:
    int id_person;
    int id_roletype;
    std::string name;
    std::string surname;
    std::string sex;
    int phone;
    int dni;
    std::string civilstate;
    std::string address;
public:
    int getId_person();
    int getId_roletype();
    void setId_person(int value);
    std::string getName() const;
    void setName(const std::string &value);
    std::string getSurname() const;
    void setSurname(const std::string &value);
    void setId_roletype(int value);
    std::string getSex() const;
    void setSex(const std::string &value);
    int getPhone() const;
    void setPhone(int value);
    int getDni() const;
    void setDni(int value);
    std::string getCivilstate() const;
    void setCivilstate(const std::string &value);
    std::string getAddress() const;
    void setAddress(const std::string &value);
};

