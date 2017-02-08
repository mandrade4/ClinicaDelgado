#ifndef OPERATON_H
#define OPERATON_H

#include <string>

class Disease
{
private:
    int id_disease;
    std::string name;
    std::string description;
public:
    Disease();
    ~Disease();



    int getId_disease() const;
    void setId_disease(int value);
    std::string getName() const;
    void setName(const std::string &value);
    std::string getDescription() const;
    void setDescription(const std::string &value);
};

#endif // OPERATON_H


