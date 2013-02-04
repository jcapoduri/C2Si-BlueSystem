/********************************************************************************
** Form generated from reading UI file 'woptiondialog.ui'
**
** Created: Sat 2. Feb 03:25:03 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WOPTIONDIALOG_H
#define UI_WOPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

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
        wOptionDialog->setWindowTitle(QApplication::translate("wOptionDialog", "Opciones", 0, QApplication::UnicodeUTF8));
        localLabel->setText(QApplication::translate("wOptionDialog", "Local: ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class wOptionDialog: public Ui_wOptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WOPTIONDIALOG_H
