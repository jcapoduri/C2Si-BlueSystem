/********************************************************************************
** Form generated from reading UI file 'wuser.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WUSER_H
#define UI_WUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wUser
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *usuarioLabel;
    QLineEdit *usuarioLineEdit;
    QLabel *contraseALabel;
    QLineEdit *contraseALineEdit;
    QLabel *contraseACortaLabel;
    QLineEdit *contraseACortaLineEdit;
    QLabel *nombreLabel;
    QLineEdit *nombreLineEdit;
    QLabel *apellidoLabel;
    QLineEdit *apellidoLineEdit;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QLabel *telefonoLabel;
    QLineEdit *telefonoLineEdit;
    QLabel *fechaNacimienoLabel;
    QDateEdit *fechaNacimienoDateEdit;
    QLabel *activoLabel;
    QCheckBox *activoCheckBox;
    QLabel *adminLabel;
    QCheckBox *adminCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *wUser)
    {
        if (wUser->objectName().isEmpty())
            wUser->setObjectName(QStringLiteral("wUser"));
        wUser->resize(511, 345);
        verticalLayout = new QVBoxLayout(wUser);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        usuarioLabel = new QLabel(wUser);
        usuarioLabel->setObjectName(QStringLiteral("usuarioLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, usuarioLabel);

        usuarioLineEdit = new QLineEdit(wUser);
        usuarioLineEdit->setObjectName(QStringLiteral("usuarioLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, usuarioLineEdit);

        contraseALabel = new QLabel(wUser);
        contraseALabel->setObjectName(QStringLiteral("contraseALabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, contraseALabel);

        contraseALineEdit = new QLineEdit(wUser);
        contraseALineEdit->setObjectName(QStringLiteral("contraseALineEdit"));
        contraseALineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, contraseALineEdit);

        contraseACortaLabel = new QLabel(wUser);
        contraseACortaLabel->setObjectName(QStringLiteral("contraseACortaLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, contraseACortaLabel);

        contraseACortaLineEdit = new QLineEdit(wUser);
        contraseACortaLineEdit->setObjectName(QStringLiteral("contraseACortaLineEdit"));
        contraseACortaLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout->setWidget(2, QFormLayout::FieldRole, contraseACortaLineEdit);

        nombreLabel = new QLabel(wUser);
        nombreLabel->setObjectName(QStringLiteral("nombreLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, nombreLabel);

        nombreLineEdit = new QLineEdit(wUser);
        nombreLineEdit->setObjectName(QStringLiteral("nombreLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, nombreLineEdit);

        apellidoLabel = new QLabel(wUser);
        apellidoLabel->setObjectName(QStringLiteral("apellidoLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, apellidoLabel);

        apellidoLineEdit = new QLineEdit(wUser);
        apellidoLineEdit->setObjectName(QStringLiteral("apellidoLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, apellidoLineEdit);

        emailLabel = new QLabel(wUser);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, emailLabel);

        emailLineEdit = new QLineEdit(wUser);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, emailLineEdit);

        telefonoLabel = new QLabel(wUser);
        telefonoLabel->setObjectName(QStringLiteral("telefonoLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, telefonoLabel);

        telefonoLineEdit = new QLineEdit(wUser);
        telefonoLineEdit->setObjectName(QStringLiteral("telefonoLineEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, telefonoLineEdit);

        fechaNacimienoLabel = new QLabel(wUser);
        fechaNacimienoLabel->setObjectName(QStringLiteral("fechaNacimienoLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, fechaNacimienoLabel);

        fechaNacimienoDateEdit = new QDateEdit(wUser);
        fechaNacimienoDateEdit->setObjectName(QStringLiteral("fechaNacimienoDateEdit"));
        fechaNacimienoDateEdit->setDateTime(QDateTime(QDate(1980, 1, 1), QTime(0, 0, 0)));

        formLayout->setWidget(7, QFormLayout::FieldRole, fechaNacimienoDateEdit);

        activoLabel = new QLabel(wUser);
        activoLabel->setObjectName(QStringLiteral("activoLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, activoLabel);

        activoCheckBox = new QCheckBox(wUser);
        activoCheckBox->setObjectName(QStringLiteral("activoCheckBox"));
        activoCheckBox->setChecked(true);

        formLayout->setWidget(8, QFormLayout::FieldRole, activoCheckBox);

        adminLabel = new QLabel(wUser);
        adminLabel->setObjectName(QStringLiteral("adminLabel"));

        formLayout->setWidget(9, QFormLayout::LabelRole, adminLabel);

        adminCheckBox = new QCheckBox(wUser);
        adminCheckBox->setObjectName(QStringLiteral("adminCheckBox"));

        formLayout->setWidget(9, QFormLayout::FieldRole, adminCheckBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(wUser);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(wUser);

        QMetaObject::connectSlotsByName(wUser);
    } // setupUi

    void retranslateUi(QWidget *wUser)
    {
        wUser->setWindowTitle(QApplication::translate("wUser", "Form", 0));
        usuarioLabel->setText(QApplication::translate("wUser", "Usuario:", 0));
        contraseALabel->setText(QApplication::translate("wUser", "Contrase\303\261a: ", 0));
        contraseACortaLabel->setText(QApplication::translate("wUser", "Contrase\303\261a Corta:", 0));
        nombreLabel->setText(QApplication::translate("wUser", "Nombre:", 0));
        apellidoLabel->setText(QApplication::translate("wUser", "Apellido", 0));
        emailLabel->setText(QApplication::translate("wUser", "Email:", 0));
        telefonoLabel->setText(QApplication::translate("wUser", "Telefono:", 0));
        fechaNacimienoLabel->setText(QApplication::translate("wUser", "Fecha Nacimieno:", 0));
        activoLabel->setText(QApplication::translate("wUser", "Activo", 0));
        adminLabel->setText(QApplication::translate("wUser", "Admin", 0));
    } // retranslateUi

};

namespace Ui {
    class wUser: public Ui_wUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WUSER_H
