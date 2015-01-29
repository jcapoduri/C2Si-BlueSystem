/********************************************************************************
** Form generated from reading UI file 'wbooksbrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBOOKSBROWSER_H
#define UI_WBOOKSBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            wBooksBrowser->setObjectName(QStringLiteral("wBooksBrowser"));
        wBooksBrowser->resize(612, 428);
        verticalLayout = new QVBoxLayout(wBooksBrowser);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        businessComboBox = new QComboBox(wBooksBrowser);
        businessComboBox->setObjectName(QStringLiteral("businessComboBox"));

        horizontalLayout_2->addWidget(businessComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        treeWidget = new QTreeWidget(wBooksBrowser);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QStringLiteral("2"));
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeWidget->setColumnCount(2);

        verticalLayout->addWidget(treeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addSonButton = new QPushButton(wBooksBrowser);
        addSonButton->setObjectName(QStringLiteral("addSonButton"));

        horizontalLayout->addWidget(addSonButton);

        addButton = new QPushButton(wBooksBrowser);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout->addWidget(addButton);

        modButton = new QPushButton(wBooksBrowser);
        modButton->setObjectName(QStringLiteral("modButton"));

        horizontalLayout->addWidget(modButton);

        delButton = new QPushButton(wBooksBrowser);
        delButton->setObjectName(QStringLiteral("delButton"));

        horizontalLayout->addWidget(delButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(wBooksBrowser);

        QMetaObject::connectSlotsByName(wBooksBrowser);
    } // setupUi

    void retranslateUi(QWidget *wBooksBrowser)
    {
        wBooksBrowser->setWindowTitle(QApplication::translate("wBooksBrowser", "Form", 0));
        addSonButton->setText(QApplication::translate("wBooksBrowser", "Agregar Hijo", 0));
        addButton->setText(QApplication::translate("wBooksBrowser", "Agregar", 0));
        modButton->setText(QApplication::translate("wBooksBrowser", "Modificar", 0));
        delButton->setText(QApplication::translate("wBooksBrowser", "Borrar", 0));
    } // retranslateUi

};

namespace Ui {
    class wBooksBrowser: public Ui_wBooksBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBOOKSBROWSER_H
