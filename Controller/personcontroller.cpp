#include "personcontroller.h"

personController::personController()
{

}

QList<person> personController::getPersonsNAME()
{
    iPerson *iPerson = new personImpl();
    QList<person> persons;
    std::vector<person>* stdPersons = iPerson->getpersonbyNAME();
    for(int i=0;i<stdPersons->size();i++){
        persons.push_back(stdPersons->at(i));
    }
    return persons;
}

//QList<person> personController::getPersonsDNI(){
//    iPerson *iPerson = new personImpl();
//    QList<person> persons;
//    std::vector<person>* stdPersons = iPerson->getpersonbyDNI();
//    for(int i=0;i<stdPersons->size();i++){
//        persons.push_back(stdPersons->at(i));
//    }
//    return persons;
//}
