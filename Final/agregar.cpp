#include "agregar.h"
#include "ui_agregar.h"
#include <QCoreApplication>
#include <QDebug>
#include <vector>
#include <string>
#include "tierra.h"
#include "agua.h"
#include "aire.h"

using std::vector;
using std::string;

agregar::agregar(vector<transporte*>* lista,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::agregar)
{
    ui->setupUi(this);
    QPalette pal;
    pal.setBrush(this->backgroundRole(),QBrush(QImage(":/image/3.jpg")));
    this->setPalette(pal);
    this->lista = lista;
}

agregar::~agregar()
{
    delete ui;
}

void agregar::on_pushButton_2_clicked()
{
    this->close();
}

void agregar::on_pushButton_clicked(){
    if(ui->a_tipo->currentIndex() == 0){
        bool ban = false;
        if(ui->ab_si->isChecked()){
            ban = true;
        }
        string id,descripcion;
        double velocidad,pago,peso;
        int capacidad,kilometro;

        id = ui->a_ID->toPlainText().toStdString();
        descripcion = ui->a_descripcion->toPlainText().toStdString();
        velocidad = ui->a_velocidad->value();
        pago = ui->a_pago->value();
        peso = ui->a_peso->value();
        capacidad = ui->a_capacidad->value();
        kilometro = ui->a_kilometro->value();
        transporte* s= new tierra(id,descripcion,velocidad,pago,peso,capacidad,kilometro,ban);
        lista->push_back(s);
        this->close();

    }else if(ui->a_tipo->currentIndex() == 1){
        string id,descripcion;
        double velocidad,pago,peso;
        int capacidad,mesero;

        id = ui->a_ID->toPlainText().toStdString();
        descripcion = ui->a_descripcion->toPlainText().toStdString();
        velocidad = ui->a_velocidad->value();
        pago = ui->a_pago->value();
        peso = ui->a_peso->value();
        capacidad = ui->a_capacidad->value();
        mesero = ui->a_mesero->value();
        transporte* s= new aire(id,descripcion,velocidad,pago,peso,capacidad,mesero);
        lista->push_back(s);
        this->close();
    }else if(ui->a_tipo->currentIndex() == 2){
        bool rest = false;
        if(ui->ar_si->isChecked()){
            rest = true;
        }
        string id,descripcion;
        double velocidad,pago,peso;
        int capacidad,habitacion;

        id = ui->a_ID->toPlainText().toStdString();
        descripcion = ui->a_descripcion->toPlainText().toStdString();
        velocidad = ui->a_velocidad->value();
        pago = ui->a_pago->value();
        peso = ui->a_peso->value();
        capacidad = ui->a_capacidad->value();
        habitacion = ui->a_habitacion->value();
        transporte* s= new agua(id,descripcion,velocidad,pago,peso,capacidad,habitacion,rest);
        lista->push_back(s);
        this->close();
    }
}
void agregar::on_a_tipo_currentIndexChanged(int index)
{
    if(index == 0){
        ui->a_kilometro->setEnabled(true);
        ui->ab_si->setEnabled(true);
        ui->ab_no->setEnabled(true);
        ui->a_habitacion->setEnabled(false);
        ui->ar_no->setEnabled(false);
        ui->ar_si->setEnabled(false);
        ui->a_mesero->setEnabled(false);
    }else if(index == 1){
        ui->a_kilometro->setEnabled(false);
        ui->ab_si->setEnabled(false);
        ui->ab_no->setEnabled(false);
        ui->a_habitacion->setEnabled(false);
        ui->ar_no->setEnabled(false);
        ui->ar_si->setEnabled(false);
        ui->a_mesero->setEnabled(true);
    }else{
        ui->a_kilometro->setEnabled(false);
        ui->ab_si->setEnabled(false);
        ui->ab_no->setEnabled(false);
        ui->a_habitacion->setEnabled(true);
        ui->ar_no->setEnabled(true);
        ui->ar_si->setEnabled(true);
        ui->a_mesero->setEnabled(false);
    }
}
