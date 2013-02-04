/********************************************************************************
** Form generated from reading UI file 'piworkorder.ui'
**
** Created: Thu 20. Sep 20:19:28 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIWORKORDER_H
#define UI_PIWORKORDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_piworkorder
{
public:
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *nameLabel;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_14;
    QLabel *fechaValueLabel;
    QLabel *label_16;
    QLabel *horaValueLabel;
    QLabel *label_19;
    QLabel *label_20;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_18;
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
            piworkorder->setObjectName(QString::fromUtf8("piworkorder"));
        piworkorder->resize(800, 460);
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(250);
        piworkorder->setFont(font);
        piworkorder->setStyleSheet(QString::fromUtf8("QWidget#piworkorder{\n"
"background-color: rgb(255, 255, 255);\n"
"border: solid thin rgb(0, 0, 0);\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(piworkorder);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_5 = new QLabel(piworkorder);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bar Code25 InterleaveTall"));
        font1.setPointSize(24);
        label_5->setFont(font1);

        verticalLayout_5->addWidget(label_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_4 = new QGroupBox(piworkorder);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(7);
        label_2->setFont(font2);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        nameLabel = new QLabel(groupBox_4);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setFont(font2);

        gridLayout_2->addWidget(nameLabel, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        gridLayout_2->addWidget(label_4, 1, 1, 1, 1);

        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font2);

        gridLayout_2->addWidget(label_14, 2, 0, 1, 1);

        fechaValueLabel = new QLabel(groupBox_4);
        fechaValueLabel->setObjectName(QString::fromUtf8("fechaValueLabel"));
        fechaValueLabel->setFont(font2);

        gridLayout_2->addWidget(fechaValueLabel, 2, 1, 1, 1);

        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font2);

        gridLayout_2->addWidget(label_16, 3, 0, 1, 1);

        horaValueLabel = new QLabel(groupBox_4);
        horaValueLabel->setObjectName(QString::fromUtf8("horaValueLabel"));
        horaValueLabel->setFont(font2);

        gridLayout_2->addWidget(horaValueLabel, 3, 1, 1, 1);

        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 4, 0, 1, 1);

        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 4, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);


        horizontalLayout_2->addWidget(groupBox_4);

        groupBox = new QGroupBox(piworkorder);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, -1, -1, -1);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 1, 0, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_4->addWidget(label_12, 2, 0, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_4->addWidget(label_15, 2, 1, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 3, 0, 1, 1);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(piworkorder);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        fotocopiaValueLabel = new QLabel(groupBox_2);
        fotocopiaValueLabel->setObjectName(QString::fromUtf8("fotocopiaValueLabel"));
        fotocopiaValueLabel->setFont(font2);

        gridLayout->addWidget(fotocopiaValueLabel, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        anilladoValueLabel = new QLabel(groupBox_2);
        anilladoValueLabel->setObjectName(QString::fromUtf8("anilladoValueLabel"));
        anilladoValueLabel->setFont(font2);

        gridLayout->addWidget(anilladoValueLabel, 1, 1, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font2);

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        sennaValueLabel = new QLabel(groupBox_2);
        sennaValueLabel->setObjectName(QString::fromUtf8("sennaValueLabel"));
        sennaValueLabel->setFont(font2);

        gridLayout->addWidget(sennaValueLabel, 2, 1, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font2);

        gridLayout->addWidget(label_13, 3, 0, 1, 1);

        totalValueLabel = new QLabel(groupBox_2);
        totalValueLabel->setObjectName(QString::fromUtf8("totalValueLabel"));
        totalValueLabel->setFont(font2);

        gridLayout->addWidget(totalValueLabel, 3, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        horizontalLayout_2->addWidget(groupBox_2);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_3 = new QGroupBox(piworkorder);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        listView = new QListView(groupBox_3);
        listView->setObjectName(QString::fromUtf8("listView"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(listView);


        horizontalLayout->addWidget(groupBox_3);

        groupBox_5 = new QGroupBox(piworkorder);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_6 = new QVBoxLayout(groupBox_5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        plainTextEdit = new QPlainTextEdit(groupBox_5);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout_6->addWidget(plainTextEdit);


        horizontalLayout->addWidget(groupBox_5);


        verticalLayout_5->addLayout(horizontalLayout);


        retranslateUi(piworkorder);

        QMetaObject::connectSlotsByName(piworkorder);
    } // setupUi

    void retranslateUi(QWidget *piworkorder)
    {
        piworkorder->setWindowTitle(QApplication::translate("piworkorder", "Form", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("piworkorder", "001-000001-00000001", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("piworkorder", "Datos Cliente", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("piworkorder", "A Nombre de:", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("piworkorder", "<nombre>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("piworkorder", "Juegos a Retirar", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("piworkorder", "<nro>", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("piworkorder", "Fecha de Entrega:", 0, QApplication::UnicodeUTF8));
        fechaValueLabel->setText(QApplication::translate("piworkorder", "<fecha>", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("piworkorder", "Hora Aprox.:", 0, QApplication::UnicodeUTF8));
        horaValueLabel->setText(QApplication::translate("piworkorder", "<hora>", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("piworkorder", "Recibido:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("piworkorder", "<value>", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("piworkorder", "Como Realizar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("piworkorder", "Completo:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("piworkorder", "<value>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("piworkorder", "Como:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("piworkorder", "<value>", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("piworkorder", "Anillado:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("piworkorder", "<value>", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("piworkorder", "Anillar en:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("piworkorder", "<value>", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("piworkorder", "Costo", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("piworkorder", "Costo Fotocopia:", 0, QApplication::UnicodeUTF8));
        fotocopiaValueLabel->setText(QApplication::translate("piworkorder", "<costo>", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("piworkorder", "Costo Anillado:", 0, QApplication::UnicodeUTF8));
        anilladoValueLabel->setText(QApplication::translate("piworkorder", "<costo>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("piworkorder", "Se\303\261a:", 0, QApplication::UnicodeUTF8));
        sennaValueLabel->setText(QApplication::translate("piworkorder", "<costo>", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("piworkorder", "Total a Pagar:", 0, QApplication::UnicodeUTF8));
        totalValueLabel->setText(QApplication::translate("piworkorder", "<costo>", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("piworkorder", "Paginas", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("piworkorder", "Observaciones", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class piworkorder: public Ui_piworkorder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIWORKORDER_H
