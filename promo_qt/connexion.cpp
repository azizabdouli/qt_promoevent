#include "connexion.h"

Connexion::Connexion()
{

}

bool Connexion::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test-bd");
db.setUserName("azizz");//inserer nom de l'utilisateur
db.setPassword("azizz");//inserer mot de passe de cet utilisateur



if (db.open())
test=true;

    return  test;
}
