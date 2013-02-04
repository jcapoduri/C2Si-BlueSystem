/********************************************************************************
** Form generated from reading UI file 'wuserlogbrowser.ui'
**
** Created: Sat 2. Feb 03:25:03 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WUSERLOGBROWSER_H
#define UI_WUSERLOGBROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wUserLogBrowser
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QLabel *label;
    QComboBox *businessComboBox;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableWidget *employeeTableWidget;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *detailTableWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QWidget *wUserLogBrowser)
    {
        if (wUserLogBrowser->objectName().isEmpty())
            wUserLogBrowser->setObjectName(QString::fromUtf8("wUserLogBrowser"));
        wUserLogBrowser->resize(706, 430);
        verticalLayout_3 = new QVBoxLayout(wUserLogBrowser);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(wUserLogBrowser);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        dateEdit = new QDateEdit(wUserLogBrowser);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setCalendarPopup(true);

        horizontalLayout_2->addWidget(dateEdit);

        label = new QLabel(wUserLogBrowser);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        businessComboBox = new QComboBox(wUserLogBrowser);
        businessComboBox->setObjectName(QString::fromUtf8("businessComboBox"));

        horizontalLayout_2->addWidget(businessComboBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(wUserLogBrowser);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        employeeTableWidget = new QTableWidget(groupBox);
        employeeTableWidget->setObjectName(QString::fromUtf8("employeeTableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(employeeTableWidget->sizePolicy().hasHeightForWidth());
        employeeTableWidget->setSizePolicy(sizePolicy);
        employeeTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        employeeTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        employeeTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        employeeTableWidget->horizontalHeader()->setStretchLastSection(true);
        employeeTableWidget->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(employeeTableWidget);


        horizontalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(wUserLogBrowser);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        detailTableWidget = new QTableWidget(groupBox_2);
        detailTableWidget->setObjectName(QString::fromUtf8("detailTableWidget"));
        detailTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        detailTableWidget->setAlternatingRowColors(true);
        detailTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        detailTableWidget->horizontalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(detailTableWidget);


        horizontalLayout_3->addWidget(groupBox_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(wUserLogBrowser);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout->addWidget(closeButton);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(wUserLogBrowser);

        QMetaObject::connectSlotsByName(wUserLogBrowser);
    } // setupUi

    void retranslateUi(QWidget *wUserLogBrowser)
    {
        wUserLogBrowser->setWindowTitle(QApplication::translate("wUserLogBrowser", "Registro de Entrada/Salida de Empleados", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("wUserLogBrowser", "fecha:", 0, QApplication::UnicodeUTF8));
        dateEdit->setDisplayFormat(QApplication::translate("wUserLogBrowser", "MMMM yy", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("wUserLogBrowser", "Local:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("wUserLogBrowser", "Empleado", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("wUserLogBrowser", "Detalle del empleado:", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("wUserLogBrowser", "Cerrar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class wUserLogBrowser: public Ui_wUserLogBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WUSERLOGBROWSER_H
