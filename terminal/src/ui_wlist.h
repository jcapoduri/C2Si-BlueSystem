/********************************************************************************
** Form generated from reading UI file 'wlist.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WLIST_H
#define UI_WLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wList
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *printButton;
    QScrollArea *listScrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *stateLabel;
    QPushButton *updateButton;

    void setupUi(QWidget *wList)
    {
        if (wList->objectName().isEmpty())
            wList->setObjectName(QString::fromUtf8("wList"));
        wList->resize(207, 471);
        verticalLayout = new QVBoxLayout(wList);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        printButton = new QPushButton(wList);
        printButton->setObjectName(QString::fromUtf8("printButton"));

        horizontalLayout->addWidget(printButton);


        verticalLayout->addLayout(horizontalLayout);

        listScrollArea = new QScrollArea(wList);
        listScrollArea->setObjectName(QString::fromUtf8("listScrollArea"));
        listScrollArea->setWidgetResizable(true);
        listScrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 187, 370));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        listScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(listScrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(wList);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        stateLabel = new QLabel(wList);
        stateLabel->setObjectName(QString::fromUtf8("stateLabel"));

        horizontalLayout_2->addWidget(stateLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        updateButton = new QPushButton(wList);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));

        verticalLayout->addWidget(updateButton);


        retranslateUi(wList);

        QMetaObject::connectSlotsByName(wList);
    } // setupUi

    void retranslateUi(QWidget *wList)
    {
        wList->setWindowTitle(QCoreApplication::translate("wList", "Form", nullptr));
        printButton->setText(QCoreApplication::translate("wList", "Imprimir", nullptr));
        label->setText(QCoreApplication::translate("wList", "Estado:", nullptr));
        stateLabel->setText(QString());
        updateButton->setText(QCoreApplication::translate("wList", "Actualizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wList: public Ui_wList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WLIST_H
