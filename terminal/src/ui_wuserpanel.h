/********************************************************************************
** Form generated from reading UI file 'wuserpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WUSERPANEL_H
#define UI_WUSERPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wUserPanel
{
public:
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QToolButton *newJobButton;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QToolButton *viewJobButton;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QToolButton *searchJobButton;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QToolButton *closeButton;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *configButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *logoutButton;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_6;
    QGroupBox *adminGroupBox;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_13;
    QToolButton *usersButton;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_7;

    void setupUi(QWidget *wUserPanel)
    {
        if (wUserPanel->objectName().isEmpty())
            wUserPanel->setObjectName(QStringLiteral("wUserPanel"));
        wUserPanel->resize(744, 407);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wUserPanel->sizePolicy().hasHeightForWidth());
        wUserPanel->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(10);
        wUserPanel->setFont(font);
        verticalLayout_8 = new QVBoxLayout(wUserPanel);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        newJobButton = new QToolButton(wUserPanel);
        newJobButton->setObjectName(QStringLiteral("newJobButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/graphics/jobadd.png"), QSize(), QIcon::Normal, QIcon::Off);
        newJobButton->setIcon(icon);
        newJobButton->setIconSize(QSize(64, 64));

        horizontalLayout_4->addWidget(newJobButton);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_4);

        label = new QLabel(wUserPanel);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        horizontalLayout_8->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        viewJobButton = new QToolButton(wUserPanel);
        viewJobButton->setObjectName(QStringLiteral("viewJobButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/graphics/jobedit.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewJobButton->setIcon(icon1);
        viewJobButton->setIconSize(QSize(64, 64));

        horizontalLayout_5->addWidget(viewJobButton);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout_2->addLayout(horizontalLayout_5);

        label_2 = new QLabel(wUserPanel);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);


        horizontalLayout_8->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        searchJobButton = new QToolButton(wUserPanel);
        searchJobButton->setObjectName(QStringLiteral("searchJobButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/graphics/edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchJobButton->setIcon(icon2);
        searchJobButton->setIconSize(QSize(64, 64));

        horizontalLayout_6->addWidget(searchJobButton);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        verticalLayout_3->addLayout(horizontalLayout_6);

        label_3 = new QLabel(wUserPanel);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);


        horizontalLayout_8->addLayout(verticalLayout_3);


        verticalLayout_8->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        closeButton = new QToolButton(wUserPanel);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/graphics/window-close-3.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon3);
        closeButton->setIconSize(QSize(64, 64));

        horizontalLayout_3->addWidget(closeButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_6->addLayout(horizontalLayout_3);

        label_4 = new QLabel(wUserPanel);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_4);


        horizontalLayout_7->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        configButton = new QToolButton(wUserPanel);
        configButton->setObjectName(QStringLiteral("configButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/graphics/preferences-system.png"), QSize(), QIcon::Normal, QIcon::Off);
        configButton->setIcon(icon4);
        configButton->setIconSize(QSize(64, 64));

        horizontalLayout->addWidget(configButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout);

        label_5 = new QLabel(wUserPanel);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_5);


        horizontalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        logoutButton = new QToolButton(wUserPanel);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(58);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(logoutButton->sizePolicy().hasHeightForWidth());
        logoutButton->setSizePolicy(sizePolicy1);
        logoutButton->setLayoutDirection(Qt::LeftToRight);
        logoutButton->setAutoFillBackground(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/graphics/im-kick-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutButton->setIcon(icon5);
        logoutButton->setIconSize(QSize(64, 64));

        horizontalLayout_2->addWidget(logoutButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_2);

        label_6 = new QLabel(wUserPanel);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_6);


        horizontalLayout_7->addLayout(verticalLayout_4);


        verticalLayout_8->addLayout(horizontalLayout_7);

        adminGroupBox = new QGroupBox(wUserPanel);
        adminGroupBox->setObjectName(QStringLiteral("adminGroupBox"));
        horizontalLayout_10 = new QHBoxLayout(adminGroupBox);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_13);

        usersButton = new QToolButton(adminGroupBox);
        usersButton->setObjectName(QStringLiteral("usersButton"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/graphics/im-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        usersButton->setIcon(icon6);
        usersButton->setIconSize(QSize(64, 64));

        horizontalLayout_9->addWidget(usersButton);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_14);


        verticalLayout_7->addLayout(horizontalLayout_9);

        label_7 = new QLabel(adminGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_7);


        horizontalLayout_10->addLayout(verticalLayout_7);


        verticalLayout_8->addWidget(adminGroupBox);

        adminGroupBox->raise();

        retranslateUi(wUserPanel);

        QMetaObject::connectSlotsByName(wUserPanel);
    } // setupUi

    void retranslateUi(QWidget *wUserPanel)
    {
        wUserPanel->setWindowTitle(QApplication::translate("wUserPanel", "Form", 0));
        newJobButton->setText(QApplication::translate("wUserPanel", "...", 0));
        label->setText(QApplication::translate("wUserPanel", "Nuevo Trabajo", 0));
        viewJobButton->setText(QApplication::translate("wUserPanel", "...", 0));
        label_2->setText(QApplication::translate("wUserPanel", "Revisar Trabajo", 0));
        searchJobButton->setText(QApplication::translate("wUserPanel", "...", 0));
        label_3->setText(QApplication::translate("wUserPanel", "Buscar Trabajo", 0));
        closeButton->setText(QApplication::translate("wUserPanel", "...", 0));
        label_4->setText(QApplication::translate("wUserPanel", "Cerrar Ventana", 0));
        configButton->setText(QApplication::translate("wUserPanel", "...", 0));
        label_5->setText(QApplication::translate("wUserPanel", "Opciones", 0));
        logoutButton->setText(QApplication::translate("wUserPanel", "...", 0));
        label_6->setText(QApplication::translate("wUserPanel", "Logout!", 0));
        adminGroupBox->setTitle(QApplication::translate("wUserPanel", "Administrador", 0));
        usersButton->setText(QApplication::translate("wUserPanel", "...", 0));
        label_7->setText(QApplication::translate("wUserPanel", "Usuarios Online", 0));
    } // retranslateUi

};

namespace Ui {
    class wUserPanel: public Ui_wUserPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WUSERPANEL_H
