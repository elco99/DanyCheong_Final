#ifndef MODIFICAR_H
#define MODIFICAR_H

#include <QDialog>
#include "transporte.h"
#include <vector>
using std::vector;

namespace Ui {
class modificar;
}

class modificar : public QDialog
{
    Q_OBJECT

public:
    explicit modificar(vector<transporte*>*,QWidget *parent = 0);
    ~modificar();

private slots:

    void on_m_elegido_currentIndexChanged(int index);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::modificar *ui;
    vector<transporte*>* lista;
};

#endif // MODIFICAR_H
