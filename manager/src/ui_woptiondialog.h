/********************************************************************************
** Form generated from reading UI file 'woptiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WOPTIONDIALOG_H
#define UI_WOPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_wOptionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *localLabel;
    QComboBox *localComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *wOptionDialog)
    {
        if (wOptionDialog->objectName().isEmpty())
            wOptionDialog->setObjectName(QString::fromUtf8("wOptionDialog"));
        wOptionDialog->setWindowModality(Qt::ApplicationModal);
        wOptionDialog->resize(465, 138);
        wOptionDialog->setModal(true);
        verticalLayout = new QVBoxLayout(wOptionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        localLabel = new QLabel(wOptionDialog);
        localLabel->setObjectName(QString::fromUtf8("localLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, localLabel);

        localComboBox = new QComboBox(wOptionDialog);
        localComboBox->setObjectName(QString::fromUtf8("localComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, localComboBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(wOptionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(wOptionDialog);

        QMetaObject::connectSlotsByName(wOptionDialog);
    } // setupUi

    void retranslateUi(QDialog *wOptionDialog)
    {
        wOptionDialog->setWindowTitle(QCoreApplication::translate("wOptionDialog", "Opciones", nullptr));
        localLabel->setText(QCoreApplication::translate("wOptionDialog", "Local: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wOptionDialog: public Ui_wOptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WOPTIONDIALOG_H
