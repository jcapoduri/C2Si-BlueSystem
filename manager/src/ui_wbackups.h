/********************************************************************************
** Form generated from reading UI file 'wbackups.ui'
**
** Created: Sat 2. Feb 03:25:03 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBACKUPS_H
#define UI_WBACKUPS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

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
        wBackups->setWindowTitle(QApplication::translate("wBackups", "Copias de Seguridad del Sistema", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("wBackups", "Tareas", 0, QApplication::UnicodeUTF8));
        createButton->setText(QApplication::translate("wBackups", "Crear", 0, QApplication::UnicodeUTF8));
        applyButton->setText(QApplication::translate("wBackups", "Aplicar", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("wBackups", "Borrar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class wBackups: public Ui_wBackups {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBACKUPS_H
