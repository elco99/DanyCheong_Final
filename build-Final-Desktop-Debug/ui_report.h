/********************************************************************************
** Form generated from reading UI file 'report.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_H
#define UI_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_report
{
public:
    QTreeWidget *tree;
    QTextEdit *reporte;
    QPushButton *pushButton;

    void setupUi(QDialog *report)
    {
        if (report->objectName().isEmpty())
            report->setObjectName(QStringLiteral("report"));
        report->resize(709, 476);
        tree = new QTreeWidget(report);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        tree->setHeaderItem(__qtreewidgetitem);
        tree->setObjectName(QStringLiteral("tree"));
        tree->setGeometry(QRect(20, 40, 161, 411));
        reporte = new QTextEdit(report);
        reporte->setObjectName(QStringLiteral("reporte"));
        reporte->setGeometry(QRect(200, 40, 471, 321));
        pushButton = new QPushButton(report);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(420, 420, 99, 27));

        retranslateUi(report);

        QMetaObject::connectSlotsByName(report);
    } // setupUi

    void retranslateUi(QDialog *report)
    {
        report->setWindowTitle(QApplication::translate("report", "Dialog", 0));
        pushButton->setText(QApplication::translate("report", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class report: public Ui_report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
