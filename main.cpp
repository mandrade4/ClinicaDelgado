#include "View/clinica.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QCoreApplication>
#include <QDebug>


void configureDatabase(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("localhost");//192.168.102.68
    db.setPort(5432);
    db.setDatabaseName("ClinicaDelgado");
    db.setUserName("postgres");
    db.setPassword("3ct3ppfo");
    bool ok = db.open();
    if(ok) qDebug()<<"Connection successful";
    else qDebug()<<"Unsuccessful connection";
}

int main(int argc, char *argv[])
{
    QCoreApplication::addLibraryPath(QString("C:\Qt\Qt5.8.0\5.8\msvc2015_64\plugins\sqldrivers"));
    QStringList lists = QCoreApplication::libraryPaths();
    foreach (QString list, lists) {
        qDebug()<<list;
    }
    configureDatabase();
    QApplication a(argc, argv);
    Clinica w;
    w.show();

    return a.exec();
}
