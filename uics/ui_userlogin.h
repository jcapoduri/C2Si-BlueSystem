/********************************************************************************
** Form generated from reading UI file 'userlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGIN_H
#define UI_USERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userloginForm
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *userLabel;
    QLineEdit *userLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *userloginForm)
    {
        if (userloginForm->objectName().isEmpty())
            userloginForm->setObjectName(QStringLiteral("userloginForm"));
        userloginForm->resize(400, 121);
        userloginForm->setMaximumSize(QSize(400, 121));
        verticalLayout = new QVBoxLayout(userloginForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        userLabel = new QLabel(userloginForm);
        userLabel->setObjectName(QStringLiteral("userLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, userLabel);

        userLineEdit = new QLineEdit(userloginForm);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, userLineEdit);

        passwordLabel = new QLabel(userloginForm);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(userloginForm);
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

        pushButton = new QPushButton(userloginForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(userloginForm);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(userLineEdit, passwordLineEdit);
        QWidget::setTabOrder(passwordLineEdit, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton);

        retranslateUi(userloginForm);

        QMetaObject::connectSlotsByName(userloginForm);
    } // setupUi

    void retranslateUi(QWidget *userloginForm)
    {
        userloginForm->setWindowTitle(QApplication::translate("userloginForm", "Form", 0));
        userLabel->setText(QApplication::translate("userloginForm", "usuario:", 0));
        passwordLabel->setText(QApplication::translate("userloginForm", "contrase\303\261a: ", 0));
        pushButton->setText(QApplication::translate("userloginForm", "Cancel", 0));
        pushButton_2->setText(QApplication::translate("userloginForm", "Login", 0));
    } // retranslateUi

};

namespace Ui {
    class userloginForm: public Ui_userloginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
