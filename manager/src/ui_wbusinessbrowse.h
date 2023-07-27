/********************************************************************************
** Form generated from reading UI file 'wbusinessbrowse.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBUSINESSBROWSE_H
#define UI_WBUSINESSBROWSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wBusinessBrowse
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *selButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addButton;
    QPushButton *modButton;
    QPushButton *delButton;

    void setupUi(QWidget *wBusinessBrowse)
    {
        if (wBusinessBrowse->objectName().isEmpty())
            wBusinessBrowse->setObjectName(QString::fromUtf8("wBusinessBrowse"));
        wBusinessBrowse->resize(590, 387);
        verticalLayout = new QVBoxLayout(wBusinessBrowse);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(wBusinessBrowse);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        selButton = new QPushButton(wBusinessBrowse);
        selButton->setObjectName(QString::fromUtf8("selButton"));

        horizontalLayout->addWidget(selButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        addButton = new QPushButton(wBusinessBrowse);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout_2->addWidget(addButton);

        modButton = new QPushButton(wBusinessBrowse);
        modButton->setObjectName(QString::fromUtf8("modButton"));

        horizontalLayout_2->addWidget(modButton);

        delButton = new QPushButton(wBusinessBrowse);
        delButton->setObjectName(QString::fromUtf8("delButton"));

        horizontalLayout_2->addWidget(delButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(wBusinessBrowse);

        QMetaObject::connectSlotsByName(wBusinessBrowse);
    } // setupUi

    void retranslateUi(QWidget *wBusinessBrowse)
    {
        wBusinessBrowse->setWindowTitle(QCoreApplication::translate("wBusinessBrowse", "Form", nullptr));
        selButton->setText(QCoreApplication::translate("wBusinessBrowse", "Seleccionar", nullptr));
        addButton->setText(QCoreApplication::translate("wBusinessBrowse", "Agregar", nullptr));
        modButton->setText(QCoreApplication::translate("wBusinessBrowse", "Modificar", nullptr));
        delButton->setText(QCoreApplication::translate("wBusinessBrowse", "Borrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wBusinessBrowse: public Ui_wBusinessBrowse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBUSINESSBROWSE_H
