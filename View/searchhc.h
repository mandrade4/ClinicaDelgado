#ifndef SEARCHHC_H
#define SEARCHHC_H

#include <QMainWindow>

namespace Ui {
class searchHC;
}

class searchHC : public QMainWindow
{
    Q_OBJECT

public:
    explicit searchHC(QWidget *parent = 0);
    ~searchHC();

private:
    Ui::searchHC *ui;
};

#endif // SEARCHHC_H
