/********************************************************************************
** Form generated from reading UI file 'wjob.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WJOB_H
#define UI_WJOB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            wJob->setObjectName(QStringLiteral("wJob"));
        wJob->resize(1009, 600);
        verticalLayout = new QVBoxLayout(wJob);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_2 = new QGroupBox(wJob);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        otherJobButton = new QPushButton(groupBox_2);
        otherJobButton->setObjectName(QStringLiteral("otherJobButton"));

        verticalLayout_4->addWidget(otherJobButton);

        sameWorkButton = new QPushButton(groupBox_2);
        sameWorkButton->setObjectName(QStringLiteral("sameWorkButton"));

        verticalLayout_4->addWidget(sameWorkButton);

        differentButton = new QPushButton(groupBox_2);
        differentButton->setObjectName(QStringLiteral("differentButton"));

        verticalLayout_4->addWidget(differentButton);


        horizontalLayout->addWidget(groupBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        groupBox = new QGroupBox(wJob);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        fechaLabel = new QLabel(groupBox);
        fechaLabel->setObjectName(QStringLiteral("fechaLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, fechaLabel);

        fechaDateEdit = new QDateEdit(groupBox);
        fechaDateEdit->setObjectName(QStringLiteral("fechaDateEdit"));
        fechaDateEdit->setCalendarPopup(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, fechaDateEdit);

        horaLabel = new QLabel(groupBox);
        horaLabel->setObjectName(QStringLiteral("horaLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, horaLabel);

        horaTimeEdit = new QTimeEdit(groupBox);
        horaTimeEdit->setObjectName(QStringLiteral("horaTimeEdit"));
        horaTimeEdit->setCurrentSection(QDateTimeEdit::HourSection);

        formLayout->setWidget(1, QFormLayout::FieldRole, horaTimeEdit);


        verticalLayout_2->addLayout(formLayout);


        horizontalLayout->addWidget(groupBox);

        groupBox_6 = new QGroupBox(wJob);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        groupBox_6->setMinimumSize(QSize(400, 0));
        verticalLayout_7 = new QVBoxLayout(groupBox_6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        ownButton = new QRadioButton(groupBox_6);
        ownButton->setObjectName(QStringLiteral("ownButton"));

        gridLayout_2->addWidget(ownButton, 2, 0, 1, 1);

        bookButton = new QRadioButton(groupBox_6);
        bookButton->setObjectName(QStringLiteral("bookButton"));
        bookButton->setChecked(true);

        gridLayout_2->addWidget(bookButton, 0, 0, 1, 1);

        fileButton = new QRadioButton(groupBox_6);
        fileButton->setObjectName(QStringLiteral("fileButton"));

        gridLayout_2->addWidget(fileButton, 1, 0, 1, 1);

        bookLineEdit = new QLineEdit(groupBox_6);
        bookLineEdit->setObjectName(QStringLiteral("bookLineEdit"));

        gridLayout_2->addWidget(bookLineEdit, 0, 1, 1, 1);

        fileLineEdit = new QLineEdit(groupBox_6);
        fileLineEdit->setObjectName(QStringLiteral("fileLineEdit"));

        gridLayout_2->addWidget(fileLineEdit, 1, 1, 1, 1);

        ownVerticalLayout = new QVBoxLayout();
        ownVerticalLayout->setObjectName(QStringLiteral("ownVerticalLayout"));
        ownWidget = new wBooksWidget(groupBox_6);
        ownWidget->setObjectName(QStringLiteral("ownWidget"));
        ownWidget->setEnabled(false);

        ownVerticalLayout->addWidget(ownWidget);


        gridLayout_2->addLayout(ownVerticalLayout, 2, 1, 1, 1);


        verticalLayout_7->addLayout(gridLayout_2);


        horizontalLayout->addWidget(groupBox_6);

        groupBox_3 = new QGroupBox(wJob);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        saveButton = new QPushButton(groupBox_3);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        verticalLayout_3->addWidget(saveButton);

        markFinishedButton = new QPushButton(groupBox_3);
        markFinishedButton->setObjectName(QStringLiteral("markFinishedButton"));

        verticalLayout_3->addWidget(markFinishedButton);

        discardButton = new QPushButton(groupBox_3);
        discardButton->setObjectName(QStringLiteral("discardButton"));

        verticalLayout_3->addWidget(discardButton);

        reprintButton = new QPushButton(groupBox_3);
        reprintButton->setObjectName(QStringLiteral("reprintButton"));

        verticalLayout_3->addWidget(reprintButton);

        ignoreCheckBox = new QCheckBox(groupBox_3);
        ignoreCheckBox->setObjectName(QStringLiteral("ignoreCheckBox"));

        verticalLayout_3->addWidget(ignoreCheckBox);


        horizontalLayout->addWidget(groupBox_3);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(wJob);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
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
        wJob->setWindowTitle(QApplication::translate("wJob", "Form", 0));
        groupBox_2->setTitle(QApplication::translate("wJob", "Con el Trabajo Actual", 0));
        otherJobButton->setText(QApplication::translate("wJob", "Otro Trabajo, misma personas", 0));
        sameWorkButton->setText(QApplication::translate("wJob", "Mismo, diferente Personas", 0));
        differentButton->setText(QApplication::translate("wJob", "Diferente, diferentes Personas", 0));
        groupBox->setTitle(QApplication::translate("wJob", "Para el:", 0));
        fechaLabel->setText(QApplication::translate("wJob", "Fecha:", 0));
        fechaDateEdit->setDisplayFormat(QApplication::translate("wJob", "dddd dd/MM", 0));
        horaLabel->setText(QApplication::translate("wJob", "Hora:", 0));
        horaTimeEdit->setDisplayFormat(QApplication::translate("wJob", "H:mm", 0));
        groupBox_6->setTitle(QApplication::translate("wJob", "Trabajos", 0));
        ownButton->setText(QApplication::translate("wJob", "Propio:", 0));
        bookButton->setText(QApplication::translate("wJob", "Libro:", 0));
        fileButton->setText(QApplication::translate("wJob", "Archivo:", 0));
        groupBox_3->setTitle(QApplication::translate("wJob", "Operaciones:", 0));
        saveButton->setText(QApplication::translate("wJob", "Guardar", 0));
        markFinishedButton->setText(QApplication::translate("wJob", "Marcar Como Terminado", 0));
        discardButton->setText(QApplication::translate("wJob", "Descartar", 0));
        reprintButton->setText(QApplication::translate("wJob", "Reimprimir", 0));
        ignoreCheckBox->setText(QApplication::translate("wJob", "Ignorar Completo", 0));
    } // retranslateUi

};

namespace Ui {
    class wJob: public Ui_wJob {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WJOB_H
