/********************************************************************************
** Form generated from reading UI file 'wbookswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBOOKSWIDGET_H
#define UI_WBOOKSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wBooksWidget
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *comboLayout;
    QComboBox *primaryComboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *wBooksWidget)
    {
        if (wBooksWidget->objectName().isEmpty())
            wBooksWidget->setObjectName(QString::fromUtf8("wBooksWidget"));
        wBooksWidget->resize(473, 178);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wBooksWidget->sizePolicy().hasHeightForWidth());
        wBooksWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(wBooksWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboLayout = new QVBoxLayout();
        comboLayout->setObjectName(QString::fromUtf8("comboLayout"));
        primaryComboBox = new QComboBox(wBooksWidget);
        primaryComboBox->setObjectName(QString::fromUtf8("primaryComboBox"));

        comboLayout->addWidget(primaryComboBox);


        verticalLayout->addLayout(comboLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(wBooksWidget);

        QMetaObject::connectSlotsByName(wBooksWidget);
    } // setupUi

    void retranslateUi(QWidget *wBooksWidget)
    {
        wBooksWidget->setWindowTitle(QCoreApplication::translate("wBooksWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wBooksWidget: public Ui_wBooksWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBOOKSWIDGET_H
