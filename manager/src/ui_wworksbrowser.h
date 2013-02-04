/********************************************************************************
** Form generated from reading UI file 'wworksbrowser.ui'
**
** Created: Sat 2. Feb 03:25:03 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WWORKSBROWSER_H
#define UI_WWORKSBROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wWorksBrowser
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QComboBox *businessComboBox;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *searchLineEdit;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QCheckBox *doneCheckBox;
    QCheckBox *deletedCheckBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QDateTimeEdit *hastaDateEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QDateTimeEdit *desdeTimeEdit;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *printButton;
    QPushButton *closeButton;

    void setupUi(QWidget *wWorksBrowser)
    {
        if (wWorksBrowser->objectName().isEmpty())
            wWorksBrowser->setObjectName(QString::fromUtf8("wWorksBrowser"));
        wWorksBrowser->resize(679, 409);
        verticalLayout_3 = new QVBoxLayout(wWorksBrowser);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label = new QLabel(wWorksBrowser);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        businessComboBox = new QComboBox(wWorksBrowser);
        businessComboBox->setObjectName(QString::fromUtf8("businessComboBox"));

        horizontalLayout_2->addWidget(businessComboBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(wWorksBrowser);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        searchLineEdit = new QLineEdit(groupBox);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchLineEdit->sizePolicy().hasHeightForWidth());
        searchLineEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(searchLineEdit, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        doneCheckBox = new QCheckBox(groupBox);
        doneCheckBox->setObjectName(QString::fromUtf8("doneCheckBox"));

        gridLayout_2->addWidget(doneCheckBox, 0, 0, 1, 1);

        deletedCheckBox = new QCheckBox(groupBox);
        deletedCheckBox->setObjectName(QString::fromUtf8("deletedCheckBox"));

        gridLayout_2->addWidget(deletedCheckBox, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(label_3);

        hastaDateEdit = new QDateTimeEdit(groupBox);
        hastaDateEdit->setObjectName(QString::fromUtf8("hastaDateEdit"));
        hastaDateEdit->setCalendarPopup(true);

        verticalLayout->addWidget(hastaDateEdit);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(label_4);

        desdeTimeEdit = new QDateTimeEdit(groupBox);
        desdeTimeEdit->setObjectName(QString::fromUtf8("desdeTimeEdit"));
        desdeTimeEdit->setCalendarPopup(true);

        verticalLayout_2->addWidget(desdeTimeEdit);


        gridLayout_2->addLayout(verticalLayout_2, 1, 0, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_2);


        verticalLayout_3->addWidget(groupBox);

        tableView = new QTableView(wWorksBrowser);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_3->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        printButton = new QPushButton(wWorksBrowser);
        printButton->setObjectName(QString::fromUtf8("printButton"));

        horizontalLayout->addWidget(printButton);

        closeButton = new QPushButton(wWorksBrowser);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout->addWidget(closeButton);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(wWorksBrowser);

        QMetaObject::connectSlotsByName(wWorksBrowser);
    } // setupUi

    void retranslateUi(QWidget *wWorksBrowser)
    {
        wWorksBrowser->setWindowTitle(QApplication::translate("wWorksBrowser", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("wWorksBrowser", "Local:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("wWorksBrowser", "Filtro:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("wWorksBrowser", "Buscar: ", 0, QApplication::UnicodeUTF8));
        doneCheckBox->setText(QApplication::translate("wWorksBrowser", "Terminados", 0, QApplication::UnicodeUTF8));
        deletedCheckBox->setText(QApplication::translate("wWorksBrowser", "Borrados", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("wWorksBrowser", "Hasta:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("wWorksBrowser", "Desde:", 0, QApplication::UnicodeUTF8));
        printButton->setText(QApplication::translate("wWorksBrowser", "Imprimir", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("wWorksBrowser", "Cerrar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class wWorksBrowser: public Ui_wWorksBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WWORKSBROWSER_H
