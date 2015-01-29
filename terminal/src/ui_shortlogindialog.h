/********************************************************************************
** Form generated from reading UI file 'shortlogindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTLOGINDIALOG_H
#define UI_SHORTLOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_shortLoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *userEdit;
    QLineEdit *passwordLineEdit;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *shortLoginDialog)
    {
        if (shortLoginDialog->objectName().isEmpty())
            shortLoginDialog->setObjectName(QStringLiteral("shortLoginDialog"));
        shortLoginDialog->resize(392, 97);
        verticalLayout = new QVBoxLayout(shortLoginDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(shortLoginDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(shortLoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        userEdit = new QLabel(shortLoginDialog);
        userEdit->setObjectName(QStringLiteral("userEdit"));

        gridLayout->addWidget(userEdit, 0, 1, 1, 1);

        passwordLineEdit = new QLineEdit(shortLoginDialog);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordLineEdit, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(shortLoginDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(shortLoginDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), shortLoginDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), shortLoginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(shortLoginDialog);
    } // setupUi

    void retranslateUi(QDialog *shortLoginDialog)
    {
        shortLoginDialog->setWindowTitle(QApplication::translate("shortLoginDialog", "Login::Usuario", 0));
        label->setText(QApplication::translate("shortLoginDialog", "Usuario: ", 0));
        label_2->setText(QApplication::translate("shortLoginDialog", "Password:", 0));
        userEdit->setText(QApplication::translate("shortLoginDialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class shortLoginDialog: public Ui_shortLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTLOGINDIALOG_H
