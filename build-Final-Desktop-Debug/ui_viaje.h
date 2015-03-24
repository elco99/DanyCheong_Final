/********************************************************************************
** Form generated from reading UI file 'viaje.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIAJE_H
#define UI_VIAJE_H

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

class Ui_viaje
{
public:
    QLabel *label;
    QComboBox *v_transporte;
    QLabel *label_2;
    QSpinBox *v_pasajero;
    QTimeEdit *v_hora;
    QLabel *label_3;
    QLabel *label_4;
    QDoubleSpinBox *v_duracion;
    QLabel *label_5;
    QDoubleSpinBox *v_ingreso;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *viaje)
    {
        if (viaje->objectName().isEmpty())
            viaje->setObjectName(QStringLiteral("viaje"));
        viaje->resize(453, 481);
        label = new QLabel(viaje);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 18, 82, 17));
        v_transporte = new QComboBox(viaje);
        v_transporte->setObjectName(QStringLiteral("v_transporte"));
        v_transporte->setGeometry(QRect(230, 18, 141, 27));
        label_2 = new QLabel(viaje);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(9, 101, 72, 17));
        v_pasajero = new QSpinBox(viaje);
        v_pasajero->setObjectName(QStringLiteral("v_pasajero"));
        v_pasajero->setGeometry(QRect(230, 101, 141, 27));
        v_hora = new QTimeEdit(viaje);
        v_hora->setObjectName(QStringLiteral("v_hora"));
        v_hora->setGeometry(QRect(230, 184, 141, 27));
        label_3 = new QLabel(viaje);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(9, 184, 110, 17));
        label_4 = new QLabel(viaje);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(9, 267, 65, 17));
        v_duracion = new QDoubleSpinBox(viaje);
        v_duracion->setObjectName(QStringLiteral("v_duracion"));
        v_duracion->setGeometry(QRect(230, 267, 141, 27));
        label_5 = new QLabel(viaje);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(9, 350, 51, 17));
        v_ingreso = new QDoubleSpinBox(viaje);
        v_ingreso->setObjectName(QStringLiteral("v_ingreso"));
        v_ingreso->setEnabled(false);
        v_ingreso->setGeometry(QRect(230, 350, 141, 27));
        pushButton = new QPushButton(viaje);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 420, 99, 27));
        pushButton_2 = new QPushButton(viaje);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 420, 99, 27));

        retranslateUi(viaje);

        QMetaObject::connectSlotsByName(viaje);
    } // setupUi

    void retranslateUi(QDialog *viaje)
    {
        viaje->setWindowTitle(QApplication::translate("viaje", "Dialog", 0));
        label->setText(QApplication::translate("viaje", "Transportes", 0));
        label_2->setText(QApplication::translate("viaje", "Pasajeros: ", 0));
        label_3->setText(QApplication::translate("viaje", "Hora de partida:", 0));
        label_4->setText(QApplication::translate("viaje", "Duracion:", 0));
        label_5->setText(QApplication::translate("viaje", "Ingreso", 0));
        pushButton->setText(QApplication::translate("viaje", "Guardar", 0));
        pushButton_2->setText(QApplication::translate("viaje", "Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class viaje: public Ui_viaje {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIAJE_H
