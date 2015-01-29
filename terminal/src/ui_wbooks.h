/********************************************************************************
** Form generated from reading UI file 'wbooks.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBOOKS_H
#define UI_WBOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
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
            wBooks->setObjectName(QStringLiteral("wBooks"));
        wBooks->resize(453, 187);
        verticalLayout = new QVBoxLayout(wBooks);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        numeroLabel = new QLabel(wBooks);
        numeroLabel->setObjectName(QStringLiteral("numeroLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, numeroLabel);

        numeroSpinBox = new QSpinBox(wBooks);
        numeroSpinBox->setObjectName(QStringLiteral("numeroSpinBox"));
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
        nombreLabel->setObjectName(QStringLiteral("nombreLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, nombreLabel);

        nombreLineEdit = new QLineEdit(wBooks);
        nombreLineEdit->setObjectName(QStringLiteral("nombreLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nombreLineEdit);

        simpleFazLabel = new QLabel(wBooks);
        simpleFazLabel->setObjectName(QStringLiteral("simpleFazLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, simpleFazLabel);

        simpleFazSpinBox = new QSpinBox(wBooks);
        simpleFazSpinBox->setObjectName(QStringLiteral("simpleFazSpinBox"));
        sizePolicy.setHeightForWidth(simpleFazSpinBox->sizePolicy().hasHeightForWidth());
        simpleFazSpinBox->setSizePolicy(sizePolicy);
        simpleFazSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        simpleFazSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        simpleFazSpinBox->setMaximum(999);

        formLayout->setWidget(2, QFormLayout::FieldRole, simpleFazSpinBox);

        doubleFazLabel = new QLabel(wBooks);
        doubleFazLabel->setObjectName(QStringLiteral("doubleFazLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, doubleFazLabel);

        doubleFazSpinBox = new QSpinBox(wBooks);
        doubleFazSpinBox->setObjectName(QStringLiteral("doubleFazSpinBox"));
        sizePolicy.setHeightForWidth(doubleFazSpinBox->sizePolicy().hasHeightForWidth());
        doubleFazSpinBox->setSizePolicy(sizePolicy);
        doubleFazSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleFazSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleFazSpinBox->setMaximum(999);

        formLayout->setWidget(3, QFormLayout::FieldRole, doubleFazSpinBox);

        anilladoLabel = new QLabel(wBooks);
        anilladoLabel->setObjectName(QStringLiteral("anilladoLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, anilladoLabel);

        anilladoComboBox = new QComboBox(wBooks);
        anilladoComboBox->setObjectName(QStringLiteral("anilladoComboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, anilladoComboBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(wBooks);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(wBooks);

        QMetaObject::connectSlotsByName(wBooks);
    } // setupUi

    void retranslateUi(QWidget *wBooks)
    {
        wBooks->setWindowTitle(QApplication::translate("wBooks", "Form", 0));
        numeroLabel->setText(QApplication::translate("wBooks", "Numero:", 0));
        nombreLabel->setText(QApplication::translate("wBooks", "Nombre:", 0));
        simpleFazLabel->setText(QApplication::translate("wBooks", "Simple Faz:", 0));
        doubleFazLabel->setText(QApplication::translate("wBooks", "Double Faz:", 0));
        anilladoLabel->setText(QApplication::translate("wBooks", "Anillado:", 0));
    } // retranslateUi

};

namespace Ui {
    class wBooks: public Ui_wBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBOOKS_H
