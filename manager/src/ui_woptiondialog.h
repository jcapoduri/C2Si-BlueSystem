/********************************************************************************
** Form generated from reading UI file 'woptiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WOPTIONDIALOG_H
#define UI_WOPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
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
            wOptionDialog->setObjectName(QStringLiteral("wOptionDialog"));
        wOptionDialog->setWindowModality(Qt::ApplicationModal);
        wOptionDialog->resize(465, 138);
        wOptionDialog->setModal(true);
        verticalLayout = new QVBoxLayout(wOptionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        localLabel = new QLabel(wOptionDialog);
        localLabel->setObjectName(QStringLiteral("localLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, localLabel);

        localComboBox = new QComboBox(wOptionDialog);
        localComboBox->setObjectName(QStringLiteral("localComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, localComboBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(wOptionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(wOptionDialog);

        QMetaObject::connectSlotsByName(wOptionDialog);
    } // setupUi

    void retranslateUi(QDialog *wOptionDialog)
    {
        wOptionDialog->setWindowTitle(QApplication::translate("wOptionDialog", "Opciones", 0));
        localLabel->setText(QApplication::translate("wOptionDialog", "Local: ", 0));
    } // retranslateUi

};

namespace Ui {
    class wOptionDialog: public Ui_wOptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WOPTIONDIALOG_H
