/********************************************************************************
** Form generated from reading UI file 'wjob.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WJOB_H
#define UI_WJOB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "wbookswidget.h"

QT_BEGIN_NAMESPACE

class Ui_wJob
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *otherJobButton;
    QPushButton *sameWorkButton;
    QPushButton *differentButton;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *fechaLabel;
    QDateEdit *fechaDateEdit;
    QLabel *horaLabel;
    QTimeEdit *horaTimeEdit;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_2;
    QRadioButton *ownButton;
    QRadioButton *bookButton;
    QRadioButton *fileButton;
    QLineEdit *bookLineEdit;
    QLineEdit *fileLineEdit;
    QVBoxLayout *ownVerticalLayout;
    wBooksWidget *ownWidget;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *saveButton;
    QPushButton *markFinishedButton;
    QPushButton *discardButton;
    QPushButton *reprintButton;
    QCheckBox *ignoreCheckBox;
    QTabWidget *tabWidget;

    void setupUi(QWidget *wJob)
    {
        if (wJob->objectName().isEmpty())
            wJob->setObjectName(QString::fromUtf8("wJob"));
        wJob->resize(1009, 600);
        verticalLayout = new QVBoxLayout(wJob);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_2 = new QGroupBox(wJob);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        otherJobButton = new QPushButton(groupBox_2);
        otherJobButton->setObjectName(QString::fromUtf8("otherJobButton"));

        verticalLayout_4->addWidget(otherJobButton);

        sameWorkButton = new QPushButton(groupBox_2);
        sameWorkButton->setObjectName(QString::fromUtf8("sameWorkButton"));

        verticalLayout_4->addWidget(sameWorkButton);

        differentButton = new QPushButton(groupBox_2);
        differentButton->setObjectName(QString::fromUtf8("differentButton"));

        verticalLayout_4->addWidget(differentButton);


        horizontalLayout->addWidget(groupBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        groupBox = new QGroupBox(wJob);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        fechaLabel = new QLabel(groupBox);
        fechaLabel->setObjectName(QString::fromUtf8("fechaLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, fechaLabel);

        fechaDateEdit = new QDateEdit(groupBox);
        fechaDateEdit->setObjectName(QString::fromUtf8("fechaDateEdit"));
        fechaDateEdit->setCalendarPopup(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, fechaDateEdit);

        horaLabel = new QLabel(groupBox);
        horaLabel->setObjectName(QString::fromUtf8("horaLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, horaLabel);

        horaTimeEdit = new QTimeEdit(groupBox);
        horaTimeEdit->setObjectName(QString::fromUtf8("horaTimeEdit"));
        horaTimeEdit->setCurrentSection(QDateTimeEdit::HourSection);

        formLayout->setWidget(1, QFormLayout::FieldRole, horaTimeEdit);


        verticalLayout_2->addLayout(formLayout);


        horizontalLayout->addWidget(groupBox);

        groupBox_6 = new QGroupBox(wJob);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        groupBox_6->setMinimumSize(QSize(400, 0));
        verticalLayout_7 = new QVBoxLayout(groupBox_6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ownButton = new QRadioButton(groupBox_6);
        ownButton->setObjectName(QString::fromUtf8("ownButton"));

        gridLayout_2->addWidget(ownButton, 2, 0, 1, 1);

        bookButton = new QRadioButton(groupBox_6);
        bookButton->setObjectName(QString::fromUtf8("bookButton"));
        bookButton->setChecked(true);

        gridLayout_2->addWidget(bookButton, 0, 0, 1, 1);

        fileButton = new QRadioButton(groupBox_6);
        fileButton->setObjectName(QString::fromUtf8("fileButton"));

        gridLayout_2->addWidget(fileButton, 1, 0, 1, 1);

        bookLineEdit = new QLineEdit(groupBox_6);
        bookLineEdit->setObjectName(QString::fromUtf8("bookLineEdit"));

        gridLayout_2->addWidget(bookLineEdit, 0, 1, 1, 1);

        fileLineEdit = new QLineEdit(groupBox_6);
        fileLineEdit->setObjectName(QString::fromUtf8("fileLineEdit"));

        gridLayout_2->addWidget(fileLineEdit, 1, 1, 1, 1);

        ownVerticalLayout = new QVBoxLayout();
        ownVerticalLayout->setObjectName(QString::fromUtf8("ownVerticalLayout"));
        ownWidget = new wBooksWidget(groupBox_6);
        ownWidget->setObjectName(QString::fromUtf8("ownWidget"));
        ownWidget->setEnabled(false);

        ownVerticalLayout->addWidget(ownWidget);


        gridLayout_2->addLayout(ownVerticalLayout, 2, 1, 1, 1);


        verticalLayout_7->addLayout(gridLayout_2);


        horizontalLayout->addWidget(groupBox_6);

        groupBox_3 = new QGroupBox(wJob);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        saveButton = new QPushButton(groupBox_3);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        verticalLayout_3->addWidget(saveButton);

        markFinishedButton = new QPushButton(groupBox_3);
        markFinishedButton->setObjectName(QString::fromUtf8("markFinishedButton"));

        verticalLayout_3->addWidget(markFinishedButton);

        discardButton = new QPushButton(groupBox_3);
        discardButton->setObjectName(QString::fromUtf8("discardButton"));

        verticalLayout_3->addWidget(discardButton);

        reprintButton = new QPushButton(groupBox_3);
        reprintButton->setObjectName(QString::fromUtf8("reprintButton"));

        verticalLayout_3->addWidget(reprintButton);

        ignoreCheckBox = new QCheckBox(groupBox_3);
        ignoreCheckBox->setObjectName(QString::fromUtf8("ignoreCheckBox"));

        verticalLayout_3->addWidget(ignoreCheckBox);


        horizontalLayout->addWidget(groupBox_3);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(wJob);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(tabWidget);


        retranslateUi(wJob);
        QObject::connect(bookButton, SIGNAL(clicked(bool)), bookLineEdit, SLOT(setEnabled(bool)));
        QObject::connect(fileButton, SIGNAL(clicked(bool)), fileLineEdit, SLOT(setEnabled(bool)));
        QObject::connect(ownButton, SIGNAL(clicked(bool)), ownWidget, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(wJob);
    } // setupUi

    void retranslateUi(QWidget *wJob)
    {
        wJob->setWindowTitle(QCoreApplication::translate("wJob", "Form", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("wJob", "Con el Trabajo Actual", nullptr));
        otherJobButton->setText(QCoreApplication::translate("wJob", "Clonar Trabajo (Otro Trabajo, misma personas)", nullptr));
        sameWorkButton->setText(QCoreApplication::translate("wJob", "Clonar Tab (Mismo, diferente Personas)", nullptr));
        differentButton->setText(QCoreApplication::translate("wJob", "Agregar Tabs (Diferente, diferentes Personas)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("wJob", "Para el:", nullptr));
        fechaLabel->setText(QCoreApplication::translate("wJob", "Fecha:", nullptr));
        fechaDateEdit->setDisplayFormat(QCoreApplication::translate("wJob", "dddd dd/MM", nullptr));
        horaLabel->setText(QCoreApplication::translate("wJob", "Hora:", nullptr));
        horaTimeEdit->setDisplayFormat(QCoreApplication::translate("wJob", "H:mm", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("wJob", "Trabajos", nullptr));
        ownButton->setText(QCoreApplication::translate("wJob", "Propio:", nullptr));
        bookButton->setText(QCoreApplication::translate("wJob", "Libro:", nullptr));
        fileButton->setText(QCoreApplication::translate("wJob", "Archivo:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("wJob", "Operaciones:", nullptr));
        saveButton->setText(QCoreApplication::translate("wJob", "Guardar", nullptr));
        markFinishedButton->setText(QCoreApplication::translate("wJob", "Marcar Como Terminado", nullptr));
        discardButton->setText(QCoreApplication::translate("wJob", "Descartar", nullptr));
        reprintButton->setText(QCoreApplication::translate("wJob", "Reimprimir", nullptr));
        ignoreCheckBox->setText(QCoreApplication::translate("wJob", "Ignorar Completo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wJob: public Ui_wJob {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WJOB_H
