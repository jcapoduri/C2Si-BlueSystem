/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_loginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *usuarioLabel;
    QLineEdit *usuarioLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *loginDialog)
    {
        if (loginDialog->objectName().isEmpty())
            loginDialog->setObjectName(QStringLiteral("loginDialog"));
        loginDialog->resize(369, 121);
        verticalLayout = new QVBoxLayout(loginDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        usuarioLabel = new QLabel(loginDialog);
        usuarioLabel->setObjectName(QStringLiteral("usuarioLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, usuarioLabel);

        usuarioLineEdit = new QLineEdit(loginDialog);
        usuarioLineEdit->setObjectName(QStringLiteral("usuarioLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, usuarioLineEdit);

        passwordLabel = new QLabel(loginDialog);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(loginDialog);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordLineEdit);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(loginDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(loginDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), loginDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), loginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(loginDialog);
    } // setupUi

    void retranslateUi(QDialog *loginDialog)
    {
        loginDialog->setWindowTitle(QApplication::translate("loginDialog", "Login", 0));
        usuarioLabel->setText(QApplication::translate("loginDialog", "Usuario:", 0));
        usuarioLineEdit->setText(QString());
        passwordLabel->setText(QApplication::translate("loginDialog", "Password:", 0));
        passwordLineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loginDialog: public Ui_loginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
