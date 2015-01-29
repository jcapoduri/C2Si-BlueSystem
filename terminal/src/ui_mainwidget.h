/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWidget
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *logUserButton;
    QScrollArea *userArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *worksPushButton;
    QPushButton *listaButton;
    QPushButton *othersButton;

    void setupUi(QWidget *mainWidget)
    {
        if (mainWidget->objectName().isEmpty())
            mainWidget->setObjectName(QStringLiteral("mainWidget"));
        mainWidget->resize(97, 660);
        mainWidget->setMaximumSize(QSize(97, 16777215));
        mainWidget->setStyleSheet(QLatin1String("#mainWidget{\n"
"	background-color: rgba(255, 255, 255, 200);\n"
"}\n"
"\n"
"toolButton{\n"
"	background-color: rgba(255,255,255,0);\n"
"}"));
        verticalLayout = new QVBoxLayout(mainWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        logUserButton = new QPushButton(mainWidget);
        logUserButton->setObjectName(QStringLiteral("logUserButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/graphics/add-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        logUserButton->setIcon(icon);
        logUserButton->setIconSize(QSize(32, 32));
        logUserButton->setDefault(true);
        logUserButton->setFlat(false);

        verticalLayout->addWidget(logUserButton);

        userArea = new QScrollArea(mainWidget);
        userArea->setObjectName(QStringLiteral("userArea"));
        userArea->setWidgetResizable(true);
        userArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 93, 490));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_4->setSpacing(9);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(3, 15, 3, 3);
        userArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(userArea);

        groupBox = new QGroupBox(mainWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        worksPushButton = new QPushButton(groupBox);
        worksPushButton->setObjectName(QStringLiteral("worksPushButton"));

        verticalLayout_2->addWidget(worksPushButton);

        listaButton = new QPushButton(groupBox);
        listaButton->setObjectName(QStringLiteral("listaButton"));

        verticalLayout_2->addWidget(listaButton);

        othersButton = new QPushButton(groupBox);
        othersButton->setObjectName(QStringLiteral("othersButton"));

        verticalLayout_2->addWidget(othersButton);


        verticalLayout->addWidget(groupBox);


        retranslateUi(mainWidget);

        QMetaObject::connectSlotsByName(mainWidget);
    } // setupUi

    void retranslateUi(QWidget *mainWidget)
    {
        mainWidget->setWindowTitle(QApplication::translate("mainWidget", "mainWidget", 0));
        logUserButton->setText(QApplication::translate("mainWidget", "Logearse", 0));
        groupBox->setTitle(QApplication::translate("mainWidget", "Listados de", 0));
        worksPushButton->setText(QApplication::translate("mainWidget", "Pendientes", 0));
        listaButton->setText(QApplication::translate("mainWidget", "Lista", 0));
        othersButton->setText(QApplication::translate("mainWidget", "Otros", 0));
    } // retranslateUi

};

namespace Ui {
    class mainWidget: public Ui_mainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
