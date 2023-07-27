/********************************************************************************
** Form generated from reading UI file 'wbooks.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBOOKS_H
#define UI_WBOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wBooks
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *numeroLabel;
    QSpinBox *numeroSpinBox;
    QLabel *nombreLabel;
    QLineEdit *nombreLineEdit;
    QLabel *simpleFazLabel;
    QSpinBox *simpleFazSpinBox;
    QLabel *doubleFazLabel;
    QSpinBox *doubleFazSpinBox;
    QLabel *anilladoLabel;
    QComboBox *anilladoComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *wBooks)
    {
        if (wBooks->objectName().isEmpty())
            wBooks->setObjectName(QString::fromUtf8("wBooks"));
        wBooks->resize(453, 187);
        verticalLayout = new QVBoxLayout(wBooks);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        numeroLabel = new QLabel(wBooks);
        numeroLabel->setObjectName(QString::fromUtf8("numeroLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, numeroLabel);

        numeroSpinBox = new QSpinBox(wBooks);
        numeroSpinBox->setObjectName(QString::fromUtf8("numeroSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(numeroSpinBox->sizePolicy().hasHeightForWidth());
        numeroSpinBox->setSizePolicy(sizePolicy);
        numeroSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numeroSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        numeroSpinBox->setMaximum(9999);

        formLayout->setWidget(0, QFormLayout::FieldRole, numeroSpinBox);

        nombreLabel = new QLabel(wBooks);
        nombreLabel->setObjectName(QString::fromUtf8("nombreLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, nombreLabel);

        nombreLineEdit = new QLineEdit(wBooks);
        nombreLineEdit->setObjectName(QString::fromUtf8("nombreLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nombreLineEdit);

        simpleFazLabel = new QLabel(wBooks);
        simpleFazLabel->setObjectName(QString::fromUtf8("simpleFazLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, simpleFazLabel);

        simpleFazSpinBox = new QSpinBox(wBooks);
        simpleFazSpinBox->setObjectName(QString::fromUtf8("simpleFazSpinBox"));
        sizePolicy.setHeightForWidth(simpleFazSpinBox->sizePolicy().hasHeightForWidth());
        simpleFazSpinBox->setSizePolicy(sizePolicy);
        simpleFazSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        simpleFazSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        simpleFazSpinBox->setMaximum(999);

        formLayout->setWidget(2, QFormLayout::FieldRole, simpleFazSpinBox);

        doubleFazLabel = new QLabel(wBooks);
        doubleFazLabel->setObjectName(QString::fromUtf8("doubleFazLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, doubleFazLabel);

        doubleFazSpinBox = new QSpinBox(wBooks);
        doubleFazSpinBox->setObjectName(QString::fromUtf8("doubleFazSpinBox"));
        sizePolicy.setHeightForWidth(doubleFazSpinBox->sizePolicy().hasHeightForWidth());
        doubleFazSpinBox->setSizePolicy(sizePolicy);
        doubleFazSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleFazSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleFazSpinBox->setMaximum(999);

        formLayout->setWidget(3, QFormLayout::FieldRole, doubleFazSpinBox);

        anilladoLabel = new QLabel(wBooks);
        anilladoLabel->setObjectName(QString::fromUtf8("anilladoLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, anilladoLabel);

        anilladoComboBox = new QComboBox(wBooks);
        anilladoComboBox->setObjectName(QString::fromUtf8("anilladoComboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, anilladoComboBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(wBooks);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(wBooks);

        QMetaObject::connectSlotsByName(wBooks);
    } // setupUi

    void retranslateUi(QWidget *wBooks)
    {
        wBooks->setWindowTitle(QCoreApplication::translate("wBooks", "Form", nullptr));
        numeroLabel->setText(QCoreApplication::translate("wBooks", "Numero:", nullptr));
        nombreLabel->setText(QCoreApplication::translate("wBooks", "Nombre:", nullptr));
        simpleFazLabel->setText(QCoreApplication::translate("wBooks", "Simple Faz:", nullptr));
        doubleFazLabel->setText(QCoreApplication::translate("wBooks", "Double Faz:", nullptr));
        anilladoLabel->setText(QCoreApplication::translate("wBooks", "Anillado:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wBooks: public Ui_wBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBOOKS_H
