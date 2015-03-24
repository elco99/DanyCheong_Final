#ifndef AGREGAR_H
#define AGREGAR_H

#include <QDialog>
#include<vector>
#include "transporte.h"

using std::vector;
namespace Ui {
class agregar;
}

class agregar : public QDialog
{
    Q_OBJECT

public:
    explicit agregar(vector<transporte*>*,QWidget *parent = 0);
    ~agregar();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_a_tipo_currentIndexChanged(int index);

private:
    Ui::agregar *ui;
    vector<transporte*>* lista;
};

#endif // AGREGAR_H
