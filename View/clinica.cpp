#include "clinica.h"
#include "ui_clinica.h"

#include <QDebug>
Clinica::Clinica(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Clinica)
{
    ui->setupUi(this);
    AllergyController allergyController;
    QList<Allergy> allergies(allergyController.getAllergies());
    qDebug()<<allergies.size();
    foreach (Allergy allergy, allergies) {
        ui->QCB_allergies->addItem(QString(allergy.getDescription().c_str()));
    }

}

Clinica::~Clinica()
{
    delete ui;
}


//void Clinica::on_PB_registerPatient_clicked()
//{
//    registerPatient *window1 = new registerPatient(this);
//    window1->show();
//}


//void Clinica::on_BDbutton_clicked()
//{

//}

void Clinica::on_PB_registerPatient_clicked()
{
    registerPatient *window1;
    window1->show();
}

void Clinica::on_PB_registerAppointment_clicked()
{
    registerApppointment *window2;
    window2->show();
}

void Clinica::on_PB_searchHC_clicked()
{
    searchHC *window3 = new searchHC;
    window3->show();
}

//void Clinica::on_BDbutton_clicked(){
//    operationController op;
//    QString into = ui->BDbutton->text();

//}


