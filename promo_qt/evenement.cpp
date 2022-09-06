#include "evenement.h"

evenement::evenement()
{

}

evenement::evenement(QString s1 ,QString s2,QString s3,QString s4 ,QString s5,QString s6,QString s7 ){

    id=s1;
    nom=s2;
    categorie=s3;
    produit=s4;
    debut=s5;
    fin=s6;
    promo=s7;



}


bool evenement::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO evenement VALUES (:id, :nom, :produit,:debut,:fin, :categorie, :id_promo)");

    query.bindValue(":id", id);
    query.bindValue(":nom",nom);
    query.bindValue(":produit",produit);
    query.bindValue(":debut",debut);
    query.bindValue(":fin", fin);
    query.bindValue(":categorie",categorie);
    query.bindValue(":id_promo",promo);

    return    query.exec();

}

bool evenement::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE evenement SET NOM= :nom ,produits= :produit, debut=:debut,"
                  " fin= :fin ,categorie= :categorie, id_promo=:id_promo where ID= :id");

    query.bindValue(":id", selected);
    query.bindValue(":nom",nom);
    query.bindValue(":produit",produit);
    query.bindValue(":debut",debut);
    query.bindValue(":fin", fin);
    query.bindValue(":categorie",categorie);
    query.bindValue(":id_promo",promo);

    return    query.exec();

}

 QSqlQueryModel * evenement::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM evenement");

     return modal;

 }
  bool evenement::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from evenement where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }
