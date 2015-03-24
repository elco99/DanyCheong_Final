#include "report.h"
#include "ui_report.h"

report::report(vector<transporte*>* lista,vector<viaje>* lista2,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::report)
{
    ui->setupUi(this);
    QPalette pal;
    pal.setBrush(this->backgroundRole(),QBrush(QImage(":/image/8.jpg")));
    this->setPalette(pal);
    this->lista = lista;
    this->lista2 = lista2;
    ui->tree->setHeaderLabel("Disponibles");
    AddRoot("Transporte");
    AddRoot("Viaje");
}

report::~report()
{
    delete ui;
}

void report::AddRoot(QString name){
    QTreeWidgetItem *itm=new QTreeWidgetItem(ui->tree);
    itm->setText(0,name);
    QString temp;
    if(name == "Transporte"){
        for(int i=0;i<lista->size();i++){
            temp=QString(lista->at(i)->getName().c_str());
            AddChild(itm,temp);
        }
    }else{
        for(int i=0;i<lista2->size();i++){
            temp= "Viaje "+ i;
            AddChild(itm,temp);
        }
    }

}
void report::AddChild(QTreeWidgetItem *parent,QString name){
    QTreeWidgetItem *itm=new QTreeWidgetItem();
    itm->setText(0,name);
    parent->addChild(itm);
}

void report::on_tree_doubleClicked(const QModelIndex &inde)
{
    QString temp,temp1;
    for(int i=0;i<lista->size();i++){
        temp=QString(lista->at(i)->getName().c_str());
        QModelIndex index = ui->tree->selectionModel()->currentIndex();
        QString tmp = index.data(Qt::DisplayRole).toString();
        if(tmp == temp){

            ui->reporte->setText(QString(lista->at(i)->toString().c_str()));
        }
    }

    for(int i=0;i<lista2->size();i++){
        temp1= "Viaje "+ i;
        QModelIndex index = ui->tree->selectionModel()->currentIndex();
        QString tmp = index.data(Qt::DisplayRole).toString();
        if(tmp == temp1){
            ui->reporte->setText(QString(lista2->at(i).toString().c_str()));
        }
    }
}

void report::on_pushButton_clicked()
{
    this->close();
}
