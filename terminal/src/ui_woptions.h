/********************************************************************************
** Form generated from reading UI file 'woptions.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WOPTIONS_H
#define UI_WOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_woptions
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QLabel *repetirPasswordLabel;
    QLineEdit *repetirPasswordLineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *resetPasswordButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *shortPasswordLabel;
    QLineEdit *shortPasswordLineEdit;
    QLabel *repetirShortLabel;
    QLineEdit *repetirShortLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *resetShortPasswordButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *woptions)
    {
        if (woptions->objectName().isEmpty())
            woptions->setObjectName(QStringLiteral("woptions"));
        woptions->resize(465, 317);
        verticalLayout = new QVBoxLayout(woptions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(woptions);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        passwordLabel = new QLabel(groupBox);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(groupBox);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout->setWidget(0, QFormLayout::FieldRole, passwordLineEdit);

        repetirPasswordLabel = new QLabel(groupBox);
        repetirPasswordLabel->setObjectName(QStringLiteral("repetirPasswordLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, repetirPasswordLabel);

        repetirPasswordLineEdit = new QLineEdit(groupBox);
        repetirPasswordLineEdit->setObjectName(QStringLiteral("repetirPasswordLineEdit"));
        repetirPasswordLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout->setWidget(1, QFormLayout::FieldRole, repetirPasswordLineEdit);


        verticalLayout_3->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        resetPasswordButton = new QPushButton(groupBox);
        resetPasswordButton->setObjectName(QStringLiteral("resetPasswordButton"));

        horizontalLayout->addWidget(resetPasswordButton);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(woptions);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        shortPasswordLabel = new QLabel(groupBox_2);
        shortPasswordLabel->setObjectName(QStringLiteral("shortPasswordLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, shortPasswordLabel);

        shortPasswordLineEdit = new QLineEdit(groupBox_2);
        shortPasswordLineEdit->setObjectName(QStringLiteral("shortPasswordLineEdit"));
        shortPasswordLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, shortPasswordLineEdit);

        repetirShortLabel = new QLabel(groupBox_2);
        repetirShortLabel->setObjectName(QStringLiteral("repetirShortLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, repetirShortLabel);

        repetirShortLineEdit = new QLineEdit(groupBox_2);
        repetirShortLineEdit->setObjectName(QStringLiteral("repetirShortLineEdit"));
        repetirShortLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, repetirShortLineEdit);


        verticalLayout_2->addLayout(formLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        resetShortPasswordButton = new QPushButton(groupBox_2);
        resetShortPasswordButton->setObjectName(QStringLiteral("resetShortPasswordButton"));

        horizontalLayout_2->addWidget(resetShortPasswordButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(woptions);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(woptions);
        QObject::connect(buttonBox, SIGNAL(accepted()), woptions, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), woptions, SLOT(reject()));

        QMetaObject::connectSlotsByName(woptions);
    } // setupUi

    void retranslateUi(QDialog *woptions)
    {
        woptions->setWindowTitle(QApplication::translate("woptions", "Opciones ", 0));
        groupBox->setTitle(QApplication::translate("woptions", "Reseteo de Contrase\303\261a", 0));
        passwordLabel->setText(QApplication::translate("woptions", "password:", 0));
        repetirPasswordLabel->setText(QApplication::translate("woptions", "repetir password:", 0));
        resetPasswordButton->setText(QApplication::translate("woptions", "Resetear", 0));
        groupBox_2->setTitle(QApplication::translate("woptions", "Reseteo Contrase\303\261a Corta:", 0));
        shortPasswordLabel->setText(QApplication::translate("woptions", "short password:", 0));
        repetirShortLabel->setText(QApplication::translate("woptions", "repetir short:", 0));
        resetShortPasswordButton->setText(QApplication::translate("woptions", "Resetarte", 0));
    } // retranslateUi

};

namespace Ui {
    class woptions: public Ui_woptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WOPTIONS_H
