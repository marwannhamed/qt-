#ifndef INTEGRATION_H
#define INTEGRATION_H

#include <QWidget>

#include "employes.h"
#include <QMainWindow>

namespace Ui {
class integration;
}

class integration : public QMainWindow
{
    Q_OBJECT

public:
    explicit integration(QWidget *parent = nullptr);
    ~integration();

private slots:
    void on_pb_ajouter_clicked();

    void on_pushButton_clicked();

    void on_pb_modifier_clicked();

    void on_recherche_2_clicked();

    void on_tri_id_clicked();

    void on_tri_noun_clicked();



    void on_PDF_clicked();

    void on_statistique_clicked();

    void on_qr_clicked();

private:
    Ui::integration *ui;
    Employes E;
};

#endif // MAINWINDOW_H
