//#include "subdiseaseimpl.h"
//#include <QSqlQuery>
//#include <QDebug>

//Disease* subdiseaseImpl::getdiseasebyID_subdisease(int id){

//}

//subDisease* subdiseaseImpl::getsubdiseasebyID(int id){

//}

//subDisease* subdiseaseImpl::getsubdiseasebyNAME(std::string name){

//}

#include "subdiseaseimpl.h"
#include <QSqlQuery>
#include <QDebug>

Disease* subdiseaseImpl::getdiseasebyID_subdisease(int id){

}

subDisease* subdiseaseImpl::getsubdiseasebyID(int id){

}

subDisease* subdiseaseImpl::getsubdiseasebyNAME(std::string name){

}

std::vector<subDisease>*subdiseaseImpl::getSubDiseases()
{
    QSqlQuery query;
    bool ok = query.exec(QString("select * from tbl_subdisease"));
    std::vector<subDisease>* STDsubdiseases= new std::vector<subDisease>();
    while(query.next()){
        subDisease subdisease;
        subdisease.setId_subdisease(query.value(0).toInt());
        subdisease.setDescription(query.value(1).toString().toStdString());
        STDsubdiseases->push_back(subdisease);
    }
    return STDsubdiseases;
}
