/********************************************************************************
** Form generated from reading UI file 'wseachjob.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WSEACHJOB_H
#define UI_WSEACHJOB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            wSeachJob->setObjectName(QStringLiteral("wSeachJob"));
        wSeachJob->resize(720, 350);
        verticalLayout = new QVBoxLayout(wSeachJob);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(wSeachJob);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        searchLineEdit = new QLineEdit(wSeachJob);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));

        horizontalLayout->addWidget(searchLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(wSeachJob);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        scrollArea = new QScrollArea(wSeachJob);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 700, 283));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(wSeachJob);

        QMetaObject::connectSlotsByName(wSeachJob);
    } // setupUi

    void retranslateUi(QWidget *wSeachJob)
    {
        wSeachJob->setWindowTitle(QApplication::translate("wSeachJob", "Buscar trabajos", 0));
        label->setText(QApplication::translate("wSeachJob", "Buscar: ", 0));
        label_2->setText(QApplication::translate("wSeachJob", "(NOTA: la busqueda se puede realizar de diferentes maneras)", 0));
    } // retranslateUi

};

namespace Ui {
    class wSeachJob: public Ui_wSeachJob {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WSEACHJOB_H
