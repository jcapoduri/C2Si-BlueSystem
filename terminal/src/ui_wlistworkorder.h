/********************************************************************************
** Form generated from reading UI file 'wlistworkorder.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WLISTWORKORDER_H
#define UI_WLISTWORKORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wListWorkorder
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *descriptionLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *fechaLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *forLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QLabel *copiesLabel;

    void setupUi(QWidget *wListWorkorder)
    {
        if (wListWorkorder->objectName().isEmpty())
            wListWorkorder->setObjectName(QStringLiteral("wListWorkorder"));
        wListWorkorder->resize(336, 49);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        wListWorkorder->setFont(font);
        wListWorkorder->setStyleSheet(QLatin1String("QWidget#wListWorkorder{\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"* {\n"
"	font: 8pt \"Verdana\";\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(wListWorkorder);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        descriptionLabel = new QLabel(wListWorkorder);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));
        descriptionLabel->setStyleSheet(QStringLiteral("font: 10pt \"Verdana\";"));

        horizontalLayout->addWidget(descriptionLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        fechaLabel = new QLabel(wListWorkorder);
        fechaLabel->setObjectName(QStringLiteral("fechaLabel"));

        horizontalLayout->addWidget(fechaLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(wListWorkorder);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        forLabel = new QLabel(wListWorkorder);
        forLabel->setObjectName(QStringLiteral("forLabel"));

        horizontalLayout_2->addWidget(forLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_4 = new QLabel(wListWorkorder);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        copiesLabel = new QLabel(wListWorkorder);
        copiesLabel->setObjectName(QStringLiteral("copiesLabel"));

        horizontalLayout_2->addWidget(copiesLabel);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(wListWorkorder);

        QMetaObject::connectSlotsByName(wListWorkorder);
    } // setupUi

    void retranslateUi(QWidget *wListWorkorder)
    {
        wListWorkorder->setWindowTitle(QApplication::translate("wListWorkorder", "Form", 0));
        descriptionLabel->setText(QApplication::translate("wListWorkorder", "<description>", 0));
        fechaLabel->setText(QApplication::translate("wListWorkorder", "<fecha>", 0));
        label_3->setText(QApplication::translate("wListWorkorder", "Para:", 0));
        forLabel->setText(QApplication::translate("wListWorkorder", "<para>", 0));
        label_4->setText(QApplication::translate("wListWorkorder", "Copias:", 0));
        copiesLabel->setText(QApplication::translate("wListWorkorder", "<copies>", 0));
    } // retranslateUi

};

namespace Ui {
    class wListWorkorder: public Ui_wListWorkorder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WLISTWORKORDER_H
