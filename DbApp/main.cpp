#include <QtCore/QCoreApplication>
#include <QtSql>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/jnunez2/test.db");

    if(db.open())
    {
      qDebug() << "The connection is open";
      QSqlQuery query, query2;
      QString firstName="", lastName="";
      QVector<QString> nameList;
      nameList.append("Jorge");
      nameList.append("Alicia");


      if(query.exec("create table people(FirstName varchar(30), LastName varchar(30))")){
        qDebug() << "table Created";


        query2.exec("insert into people(FirstName,LastName) values('" + firstName + "','"+ lastName +"')");


      if(query.exec("select * from people")){
          while(query.next()){
            qDebug() << "D:! " << query.value(1).toString();
          }
      }else{
          qDebug() << "Error1 = ";
      }

      qDebug() << db.tables();
      qDebug() << "Closing";
      db.close();
    }
    else{
      qDebug() << "Error2 = " << db.lastError().text();
    }

    return a.exec();
}
