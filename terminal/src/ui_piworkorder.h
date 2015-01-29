/********************************************************************************
** Form generated from reading UI file 'piworkorder.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIWORKORDER_H
#define UI_PIWORKORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_piworkorder
{
public:
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *nroLabel;
    QLabel *label_14;
    QLabel *fechaValueLabel;
    QLabel *label_16;
    QLabel *horaValueLabel;
    QLabel *label_19;
    QLabel *recibidoLabel;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *nameLabel;
    QLabel *worknameLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *barcodeLabel;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QLabel *completeLabel;
    QLabel *label_8;
    QLabel *howToLabel;
    QLabel *label_12;
    QLabel *anilladoLabel;
    QLabel *label_17;
    QLabel *anillarWhereLabel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *fotocopiaValueLabel;
    QLabel *label_9;
    QLabel *anilladoValueLabel;
    QLabel *label_11;
    QLabel *sennaValueLabel;
    QLabel *label_13;
    QLabel *totalValueLabel;
    QLabel *readableBarcodeLabel;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QListView *listView;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_6;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *piworkorder)
    {
        if (piworkorder->objectName().isEmpty())
            piworkorder->setObjectName(QStringLiteral("piworkorder"));
        piworkorder->resize(3235, 1507);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(250);
        piworkorder->setFont(font);
        piworkorder->setStyleSheet(QLatin1String("QWidget#piworkorder{\n"
"background-color: rgb(255, 255, 255);\n"
"border: solid thin rgb(0, 0, 0);\n"
"}\n"
"\n"
"/*QLabel{\n"
"	font: 10pt \"Verdana\";\n"
"}\n"
"\n"
" QGroupBox::title{\n"
"	font: 10pt \"Verdana\";\n"
"}*/\n"
""));
        verticalLayout_4 = new QVBoxLayout(piworkorder);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setContentsMargins(10, 10, 10, 10);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(piworkorder);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(62);
        label_3->setFont(font1);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        nroLabel = new QLabel(piworkorder);
        nroLabel->setObjectName(QStringLiteral("nroLabel"));
        nroLabel->setFont(font1);

        gridLayout_2->addWidget(nroLabel, 2, 1, 1, 1);

        label_14 = new QLabel(piworkorder);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font1);

        gridLayout_2->addWidget(label_14, 3, 0, 1, 1);

        fechaValueLabel = new QLabel(piworkorder);
        fechaValueLabel->setObjectName(QStringLiteral("fechaValueLabel"));
        fechaValueLabel->setFont(font1);

        gridLayout_2->addWidget(fechaValueLabel, 3, 1, 1, 1);

        label_16 = new QLabel(piworkorder);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font1);

        gridLayout_2->addWidget(label_16, 4, 0, 1, 1);

        horaValueLabel = new QLabel(piworkorder);
        horaValueLabel->setObjectName(QStringLiteral("horaValueLabel"));
        horaValueLabel->setFont(font1);

        gridLayout_2->addWidget(horaValueLabel, 4, 1, 1, 1);

        label_19 = new QLabel(piworkorder);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font1);

        gridLayout_2->addWidget(label_19, 5, 0, 1, 1);

        recibidoLabel = new QLabel(piworkorder);
        recibidoLabel->setObjectName(QStringLiteral("recibidoLabel"));
        recibidoLabel->setFont(font1);

        gridLayout_2->addWidget(recibidoLabel, 5, 1, 1, 1);

        label_4 = new QLabel(piworkorder);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        label_2 = new QLabel(piworkorder);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        nameLabel = new QLabel(piworkorder);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setFont(font1);

        gridLayout_2->addWidget(nameLabel, 0, 1, 1, 1);

        worknameLabel = new QLabel(piworkorder);
        worknameLabel->setObjectName(QStringLiteral("worknameLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(worknameLabel->sizePolicy().hasHeightForWidth());
        worknameLabel->setSizePolicy(sizePolicy);
        worknameLabel->setFont(font1);
        worknameLabel->setWordWrap(true);

        gridLayout_2->addWidget(worknameLabel, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        barcodeLabel = new QLabel(piworkorder);
        barcodeLabel->setObjectName(QStringLiteral("barcodeLabel"));
        QFont font2;
        font2.setFamily(QStringLiteral("Code 128"));
        font2.setPointSize(200);
        barcodeLabel->setFont(font2);

        horizontalLayout_3->addWidget(barcodeLabel);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        groupBox = new QGroupBox(piworkorder);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font3;
        font3.setFamily(QStringLiteral("Verdana"));
        font3.setPointSize(72);
        groupBox->setFont(font3);
        groupBox->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, -1, -1, -1);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        completeLabel = new QLabel(groupBox);
        completeLabel->setObjectName(QStringLiteral("completeLabel"));
        completeLabel->setFont(font1);

        gridLayout_4->addWidget(completeLabel, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        gridLayout_4->addWidget(label_8, 1, 0, 1, 1);

        howToLabel = new QLabel(groupBox);
        howToLabel->setObjectName(QStringLiteral("howToLabel"));
        howToLabel->setFont(font1);

        gridLayout_4->addWidget(howToLabel, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);

        gridLayout_4->addWidget(label_12, 2, 0, 1, 1);

        anilladoLabel = new QLabel(groupBox);
        anilladoLabel->setObjectName(QStringLiteral("anilladoLabel"));
        anilladoLabel->setFont(font1);

        gridLayout_4->addWidget(anilladoLabel, 2, 1, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font1);

        gridLayout_4->addWidget(label_17, 3, 0, 1, 1);

        anillarWhereLabel = new QLabel(groupBox);
        anillarWhereLabel->setObjectName(QStringLiteral("anillarWhereLabel"));
        anillarWhereLabel->setFont(font1);

        gridLayout_4->addWidget(anillarWhereLabel, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);


        gridLayout_3->addWidget(groupBox, 3, 0, 1, 1);

        groupBox_2 = new QGroupBox(piworkorder);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font3);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        fotocopiaValueLabel = new QLabel(groupBox_2);
        fotocopiaValueLabel->setObjectName(QStringLiteral("fotocopiaValueLabel"));
        fotocopiaValueLabel->setFont(font1);

        gridLayout->addWidget(fotocopiaValueLabel, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        anilladoValueLabel = new QLabel(groupBox_2);
        anilladoValueLabel->setObjectName(QStringLiteral("anilladoValueLabel"));
        anilladoValueLabel->setFont(font1);

        gridLayout->addWidget(anilladoValueLabel, 1, 1, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        sennaValueLabel = new QLabel(groupBox_2);
        sennaValueLabel->setObjectName(QStringLiteral("sennaValueLabel"));
        sennaValueLabel->setFont(font1);

        gridLayout->addWidget(sennaValueLabel, 2, 1, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);

        gridLayout->addWidget(label_13, 3, 0, 1, 1);

        totalValueLabel = new QLabel(groupBox_2);
        totalValueLabel->setObjectName(QStringLiteral("totalValueLabel"));
        totalValueLabel->setFont(font1);

        gridLayout->addWidget(totalValueLabel, 3, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        gridLayout_3->addWidget(groupBox_2, 3, 1, 1, 1);

        readableBarcodeLabel = new QLabel(piworkorder);
        readableBarcodeLabel->setObjectName(QStringLiteral("readableBarcodeLabel"));
        QFont font4;
        font4.setFamily(QStringLiteral("Verdana"));
        font4.setPointSize(32);
        readableBarcodeLabel->setFont(font4);

        gridLayout_3->addWidget(readableBarcodeLabel, 2, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_3 = new QGroupBox(piworkorder);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFont(font3);
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        listView = new QListView(groupBox_3);
        listView->setObjectName(QStringLiteral("listView"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy1);
        listView->setFont(font3);

        verticalLayout_3->addWidget(listView);


        horizontalLayout->addWidget(groupBox_3);

        groupBox_5 = new QGroupBox(piworkorder);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setFont(font3);
        verticalLayout_6 = new QVBoxLayout(groupBox_5);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        plainTextEdit = new QPlainTextEdit(groupBox_5);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy2);
        plainTextEdit->setFont(font3);

        verticalLayout_6->addWidget(plainTextEdit);


        horizontalLayout->addWidget(groupBox_5);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(piworkorder);

        QMetaObject::connectSlotsByName(piworkorder);
    } // setupUi

    void retranslateUi(QWidget *piworkorder)
    {
        piworkorder->setWindowTitle(QApplication::translate("piworkorder", "Form", 0));
        label_3->setText(QApplication::translate("piworkorder", "Juegos a Retirar", 0));
        nroLabel->setText(QString());
        label_14->setText(QApplication::translate("piworkorder", "Fecha de Entrega:", 0));
        fechaValueLabel->setText(QString());
        label_16->setText(QApplication::translate("piworkorder", "Hora Aprox.:", 0));
        horaValueLabel->setText(QString());
        label_19->setText(QApplication::translate("piworkorder", "Recibido:", 0));
        recibidoLabel->setText(QString());
        label_4->setText(QApplication::translate("piworkorder", "Trabajo:", 0));
        label_2->setText(QApplication::translate("piworkorder", "A Nombre de:", 0));
        nameLabel->setText(QString());
        worknameLabel->setText(QString());
        barcodeLabel->setText(QApplication::translate("piworkorder", "001-000001-00000001", 0));
        groupBox->setTitle(QApplication::translate("piworkorder", "Como Realizar", 0));
        label->setText(QApplication::translate("piworkorder", "Completo:", 0));
        completeLabel->setText(QString());
        label_8->setText(QApplication::translate("piworkorder", "Como:", 0));
        howToLabel->setText(QString());
        label_12->setText(QApplication::translate("piworkorder", "Anillado:", 0));
        anilladoLabel->setText(QString());
        label_17->setText(QApplication::translate("piworkorder", "Anillar en:", 0));
        anillarWhereLabel->setText(QString());
        groupBox_2->setTitle(QApplication::translate("piworkorder", "Costo", 0));
        label_6->setText(QApplication::translate("piworkorder", "Costo Fotocopia:", 0));
        fotocopiaValueLabel->setText(QString());
        label_9->setText(QApplication::translate("piworkorder", "Costo Anillado:", 0));
        anilladoValueLabel->setText(QString());
        label_11->setText(QApplication::translate("piworkorder", "Se\303\261a:", 0));
        sennaValueLabel->setText(QString());
        label_13->setText(QApplication::translate("piworkorder", "Total a Pagar:", 0));
        totalValueLabel->setText(QString());
        readableBarcodeLabel->setText(QApplication::translate("piworkorder", "TextLabel", 0));
        groupBox_3->setTitle(QApplication::translate("piworkorder", "Paginas", 0));
        groupBox_5->setTitle(QApplication::translate("piworkorder", "Observaciones", 0));
    } // retranslateUi

};

namespace Ui {
    class piworkorder: public Ui_piworkorder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIWORKORDER_H
