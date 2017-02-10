#include "registerapppointment.h"
#include "ui_registerapppointment.h"

registerApppointment::registerApppointment(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::registerApppointment)
{
    ui->setupUi(this);
}

registerApppointment::~registerApppointment()
{
    delete ui;
}
