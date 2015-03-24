#include "eliminar.h"
#include "ui_eliminar.h"
#include "transporte.h"

eliminar::eliminar( vector<transporte*>* lista,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::eliminar)
{
    ui->setupUi(this);
    QPalette pal;
    pal.setBrush(this->backgroundRole(),QBrush(QImage(":/image/4.jpg")));
    this->setPalette(pal);
    this->lista = lista;

    for(int i=0;i<lista->size();i++){
        ui->e_id->addItem(QString(lista->at(i)->getName().c_str()));
    }
}

eliminar::~eliminar()
{
    delete ui;
}

void eliminar::on_pushButton_2_clicked()
{
    this->close();
}

void eliminar::on_pushButton_clicked()
{
    lista->erase(lista->begin()+ui->e_id->currentIndex());
    ui->e_id->clear();

    if(lista->size()==0)
        this->close();
    else
        for(int i=0;i<lista->size();i++){
            ui->e_id->addItem(QString(lista->at(i)->getName().c_str()));
        }
}
