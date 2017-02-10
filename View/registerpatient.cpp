#include "registerpatient.h"
#include "ui_registerpatient.h"

registerPatient::registerPatient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::registerPatient)
{
    ui->setupUi(this);
}

registerPatient::~registerPatient()
{
    delete ui;
}
