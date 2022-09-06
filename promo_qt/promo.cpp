#include "promo.h"

promo::promo()
{

}

promo::promo(QString s1 ,QString s2,QString s3,double x1 ,double x2 ){

    id=s1;
    produits=s2;
    supermarche=s3;
    prix=x1;
    prix_nouv=x2;


}


bool promo::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO promo VALUES (:id, :prix, :produit,:prix_nouv,:supermarche)");

    query.bindValue(":id", id);
    query.bindValue(":prix",prix);
    query.bindValue(":produit",produits);
    query.bindValue(":prix_nouv",prix_nouv);
    query.bindValue(":supermarche", supermarche);


    return    query.exec();

}

bool promo::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE promo SET prix= :prix ,produits= :produit, prix_nouv=:prix_nouv"
                  ", id_supermarche= :supermarche where ID= :id");

    query.bindValue(":id", selected);
    query.bindValue(":prix",prix);
    query.bindValue(":produit",produits);
    query.bindValue(":prix_nouv",prix_nouv);
    query.bindValue(":supermarche", supermarche);

    return    query.exec();

}

 QSqlQueryModel * promo::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM promo");

     return modal;

 }
  bool promo::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from promo where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }
