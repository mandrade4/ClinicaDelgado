#ifndef CLINICA_H
#define CLINICA_H

#include <QMainWindow>
#include "Controller/allergycontroller.h"
#include "Controller/operationcontroller.h"
#include "registerpatient.h"
#include "registerapppointment.h"
#include "searchhc.h"



namespace Ui {
class Clinica;
}

class Clinica : public QMainWindow
{
    Q_OBJECT

public:
    explicit Clinica(QWidget *parent = 0);
   // void on_PB_registerPatient_clicked();
    ~Clinica();

private slots:
    void on_PB_registerPatient_clicked();

    void on_PB_registerAppointment_clicked();

     // void on_BDbutton_clicked();


//    void on_PB_registerAppointment_clicked();

    void on_PB_searchHC_clicked();


private:
    Ui::Clinica *ui;
};

#endif // CLINICA_H
