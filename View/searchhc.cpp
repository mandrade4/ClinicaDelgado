#include "searchhc.h"
#include "ui_searchhc.h"

searchHC::searchHC(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::searchHC)
{
    ui->setupUi(this);
}

searchHC::~searchHC()
{
    delete ui;
}
