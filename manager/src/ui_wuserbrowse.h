/********************************************************************************
** Form generated from reading UI file 'wuserbrowse.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WUSERBROWSE_H
#define UI_WUSERBROWSE_H

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

class Ui_wUserBrowse
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

    void setupUi(QWidget *wUserBrowse)
    {
        if (wUserBrowse->objectName().isEmpty())
            wUserBrowse->setObjectName(QString::fromUtf8("wUserBrowse"));
        wUserBrowse->resize(574, 374);
        verticalLayout = new QVBoxLayout(wUserBrowse);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(wUserBrowse);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        selButton = new QPushButton(wUserBrowse);
        selButton->setObjectName(QString::fromUtf8("selButton"));

        horizontalLayout->addWidget(selButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        addButton = new QPushButton(wUserBrowse);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout_2->addWidget(addButton);

        modButton = new QPushButton(wUserBrowse);
        modButton->setObjectName(QString::fromUtf8("modButton"));

        horizontalLayout_2->addWidget(modButton);

        delButton = new QPushButton(wUserBrowse);
        delButton->setObjectName(QString::fromUtf8("delButton"));

        horizontalLayout_2->addWidget(delButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(wUserBrowse);

        QMetaObject::connectSlotsByName(wUserBrowse);
    } // setupUi

    void retranslateUi(QWidget *wUserBrowse)
    {
        wUserBrowse->setWindowTitle(QCoreApplication::translate("wUserBrowse", "Form", nullptr));
        selButton->setText(QCoreApplication::translate("wUserBrowse", "Seleccionar", nullptr));
        addButton->setText(QCoreApplication::translate("wUserBrowse", "Agregar", nullptr));
        modButton->setText(QCoreApplication::translate("wUserBrowse", "Modificar", nullptr));
        delButton->setText(QCoreApplication::translate("wUserBrowse", "Borrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wUserBrowse: public Ui_wUserBrowse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WUSERBROWSE_H
