/********************************************************************************
** Form generated from reading UI file 'trip.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIP_H
#define UI_TRIP_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_trip
{
public:
    QPushButton *pushButton;
    QLabel *label_3;
    QDoubleSpinBox *v_duracion;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_5;
    QSpinBox *v_pasajero;
    QComboBox *v_transporte;
    QDoubleSpinBox *v_ingreso;
    QTimeEdit *v_hora;

    void setupUi(QDialog *trip)
    {
        if (trip->objectName().isEmpty())
            trip->setObjectName(QStringLiteral("trip"));
        trip->resize(400, 469);
        pushButton = new QPushButton(trip);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 416, 99, 27));
        label_3 = new QLabel(trip);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(19, 180, 110, 17));
        v_duracion = new QDoubleSpinBox(trip);
        v_duracion->setObjectName(QStringLiteral("v_duracion"));
        v_duracion->setGeometry(QRect(240, 263, 141, 27));
        pushButton_2 = new QPushButton(trip);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 416, 99, 27));
        label_2 = new QLabel(trip);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(19, 97, 72, 17));
        label_4 = new QLabel(trip);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(19, 263, 65, 17));
        label = new QLabel(trip);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(19, 14, 82, 17));
        label_5 = new QLabel(trip);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(19, 346, 51, 17));
        v_pasajero = new QSpinBox(trip);
        v_pasajero->setObjectName(QStringLiteral("v_pasajero"));
        v_pasajero->setGeometry(QRect(240, 97, 141, 27));
        v_transporte = new QComboBox(trip);
        v_transporte->setObjectName(QStringLiteral("v_transporte"));
        v_transporte->setGeometry(QRect(240, 14, 141, 27));
        v_ingreso = new QDoubleSpinBox(trip);
        v_ingreso->setObjectName(QStringLiteral("v_ingreso"));
        v_ingreso->setEnabled(false);
        v_ingreso->setGeometry(QRect(240, 346, 141, 27));
        v_hora = new QTimeEdit(trip);
        v_hora->setObjectName(QStringLiteral("v_hora"));
        v_hora->setGeometry(QRect(240, 180, 141, 27));

        retranslateUi(trip);

        QMetaObject::connectSlotsByName(trip);
    } // setupUi

    void retranslateUi(QDialog *trip)
    {
        trip->setWindowTitle(QApplication::translate("trip", "Dialog", 0));
        pushButton->setText(QApplication::translate("trip", "Guardar", 0));
        label_3->setText(QApplication::translate("trip", "Hora de partida:", 0));
        pushButton_2->setText(QApplication::translate("trip", "Cancelar", 0));
        label_2->setText(QApplication::translate("trip", "Pasajeros: ", 0));
        label_4->setText(QApplication::translate("trip", "Duracion:", 0));
        label->setText(QApplication::translate("trip", "Transportes", 0));
        label_5->setText(QApplication::translate("trip", "Ingreso", 0));
    } // retranslateUi

};

namespace Ui {
    class trip: public Ui_trip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIP_H
