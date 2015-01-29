/********************************************************************************
** Form generated from reading UI file 'wuserbrowse.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WUSERBROWSE_H
#define UI_WUSERBROWSE_H

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
            wUserBrowse->setObjectName(QStringLiteral("wUserBrowse"));
        wUserBrowse->resize(574, 374);
        verticalLayout = new QVBoxLayout(wUserBrowse);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(wUserBrowse);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        selButton = new QPushButton(wUserBrowse);
        selButton->setObjectName(QStringLiteral("selButton"));

        horizontalLayout->addWidget(selButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        addButton = new QPushButton(wUserBrowse);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout_2->addWidget(addButton);

        modButton = new QPushButton(wUserBrowse);
        modButton->setObjectName(QStringLiteral("modButton"));

        horizontalLayout_2->addWidget(modButton);

        delButton = new QPushButton(wUserBrowse);
        delButton->setObjectName(QStringLiteral("delButton"));

        horizontalLayout_2->addWidget(delButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(wUserBrowse);

        QMetaObject::connectSlotsByName(wUserBrowse);
    } // setupUi

    void retranslateUi(QWidget *wUserBrowse)
    {
        wUserBrowse->setWindowTitle(QApplication::translate("wUserBrowse", "Form", 0));
        selButton->setText(QApplication::translate("wUserBrowse", "Seleccionar", 0));
        addButton->setText(QApplication::translate("wUserBrowse", "Agregar", 0));
        modButton->setText(QApplication::translate("wUserBrowse", "Modificar", 0));
        delButton->setText(QApplication::translate("wUserBrowse", "Borrar", 0));
    } // retranslateUi

};

namespace Ui {
    class wUserBrowse: public Ui_wUserBrowse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WUSERBROWSE_H
