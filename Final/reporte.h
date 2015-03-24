#ifndef REPORTE_H
#define REPORTE_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QTreeWidget>
#include <vector>
#include "transporte.h"
#include "viaje.h"
using std::vector;
namespace Ui {
class reporte;
}

class reporte : public QDialog
{
    Q_OBJECT

public:
    explicit reporte( vector<transporte>*,vector<viaje>*,QWidget *parent = 0);
    ~reporte();
    void AddRoot(QString name);
    void AddChild(QTreeWidgetItem *parent,QString name);
private slots:
    void on_pushButton_3_clicked();

private:
    Ui::reporte *ui;
    vector<viaje>* lista2;
    vector<transporte>* lista;

};

#endif // REPORTE_H
