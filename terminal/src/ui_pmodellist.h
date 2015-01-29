/********************************************************************************
** Form generated from reading UI file 'pmodellist.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PMODELLIST_H
#define UI_PMODELLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pmodellist
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel;
    QLabel *dateLabel;
    QFrame *line;
    QTableWidget *tableWidget;
    QFrame *line_2;
    QLabel *pageLabel;

    void setupUi(QWidget *pmodellist)
    {
        if (pmodellist->objectName().isEmpty())
            pmodellist->setObjectName(QStringLiteral("pmodellist"));
        pmodellist->resize(569, 470);
        pmodellist->setStyleSheet(QLatin1String("/*QWidget#plist, QWidget#scrollArea{\n"
"	background-color: rgb(255, 255, 255);\n"
"}*/\n"
"QWidget{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(pmodellist);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        titleLabel = new QLabel(pmodellist);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(18);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(titleLabel);

        dateLabel = new QLabel(pmodellist);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));
        dateLabel->setFont(font);
        dateLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(dateLabel);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(pmodellist);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        tableWidget = new QTableWidget(pmodellist);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->verticalHeader()->setVisible(true);

        verticalLayout->addWidget(tableWidget);

        line_2 = new QFrame(pmodellist);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        pageLabel = new QLabel(pmodellist);
        pageLabel->setObjectName(QStringLiteral("pageLabel"));
        pageLabel->setFont(font);

        verticalLayout->addWidget(pageLabel);


        retranslateUi(pmodellist);

        QMetaObject::connectSlotsByName(pmodellist);
    } // setupUi

    void retranslateUi(QWidget *pmodellist)
    {
        pmodellist->setWindowTitle(QApplication::translate("pmodellist", "Form", 0));
        titleLabel->setText(QApplication::translate("pmodellist", "<Titulo>", 0));
        dateLabel->setText(QApplication::translate("pmodellist", "<fecha>", 0));
        pageLabel->setText(QApplication::translate("pmodellist", "Pagina: ", 0));
    } // retranslateUi

};

namespace Ui {
    class pmodellist: public Ui_pmodellist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PMODELLIST_H
