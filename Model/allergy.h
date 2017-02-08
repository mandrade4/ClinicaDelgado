#ifndef ALLERGY_H
#define ALLERGY_H

#include <string>

class Allergy
{
private:
    int id_allergy;
    std::string description;
public:
    Allergy();
    ~Allergy();

    int getId_allergy() const;
    void setId_allergy(int value);
    std::string getDescription() const;
    void setDescription(const std::string &value);
};

#endif // ALLERGY_H
