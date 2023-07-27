/********************************************************************************
** Form generated from reading UI file 'wseachjob.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WSEACHJOB_H
#define UI_WSEACHJOB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wSeachJob
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *searchLineEdit;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *wSeachJob)
    {
        if (wSeachJob->objectName().isEmpty())
            wSeachJob->setObjectName(QString::fromUtf8("wSeachJob"));
        wSeachJob->resize(720, 350);
        verticalLayout = new QVBoxLayout(wSeachJob);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(wSeachJob);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        searchLineEdit = new QLineEdit(wSeachJob);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));

        horizontalLayout->addWidget(searchLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(wSeachJob);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        scrollArea = new QScrollArea(wSeachJob);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 700, 283));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(wSeachJob);

        QMetaObject::connectSlotsByName(wSeachJob);
    } // setupUi

    void retranslateUi(QWidget *wSeachJob)
    {
        wSeachJob->setWindowTitle(QCoreApplication::translate("wSeachJob", "Buscar trabajos", nullptr));
        label->setText(QCoreApplication::translate("wSeachJob", "Buscar: ", nullptr));
        label_2->setText(QCoreApplication::translate("wSeachJob", "(NOTA: la busqueda se puede realizar de diferentes maneras)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wSeachJob: public Ui_wSeachJob {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WSEACHJOB_H
