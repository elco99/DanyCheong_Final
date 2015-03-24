#include "modificar.h"
#include "ui_modificar.h"
#include <typeinfo>
#include <QDebug>
#include <QCoreApplication>
#include "tierra.h"
#include "agua.h"
#include "aire.h"
#include "transporte.h"
using std::type_info;

modificar::modificar(vector<transporte*>* list,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modificar)
{
    ui->setupUi(this);
    QPalette pal;
    pal.setBrush(this->backgroundRole(),QBrush(QImage(":/image/5.jpg")));
    this->setPalette(pal);
    lista= list;

    for(int i=0;i<lista->size();i++){
        ui->m_elegido->addItem(QString(lista->at(i)->getName().c_str()));
    }
    if(lista->at(0)->getClass() == "tierra"){
        ui->m_kilometro->setEnabled(true);
        ui->mb_si->setEnabled(true);
        ui->mb_no->setEnabled(true);
        ui->m_habitacion->setEnabled(false);
        ui->mr_no->setEnabled(false);
        ui->mr_si->setEnabled(false);
        ui->m_mesero->setEnabled(false);
    }else if(lista->at(0)->getClass() == "agua"){
        ui->m_kilometro->setEnabled(false);
        ui->mb_si->setEnabled(false);
        ui->mb_no->setEnabled(false);
        ui->m_habitacion->setEnabled(true);
        ui->mr_no->setEnabled(true);
        ui->mr_si->setEnabled(true);
        ui->m_mesero->setEnabled(false);
    }else if(lista->at(0)->getClass() == "aire"){
        ui->m_kilometro->setEnabled(false);
        ui->mb_si->setEnabled(false);
        ui->mb_no->setEnabled(false);
        ui->m_habitacion->setEnabled(false);
        ui->mr_no->setEnabled(false);
        ui->mr_si->setEnabled(false);
        ui->m_mesero->setEnabled(true);
    }
    ui->m_id->setText(QString(lista->at(0)->getName().c_str()));
    ui->m_descripcion->setText(QString(lista->at(0)->getDescripcion().c_str()));
    ui->m_velocidad->setValue(lista->at(0)->getVelocidad());
    ui->m_pago->setValue(lista->at(0)->getPago());
    ui->m_peso->setValue(lista->at(0)->getPeso());
    ui->m_capacidad->setValue(lista->at(0)->getCapacidad());
}

modificar::~modificar()
{
    delete ui;
}


void modificar::on_m_elegido_currentIndexChanged(int index)
{
    if(lista->at(index)->getClass() == "tierra"){
        ui->m_kilometro->setEnabled(true);
        ui->mb_si->setEnabled(true);
        ui->mb_no->setEnabled(true);
        ui->m_habitacion->setEnabled(false);
        ui->mr_no->setEnabled(false);
        ui->mr_si->setEnabled(false);
        ui->m_mesero->setEnabled(false);
    }else if(lista->at(index)->getClass() == "aire"){
        ui->m_kilometro->setEnabled(false);
        ui->mb_si->setEnabled(false);
        ui->mb_no->setEnabled(false);
        ui->m_habitacion->setEnabled(false);
        ui->mr_no->setEnabled(false);
        ui->mr_si->setEnabled(false);
        ui->m_mesero->setEnabled(true);
    }else if(lista->at(index)->getClass() == "agua"){
        ui->m_kilometro->setEnabled(false);
        ui->mb_si->setEnabled(false);
        ui->mb_no->setEnabled(false);
        ui->m_habitacion->setEnabled(true);
        ui->mr_no->setEnabled(true);
        ui->mr_si->setEnabled(true);
        ui->m_mesero->setEnabled(false);
    }
}


void modificar::on_pushButton_2_clicked()
{
    this->close();
}

void modificar::on_pushButton_clicked()
{
    int index = ui->m_elegido->currentIndex();

    lista->at(index)->setName(ui->m_id->text().toStdString());
    lista->at(index)->setDescripcion(ui->m_descripcion->toPlainText().toStdString());
    lista->at(index)->setVelocidad(ui->m_velocidad->value());
    lista->at(index)->setPago(ui->m_pago->value());
    lista->at(index)->setPeso(ui->m_peso->value());
    lista->at(index)->setCapacidad(ui->m_capacidad->value());

}
