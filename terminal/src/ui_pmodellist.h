/********************************************************************************
** Form generated from reading UI file 'pmodellist.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PMODELLIST_H
#define UI_PMODELLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
            pmodellist->setObjectName(QString::fromUtf8("pmodellist"));
        pmodellist->resize(569, 470);
        pmodellist->setStyleSheet(QString::fromUtf8("/*QWidget#plist, QWidget#scrollArea{\n"
"	background-color: rgb(255, 255, 255);\n"
"}*/\n"
"QWidget{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(pmodellist);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        titleLabel = new QLabel(pmodellist);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(18);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(titleLabel);

        dateLabel = new QLabel(pmodellist);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setFont(font);
        dateLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(dateLabel);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(pmodellist);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        tableWidget = new QTableWidget(pmodellist);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->verticalHeader()->setVisible(true);

        verticalLayout->addWidget(tableWidget);

        line_2 = new QFrame(pmodellist);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        pageLabel = new QLabel(pmodellist);
        pageLabel->setObjectName(QString::fromUtf8("pageLabel"));
        pageLabel->setFont(font);

        verticalLayout->addWidget(pageLabel);


        retranslateUi(pmodellist);

        QMetaObject::connectSlotsByName(pmodellist);
    } // setupUi

    void retranslateUi(QWidget *pmodellist)
    {
        pmodellist->setWindowTitle(QCoreApplication::translate("pmodellist", "Form", nullptr));
        titleLabel->setText(QCoreApplication::translate("pmodellist", "<Titulo>", nullptr));
        dateLabel->setText(QCoreApplication::translate("pmodellist", "<fecha>", nullptr));
        pageLabel->setText(QCoreApplication::translate("pmodellist", "Pagina: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pmodellist: public Ui_pmodellist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PMODELLIST_H
