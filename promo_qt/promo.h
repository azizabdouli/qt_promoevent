#ifndef PROMO_H
#define PROMO_H

#include <QSqlQuery>
#include <QSqlQueryModel>
class promo
{
public:
    promo();
    promo(QString,QString,QString,double,double);


    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);

    QString id,supermarche,produits;
    double prix,prix_nouv;
};

#endif // PROMO_H
