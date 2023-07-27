/********************************************************************************
** Form generated from reading UI file 'plist.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLIST_H
#define UI_PLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_plist
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel;
    QLabel *dateLabel;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFrame *line_2;
    QLabel *pageLabel;

    void setupUi(QWidget *plist)
    {
        if (plist->objectName().isEmpty())
            plist->setObjectName(QString::fromUtf8("plist"));
        plist->resize(569, 470);
        plist->setStyleSheet(QString::fromUtf8("/*QWidget#plist, QWidget#scrollArea{\n"
"	background-color: rgb(255, 255, 255);\n"
"}*/\n"
"QWidget{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(plist);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        titleLabel = new QLabel(plist);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(18);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(titleLabel);

        dateLabel = new QLabel(plist);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setFont(font);
        dateLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(dateLabel);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(plist);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        scrollArea = new QScrollArea(plist);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 549, 360));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        line_2 = new QFrame(plist);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        pageLabel = new QLabel(plist);
        pageLabel->setObjectName(QString::fromUtf8("pageLabel"));
        pageLabel->setFont(font);

        verticalLayout->addWidget(pageLabel);


        retranslateUi(plist);

        QMetaObject::connectSlotsByName(plist);
    } // setupUi

    void retranslateUi(QWidget *plist)
    {
        plist->setWindowTitle(QCoreApplication::translate("plist", "Form", nullptr));
        titleLabel->setText(QCoreApplication::translate("plist", "<Titulo>", nullptr));
        dateLabel->setText(QCoreApplication::translate("plist", "<fecha>", nullptr));
        pageLabel->setText(QCoreApplication::translate("plist", "Pagina: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class plist: public Ui_plist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLIST_H
