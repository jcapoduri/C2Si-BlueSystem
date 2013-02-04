/********************************************************************************
** Form generated from reading UI file 'pworkorder.ui'
**
** Created: Thu 20. Sep 20:19:28 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PWORKORDER_H
#define UI_PWORKORDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pworkorder
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *barcodeLabel;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *nameLabel;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *fotocopiaValueLabel;
    QLabel *label_9;
    QLabel *anilladoValueLabel;
    QLabel *label_11;
    QLabel *sennaValueLabel;
    QLabel *label_13;
    QLabel *totalValueLabel;
    QGridLayout *gridLayout_3;
    QLabel *label_14;
    QLabel *fechaValueLabel;
    QLabel *label_16;
    QLabel *horaValueLabel;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *pworkorder)
    {
        if (pworkorder->objectName().isEmpty())
            pworkorder->setObjectName(QString::fromUtf8("pworkorder"));
        pworkorder->resize(2735, 960);
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(250);
        pworkorder->setFont(font);
        pworkorder->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: solid thin rgb(0, 0, 0);\n"
""));
        verticalLayout = new QVBoxLayout(pworkorder);
        verticalLayout->setContentsMargins(50, 50, 50, 50);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        barcodeLabel = new QLabel(pworkorder);
        barcodeLabel->setObjectName(QString::fromUtf8("barcodeLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Code 128"));
        font1.setPointSize(200);
        barcodeLabel->setFont(font1);
        barcodeLabel->setTextFormat(Qt::PlainText);
        barcodeLabel->setScaledContents(false);

        horizontalLayout->addWidget(barcodeLabel);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(pworkorder);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(72);
        label_2->setFont(font2);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        nameLabel = new QLabel(pworkorder);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setFont(font2);

        gridLayout_2->addWidget(nameLabel, 0, 1, 1, 1);

        label_3 = new QLabel(pworkorder);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(pworkorder);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        gridLayout_2->addWidget(label_4, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(pworkorder);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        fotocopiaValueLabel = new QLabel(pworkorder);
        fotocopiaValueLabel->setObjectName(QString::fromUtf8("fotocopiaValueLabel"));
        fotocopiaValueLabel->setFont(font2);

        gridLayout->addWidget(fotocopiaValueLabel, 0, 1, 1, 1);

        label_9 = new QLabel(pworkorder);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        anilladoValueLabel = new QLabel(pworkorder);
        anilladoValueLabel->setObjectName(QString::fromUtf8("anilladoValueLabel"));
        anilladoValueLabel->setFont(font2);

        gridLayout->addWidget(anilladoValueLabel, 1, 1, 1, 1);

        label_11 = new QLabel(pworkorder);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font2);

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        sennaValueLabel = new QLabel(pworkorder);
        sennaValueLabel->setObjectName(QString::fromUtf8("sennaValueLabel"));
        sennaValueLabel->setFont(font2);

        gridLayout->addWidget(sennaValueLabel, 2, 1, 1, 1);

        label_13 = new QLabel(pworkorder);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font2);

        gridLayout->addWidget(label_13, 3, 0, 1, 1);

        totalValueLabel = new QLabel(pworkorder);
        totalValueLabel->setObjectName(QString::fromUtf8("totalValueLabel"));
        totalValueLabel->setFont(font2);

        gridLayout->addWidget(totalValueLabel, 3, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_14 = new QLabel(pworkorder);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font2);

        gridLayout_3->addWidget(label_14, 0, 0, 1, 1);

        fechaValueLabel = new QLabel(pworkorder);
        fechaValueLabel->setObjectName(QString::fromUtf8("fechaValueLabel"));
        fechaValueLabel->setFont(font2);

        gridLayout_3->addWidget(fechaValueLabel, 0, 1, 1, 1);

        label_16 = new QLabel(pworkorder);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font2);

        gridLayout_3->addWidget(label_16, 1, 0, 1, 1);

        horaValueLabel = new QLabel(pworkorder);
        horaValueLabel->setObjectName(QString::fromUtf8("horaValueLabel"));
        horaValueLabel->setFont(font2);

        gridLayout_3->addWidget(horaValueLabel, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 2, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(pworkorder);

        QMetaObject::connectSlotsByName(pworkorder);
    } // setupUi

    void retranslateUi(QWidget *pworkorder)
    {
        pworkorder->setWindowTitle(QApplication::translate("pworkorder", "Form", 0, QApplication::UnicodeUTF8));
        barcodeLabel->setText(QApplication::translate("pworkorder", "001-000001-00000001", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pworkorder", "A Nombre de:", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("pworkorder", "<nombre>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("pworkorder", "Juegos a Retirar", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("pworkorder", "<nro>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("pworkorder", "Costo Fotocopia:", 0, QApplication::UnicodeUTF8));
        fotocopiaValueLabel->setText(QApplication::translate("pworkorder", "<costo>", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("pworkorder", "Costo Anillado:", 0, QApplication::UnicodeUTF8));
        anilladoValueLabel->setText(QApplication::translate("pworkorder", "<costo>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("pworkorder", "Se\303\261a:", 0, QApplication::UnicodeUTF8));
        sennaValueLabel->setText(QApplication::translate("pworkorder", "<costo>", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("pworkorder", "Total a Pagar:", 0, QApplication::UnicodeUTF8));
        totalValueLabel->setText(QApplication::translate("pworkorder", "<costo>", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("pworkorder", "Fecha de Entrega:", 0, QApplication::UnicodeUTF8));
        fechaValueLabel->setText(QApplication::translate("pworkorder", "<fecha>", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("pworkorder", "Hora Aprox.:", 0, QApplication::UnicodeUTF8));
        horaValueLabel->setText(QApplication::translate("pworkorder", "<hora>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pworkorder: public Ui_pworkorder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PWORKORDER_H
