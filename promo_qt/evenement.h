#ifndef EVENEMENT_H
#define EVENEMENT_H

#include <QSqlQuery>
#include <QSqlQueryModel>
class evenement
{
public:
    evenement();
    evenement(QString,QString,QString,QString,QString,QString,QString);

    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);





    QString id,produit,nom,debut,fin,categorie,promo;

};

#endif // EVENEMENT_H
