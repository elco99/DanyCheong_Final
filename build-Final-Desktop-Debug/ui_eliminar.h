/********************************************************************************
** Form generated from reading UI file 'eliminar.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINAR_H
#define UI_ELIMINAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_eliminar
{
public:
    QComboBox *e_id;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *eliminar)
    {
        if (eliminar->objectName().isEmpty())
            eliminar->setObjectName(QStringLiteral("eliminar"));
        eliminar->resize(400, 300);
        e_id = new QComboBox(eliminar);
        e_id->setObjectName(QStringLiteral("e_id"));
        e_id->setGeometry(QRect(100, 60, 181, 27));
        pushButton = new QPushButton(eliminar);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 140, 99, 27));
        pushButton_2 = new QPushButton(eliminar);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 140, 99, 27));

        retranslateUi(eliminar);

        QMetaObject::connectSlotsByName(eliminar);
    } // setupUi

    void retranslateUi(QDialog *eliminar)
    {
        eliminar->setWindowTitle(QApplication::translate("eliminar", "Dialog", 0));
        pushButton->setText(QApplication::translate("eliminar", "Vender", 0));
        pushButton_2->setText(QApplication::translate("eliminar", "Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class eliminar: public Ui_eliminar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINAR_H
