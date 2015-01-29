/********************************************************************************
** Form generated from reading UI file 'wworkbooklist.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WWORKBOOKLIST_H
#define UI_WWORKBOOKLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            wWorkBookList->setObjectName(QStringLiteral("wWorkBookList"));
        wWorkBookList->resize(656, 460);
        verticalLayout = new QVBoxLayout(wWorkBookList);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(wWorkBookList);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(wWorkBookList);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(wWorkBookList);

        QMetaObject::connectSlotsByName(wWorkBookList);
    } // setupUi

    void retranslateUi(QWidget *wWorkBookList)
    {
        wWorkBookList->setWindowTitle(QApplication::translate("wWorkBookList", "Listado de trabajos de Lista", 0));
        pushButton->setText(QApplication::translate("wWorkBookList", "Imprimir", 0));
    } // retranslateUi

};

namespace Ui {
    class wWorkBookList: public Ui_wWorkBookList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WWORKBOOKLIST_H
