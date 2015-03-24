/********************************************************************************
** Form generated from reading UI file 'reporte.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTE_H
#define UI_REPORTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_reporte
{
public:
    QTreeWidget *tree;
    QPlainTextEdit *report;
    QPushButton *pushButton;

    void setupUi(QDialog *reporte)
    {
        if (reporte->objectName().isEmpty())
            reporte->setObjectName(QStringLiteral("reporte"));
        reporte->resize(776, 524);
        tree = new QTreeWidget(reporte);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        tree->setHeaderItem(__qtreewidgetitem);
        tree->setObjectName(QStringLiteral("tree"));
        tree->setGeometry(QRect(20, 70, 171, 431));
        report = new QPlainTextEdit(reporte);
        report->setObjectName(QStringLiteral("report"));
        report->setGeometry(QRect(220, 70, 481, 281));
        pushButton = new QPushButton(reporte);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(390, 470, 99, 27));

        retranslateUi(reporte);

        QMetaObject::connectSlotsByName(reporte);
    } // setupUi

    void retranslateUi(QDialog *reporte)
    {
        reporte->setWindowTitle(QApplication::translate("reporte", "Dialog", 0));
        pushButton->setText(QApplication::translate("reporte", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class reporte: public Ui_reporte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTE_H
