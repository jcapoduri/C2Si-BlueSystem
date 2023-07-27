/********************************************************************************
** Form generated from reading UI file 'wbackups.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBACKUPS_H
#define UI_WBACKUPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wBackups
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *createButton;
    QPushButton *applyButton;
    QPushButton *deleteButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *wBackups)
    {
        if (wBackups->objectName().isEmpty())
            wBackups->setObjectName(QString::fromUtf8("wBackups"));
        wBackups->resize(740, 379);
        horizontalLayout = new QHBoxLayout(wBackups);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableWidget = new QTableWidget(wBackups);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout->addWidget(tableWidget);

        groupBox = new QGroupBox(wBackups);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        createButton = new QPushButton(groupBox);
        createButton->setObjectName(QString::fromUtf8("createButton"));

        verticalLayout->addWidget(createButton);

        applyButton = new QPushButton(groupBox);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        verticalLayout->addWidget(applyButton);

        deleteButton = new QPushButton(groupBox);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        verticalLayout->addWidget(deleteButton);

        verticalSpacer = new QSpacerItem(20, 238, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(groupBox);


        retranslateUi(wBackups);

        QMetaObject::connectSlotsByName(wBackups);
    } // setupUi

    void retranslateUi(QWidget *wBackups)
    {
        wBackups->setWindowTitle(QCoreApplication::translate("wBackups", "Copias de Seguridad del Sistema", nullptr));
        groupBox->setTitle(QCoreApplication::translate("wBackups", "Tareas", nullptr));
        createButton->setText(QCoreApplication::translate("wBackups", "Crear", nullptr));
        applyButton->setText(QCoreApplication::translate("wBackups", "Aplicar", nullptr));
        deleteButton->setText(QCoreApplication::translate("wBackups", "Borrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wBackups: public Ui_wBackups {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBACKUPS_H
