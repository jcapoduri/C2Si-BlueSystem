/********************************************************************************
** Form generated from reading UI file 'wuser.ui'
**
** Created: Sat 2. Feb 03:25:02 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WUSER_H
#define UI_WUSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

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
            wUser->setObjectName(QString::fromUtf8("wUser"));
        wUser->resize(511, 345);
        verticalLayout = new QVBoxLayout(wUser);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        usuarioLabel = new QLabel(wUser);
        usuarioLabel->setObjectName(QString::fromUtf8("usuarioLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, usuarioLabel);

        usuarioLineEdit = new QLineEdit(wUser);
        usuarioLineEdit->setObjectName(QString::fromUtf8("usuarioLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, usuarioLineEdit);

        contraseALabel = new QLabel(wUser);
        contraseALabel->setObjectName(QString::fromUtf8("contraseALabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, contraseALabel);

        contraseALineEdit = new QLineEdit(wUser);
        contraseALineEdit->setObjectName(QString::fromUtf8("contraseALineEdit"));
        contraseALineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, contraseALineEdit);

        contraseACortaLabel = new QLabel(wUser);
        contraseACortaLabel->setObjectName(QString::fromUtf8("contraseACortaLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, contraseACortaLabel);

        contraseACortaLineEdit = new QLineEdit(wUser);
        contraseACortaLineEdit->setObjectName(QString::fromUtf8("contraseACortaLineEdit"));
        contraseACortaLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout->setWidget(2, QFormLayout::FieldRole, contraseACortaLineEdit);

        nombreLabel = new QLabel(wUser);
        nombreLabel->setObjectName(QString::fromUtf8("nombreLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, nombreLabel);

        nombreLineEdit = new QLineEdit(wUser);
        nombreLineEdit->setObjectName(QString::fromUtf8("nombreLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, nombreLineEdit);

        apellidoLabel = new QLabel(wUser);
        apellidoLabel->setObjectName(QString::fromUtf8("apellidoLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, apellidoLabel);

        apellidoLineEdit = new QLineEdit(wUser);
        apellidoLineEdit->setObjectName(QString::fromUtf8("apellidoLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, apellidoLineEdit);

        emailLabel = new QLabel(wUser);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, emailLabel);

        emailLineEdit = new QLineEdit(wUser);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, emailLineEdit);

        telefonoLabel = new QLabel(wUser);
        telefonoLabel->setObjectName(QString::fromUtf8("telefonoLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, telefonoLabel);

        telefonoLineEdit = new QLineEdit(wUser);
        telefonoLineEdit->setObjectName(QString::fromUtf8("telefonoLineEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, telefonoLineEdit);

        fechaNacimienoLabel = new QLabel(wUser);
        fechaNacimienoLabel->setObjectName(QString::fromUtf8("fechaNacimienoLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, fechaNacimienoLabel);

        fechaNacimienoDateEdit = new QDateEdit(wUser);
        fechaNacimienoDateEdit->setObjectName(QString::fromUtf8("fechaNacimienoDateEdit"));
        fechaNacimienoDateEdit->setDateTime(QDateTime(QDate(1980, 1, 1), QTime(0, 0, 0)));

        formLayout->setWidget(7, QFormLayout::FieldRole, fechaNacimienoDateEdit);

        activoLabel = new QLabel(wUser);
        activoLabel->setObjectName(QString::fromUtf8("activoLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, activoLabel);

        activoCheckBox = new QCheckBox(wUser);
        activoCheckBox->setObjectName(QString::fromUtf8("activoCheckBox"));
        activoCheckBox->setChecked(true);

        formLayout->setWidget(8, QFormLayout::FieldRole, activoCheckBox);

        adminLabel = new QLabel(wUser);
        adminLabel->setObjectName(QString::fromUtf8("adminLabel"));

        formLayout->setWidget(9, QFormLayout::LabelRole, adminLabel);

        adminCheckBox = new QCheckBox(wUser);
        adminCheckBox->setObjectName(QString::fromUtf8("adminCheckBox"));

        formLayout->setWidget(9, QFormLayout::FieldRole, adminCheckBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(wUser);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(wUser);

        QMetaObject::connectSlotsByName(wUser);
    } // setupUi

    void retranslateUi(QWidget *wUser)
    {
        wUser->setWindowTitle(QApplication::translate("wUser", "Form", 0, QApplication::UnicodeUTF8));
        usuarioLabel->setText(QApplication::translate("wUser", "Usuario:", 0, QApplication::UnicodeUTF8));
        contraseALabel->setText(QApplication::translate("wUser", "Contrase\303\261a: ", 0, QApplication::UnicodeUTF8));
        contraseACortaLabel->setText(QApplication::translate("wUser", "Contrase\303\261a Corta:", 0, QApplication::UnicodeUTF8));
        nombreLabel->setText(QApplication::translate("wUser", "Nombre:", 0, QApplication::UnicodeUTF8));
        apellidoLabel->setText(QApplication::translate("wUser", "Apellido", 0, QApplication::UnicodeUTF8));
        emailLabel->setText(QApplication::translate("wUser", "Email:", 0, QApplication::UnicodeUTF8));
        telefonoLabel->setText(QApplication::translate("wUser", "Telefono:", 0, QApplication::UnicodeUTF8));
        fechaNacimienoLabel->setText(QApplication::translate("wUser", "Fecha Nacimieno:", 0, QApplication::UnicodeUTF8));
        activoLabel->setText(QApplication::translate("wUser", "Activo", 0, QApplication::UnicodeUTF8));
        adminLabel->setText(QApplication::translate("wUser", "Admin", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class wUser: public Ui_wUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WUSER_H
