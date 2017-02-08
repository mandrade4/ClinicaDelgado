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
