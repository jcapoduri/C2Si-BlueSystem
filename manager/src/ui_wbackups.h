/********************************************************************************
** Form generated from reading UI file 'wbackups.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBACKUPS_H
#define UI_WBACKUPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            wBackups->setObjectName(QStringLiteral("wBackups"));
        wBackups->resize(740, 379);
        horizontalLayout = new QHBoxLayout(wBackups);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableWidget = new QTableWidget(wBackups);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout->addWidget(tableWidget);

        groupBox = new QGroupBox(wBackups);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        createButton = new QPushButton(groupBox);
        createButton->setObjectName(QStringLiteral("createButton"));

        verticalLayout->addWidget(createButton);

        applyButton = new QPushButton(groupBox);
        applyButton->setObjectName(QStringLiteral("applyButton"));

        verticalLayout->addWidget(applyButton);

        deleteButton = new QPushButton(groupBox);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        verticalLayout->addWidget(deleteButton);

        verticalSpacer = new QSpacerItem(20, 238, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(groupBox);


        retranslateUi(wBackups);

        QMetaObject::connectSlotsByName(wBackups);
    } // setupUi

    void retranslateUi(QWidget *wBackups)
    {
        wBackups->setWindowTitle(QApplication::translate("wBackups", "Copias de Seguridad del Sistema", 0));
        groupBox->setTitle(QApplication::translate("wBackups", "Tareas", 0));
        createButton->setText(QApplication::translate("wBackups", "Crear", 0));
        applyButton->setText(QApplication::translate("wBackups", "Aplicar", 0));
        deleteButton->setText(QApplication::translate("wBackups", "Borrar", 0));
    } // retranslateUi

};

namespace Ui {
    class wBackups: public Ui_wBackups {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBACKUPS_H
