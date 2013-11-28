/********************************************************************************
** Form generated from reading UI file 'wworkorder_pages.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WWORKORDER_PAGES_H
#define UI_WWORKORDER_PAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_wworkorder_pages
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *desdeLabel;
    QSpinBox *desdeSpinBox;
    QLabel *hastaLabel;
    QSpinBox *hastaSpinBox;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *wworkorder_pages)
    {
        if (wworkorder_pages->objectName().isEmpty())
            wworkorder_pages->setObjectName(QStringLiteral("wworkorder_pages"));
        wworkorder_pages->setWindowModality(Qt::WindowModal);
        wworkorder_pages->resize(381, 122);
        wworkorder_pages->setModal(true);
        verticalLayout = new QVBoxLayout(wworkorder_pages);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        desdeLabel = new QLabel(wworkorder_pages);
        desdeLabel->setObjectName(QStringLiteral("desdeLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, desdeLabel);

        desdeSpinBox = new QSpinBox(wworkorder_pages);
        desdeSpinBox->setObjectName(QStringLiteral("desdeSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(desdeSpinBox->sizePolicy().hasHeightForWidth());
        desdeSpinBox->setSizePolicy(sizePolicy);
        desdeSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        desdeSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        desdeSpinBox->setMaximum(9999);

        formLayout->setWidget(0, QFormLayout::FieldRole, desdeSpinBox);

        hastaLabel = new QLabel(wworkorder_pages);
        hastaLabel->setObjectName(QStringLiteral("hastaLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, hastaLabel);

        hastaSpinBox = new QSpinBox(wworkorder_pages);
        hastaSpinBox->setObjectName(QStringLiteral("hastaSpinBox"));
        sizePolicy.setHeightForWidth(hastaSpinBox->sizePolicy().hasHeightForWidth());
        hastaSpinBox->setSizePolicy(sizePolicy);
        hastaSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        hastaSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        hastaSpinBox->setMinimum(-1);
        hastaSpinBox->setMaximum(9999);
        hastaSpinBox->setValue(-1);

        formLayout->setWidget(1, QFormLayout::FieldRole, hastaSpinBox);


        verticalLayout->addLayout(formLayout);

        label = new QLabel(wworkorder_pages);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(wworkorder_pages);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(wworkorder_pages);
        QObject::connect(buttonBox, SIGNAL(accepted()), wworkorder_pages, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), wworkorder_pages, SLOT(reject()));

        QMetaObject::connectSlotsByName(wworkorder_pages);
    } // setupUi

    void retranslateUi(QDialog *wworkorder_pages)
    {
        wworkorder_pages->setWindowTitle(QApplication::translate("wworkorder_pages", "Desde/Hasta", 0));
        desdeLabel->setText(QApplication::translate("wworkorder_pages", "Desde:", 0));
        hastaLabel->setText(QApplication::translate("wworkorder_pages", "Hasta:", 0));
        label->setText(QApplication::translate("wworkorder_pages", "Dejando Hasta en -1, indica que se haga hasta el final", 0));
    } // retranslateUi

};

namespace Ui {
    class wworkorder_pages: public Ui_wworkorder_pages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WWORKORDER_PAGES_H
