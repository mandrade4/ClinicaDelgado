#include "diseaseimpl.h"
#include <QSqlQuery>
#include <QDebug>

Disease* diseaseImpl::getdiseasebyID(int id){
    QSqlQuery query;
    bool ok = query.exec(QString("select * from tbl_disease where tbl_disease_id =")+QString::number(id));
    Disease* disease = new Disease();
    while(query.next()){
        disease->setId_disease(query.value(0).toInt());
    }
    return disease;
}

Disease* diseaseImpl::getdiseasebyNAME(std::string name){
    QSqlQuery query;
    bool ok = query.exec(QString("select * from tbl_disease where tbl_disease_name")+QString::number(name));
    Disease* diseaseName = new Disease();
    while(query.next()){
        diseaseName->setName(query.value(0).toString().toStdString());
    }
    return diseaseName;
}

std::vector<Disease> diseaseImpl::getDiseases()
{
    QSqlQuery query;
    bool ok = query.exec(QString("select * from tbl_disease"));
    std::vector<Disease>* diseases = new std::vector<Disease>();
    while(query.next()){
        Disease disease;
        disease.setId_disease(query.value(0).toInt());
        disease.setDescription(query.value(1).toString().toStdString());
        disease->push_back(disease);
    }
    return diseases;

}

