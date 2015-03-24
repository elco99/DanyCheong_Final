#ifndef ELIMINAR_H
#define ELIMINAR_H

#include <QDialog>
#include <vector>
#include "transporte.h"

using std::vector;

namespace Ui {
class eliminar;
}

class eliminar : public QDialog
{
    Q_OBJECT

public:
    explicit eliminar( vector<transporte*>*,QWidget *parent = 0);
    ~eliminar();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::eliminar *ui;
     vector<transporte*>* lista;
};

#endif // ELIMINAR_H
