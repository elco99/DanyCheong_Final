/********************************************************************************
** Form generated from reading UI file 'transport.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSPORT_H
#define UI_TRANSPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_transport
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *transport)
    {
        if (transport->objectName().isEmpty())
            transport->setObjectName(QStringLiteral("transport"));
        transport->resize(374, 285);
        QIcon icon;
        icon.addFile(QStringLiteral("sistema-de-transporte.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        transport->setWindowIcon(icon);
        pushButton = new QPushButton(transport);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(29, 78, 111, 27));
        pushButton_2 = new QPushButton(transport);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 78, 121, 27));
        pushButton_3 = new QPushButton(transport);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(29, 180, 111, 27));
        pushButton_4 = new QPushButton(transport);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(210, 180, 125, 27));

        retranslateUi(transport);

        QMetaObject::connectSlotsByName(transport);
    } // setupUi

    void retranslateUi(QDialog *transport)
    {
        transport->setWindowTitle(QApplication::translate("transport", "Dialog", 0));
        pushButton->setText(QApplication::translate("transport", "Agregar", 0));
        pushButton_2->setText(QApplication::translate("transport", "Vender", 0));
        pushButton_3->setText(QApplication::translate("transport", "Modificar", 0));
        pushButton_4->setText(QApplication::translate("transport", "Cambiar Estado", 0));
    } // retranslateUi

};

namespace Ui {
    class transport: public Ui_transport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSPORT_H
