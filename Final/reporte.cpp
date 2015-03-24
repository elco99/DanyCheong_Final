#include "reporte.h"
#include "ui_reporte.h"
#include <QTreeWidget>
#include <QtCore>
#include <QDialog>
#include <QtGui>

reporte::reporte(vector<transporte>* lista,vector<viaje>* lista2,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reporte)
{
    ui->setupUi(this);
    this->lista = lista;
    this->lista2 = lista2;
    AddRoot("Transporte");
    AddRoot("Viaje");
}

reporte::~reporte()
{
    delete ui;
}

void reporte::on_pushButton_3_clicked()
{
    this->close();
}

void reporte::AddRoot(QString name){
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->tree);
    itm->setText(0,name);
    ui->tree->addTopLevelItem(itm);
}

void reporte::AddChild(QTreeWidgetItem *parent,QString name){

}
