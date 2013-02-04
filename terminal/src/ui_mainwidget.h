/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created: Mon 26. Nov 15:43:47 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

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
            mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        mainWidget->resize(97, 660);
        mainWidget->setMaximumSize(QSize(97, 16777215));
        mainWidget->setStyleSheet(QString::fromUtf8("#mainWidget{\n"
"	background-color: rgba(255, 255, 255, 200);\n"
"}\n"
"\n"
"toolButton{\n"
"	background-color: rgba(255,255,255,0);\n"
"}"));
        verticalLayout = new QVBoxLayout(mainWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        logUserButton = new QPushButton(mainWidget);
        logUserButton->setObjectName(QString::fromUtf8("logUserButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/graphics/add-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        logUserButton->setIcon(icon);
        logUserButton->setIconSize(QSize(32, 32));
        logUserButton->setDefault(true);
        logUserButton->setFlat(false);

        verticalLayout->addWidget(logUserButton);

        userArea = new QScrollArea(mainWidget);
        userArea->setObjectName(QString::fromUtf8("userArea"));
        userArea->setWidgetResizable(true);
        userArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 93, 490));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_4->setSpacing(9);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(3, 15, 3, 3);
        userArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(userArea);

        groupBox = new QGroupBox(mainWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        worksPushButton = new QPushButton(groupBox);
        worksPushButton->setObjectName(QString::fromUtf8("worksPushButton"));

        verticalLayout_2->addWidget(worksPushButton);

        listaButton = new QPushButton(groupBox);
        listaButton->setObjectName(QString::fromUtf8("listaButton"));

        verticalLayout_2->addWidget(listaButton);

        othersButton = new QPushButton(groupBox);
        othersButton->setObjectName(QString::fromUtf8("othersButton"));

        verticalLayout_2->addWidget(othersButton);


        verticalLayout->addWidget(groupBox);


        retranslateUi(mainWidget);

        QMetaObject::connectSlotsByName(mainWidget);
    } // setupUi

    void retranslateUi(QWidget *mainWidget)
    {
        mainWidget->setWindowTitle(QApplication::translate("mainWidget", "mainWidget", 0, QApplication::UnicodeUTF8));
        logUserButton->setText(QApplication::translate("mainWidget", "Logearse", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("mainWidget", "Listados de", 0, QApplication::UnicodeUTF8));
        worksPushButton->setText(QApplication::translate("mainWidget", "Pendientes", 0, QApplication::UnicodeUTF8));
        listaButton->setText(QApplication::translate("mainWidget", "Lista", 0, QApplication::UnicodeUTF8));
        othersButton->setText(QApplication::translate("mainWidget", "Otros", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mainWidget: public Ui_mainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
