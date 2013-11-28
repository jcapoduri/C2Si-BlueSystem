/********************************************************************************
** Form generated from reading UI file 'jobForm.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOBFORM_H
#define UI_JOBFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *fechaLabel;
    QDateTimeEdit *fechaDateTimeEdit;
    QTabWidget *tabWidget;
    QWidget *trabajosTab;
    QVBoxLayout *verticalLayout_2;
    QWidget *infoTab;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;
    QPushButton *saveButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(648, 403);
        verticalLayout = new QVBoxLayout(Form);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        nameLabel = new QLabel(Form);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameLineEdit = new QLineEdit(Form);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);

        fechaLabel = new QLabel(Form);
        fechaLabel->setObjectName(QStringLiteral("fechaLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, fechaLabel);

        fechaDateTimeEdit = new QDateTimeEdit(Form);
        fechaDateTimeEdit->setObjectName(QStringLiteral("fechaDateTimeEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, fechaDateTimeEdit);


        verticalLayout->addLayout(formLayout);

        tabWidget = new QTabWidget(Form);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);
        trabajosTab = new QWidget();
        trabajosTab->setObjectName(QStringLiteral("trabajosTab"));
        verticalLayout_2 = new QVBoxLayout(trabajosTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget->addTab(trabajosTab, QString());
        infoTab = new QWidget();
        infoTab->setObjectName(QStringLiteral("infoTab"));
        tabWidget->addTab(infoTab, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(Form);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayout->addWidget(closeButton);

        saveButton = new QPushButton(Form);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout->addWidget(saveButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Form);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        nameLabel->setText(QApplication::translate("Form", "Nombre: ", 0));
        fechaLabel->setText(QApplication::translate("Form", "Fecha:", 0));
        tabWidget->setTabText(tabWidget->indexOf(trabajosTab), QApplication::translate("Form", "Trabajos", 0));
        tabWidget->setTabText(tabWidget->indexOf(infoTab), QApplication::translate("Form", "Information", 0));
        closeButton->setText(QApplication::translate("Form", "Cerrar", 0));
        saveButton->setText(QApplication::translate("Form", "Guardar", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOBFORM_H
