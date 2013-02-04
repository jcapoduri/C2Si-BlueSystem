/********************************************************************************
** Form generated from reading UI file 'shortlogindialog.ui'
**
** Created: Mon 26. Nov 15:43:47 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTLOGINDIALOG_H
#define UI_SHORTLOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

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
            shortLoginDialog->setObjectName(QString::fromUtf8("shortLoginDialog"));
        shortLoginDialog->resize(392, 97);
        verticalLayout = new QVBoxLayout(shortLoginDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(shortLoginDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(shortLoginDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        userEdit = new QLabel(shortLoginDialog);
        userEdit->setObjectName(QString::fromUtf8("userEdit"));

        gridLayout->addWidget(userEdit, 0, 1, 1, 1);

        passwordLineEdit = new QLineEdit(shortLoginDialog);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordLineEdit, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(shortLoginDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
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
        shortLoginDialog->setWindowTitle(QApplication::translate("shortLoginDialog", "Login::Usuario", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("shortLoginDialog", "Usuario: ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("shortLoginDialog", "Password:", 0, QApplication::UnicodeUTF8));
        userEdit->setText(QApplication::translate("shortLoginDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class shortLoginDialog: public Ui_shortLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTLOGINDIALOG_H
