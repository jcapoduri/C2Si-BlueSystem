/********************************************************************************
** Form generated from reading UI file 'wjob.ui'
**
** Created: Thu 20. Sep 20:19:28 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WJOB_H
#define UI_WJOB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTimeEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
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
        wJob->setWindowTitle(QApplication::translate("wJob", "Form", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("wJob", "Con el Trabajo Actual", 0, QApplication::UnicodeUTF8));
        otherJobButton->setText(QApplication::translate("wJob", "Otro Trabajo, misma personas", 0, QApplication::UnicodeUTF8));
        sameWorkButton->setText(QApplication::translate("wJob", "Mismo, diferente Personas", 0, QApplication::UnicodeUTF8));
        differentButton->setText(QApplication::translate("wJob", "Diferente, diferentes Personas", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("wJob", "Para el:", 0, QApplication::UnicodeUTF8));
        fechaLabel->setText(QApplication::translate("wJob", "Fecha:", 0, QApplication::UnicodeUTF8));
        fechaDateEdit->setDisplayFormat(QApplication::translate("wJob", "dddd dd/MM", 0, QApplication::UnicodeUTF8));
        horaLabel->setText(QApplication::translate("wJob", "Hora:", 0, QApplication::UnicodeUTF8));
        horaTimeEdit->setDisplayFormat(QApplication::translate("wJob", "H:mm", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("wJob", "Trabajos", 0, QApplication::UnicodeUTF8));
        ownButton->setText(QApplication::translate("wJob", "Propio:", 0, QApplication::UnicodeUTF8));
        bookButton->setText(QApplication::translate("wJob", "Libro:", 0, QApplication::UnicodeUTF8));
        fileButton->setText(QApplication::translate("wJob", "Archivo:", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("wJob", "Operaciones:", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("wJob", "Guardar", 0, QApplication::UnicodeUTF8));
        markFinishedButton->setText(QApplication::translate("wJob", "Marcar Como Terminado", 0, QApplication::UnicodeUTF8));
        discardButton->setText(QApplication::translate("wJob", "Descartar", 0, QApplication::UnicodeUTF8));
        reprintButton->setText(QApplication::translate("wJob", "Reimprimir", 0, QApplication::UnicodeUTF8));
        ignoreCheckBox->setText(QApplication::translate("wJob", "Ignorar Completo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class wJob: public Ui_wJob {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WJOB_H
