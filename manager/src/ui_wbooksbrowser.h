/********************************************************************************
** Form generated from reading UI file 'wbooksbrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBOOKSBROWSER_H
#define UI_WBOOKSBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wBooksBrowser
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *businessComboBox;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addSonButton;
    QPushButton *addButton;
    QPushButton *modButton;
    QPushButton *delButton;

    void setupUi(QWidget *wBooksBrowser)
    {
        if (wBooksBrowser->objectName().isEmpty())
            wBooksBrowser->setObjectName(QString::fromUtf8("wBooksBrowser"));
        wBooksBrowser->resize(612, 428);
        verticalLayout = new QVBoxLayout(wBooksBrowser);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        businessComboBox = new QComboBox(wBooksBrowser);
        businessComboBox->setObjectName(QString::fromUtf8("businessComboBox"));

        horizontalLayout_2->addWidget(businessComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        treeWidget = new QTreeWidget(wBooksBrowser);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeWidget->setColumnCount(2);

        verticalLayout->addWidget(treeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addSonButton = new QPushButton(wBooksBrowser);
        addSonButton->setObjectName(QString::fromUtf8("addSonButton"));

        horizontalLayout->addWidget(addSonButton);

        addButton = new QPushButton(wBooksBrowser);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout->addWidget(addButton);

        modButton = new QPushButton(wBooksBrowser);
        modButton->setObjectName(QString::fromUtf8("modButton"));

        horizontalLayout->addWidget(modButton);

        delButton = new QPushButton(wBooksBrowser);
        delButton->setObjectName(QString::fromUtf8("delButton"));

        horizontalLayout->addWidget(delButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(wBooksBrowser);

        QMetaObject::connectSlotsByName(wBooksBrowser);
    } // setupUi

    void retranslateUi(QWidget *wBooksBrowser)
    {
        wBooksBrowser->setWindowTitle(QCoreApplication::translate("wBooksBrowser", "Form", nullptr));
        addSonButton->setText(QCoreApplication::translate("wBooksBrowser", "Agregar Hijo", nullptr));
        addButton->setText(QCoreApplication::translate("wBooksBrowser", "Agregar", nullptr));
        modButton->setText(QCoreApplication::translate("wBooksBrowser", "Modificar", nullptr));
        delButton->setText(QCoreApplication::translate("wBooksBrowser", "Borrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wBooksBrowser: public Ui_wBooksBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBOOKSBROWSER_H
