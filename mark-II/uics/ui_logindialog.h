/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *loginButton;
    QPushButton *cancelButton;

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

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        loginButton = new QPushButton(loginDialog);
        loginButton->setObjectName(QStringLiteral("loginButton"));

        horizontalLayout->addWidget(loginButton);

        cancelButton = new QPushButton(loginDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(loginDialog);
        QObject::connect(usuarioLineEdit, SIGNAL(returnPressed()), passwordLineEdit, SLOT(selectAll()));

        QMetaObject::connectSlotsByName(loginDialog);
    } // setupUi

    void retranslateUi(QDialog *loginDialog)
    {
        loginDialog->setWindowTitle(QApplication::translate("loginDialog", "Login", 0));
        usuarioLabel->setText(QApplication::translate("loginDialog", "Usuario:", 0));
        usuarioLineEdit->setText(QString());
        passwordLabel->setText(QApplication::translate("loginDialog", "Password:", 0));
        passwordLineEdit->setText(QString());
        loginButton->setText(QApplication::translate("loginDialog", "Entrar", 0));
        cancelButton->setText(QApplication::translate("loginDialog", "Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class loginDialog: public Ui_loginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
