/********************************************************************************
** Form generated from reading UI file 'agregar.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGAR_H
#define UI_AGREGAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_agregar
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *a_tipo;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QTextEdit *a_descripcion;
    QDoubleSpinBox *a_velocidad;
    QDoubleSpinBox *a_pago;
    QDoubleSpinBox *a_peso;
    QSpinBox *a_capacidad;
    QLabel *label_7;
    QDoubleSpinBox *a_kilometro;
    QLabel *label_8;
    QRadioButton *ab_si;
    QRadioButton *ab_no;
    QLabel *label_9;
    QLabel *label_10;
    QSpinBox *a_habitacion;
    QRadioButton *ar_si;
    QRadioButton *ar_no;
    QLabel *label_11;
    QSpinBox *a_mesero;
    QLabel *label_12;
    QTextEdit *a_ID;

    void setupUi(QDialog *agregar)
    {
        if (agregar->objectName().isEmpty())
            agregar->setObjectName(QStringLiteral("agregar"));
        agregar->resize(564, 503);
        pushButton = new QPushButton(agregar);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 460, 99, 27));
        pushButton_2 = new QPushButton(agregar);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 460, 99, 27));
        label = new QLabel(agregar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 9, 30, 17));
        label_2 = new QLabel(agregar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 90, 80, 17));
        label_3 = new QLabel(agregar);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 141, 67, 17));
        a_tipo = new QComboBox(agregar);
        a_tipo->setObjectName(QStringLiteral("a_tipo"));
        a_tipo->setGeometry(QRect(114, 9, 92, 27));
        label_4 = new QLabel(agregar);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 174, 35, 17));
        label_5 = new QLabel(agregar);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 207, 33, 17));
        label_6 = new QLabel(agregar);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 240, 71, 17));
        a_descripcion = new QTextEdit(agregar);
        a_descripcion->setObjectName(QStringLiteral("a_descripcion"));
        a_descripcion->setGeometry(QRect(120, 80, 256, 51));
        a_velocidad = new QDoubleSpinBox(agregar);
        a_velocidad->setObjectName(QStringLiteral("a_velocidad"));
        a_velocidad->setGeometry(QRect(115, 141, 101, 27));
        a_velocidad->setMaximum(1e+07);
        a_pago = new QDoubleSpinBox(agregar);
        a_pago->setObjectName(QStringLiteral("a_pago"));
        a_pago->setGeometry(QRect(115, 174, 101, 27));
        a_pago->setMaximum(1e+07);
        a_peso = new QDoubleSpinBox(agregar);
        a_peso->setObjectName(QStringLiteral("a_peso"));
        a_peso->setGeometry(QRect(115, 207, 101, 27));
        a_peso->setMaximum(1e+07);
        a_capacidad = new QSpinBox(agregar);
        a_capacidad->setObjectName(QStringLiteral("a_capacidad"));
        a_capacidad->setGeometry(QRect(115, 240, 101, 27));
        label_7 = new QLabel(agregar);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 290, 81, 17));
        a_kilometro = new QDoubleSpinBox(agregar);
        a_kilometro->setObjectName(QStringLiteral("a_kilometro"));
        a_kilometro->setEnabled(true);
        a_kilometro->setGeometry(QRect(10, 310, 101, 27));
        a_kilometro->setMaximum(1e+07);
        label_8 = new QLabel(agregar);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 350, 67, 17));
        ab_si = new QRadioButton(agregar);
        ab_si->setObjectName(QStringLiteral("ab_si"));
        ab_si->setEnabled(true);
        ab_si->setGeometry(QRect(10, 370, 117, 22));
        ab_si->setAcceptDrops(false);
        ab_si->setAutoFillBackground(false);
        ab_si->setChecked(true);
        ab_no = new QRadioButton(agregar);
        ab_no->setObjectName(QStringLiteral("ab_no"));
        ab_no->setEnabled(true);
        ab_no->setGeometry(QRect(10, 400, 117, 22));
        label_9 = new QLabel(agregar);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(230, 290, 67, 17));
        label_10 = new QLabel(agregar);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(230, 350, 91, 17));
        a_habitacion = new QSpinBox(agregar);
        a_habitacion->setObjectName(QStringLiteral("a_habitacion"));
        a_habitacion->setEnabled(false);
        a_habitacion->setGeometry(QRect(230, 310, 91, 27));
        ar_si = new QRadioButton(agregar);
        ar_si->setObjectName(QStringLiteral("ar_si"));
        ar_si->setEnabled(false);
        ar_si->setGeometry(QRect(230, 370, 117, 22));
        ar_no = new QRadioButton(agregar);
        ar_no->setObjectName(QStringLiteral("ar_no"));
        ar_no->setEnabled(false);
        ar_no->setGeometry(QRect(230, 400, 117, 22));
        label_11 = new QLabel(agregar);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(420, 290, 67, 17));
        a_mesero = new QSpinBox(agregar);
        a_mesero->setObjectName(QStringLiteral("a_mesero"));
        a_mesero->setEnabled(false);
        a_mesero->setGeometry(QRect(420, 310, 91, 27));
        label_12 = new QLabel(agregar);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 50, 67, 17));
        a_ID = new QTextEdit(agregar);
        a_ID->setObjectName(QStringLiteral("a_ID"));
        a_ID->setGeometry(QRect(120, 50, 256, 21));

        retranslateUi(agregar);

        QMetaObject::connectSlotsByName(agregar);
    } // setupUi

    void retranslateUi(QDialog *agregar)
    {
        agregar->setWindowTitle(QApplication::translate("agregar", "Dialog", 0));
        pushButton->setText(QApplication::translate("agregar", "Guardar", 0));
        pushButton_2->setText(QApplication::translate("agregar", "Salir", 0));
        label->setText(QApplication::translate("agregar", "Tipo", 0));
        label_2->setText(QApplication::translate("agregar", "Descripcion", 0));
        label_3->setText(QApplication::translate("agregar", "Velocidad", 0));
        a_tipo->clear();
        a_tipo->insertItems(0, QStringList()
         << QApplication::translate("agregar", "Terrestre", 0)
         << QApplication::translate("agregar", "Aereo", 0)
         << QApplication::translate("agregar", "Maritimo", 0)
        );
        label_4->setText(QApplication::translate("agregar", "Pago", 0));
        label_5->setText(QApplication::translate("agregar", "Peso", 0));
        label_6->setText(QApplication::translate("agregar", "Capacidad", 0));
        label_7->setText(QApplication::translate("agregar", "Kilometros", 0));
        label_8->setText(QApplication::translate("agregar", "Ba\303\261os", 0));
        ab_si->setText(QApplication::translate("agregar", "Si", 0));
        ab_no->setText(QApplication::translate("agregar", "No", 0));
        label_9->setText(QApplication::translate("agregar", "Habitacion", 0));
        label_10->setText(QApplication::translate("agregar", "Restaurante", 0));
        ar_si->setText(QApplication::translate("agregar", "Si", 0));
        ar_no->setText(QApplication::translate("agregar", "No", 0));
        label_11->setText(QApplication::translate("agregar", "Meseros", 0));
        label_12->setText(QApplication::translate("agregar", "ID", 0));
    } // retranslateUi

};

namespace Ui {
    class agregar: public Ui_agregar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_H
