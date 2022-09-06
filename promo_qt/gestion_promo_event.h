#ifndef GESTION_PROMO_EVENT_H
#define GESTION_PROMO_EVENT_H

#include <QMainWindow>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>

#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>

#include "promo.h"

#include "evenement.h"

#include "stat_categorie.h"
#include "exportexcelobject.h"


#include "smtp.h"


namespace Ui {
class gestion_promo_event;
}

class gestion_promo_event : public QMainWindow
{
    Q_OBJECT

public:
    explicit gestion_promo_event(QWidget *parent = nullptr);
    ~gestion_promo_event();

    promo tmp_promo;
    evenement tmp_evenement;
    QSortFilterProxyModel *proxy_promo,*proxy_evenement;
    void show_evenement();
    void show_promo();
    void show_tables();
    void clear_form();

    //evenement

     QString promot() const ; //combo
     QString categorie() const ; //combo
     QString produit_2() const; //line
     QString fin() const ; //date
    QString debut() const ; //date
   QString nom() const; //line
  QString id_2() const ; //line

    void fill_form_2(QString);
    void get_promo();

    //promo

    double prix() const ; //double
    double nouv_prix() const ; //double
    QString supermarche() const ; //line
    QString produit() const; //line
    QString id() const ; //line

    void fill_form(QString);
    void get_supermarche();

private slots:

    //promo
    void on_actionadd_promo_clicked();

    void on_table_promo_clicked(const QModelIndex &index);

    void on_table_promo_doubleClicked(const QModelIndex &index);

    void on_actiondelete_promo_clicked();

    void on_promo_sel_col_currentIndexChanged(const QString &arg1);

    void on_rech_promo_textChanged(const QString &arg1);

    void on_actionedit_promo_clicked();


    //evenement
    void on_actionadd_evenement_clicked();

    void on_table_evenement_clicked(const QModelIndex &index);

    void on_table_evenement_doubleClicked(const QModelIndex &index);

    void on_actiondelete_evenement_clicked();

    void on_evenement_sel_col_currentIndexChanged(const QString &arg1);

    void on_rech_evenement_textChanged(const QString &arg1);

    void on_actionedit_evenement_clicked();

    //metiers
    void on_pushButton_clicked();

    void on_export_2_clicked();

    void sendMail();

    void mailSent(QString);

    void browse();


private:
    Ui::gestion_promo_event *ui;
    QString selected_promo="",selected_evenement="";
    int sel_col_promo=-1,sel_col_evenement=-1;
    stat_categorie *s;
    QStringList files;
    QString adress="monrezult@gmail.com";
};

#endif // GESTION_PROMO_EVENT_H
