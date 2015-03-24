#include "transport.h"
#include "ui_transport.h"
#include "agregar.h"
#include "modificar.h"
#include "eliminar.h"
#include "cambio.h"
#include <QPalette>

transport::transport(vector<transporte*>* lista,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::transport)
{
    ui->setupUi(this);
    QPalette pal;
    pal.setBrush(this->backgroundRole(),QBrush(QImage(":/image/1.jpg")));
    this->setPalette(pal);
    this->lista = lista;
}

transport::~transport()
{
    delete ui;
}

void transport::on_pushButton_clicked()
{
    agregar aa(lista);
    aa.exec();
}

void transport::on_pushButton_3_clicked()
{
    if(this->lista->size() > 0){
        modificar mm(lista);
        mm.exec();
    }
}

void transport::on_pushButton_2_clicked()
{
    if(this->lista->size() > 0){
        eliminar ee(lista);
        ee.exec();
    }
}

void transport::on_pushButton_4_clicked()
{
    if(this->lista->size() > 0){
        cambio cc(lista);
        cc.exec();
    }
}
