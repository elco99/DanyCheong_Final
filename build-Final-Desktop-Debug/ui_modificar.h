/********************************************************************************
** Form generated from reading UI file 'modificar.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICAR_H
#define UI_MODIFICAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_modificar
{
public:
    QPushButton *pushButton;
    QRadioButton *mb_no;
    QDoubleSpinBox *m_pago;
    QRadioButton *mr_si;
    QSpinBox *m_capacidad;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QSpinBox *m_mesero;
    QRadioButton *mb_si;
    QDoubleSpinBox *m_velocidad;
    QRadioButton *mr_no;
    QDoubleSpinBox *m_peso;
    QTextEdit *m_descripcion;
    QLabel *label_6;
    QDoubleSpinBox *m_kilometro;
    QLabel *label_5;
    QLabel *label_4;
    QSpinBox *m_habitacion;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_7;
    QComboBox *m_elegido;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *m_id;

    void setupUi(QDialog *modificar)
    {
        if (modificar->objectName().isEmpty())
            modificar->setObjectName(QStringLiteral("modificar"));
        modificar->resize(573, 653);
        pushButton = new QPushButton(modificar);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(164, 590, 85, 27));
        mb_no = new QRadioButton(modificar);
        mb_no->setObjectName(QStringLiteral("mb_no"));
        mb_no->setGeometry(QRect(9, 542, 50, 22));
        m_pago = new QDoubleSpinBox(modificar);
        m_pago->setObjectName(QStringLiteral("m_pago"));
        m_pago->setGeometry(QRect(171, 336, 69, 27));
        m_pago->setMaximum(1e+07);
        mr_si = new QRadioButton(modificar);
        mr_si->setObjectName(QStringLiteral("mr_si"));
        mr_si->setGeometry(QRect(219, 516, 42, 22));
        m_capacidad = new QSpinBox(modificar);
        m_capacidad->setObjectName(QStringLiteral("m_capacidad"));
        m_capacidad->setGeometry(QRect(171, 402, 48, 27));
        label_3 = new QLabel(modificar);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(9, 303, 67, 17));
        pushButton_2 = new QPushButton(modificar);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 590, 85, 27));
        m_mesero = new QSpinBox(modificar);
        m_mesero->setObjectName(QStringLiteral("m_mesero"));
        m_mesero->setGeometry(QRect(390, 460, 48, 27));
        mb_si = new QRadioButton(modificar);
        mb_si->setObjectName(QStringLiteral("mb_si"));
        mb_si->setGeometry(QRect(9, 514, 42, 22));
        m_velocidad = new QDoubleSpinBox(modificar);
        m_velocidad->setObjectName(QStringLiteral("m_velocidad"));
        m_velocidad->setGeometry(QRect(171, 303, 69, 27));
        m_velocidad->setMaximum(1e+07);
        mr_no = new QRadioButton(modificar);
        mr_no->setObjectName(QStringLiteral("mr_no"));
        mr_no->setGeometry(QRect(219, 544, 50, 22));
        m_peso = new QDoubleSpinBox(modificar);
        m_peso->setObjectName(QStringLiteral("m_peso"));
        m_peso->setGeometry(QRect(171, 369, 69, 27));
        m_peso->setMaximum(1e+07);
        m_descripcion = new QTextEdit(modificar);
        m_descripcion->setObjectName(QStringLiteral("m_descripcion"));
        m_descripcion->setGeometry(QRect(171, 75, 256, 192));
        label_6 = new QLabel(modificar);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(9, 402, 71, 17));
        m_kilometro = new QDoubleSpinBox(modificar);
        m_kilometro->setObjectName(QStringLiteral("m_kilometro"));
        m_kilometro->setEnabled(false);
        m_kilometro->setGeometry(QRect(9, 458, 69, 27));
        m_kilometro->setMaximum(1e+07);
        label_5 = new QLabel(modificar);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(9, 369, 33, 17));
        label_4 = new QLabel(modificar);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(9, 336, 35, 17));
        m_habitacion = new QSpinBox(modificar);
        m_habitacion->setObjectName(QStringLiteral("m_habitacion"));
        m_habitacion->setGeometry(QRect(219, 460, 48, 27));
        label_8 = new QLabel(modificar);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(9, 491, 42, 17));
        label_2 = new QLabel(modificar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(9, 75, 80, 17));
        label_10 = new QLabel(modificar);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(219, 493, 84, 17));
        label_7 = new QLabel(modificar);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(9, 9, 52, 17));
        m_elegido = new QComboBox(modificar);
        m_elegido->setObjectName(QStringLiteral("m_elegido"));
        m_elegido->setGeometry(QRect(170, 10, 85, 27));
        label_9 = new QLabel(modificar);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(9, 435, 75, 17));
        label_11 = new QLabel(modificar);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(219, 437, 74, 17));
        label_12 = new QLabel(modificar);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(390, 437, 58, 17));
        label_13 = new QLabel(modificar);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(9, 42, 16, 17));
        m_id = new QLineEdit(modificar);
        m_id->setObjectName(QStringLiteral("m_id"));
        m_id->setGeometry(QRect(171, 42, 146, 27));

        retranslateUi(modificar);

        QMetaObject::connectSlotsByName(modificar);
    } // setupUi

    void retranslateUi(QDialog *modificar)
    {
        modificar->setWindowTitle(QApplication::translate("modificar", "Dialog", 0));
        pushButton->setText(QApplication::translate("modificar", "Modificar", 0));
        mb_no->setText(QApplication::translate("modificar", "No", 0));
        mr_si->setText(QApplication::translate("modificar", "Si", 0));
        label_3->setText(QApplication::translate("modificar", "Velocidad", 0));
        pushButton_2->setText(QApplication::translate("modificar", "Cancelar", 0));
        mb_si->setText(QApplication::translate("modificar", "Si", 0));
        mr_no->setText(QApplication::translate("modificar", "No", 0));
        label_6->setText(QApplication::translate("modificar", "Capacidad", 0));
        label_5->setText(QApplication::translate("modificar", "Peso", 0));
        label_4->setText(QApplication::translate("modificar", "Pago", 0));
        label_8->setText(QApplication::translate("modificar", "Ba\303\261os", 0));
        label_2->setText(QApplication::translate("modificar", "Descripcion", 0));
        label_10->setText(QApplication::translate("modificar", "Restaurante", 0));
        label_7->setText(QApplication::translate("modificar", "Elegido", 0));
        label_9->setText(QApplication::translate("modificar", "Kilometros", 0));
        label_11->setText(QApplication::translate("modificar", "Habitacion", 0));
        label_12->setText(QApplication::translate("modificar", "Meseros", 0));
        label_13->setText(QApplication::translate("modificar", "<html><head/><body><p>ID</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class modificar: public Ui_modificar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICAR_H
