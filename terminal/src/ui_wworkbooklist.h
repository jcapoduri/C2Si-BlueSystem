/********************************************************************************
** Form generated from reading UI file 'wworkbooklist.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WWORKBOOKLIST_H
#define UI_WWORKBOOKLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wWorkBookList
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *wWorkBookList)
    {
        if (wWorkBookList->objectName().isEmpty())
            wWorkBookList->setObjectName(QString::fromUtf8("wWorkBookList"));
        wWorkBookList->resize(656, 460);
        verticalLayout = new QVBoxLayout(wWorkBookList);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(wWorkBookList);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(wWorkBookList);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(wWorkBookList);

        QMetaObject::connectSlotsByName(wWorkBookList);
    } // setupUi

    void retranslateUi(QWidget *wWorkBookList)
    {
        wWorkBookList->setWindowTitle(QCoreApplication::translate("wWorkBookList", "Listado de trabajos de Lista", nullptr));
        pushButton->setText(QCoreApplication::translate("wWorkBookList", "Imprimir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wWorkBookList: public Ui_wWorkBookList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WWORKBOOKLIST_H
