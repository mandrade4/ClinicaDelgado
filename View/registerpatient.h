#ifndef REGISTERPATIENT_H
#define REGISTERPATIENT_H

#include <QMainWindow>

namespace Ui {
class registerPatient;
}

class registerPatient : public QMainWindow
{
    Q_OBJECT

public:
    explicit registerPatient(QWidget *parent = 0);
    ~registerPatient();

private:
    Ui::registerPatient *ui;//sss
};

#endif // REGISTERPATIENT_H
