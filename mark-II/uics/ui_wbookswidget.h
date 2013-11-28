/********************************************************************************
** Form generated from reading UI file 'wbookswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBOOKSWIDGET_H
#define UI_WBOOKSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uiBookWidget
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *comboLayout;
    QComboBox *primaryComboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *uiBookWidget)
    {
        if (uiBookWidget->objectName().isEmpty())
            uiBookWidget->setObjectName(QStringLiteral("uiBookWidget"));
        uiBookWidget->resize(473, 178);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(uiBookWidget->sizePolicy().hasHeightForWidth());
        uiBookWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(uiBookWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboLayout = new QVBoxLayout();
        comboLayout->setObjectName(QStringLiteral("comboLayout"));
        primaryComboBox = new QComboBox(uiBookWidget);
        primaryComboBox->setObjectName(QStringLiteral("primaryComboBox"));

        comboLayout->addWidget(primaryComboBox);


        verticalLayout->addLayout(comboLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(uiBookWidget);

        QMetaObject::connectSlotsByName(uiBookWidget);
    } // setupUi

    void retranslateUi(QWidget *uiBookWidget)
    {
        uiBookWidget->setWindowTitle(QApplication::translate("uiBookWidget", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class uiBookWidget: public Ui_uiBookWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBOOKSWIDGET_H
