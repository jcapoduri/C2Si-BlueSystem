/********************************************************************************
** Form generated from reading UI file 'wbusinessbrowse.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBUSINESSBROWSE_H
#define UI_WBUSINESSBROWSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            wBusinessBrowse->setObjectName(QStringLiteral("wBusinessBrowse"));
        wBusinessBrowse->resize(590, 387);
        verticalLayout = new QVBoxLayout(wBusinessBrowse);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(wBusinessBrowse);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        selButton = new QPushButton(wBusinessBrowse);
        selButton->setObjectName(QStringLiteral("selButton"));

        horizontalLayout->addWidget(selButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        addButton = new QPushButton(wBusinessBrowse);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout_2->addWidget(addButton);

        modButton = new QPushButton(wBusinessBrowse);
        modButton->setObjectName(QStringLiteral("modButton"));

        horizontalLayout_2->addWidget(modButton);

        delButton = new QPushButton(wBusinessBrowse);
        delButton->setObjectName(QStringLiteral("delButton"));

        horizontalLayout_2->addWidget(delButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(wBusinessBrowse);

        QMetaObject::connectSlotsByName(wBusinessBrowse);
    } // setupUi

    void retranslateUi(QWidget *wBusinessBrowse)
    {
        wBusinessBrowse->setWindowTitle(QApplication::translate("wBusinessBrowse", "Form", 0));
        selButton->setText(QApplication::translate("wBusinessBrowse", "Seleccionar", 0));
        addButton->setText(QApplication::translate("wBusinessBrowse", "Agregar", 0));
        modButton->setText(QApplication::translate("wBusinessBrowse", "Modificar", 0));
        delButton->setText(QApplication::translate("wBusinessBrowse", "Borrar", 0));
    } // retranslateUi

};

namespace Ui {
    class wBusinessBrowse: public Ui_wBusinessBrowse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBUSINESSBROWSE_H
