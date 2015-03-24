/********************************************************************************
** Form generated from reading UI file 'cambio.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMBIO_H
#define UI_CAMBIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_cambio
{
public:
    QComboBox *c_transporte;
    QRadioButton *c_disponible;
    QRadioButton *c_viaje;
    QRadioButton *c_reparacion;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *cambio)
    {
        if (cambio->objectName().isEmpty())
            cambio->setObjectName(QStringLiteral("cambio"));
        cambio->resize(400, 300);
        c_transporte = new QComboBox(cambio);
        c_transporte->setObjectName(QStringLiteral("c_transporte"));
        c_transporte->setGeometry(QRect(130, 22, 211, 27));
        c_disponible = new QRadioButton(cambio);
        c_disponible->setObjectName(QStringLiteral("c_disponible"));
        c_disponible->setGeometry(QRect(130, 78, 117, 22));
        c_viaje = new QRadioButton(cambio);
        c_viaje->setObjectName(QStringLiteral("c_viaje"));
        c_viaje->setGeometry(QRect(130, 129, 117, 22));
        c_reparacion = new QRadioButton(cambio);
        c_reparacion->setObjectName(QStringLiteral("c_reparacion"));
        c_reparacion->setGeometry(QRect(130, 180, 117, 22));
        label = new QLabel(cambio);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 32, 75, 17));
        pushButton = new QPushButton(cambio);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 240, 99, 27));
        pushButton_2 = new QPushButton(cambio);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 240, 99, 27));

        retranslateUi(cambio);

        QMetaObject::connectSlotsByName(cambio);
    } // setupUi

    void retranslateUi(QDialog *cambio)
    {
        cambio->setWindowTitle(QApplication::translate("cambio", "Dialog", 0));
        c_disponible->setText(QApplication::translate("cambio", "Disponible", 0));
        c_viaje->setText(QApplication::translate("cambio", "Viaje", 0));
        c_reparacion->setText(QApplication::translate("cambio", "Reparacion", 0));
        label->setText(QApplication::translate("cambio", "Transporte", 0));
        pushButton->setText(QApplication::translate("cambio", "Cambiar", 0));
        pushButton_2->setText(QApplication::translate("cambio", "Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class cambio: public Ui_cambio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMBIO_H
