/********************************************************************************
** Form generated from reading UI file 'bluebar.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLUEBAR_H
#define UI_BLUEBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_blueBar
{
public:
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QFrame *line;
    QPushButton *addJobButton;
    QFrame *line_2;
    QPushButton *searchButton;

    void setupUi(QWidget *blueBar)
    {
        if (blueBar->objectName().isEmpty())
            blueBar->setObjectName(QStringLiteral("blueBar"));
        blueBar->resize(755, 33);
        blueBar->setMaximumSize(QSize(800, 40));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        blueBar->setPalette(palette);
        horizontalLayout_2 = new QHBoxLayout(blueBar);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(6, 3, 6, 3);
        pushButton = new QPushButton(blueBar);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        line = new QFrame(blueBar);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        addJobButton = new QPushButton(blueBar);
        addJobButton->setObjectName(QStringLiteral("addJobButton"));

        horizontalLayout_2->addWidget(addJobButton);

        line_2 = new QFrame(blueBar);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        searchButton = new QPushButton(blueBar);
        searchButton->setObjectName(QStringLiteral("searchButton"));

        horizontalLayout_2->addWidget(searchButton);


        retranslateUi(blueBar);

        QMetaObject::connectSlotsByName(blueBar);
    } // setupUi

    void retranslateUi(QWidget *blueBar)
    {
        blueBar->setWindowTitle(QApplication::translate("blueBar", "Form", 0));
        pushButton->setText(QApplication::translate("blueBar", "log in", 0));
        addJobButton->setText(QApplication::translate("blueBar", "Agregar Trabajo", 0));
        searchButton->setText(QApplication::translate("blueBar", "Buscar", 0));
    } // retranslateUi

};

namespace Ui {
    class blueBar: public Ui_blueBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLUEBAR_H
