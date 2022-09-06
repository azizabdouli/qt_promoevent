/********************************************************************************
** Form generated from reading UI file 'gestion_promo_event.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_PROMO_EVENT_H
#define UI_GESTION_PROMO_EVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_promo_event
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *rech_promo;
    QTableView *table_promo;
    QLabel *label;
    QComboBox *promo_sel_col;
    QGroupBox *groupBox_2;
    QComboBox *supermarche;
    QLabel *label_7;
    QLineEdit *id;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *actionedit_promo;
    QPushButton *actionadd_promo;
    QPushButton *actiondelete_promo;
    QLabel *label_11;
    QDoubleSpinBox *prix;
    QTextEdit *produit;
    QDoubleSpinBox *nouv_prix;
    QLabel *label_12;
    QPushButton *export_2;
    QWidget *tab_2;
    QTableView *table_evenement;
    QLabel *label_4;
    QLineEdit *rech_evenement;
    QComboBox *evenement_sel_col;
    QGroupBox *groupBox;
    QLabel *label_5;
    QLineEdit *id_2;
    QComboBox *promot;
    QLabel *label_2;
    QComboBox *categorie;
    QLabel *label_6;
    QPushButton *actionadd_evenement;
    QPushButton *actionedit_evenement;
    QPushButton *actiondelete_evenement;
    QLabel *label_8;
    QLineEdit *nom;
    QDateEdit *debut;
    QDateEdit *fin;
    QLabel *label_3;
    QLabel *label_13;
    QTextEdit *produit_2;
    QLabel *label_14;
    QPushButton *pushButton;
    QWidget *tab_3;
    QTextEdit *msg;
    QLineEdit *mail_pass;
    QLineEdit *file;
    QPushButton *sendBtn;
    QPushButton *browseBtn;
    QLineEdit *rcpt;
    QLineEdit *subject;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestion_promo_event)
    {
        if (gestion_promo_event->objectName().isEmpty())
            gestion_promo_event->setObjectName(QStringLiteral("gestion_promo_event"));
        gestion_promo_event->resize(998, 563);
        centralwidget = new QWidget(gestion_promo_event);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 951, 461));
        tabWidget->setStyleSheet(QStringLiteral("background-image: url(:/res/img/hand-painted-watercolor-background-with-sky-clouds-shape_24972-1095.jpg);"));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        rech_promo = new QLineEdit(tab);
        rech_promo->setObjectName(QStringLiteral("rech_promo"));
        rech_promo->setGeometry(QRect(430, 30, 151, 24));
        rech_promo->setClearButtonEnabled(true);
        table_promo = new QTableView(tab);
        table_promo->setObjectName(QStringLiteral("table_promo"));
        table_promo->setGeometry(QRect(20, 71, 651, 331));
        table_promo->setStyleSheet(QStringLiteral(""));
        table_promo->setSortingEnabled(true);
        table_promo->horizontalHeader()->setCascadingSectionResizes(true);
        table_promo->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_promo->horizontalHeader()->setStretchLastSection(false);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 251, 31));
        promo_sel_col = new QComboBox(tab);
        promo_sel_col->setObjectName(QStringLiteral("promo_sel_col"));
        promo_sel_col->setGeometry(QRect(591, 30, 81, 22));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(690, 50, 221, 351));
        supermarche = new QComboBox(groupBox_2);
        supermarche->setObjectName(QStringLiteral("supermarche"));
        supermarche->setGeometry(QRect(91, 210, 101, 20));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 90, 51, 16));
        id = new QLineEdit(groupBox_2);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(94, 30, 101, 20));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 30, 16, 16));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 210, 71, 16));
        actionedit_promo = new QPushButton(groupBox_2);
        actionedit_promo->setObjectName(QStringLiteral("actionedit_promo"));
        actionedit_promo->setGeometry(QRect(20, 280, 181, 23));
        actionadd_promo = new QPushButton(groupBox_2);
        actionadd_promo->setObjectName(QStringLiteral("actionadd_promo"));
        actionadd_promo->setGeometry(QRect(20, 250, 181, 23));
        actiondelete_promo = new QPushButton(groupBox_2);
        actiondelete_promo->setObjectName(QStringLiteral("actiondelete_promo"));
        actiondelete_promo->setGeometry(QRect(20, 310, 181, 23));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 60, 61, 16));
        prix = new QDoubleSpinBox(groupBox_2);
        prix->setObjectName(QStringLiteral("prix"));
        prix->setGeometry(QRect(94, 60, 101, 22));
        produit = new QTextEdit(groupBox_2);
        produit->setObjectName(QStringLiteral("produit"));
        produit->setGeometry(QRect(90, 90, 101, 71));
        nouv_prix = new QDoubleSpinBox(groupBox_2);
        nouv_prix->setObjectName(QStringLiteral("nouv_prix"));
        nouv_prix->setGeometry(QRect(94, 180, 101, 22));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 180, 61, 16));
        export_2 = new QPushButton(tab);
        export_2->setObjectName(QStringLiteral("export_2"));
        export_2->setGeometry(QRect(20, 410, 651, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        table_evenement = new QTableView(tab_2);
        table_evenement->setObjectName(QStringLiteral("table_evenement"));
        table_evenement->setGeometry(QRect(10, 70, 651, 341));
        table_evenement->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table_evenement->setSortingEnabled(true);
        table_evenement->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 20, 281, 31));
        rech_evenement = new QLineEdit(tab_2);
        rech_evenement->setObjectName(QStringLiteral("rech_evenement"));
        rech_evenement->setGeometry(QRect(430, 30, 141, 24));
        rech_evenement->setClearButtonEnabled(true);
        evenement_sel_col = new QComboBox(tab_2);
        evenement_sel_col->setObjectName(QStringLiteral("evenement_sel_col"));
        evenement_sel_col->setGeometry(QRect(580, 30, 81, 22));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(700, 40, 211, 391));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 260, 41, 16));
        id_2 = new QLineEdit(groupBox);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setGeometry(QRect(94, 30, 101, 20));
        promot = new QComboBox(groupBox);
        promot->setObjectName(QStringLiteral("promot"));
        promot->setGeometry(QRect(91, 260, 101, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 30, 61, 16));
        categorie = new QComboBox(groupBox);
        categorie->setObjectName(QStringLiteral("categorie"));
        categorie->setGeometry(QRect(90, 230, 101, 20));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 230, 51, 16));
        actionadd_evenement = new QPushButton(groupBox);
        actionadd_evenement->setObjectName(QStringLiteral("actionadd_evenement"));
        actionadd_evenement->setGeometry(QRect(20, 290, 181, 23));
        actionedit_evenement = new QPushButton(groupBox);
        actionedit_evenement->setObjectName(QStringLiteral("actionedit_evenement"));
        actionedit_evenement->setGeometry(QRect(20, 320, 181, 23));
        actiondelete_evenement = new QPushButton(groupBox);
        actiondelete_evenement->setObjectName(QStringLiteral("actiondelete_evenement"));
        actiondelete_evenement->setGeometry(QRect(20, 350, 181, 23));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 60, 61, 16));
        nom = new QLineEdit(groupBox);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(94, 60, 101, 20));
        debut = new QDateEdit(groupBox);
        debut->setObjectName(QStringLiteral("debut"));
        debut->setGeometry(QRect(90, 90, 110, 22));
        debut->setCalendarPopup(true);
        fin = new QDateEdit(groupBox);
        fin->setObjectName(QStringLiteral("fin"));
        fin->setGeometry(QRect(90, 120, 110, 22));
        fin->setCalendarPopup(true);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 47, 14));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 130, 47, 14));
        produit_2 = new QTextEdit(groupBox);
        produit_2->setObjectName(QStringLiteral("produit_2"));
        produit_2->setGeometry(QRect(90, 150, 104, 71));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 160, 47, 14));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 30, 75, 23));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        msg = new QTextEdit(tab_3);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(20, 126, 871, 291));
        mail_pass = new QLineEdit(tab_3);
        mail_pass->setObjectName(QStringLiteral("mail_pass"));
        mail_pass->setGeometry(QRect(650, 20, 241, 20));
        mail_pass->setEchoMode(QLineEdit::Password);
        file = new QLineEdit(tab_3);
        file->setObjectName(QStringLiteral("file"));
        file->setGeometry(QRect(20, 90, 701, 23));
        sendBtn = new QPushButton(tab_3);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(20, 420, 871, 23));
        browseBtn = new QPushButton(tab_3);
        browseBtn->setObjectName(QStringLiteral("browseBtn"));
        browseBtn->setGeometry(QRect(730, 90, 161, 24));
        rcpt = new QLineEdit(tab_3);
        rcpt->setObjectName(QStringLiteral("rcpt"));
        rcpt->setGeometry(QRect(20, 20, 611, 21));
        subject = new QLineEdit(tab_3);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(20, 54, 871, 21));
        tabWidget->addTab(tab_3, QString());
        gestion_promo_event->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_promo_event);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 998, 26));
        gestion_promo_event->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_promo_event);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_promo_event->setStatusBar(statusbar);

        retranslateUi(gestion_promo_event);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(gestion_promo_event);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_promo_event)
    {
        gestion_promo_event->setWindowTitle(QApplication::translate("gestion_promo_event", "MainWindow", Q_NULLPTR));
        rech_promo->setPlaceholderText(QApplication::translate("gestion_promo_event", "Recherche", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_promo_event", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">Gestion Promotions</span></p></body></html>", Q_NULLPTR));
        promo_sel_col->clear();
        promo_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_promo_event", "All", Q_NULLPTR)
         << QApplication::translate("gestion_promo_event", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_promo_event", "Prix", Q_NULLPTR)
         << QApplication::translate("gestion_promo_event", "Produits", Q_NULLPTR)
         << QApplication::translate("gestion_promo_event", "Nouv Prix", Q_NULLPTR)
         << QApplication::translate("gestion_promo_event", "Supermarche", Q_NULLPTR)
        );
        groupBox_2->setTitle(QApplication::translate("gestion_promo_event", "Form", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestion_promo_event", "Produits", Q_NULLPTR));
        label_9->setText(QApplication::translate("gestion_promo_event", "ID", Q_NULLPTR));
        label_10->setText(QApplication::translate("gestion_promo_event", "Supermarche", Q_NULLPTR));
        actionedit_promo->setText(QApplication::translate("gestion_promo_event", "modifier", Q_NULLPTR));
        actionadd_promo->setText(QApplication::translate("gestion_promo_event", "ajouter", Q_NULLPTR));
        actiondelete_promo->setText(QApplication::translate("gestion_promo_event", "supprimer", Q_NULLPTR));
        label_11->setText(QApplication::translate("gestion_promo_event", "Prix", Q_NULLPTR));
        label_12->setText(QApplication::translate("gestion_promo_event", "Nouv Prix", Q_NULLPTR));
        export_2->setText(QApplication::translate("gestion_promo_event", "Export Excel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_promo_event", "Promotion", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_promo_event", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">Gestion magasins</span></p><p><br/></p></body></html>", Q_NULLPTR));
        rech_evenement->setPlaceholderText(QApplication::translate("gestion_promo_event", "Recherche", Q_NULLPTR));
        evenement_sel_col->clear();
        evenement_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_promo_event", "All", Q_NULLPTR)
         << QApplication::translate("gestion_promo_event", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_promo_event", "Nom", Q_NULLPTR)
         << QApplication::translate("gestion_promo_event", "Produits", Q_NULLPTR)
         << QApplication::translate("gestion_promo_event", "Debut", Q_NULLPTR)
         << QApplication::translate("gestion_promo_event", "Fin", Q_NULLPTR)
         << QApplication::translate("gestion_promo_event", "Categorie", Q_NULLPTR)
         << QApplication::translate("gestion_promo_event", "Promo", Q_NULLPTR)
        );
        groupBox->setTitle(QApplication::translate("gestion_promo_event", "Form", Q_NULLPTR));
        label_5->setText(QApplication::translate("gestion_promo_event", "Promo", Q_NULLPTR));
        label_2->setText(QApplication::translate("gestion_promo_event", "Id", Q_NULLPTR));
        categorie->clear();
        categorie->insertItems(0, QStringList()
         << QApplication::translate("gestion_promo_event", "cat 1", Q_NULLPTR)
         << QApplication::translate("gestion_promo_event", "cat 2", Q_NULLPTR)
         << QApplication::translate("gestion_promo_event", "cat 3", Q_NULLPTR)
         << QApplication::translate("gestion_promo_event", "cat 4", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("gestion_promo_event", "Categorie", Q_NULLPTR));
        actionadd_evenement->setText(QApplication::translate("gestion_promo_event", "ajouter", Q_NULLPTR));
        actionedit_evenement->setText(QApplication::translate("gestion_promo_event", "modifier", Q_NULLPTR));
        actiondelete_evenement->setText(QApplication::translate("gestion_promo_event", "supprimer", Q_NULLPTR));
        label_8->setText(QApplication::translate("gestion_promo_event", "Nom", Q_NULLPTR));
        nom->setText(QString());
        label_3->setText(QApplication::translate("gestion_promo_event", "Debut", Q_NULLPTR));
        label_13->setText(QApplication::translate("gestion_promo_event", "Fin", Q_NULLPTR));
        label_14->setText(QApplication::translate("gestion_promo_event", "Produit", Q_NULLPTR));
        pushButton->setText(QApplication::translate("gestion_promo_event", "stat", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_promo_event", "Magasins", Q_NULLPTR));
        msg->setPlaceholderText(QApplication::translate("gestion_promo_event", "type your message here ...", Q_NULLPTR));
        mail_pass->setPlaceholderText(QApplication::translate("gestion_promo_event", "your mail password", Q_NULLPTR));
        file->setPlaceholderText(QApplication::translate("gestion_promo_event", "attachement here", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("gestion_promo_event", "Send", Q_NULLPTR));
        browseBtn->setText(QApplication::translate("gestion_promo_event", "Browse ...", Q_NULLPTR));
        rcpt->setPlaceholderText(QApplication::translate("gestion_promo_event", "recipient", Q_NULLPTR));
        subject->setPlaceholderText(QApplication::translate("gestion_promo_event", "subject", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("gestion_promo_event", "E-Mail", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_promo_event: public Ui_gestion_promo_event {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_PROMO_EVENT_H
