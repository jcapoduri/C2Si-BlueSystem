/********************************************************************************
** Form generated from reading UI file 'pworkorder.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PWORKORDER_H
#define UI_PWORKORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pworkorder
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *barcodeLabel;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *nameLabel;
    QLabel *label_3;
    QLabel *nroJuegosLabel;
    QLabel *readableBarcodeLabel;
    QLabel *label_7;
    QSpacerItem *verticalSpacer;
    QLabel *label_8;
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
    QLabel *label;

    void setupUi(QWidget *pworkorder)
    {
        if (pworkorder->objectName().isEmpty())
            pworkorder->setObjectName(QString::fromUtf8("pworkorder"));
        pworkorder->resize(4419, 1197);
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(250);
        pworkorder->setFont(font);
        pworkorder->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: solid thin rgb(0, 0, 0);\n"
""));
        verticalLayout = new QVBoxLayout(pworkorder);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(50, 50, 50, 50);
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

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, 0, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 10, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_4 = new QLabel(pworkorder);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMaximumSize(QSize(256, 256));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../bin/casitaazul.png")));
        label_4->setScaledContents(true);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setMargin(0);
        label_4->setIndent(-1);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label_5 = new QLabel(pworkorder);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(320, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(50);
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(true);

        verticalLayout_2->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(pworkorder);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(72);
        label_2->setFont(font3);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        nameLabel = new QLabel(pworkorder);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setMinimumSize(QSize(500, 0));
        nameLabel->setFont(font3);

        gridLayout_2->addWidget(nameLabel, 0, 1, 1, 1);

        label_3 = new QLabel(pworkorder);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font3);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        nroJuegosLabel = new QLabel(pworkorder);
        nroJuegosLabel->setObjectName(QString::fromUtf8("nroJuegosLabel"));
        nroJuegosLabel->setMinimumSize(QSize(500, 0));
        nroJuegosLabel->setFont(font3);

        gridLayout_2->addWidget(nroJuegosLabel, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        readableBarcodeLabel = new QLabel(pworkorder);
        readableBarcodeLabel->setObjectName(QString::fromUtf8("readableBarcodeLabel"));
        readableBarcodeLabel->setFont(font3);

        verticalLayout->addWidget(readableBarcodeLabel);

        label_7 = new QLabel(pworkorder);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);

        verticalLayout->addWidget(label_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_8 = new QLabel(pworkorder);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font2);

        verticalLayout->addWidget(label_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(pworkorder);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        fotocopiaValueLabel = new QLabel(pworkorder);
        fotocopiaValueLabel->setObjectName(QString::fromUtf8("fotocopiaValueLabel"));
        fotocopiaValueLabel->setFont(font3);

        gridLayout->addWidget(fotocopiaValueLabel, 0, 1, 1, 1);

        label_9 = new QLabel(pworkorder);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font3);

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        anilladoValueLabel = new QLabel(pworkorder);
        anilladoValueLabel->setObjectName(QString::fromUtf8("anilladoValueLabel"));
        anilladoValueLabel->setFont(font3);

        gridLayout->addWidget(anilladoValueLabel, 1, 1, 1, 1);

        label_11 = new QLabel(pworkorder);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font3);

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        sennaValueLabel = new QLabel(pworkorder);
        sennaValueLabel->setObjectName(QString::fromUtf8("sennaValueLabel"));
        sennaValueLabel->setFont(font3);

        gridLayout->addWidget(sennaValueLabel, 2, 1, 1, 1);

        label_13 = new QLabel(pworkorder);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font3);

        gridLayout->addWidget(label_13, 3, 0, 1, 1);

        totalValueLabel = new QLabel(pworkorder);
        totalValueLabel->setObjectName(QString::fromUtf8("totalValueLabel"));
        totalValueLabel->setFont(font3);

        gridLayout->addWidget(totalValueLabel, 3, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_14 = new QLabel(pworkorder);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font3);

        gridLayout_3->addWidget(label_14, 0, 0, 1, 1);

        fechaValueLabel = new QLabel(pworkorder);
        fechaValueLabel->setObjectName(QString::fromUtf8("fechaValueLabel"));
        fechaValueLabel->setFont(font3);

        gridLayout_3->addWidget(fechaValueLabel, 0, 1, 1, 1);

        label_16 = new QLabel(pworkorder);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font3);

        gridLayout_3->addWidget(label_16, 1, 0, 1, 1);

        horaValueLabel = new QLabel(pworkorder);
        horaValueLabel->setObjectName(QString::fromUtf8("horaValueLabel"));
        horaValueLabel->setFont(font3);

        gridLayout_3->addWidget(horaValueLabel, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 2, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(pworkorder);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Verdana"));
        font4.setPointSize(39);
        label->setFont(font4);

        verticalLayout->addWidget(label);


        retranslateUi(pworkorder);

        QMetaObject::connectSlotsByName(pworkorder);
    } // setupUi

    void retranslateUi(QWidget *pworkorder)
    {
        pworkorder->setWindowTitle(QCoreApplication::translate("pworkorder", "Form", nullptr));
        barcodeLabel->setText(QCoreApplication::translate("pworkorder", "001-000001-00000001", nullptr));
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("pworkorder", "La Casita Azul", nullptr));
        label_2->setText(QCoreApplication::translate("pworkorder", "A Nombre de:", nullptr));
        nameLabel->setText(QString());
        label_3->setText(QCoreApplication::translate("pworkorder", "Juegos a Retirar", nullptr));
        nroJuegosLabel->setText(QString());
        readableBarcodeLabel->setText(QCoreApplication::translate("pworkorder", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("pworkorder", "Email: fotocasitaazul@yahoo.com.ar", nullptr));
        label_8->setText(QCoreApplication::translate("pworkorder", "Tel: (0291) - 4514665", nullptr));
        label_6->setText(QCoreApplication::translate("pworkorder", "Costo Fotocopia:", nullptr));
        fotocopiaValueLabel->setText(QString());
        label_9->setText(QCoreApplication::translate("pworkorder", "Costo Anillado:", nullptr));
        anilladoValueLabel->setText(QString());
        label_11->setText(QCoreApplication::translate("pworkorder", "Se\303\261a:", nullptr));
        sennaValueLabel->setText(QString());
        label_13->setText(QCoreApplication::translate("pworkorder", "Total a Pagar:", nullptr));
        totalValueLabel->setText(QString());
        label_14->setText(QCoreApplication::translate("pworkorder", "Fecha de Entrega:", nullptr));
        fechaValueLabel->setText(QString());
        label_16->setText(QCoreApplication::translate("pworkorder", "Hora Aprox.:", nullptr));
        horaValueLabel->setText(QString());
        label->setText(QCoreApplication::translate("pworkorder", "Pasados los 30 dias corridos desde la fecha de entrega, el trabajo sera dado de baja como descarte", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pworkorder: public Ui_pworkorder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PWORKORDER_H
