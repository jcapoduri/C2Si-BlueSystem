/********************************************************************************
** Form generated from reading UI file 'wuserlist.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WUSERLIST_H
#define UI_WUSERLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_wUserList
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *wUserList)
    {
        if (wUserList->objectName().isEmpty())
            wUserList->setObjectName(QString::fromUtf8("wUserList"));
        wUserList->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(wUserList);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(wUserList);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout->addWidget(listWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(wUserList);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(wUserList);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(wUserList);
        QObject::connect(buttonBox, SIGNAL(accepted()), wUserList, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), wUserList, SLOT(reject()));

        QMetaObject::connectSlotsByName(wUserList);
    } // setupUi

    void retranslateUi(QDialog *wUserList)
    {
        wUserList->setWindowTitle(QCoreApplication::translate("wUserList", "Usuarios Online", nullptr));
        pushButton->setText(QCoreApplication::translate("wUserList", "Cerrar Sesion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wUserList: public Ui_wUserList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WUSERLIST_H
