#ifndef REGISTERAPPPOINTMENT_H
#define REGISTERAPPPOINTMENT_H

#include <QMainWindow>

namespace Ui {
class registerApppointment;
}

class registerApppointment : public QMainWindow
{
    Q_OBJECT

public:
    explicit registerApppointment(QWidget *parent = 0);
    ~registerApppointment();

private:
    Ui::registerApppointment *ui;
};

#endif // REGISTERAPPPOINTMENT_H
