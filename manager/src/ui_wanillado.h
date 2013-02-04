/********************************************************************************
** Form generated from reading UI file 'wanillado.ui'
**
** Created: Sat 2. Feb 03:25:02 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WANILLADO_H
#define UI_WANILLADO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

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
            wanillado->setObjectName(QString::fromUtf8("wanillado"));
        wanillado->resize(345, 152);
        verticalLayout = new QVBoxLayout(wanillado);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        nombreLabel = new QLabel(wanillado);
        nombreLabel->setObjectName(QString::fromUtf8("nombreLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nombreLabel);

        nombreLineEdit = new QLineEdit(wanillado);
        nombreLineEdit->setObjectName(QString::fromUtf8("nombreLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nombreLineEdit);

        costoLabel = new QLabel(wanillado);
        costoLabel->setObjectName(QString::fromUtf8("costoLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, costoLabel);

        costoDoubleSpinBox = new QDoubleSpinBox(wanillado);
        costoDoubleSpinBox->setObjectName(QString::fromUtf8("costoDoubleSpinBox"));
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
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
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
        wanillado->setWindowTitle(QApplication::translate("wanillado", "A\303\261adir/Modificar Anillado", 0, QApplication::UnicodeUTF8));
        nombreLabel->setText(QApplication::translate("wanillado", "Nombre:", 0, QApplication::UnicodeUTF8));
        costoLabel->setText(QApplication::translate("wanillado", "Costo: ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class wanillado: public Ui_wanillado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WANILLADO_H
