#ifndef REPORT_H
#define REPORT_H

#include <QDialog>
#include <QtCore>
#include <vector>
#include "transporte.h"
#include "viaje.h"
#include <QtGui>
#include <QTreeWidget>
using std::vector;
namespace Ui {
class report;
}

class report : public QDialog
{
    Q_OBJECT

public:
    explicit report(vector<transporte*>*,vector<viaje>*,QWidget *parent = 0);
    ~report();
    void AddRoot(QString );
    void AddChild(QTreeWidgetItem* ,QString );
private slots:
    void on_tree_doubleClicked(const QModelIndex &index);

    void on_pushButton_clicked();

private:
    Ui::report *ui;
    vector<transporte*>* lista;
    vector<viaje>* lista2;
};

#endif // REPORT_H
