/********************************************************************************
** Form generated from reading UI file 'wanillado.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WANILLADO_H
#define UI_WANILLADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_wanillado
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nombreLabel;
    QLineEdit *nombreLineEdit;
    QLabel *costoLabel;
    QDoubleSpinBox *costoDoubleSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *wanillado)
    {
        if (wanillado->objectName().isEmpty())
            wanillado->setObjectName(QStringLiteral("wanillado"));
        wanillado->resize(345, 152);
        verticalLayout = new QVBoxLayout(wanillado);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        nombreLabel = new QLabel(wanillado);
        nombreLabel->setObjectName(QStringLiteral("nombreLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nombreLabel);

        nombreLineEdit = new QLineEdit(wanillado);
        nombreLineEdit->setObjectName(QStringLiteral("nombreLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nombreLineEdit);

        costoLabel = new QLabel(wanillado);
        costoLabel->setObjectName(QStringLiteral("costoLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, costoLabel);

        costoDoubleSpinBox = new QDoubleSpinBox(wanillado);
        costoDoubleSpinBox->setObjectName(QStringLiteral("costoDoubleSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(costoDoubleSpinBox->sizePolicy().hasHeightForWidth());
        costoDoubleSpinBox->setSizePolicy(sizePolicy);
        costoDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        costoDoubleSpinBox->setMaximum(9999.99);

        formLayout->setWidget(1, QFormLayout::FieldRole, costoDoubleSpinBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(wanillado);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(wanillado);
        QObject::connect(buttonBox, SIGNAL(accepted()), wanillado, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), wanillado, SLOT(reject()));

        QMetaObject::connectSlotsByName(wanillado);
    } // setupUi

    void retranslateUi(QDialog *wanillado)
    {
        wanillado->setWindowTitle(QApplication::translate("wanillado", "A\303\261adir/Modificar Anillado", 0));
        nombreLabel->setText(QApplication::translate("wanillado", "Nombre:", 0));
        costoLabel->setText(QApplication::translate("wanillado", "Costo: ", 0));
    } // retranslateUi

};

namespace Ui {
    class wanillado: public Ui_wanillado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WANILLADO_H
