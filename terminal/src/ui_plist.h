/********************************************************************************
** Form generated from reading UI file 'plist.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLIST_H
#define UI_PLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            plist->setObjectName(QStringLiteral("plist"));
        plist->resize(569, 470);
        plist->setStyleSheet(QLatin1String("/*QWidget#plist, QWidget#scrollArea{\n"
"	background-color: rgb(255, 255, 255);\n"
"}*/\n"
"QWidget{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(plist);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        titleLabel = new QLabel(plist);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(18);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(titleLabel);

        dateLabel = new QLabel(plist);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));
        dateLabel->setFont(font);
        dateLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(dateLabel);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(plist);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        scrollArea = new QScrollArea(plist);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 549, 360));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        line_2 = new QFrame(plist);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        pageLabel = new QLabel(plist);
        pageLabel->setObjectName(QStringLiteral("pageLabel"));
        pageLabel->setFont(font);

        verticalLayout->addWidget(pageLabel);


        retranslateUi(plist);

        QMetaObject::connectSlotsByName(plist);
    } // setupUi

    void retranslateUi(QWidget *plist)
    {
        plist->setWindowTitle(QApplication::translate("plist", "Form", 0));
        titleLabel->setText(QApplication::translate("plist", "<Titulo>", 0));
        dateLabel->setText(QApplication::translate("plist", "<fecha>", 0));
        pageLabel->setText(QApplication::translate("plist", "Pagina: ", 0));
    } // retranslateUi

};

namespace Ui {
    class plist: public Ui_plist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLIST_H
