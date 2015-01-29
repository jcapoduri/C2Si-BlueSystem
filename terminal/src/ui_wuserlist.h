/********************************************************************************
** Form generated from reading UI file 'wuserlist.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WUSERLIST_H
#define UI_WUSERLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            wUserList->setObjectName(QStringLiteral("wUserList"));
        wUserList->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(wUserList);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listWidget = new QListWidget(wUserList);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout->addWidget(listWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(wUserList);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(wUserList);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
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
        wUserList->setWindowTitle(QApplication::translate("wUserList", "Usuarios Online", 0));
        pushButton->setText(QApplication::translate("wUserList", "Cerrar Sesion", 0));
    } // retranslateUi

};

namespace Ui {
    class wUserList: public Ui_wUserList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WUSERLIST_H
