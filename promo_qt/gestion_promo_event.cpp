#include "gestion_promo_event.h"
#include "ui_gestion_promo_event.h"

gestion_promo_event::gestion_promo_event(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestion_promo_event)
{
    ui->setupUi(this);

    //for email tab
    connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->browseBtn, SIGNAL(clicked()), this, SLOT(browse()));

    //fill promo combo
    get_promo();

    //fill supermarche combo
    get_supermarche();


    //affichage contenu base
    show_tables();
}

gestion_promo_event::~gestion_promo_event()
{
    delete ui;
}

void gestion_promo_event::show_tables()
{
    show_promo();
    show_evenement();
}

void gestion_promo_event::clear_form()
{
ui->id->clear();
ui->produit->clear();
ui->id_2->clear();
ui->produit_2->clear();
ui->nom->clear();

ui->supermarche->setCurrentIndex(0);
ui->categorie->setCurrentIndex(0);
ui->promot->setCurrentIndex(0);

ui->prix->setValue(0);
ui->nouv_prix->setValue(0);
}

/*********************************** promo ****************************/


//get form content
double gestion_promo_event::prix() const { //combo box

    return ui->prix->value();
}

double gestion_promo_event::nouv_prix() const { //combo box

    return ui->nouv_prix->value();
}


QString gestion_promo_event::supermarche() const { //combo box

    return ui->supermarche->currentText();
}

QString gestion_promo_event::produit() const { //line edit

    return ui->produit->toPlainText();
}

QString gestion_promo_event::id() const { //line edit

    return ui->id->text();
}

//remplissage des champs du formulaire a partir de la base

void gestion_promo_event::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from promo where ID= :id");
    query.bindValue(":id", selected);
    query.exec();
    while(query.next()){
  ui->id->setText(query.value(0).toString()); //line edit
   ui->prix->setValue(query.value(1).toReal()); //double edit
      ui->nouv_prix->setValue(query.value(3).toReal()); //double edit
   ui->supermarche->setCurrentText(query.value(4).toString()); //combobox
   ui->produit->setText(query.value(2).toString()); //line edit

    }

}


void gestion_promo_event::get_supermarche(){
    QSqlQuery query;
    QSqlQueryModel * modal=new QSqlQueryModel();
    query.prepare("select id from supermarche");
    query.exec();
    modal->setQuery(query);
    ui->supermarche->setModel(modal);


}



//************************ crud

//ajout
void gestion_promo_event::on_actionadd_promo_clicked()
{
      //recuperation des donnees
        QString s1=id();
        QString s2=produit();
        QString s3=supermarche();
        double x1=prix();
        double x2=nouv_prix();


        //ajout
        promo mc(s1,s2,s3,x1,x2);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_promo();

          //vider le form
          clear_form();

          //refresh promo combo
          get_promo();
}

//selection
void gestion_promo_event::on_table_promo_clicked(const QModelIndex &index)
{
    selected_promo=ui->table_promo->model()->data(index).toString();
}

//modification
void gestion_promo_event::on_table_promo_doubleClicked(const QModelIndex &index)
{

 fill_form(selected_promo);



}

void gestion_promo_event::on_actionedit_promo_clicked()
{

    //recuperation des donnees

    QString s2=produit();
      QString s3=supermarche();
      double x1=prix();
      double x2=nouv_prix();


      //ajout
      promo mc(selected_promo,s2,s3,x1,x2);
      mc.modifier(selected_promo);

      //refresh du tableau (affichage)
        show_promo();

        //vider le form
        clear_form();
}


//suppression
void gestion_promo_event::on_actiondelete_promo_clicked()
{
    promo mc;
  mc.supprimer(selected_promo);

 //refresh du tableau (affichage)
   show_promo();

   //refresh promo combo
   get_promo();
}

//affichage
void gestion_promo_event::show_promo()
{
    //creation model (masque du tableau) : permet recherche et tri
        proxy_promo = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxy_promo->setSourceModel(tmp_promo.afficher());

     //pour la recherche
        proxy_promo->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)

        //remplissage tableau avec le masque
        ui->table_promo->setModel(proxy_promo);
}

//************************ metiers


//recherche dynamique
void gestion_promo_event::on_promo_sel_col_currentIndexChanged(const QString &arg1)
{
    sel_col_promo=ui->promo_sel_col->currentIndex()-1;
    proxy_promo->setFilterKeyColumn(sel_col_promo); // chercher dans tout le tableau (-1) ou donner le numero de la colone
}
void gestion_promo_event::on_rech_promo_textChanged(const QString &arg1)
{
    proxy_promo->setFilterFixedString(arg1);
}

void gestion_promo_event::on_export_2_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                    tr("Excel Files (*.xls)"));
    if (fileName.isEmpty())
        return;

    ExportExcelObject obj(fileName, "mydata", ui->table_promo);

    //colums to export
    obj.addField(0, "ID", "char(20)");
    obj.addField(1, "Prix", "char(20)");
    obj.addField(2, "Produits", "char(20)");
    obj.addField(3, "Prix_Nouv", "char(20)");
    obj.addField(4, "Supermarche", "char(20)");




    int retVal = obj.export2Excel();
    if( retVal > 0)
    {
        QMessageBox::information(this, tr("Done"),
                                 QString(tr("%1 records exported!")).arg(retVal)
                                 );
    }
}


/*********************************** evenement ****************************/

//get form content
QString gestion_promo_event::debut() const { //date
    return ui->debut->date().toString("dd.MM.yyyy");
}

QString gestion_promo_event::fin() const { //date
    return ui->fin->date().toString("dd.MM.yyyy");
}

QString gestion_promo_event::promot() const { //combo box

    return ui->promot->currentText();
}

QString gestion_promo_event::categorie() const { //combo box

    return ui->categorie->currentText();
}


QString gestion_promo_event::produit_2() const { //line edit

    return ui->produit_2->toPlainText();
}

QString gestion_promo_event::nom() const { //line edit

    return ui->nom->text();
}

QString gestion_promo_event::id_2() const { //line edit

    return ui->id_2->text();
}

//remplissage des champs du formulaire a partir de la base

void gestion_promo_event::fill_form_2(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from evenement where id= :id");
    query.bindValue(":id", selected);
    query.exec();
    while(query.next()){
  ui->id_2->setText(query.value(0).toString()); //line edit
   ui->promot->setCurrentText(query.value(6).toString()); //combobox
   ui->categorie->setCurrentText(query.value(5).toString()); //combobox
  ui->produit_2->setText(query.value(2).toString()); //line edit
    ui->nom->setText(query.value(1).toString()); //line edit
    ui->debut->setDate(QDate::fromString(query.value(3).toString(),"dd.MM.yyyy"));//date
    ui->fin->setDate(QDate::fromString(query.value(4).toString(),"dd.MM.yyyy"));//date

    }

}


void gestion_promo_event::get_promo(){
    QSqlQuery query;
    QSqlQueryModel * modal=new QSqlQueryModel();
    query.prepare("select id from promo");
    query.exec();
    modal->setQuery(query);
    ui->promot->setModel(modal);


}

//************************ crud

//ajout

void gestion_promo_event::on_actionadd_evenement_clicked()
{

      //recuperation des donnees
        QString s1=id_2();
        QString s2=nom();
        QString s3=categorie();
        QString s4=produit_2();
        QString s5=debut();
        QString s6=fin();
        QString s7=promot();


        //ajout
        evenement mc(s1,s2,s3,s4,s5,s6,s7);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_evenement();

          //vider le form
          clear_form();
}

//selection
void gestion_promo_event::on_table_evenement_clicked(const QModelIndex &index)
{
    selected_evenement=ui->table_evenement->model()->data(index).toString();
}

//modification
void gestion_promo_event::on_table_evenement_doubleClicked(const QModelIndex &index)
{


  fill_form_2(selected_evenement);




}

void gestion_promo_event::on_actionedit_evenement_clicked()
{
    //recuperation des donnees
      QString s2=nom();
      QString s3=categorie();
      QString s4=produit_2();
      QString s5=debut();
      QString s6=fin();
      QString s7=promot();


      //ajout
      evenement mc(selected_evenement,s2,s3,s4,s5,s6,s7);
      mc.modifier(selected_evenement);

      //refresh du tableau (affichage)
        show_evenement();

        //vider le form
        clear_form();
}



//suppression
void gestion_promo_event::on_actiondelete_evenement_clicked()
{
    evenement mc;
  mc.supprimer(selected_evenement);


 //refresh du tableau (affichage)
   show_evenement();
}

//affichage
void gestion_promo_event::show_evenement()
{
    //creation model (masque du tableau) : permet recherche et tri
        proxy_evenement = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxy_evenement->setSourceModel(tmp_evenement.afficher());

     //pour la recherche
        proxy_evenement->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)

        //remplissage tableau avec le masque
        ui->table_evenement->setModel(proxy_evenement);
}

//************************ metiers

//recherche dynamique
void gestion_promo_event::on_evenement_sel_col_currentIndexChanged(const QString &arg1)
{
    sel_col_evenement=ui->evenement_sel_col->currentIndex()-1;
    proxy_evenement->setFilterKeyColumn(sel_col_evenement); // chercher dans tout le tableau (-1) ou donner le numero de la colone

}
void gestion_promo_event::on_rech_evenement_textChanged(const QString &arg1)
{
    proxy_evenement->setFilterFixedString(arg1);
}

//stat
void gestion_promo_event::on_pushButton_clicked()
{
    s = new stat_categorie();
  s->choix_pie();
  s->show();
}

//mailing
void  gestion_promo_event::browse()
{
    files.clear();

    QFileDialog dialog(this);
    dialog.setDirectory(QDir::homePath());
    dialog.setFileMode(QFileDialog::ExistingFiles);

    if (dialog.exec())
        files = dialog.selectedFiles();

    QString fileListString;
    foreach(QString file, files)
        fileListString.append( "\"" + QFileInfo(file).fileName() + "\" " );

    ui->file->setText( fileListString );

}
void   gestion_promo_event::sendMail()
{
    Smtp* smtp = new Smtp(adress,ui->mail_pass->text(), "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail(adress, ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail(adress, ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}
void   gestion_promo_event::mailSent(QString status)
{

    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    ui->rcpt->clear();
    ui->subject->clear();
    ui->file->clear();
    ui->msg->clear();
    ui->mail_pass->clear();
}

