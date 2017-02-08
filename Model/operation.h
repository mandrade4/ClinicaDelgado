#ifndef OPERATION_H
#define OPERATION_H

#include <string>

class Operation
{
private:
    int id_operation;
    std::string type;
    std::string date;
    std::string description;
public:
    Operation();
    ~Operation();

    std::string getType() const;
    void setType(const std::string &value);

    std::string getDate() const;
    void setDate(const std::string &value);

    int getId_operation() const;
    void setId_operation(int value);

    std::string getDescription() const;
    void setDescription(const std::string &value);
};

#endif // OPERATION_H

