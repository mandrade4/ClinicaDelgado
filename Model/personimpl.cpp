#include "personimpl.h"
#include <QSqlQuery>
#include <QDebug>

person* personImpl::getpersonbyDNI(int dni){
    QSqlQuery query;
    bool ok = query.exec(QString("select * from tbl_person where tbl_person_dni =")+QString::number(dni));
    person* person = new person();
    while(query.next()){
        person->setDni(query.value(0).toInt());
        person->setName(query.value(1).toString().toStdString());
        //person->setAddress(query.value(2));
    }
    return person;
}


person* personImpl::getpersonbyName(std::string name){
    QSqlQuery query;
    bool ok = query.exec(QString("select * from tbl_person where tbl_person_name =")+QString:(name.c_str()));
    person* Person = new person();
    while(query.next()){
        Person->setDni(query.value(0).toInt());
        Person->setName(query.value(1).toString().toStdString());
    }
    return Person;
}
