#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <QDialog>
#include <vector>
#include "transporte.h"
using std::vector;

namespace Ui {
class transport;
}

class transport : public QDialog
{
    Q_OBJECT

public:
    explicit transport(vector<transporte*>*,QWidget *parent = 0);
    ~transport();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::transport *ui;
    vector<transporte*>* lista;
};

#endif // TRANSPORT_H
