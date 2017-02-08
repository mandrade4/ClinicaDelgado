#ifndef CLINICA_H
#define CLINICA_H

#include <QMainWindow>
#include "Controller/allergycontroller.h"


namespace Ui {
class Clinica;
}

class Clinica : public QMainWindow
{
    Q_OBJECT

public:
    explicit Clinica(QWidget *parent = 0);
    ~Clinica();

private:
    Ui::Clinica *ui;
};

#endif // CLINICA_H
