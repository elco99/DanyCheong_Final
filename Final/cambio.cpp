#include "cambio.h"
#include "ui_cambio.h"

cambio::cambio(vector<transporte*>* lista,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cambio)
{
    ui->setupUi(this);
    QPalette pal;
    pal.setBrush(this->backgroundRole(),QBrush(QImage(":/image/6.jpg")));
    this->setPalette(pal);
    this->lista = lista;
    for(int i=0;i<lista->size();i++){
        ui->c_transporte->addItem(QString(lista->at(i)->getName().c_str()));
    }
    if(lista->at(ui->c_transporte->currentIndex())->getEstado() == "Disponible"){
        ui->c_disponible->setChecked(true);
        ui->c_viaje->setChecked(false);
        ui->c_reparacion->setChecked(false);
    }else if(lista->at(ui->c_transporte->currentIndex())->getEstado() == "Viaje"){
        ui->c_disponible->setChecked(false);
        ui->c_viaje->setChecked(true);
        ui->c_reparacion->setChecked(false);
    }else{
        ui->c_disponible->setChecked(false);
        ui->c_viaje->setChecked(false);
        ui->c_reparacion->setChecked(true);
    }
}

cambio::~cambio()
{
    delete ui;
}


void cambio::on_pushButton_2_clicked()
{
    this->close();
}

void cambio::on_c_transporte_currentIndexChanged(int index)
{
    if(lista->at(index)->getEstado() == "Disponible"){
        ui->c_disponible->setChecked(true);
        ui->c_viaje->setChecked(false);
        ui->c_reparacion->setChecked(false);
    }else if(lista->at(index)->getEstado() == "Viaje"){
        ui->c_disponible->setChecked(false);
        ui->c_viaje->setChecked(true);
        ui->c_reparacion->setChecked(false);
    }else{
        ui->c_disponible->setChecked(false);
        ui->c_viaje->setChecked(false);
        ui->c_reparacion->setChecked(true);
    }
}

void cambio::on_pushButton_clicked()
{
    if(ui->c_disponible->isChecked()){
        lista->at(ui->c_transporte->currentIndex())->disponible();
    }else if(ui->c_viaje->isChecked()){
        lista->at(ui->c_transporte->currentIndex())->viaje();
    }else if(ui->c_reparacion->isChecked()){
        lista->at(ui->c_transporte->currentIndex())->reparacion();
    }
    this->close();
}
