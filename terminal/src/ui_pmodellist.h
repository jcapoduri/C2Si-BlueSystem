/********************************************************************************
** Form generated from reading UI file 'pmodellist.ui'
**
** Created: Mon 26. Nov 15:43:48 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PMODELLIST_H
#define UI_PMODELLIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

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
        pmodellist->setWindowTitle(QApplication::translate("pmodellist", "Form", 0, QApplication::UnicodeUTF8));
        titleLabel->setText(QApplication::translate("pmodellist", "<Titulo>", 0, QApplication::UnicodeUTF8));
        dateLabel->setText(QApplication::translate("pmodellist", "<fecha>", 0, QApplication::UnicodeUTF8));
        pageLabel->setText(QApplication::translate("pmodellist", "Pagina: ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pmodellist: public Ui_pmodellist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PMODELLIST_H
