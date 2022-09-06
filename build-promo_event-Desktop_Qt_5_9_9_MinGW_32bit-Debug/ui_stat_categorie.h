/********************************************************************************
** Form generated from reading UI file 'stat_categorie.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAT_CATEGORIE_H
#define UI_STAT_CATEGORIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_stat_categorie
{
public:
    QLabel *label;

    void setupUi(QDialog *stat_categorie)
    {
        if (stat_categorie->objectName().isEmpty())
            stat_categorie->setObjectName(QStringLiteral("stat_categorie"));
        stat_categorie->resize(471, 450);
        label = new QLabel(stat_categorie);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(25, 25, 400, 400));

        retranslateUi(stat_categorie);

        QMetaObject::connectSlotsByName(stat_categorie);
    } // setupUi

    void retranslateUi(QDialog *stat_categorie)
    {
        stat_categorie->setWindowTitle(QApplication::translate("stat_categorie", "Dialog", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class stat_categorie: public Ui_stat_categorie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAT_CATEGORIE_H
