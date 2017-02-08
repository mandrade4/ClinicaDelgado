//#ifndef SUBDISEASE_H
//#define SUBDISEASE_H

//#include <string>

//class subDisease
//{
//private:
//    int id_subdisease;
//    int id_diseaseFK;
//    std::string name;
//    std::string description;
//public:
//    subDisease();
//    ~subDisease();



//    int getId_subdisease() const;
//    void setId_subdisease(int value);
//    int getId_diseaseFK() const;
//    void setId_diseaseFK(int value);
//    std::string getName() const;
//    void setName(const std::string &value);
//    std::string getDescription() const;
//    void setDescription(const std::string &value);
//};

//#endif // SUBDISEASE_H
#ifndef SUBDISEASE_H
#define SUBDISEASE_H

#include <string>

class subDisease
{
private:
    int id_subdisease;
    int id_diseaseFK;
    std::string name;
    std::string description;
public:
    subDisease();
    ~subDisease();



    int getId_subdisease() const;
    void setId_subdisease(int value);
    int getId_diseaseFK() const;
    void setId_diseaseFK(int value);
    std::string getName() const;
    void setName(const std::string &value);
    std::string getDescription() const;
    void setDescription(const std::string &value);
};

#endif // SUBDISEASE_H
