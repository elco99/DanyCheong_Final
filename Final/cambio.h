#ifndef CAMBIO_H
#define CAMBIO_H

#include <QDialog>
#include <vector>
#include "transporte.h"

using std::vector;

namespace Ui {
class cambio;
}

class cambio : public QDialog
{
    Q_OBJECT

public:
    explicit cambio(vector<transporte*>*,QWidget *parent = 0);
    ~cambio();

private slots:

    void on_pushButton_2_clicked();

    void on_c_transporte_currentIndexChanged(int index);

    void on_pushButton_clicked();

private:
    Ui::cambio *ui;
    vector<transporte*>* lista;
};

#endif // CAMBIO_H
