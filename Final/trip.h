#ifndef TRIP_H
#define TRIP_H

#include <QDialog>
#include "transporte.h"
#include <vector>
#include "viaje.h"

using std::vector;

namespace Ui {
class trip;
}

class trip : public QDialog
{
    Q_OBJECT

public:
    explicit trip(vector<transporte*>*,vector<viaje>*,QWidget *parent = 0);
    ~trip();

private slots:
    void on_v_pasajero_valueChanged(int arg1);

    void on_v_transporte_currentIndexChanged(int index);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::trip *ui;
    vector<transporte*>* lista;
    vector<viaje>* lista2;
};

#endif // TRIP_H
