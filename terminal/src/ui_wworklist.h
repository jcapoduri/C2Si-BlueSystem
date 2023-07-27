/********************************************************************************
** Form generated from reading UI file 'wworklist.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WWORKLIST_H
#define UI_WWORKLIST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wWorkList
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *filterGroupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *searchLineEdit;
    QPushButton *searchButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *clientCheckBox;
    QCheckBox *descriptionCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *recibidoCheckBox;
    QCheckBox *fotocopiandoCheckBox;
    QCheckBox *anillandoCheckBox;
    QCheckBox *terminadoCheckBox;
    QCheckBox *entregadoCheckBox;
    QCheckBox *recicladoCheckBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QDateTimeEdit *desdeDateTimeEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QDateTimeEdit *hastaDateTimeEdit;
    QCheckBox *listaCheckBox;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *printButton;
    QPushButton *closeButton;

    void setupUi(QWidget *wWorkList)
    {
        if (wWorkList->objectName().isEmpty())
            wWorkList->setObjectName(QString::fromUtf8("wWorkList"));
        wWorkList->resize(851, 461);
        verticalLayout = new QVBoxLayout(wWorkList);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        filterGroupBox = new QGroupBox(wWorkList);
        filterGroupBox->setObjectName(QString::fromUtf8("filterGroupBox"));
        verticalLayout_4 = new QVBoxLayout(filterGroupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(filterGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        searchLineEdit = new QLineEdit(filterGroupBox);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));

        horizontalLayout->addWidget(searchLineEdit);

        searchButton = new QPushButton(filterGroupBox);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/graphics/edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon);

        horizontalLayout->addWidget(searchButton);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        clientCheckBox = new QCheckBox(filterGroupBox);
        clientCheckBox->setObjectName(QString::fromUtf8("clientCheckBox"));
        clientCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(clientCheckBox);

        descriptionCheckBox = new QCheckBox(filterGroupBox);
        descriptionCheckBox->setObjectName(QString::fromUtf8("descriptionCheckBox"));

        horizontalLayout_2->addWidget(descriptionCheckBox);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(filterGroupBox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_5 = new QHBoxLayout(groupBox);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        recibidoCheckBox = new QCheckBox(groupBox);
        recibidoCheckBox->setObjectName(QString::fromUtf8("recibidoCheckBox"));
        recibidoCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(recibidoCheckBox);

        fotocopiandoCheckBox = new QCheckBox(groupBox);
        fotocopiandoCheckBox->setObjectName(QString::fromUtf8("fotocopiandoCheckBox"));
        fotocopiandoCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(fotocopiandoCheckBox);

        anillandoCheckBox = new QCheckBox(groupBox);
        anillandoCheckBox->setObjectName(QString::fromUtf8("anillandoCheckBox"));
        anillandoCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(anillandoCheckBox);

        terminadoCheckBox = new QCheckBox(groupBox);
        terminadoCheckBox->setObjectName(QString::fromUtf8("terminadoCheckBox"));
        terminadoCheckBox->setChecked(false);

        horizontalLayout_5->addWidget(terminadoCheckBox);

        entregadoCheckBox = new QCheckBox(groupBox);
        entregadoCheckBox->setObjectName(QString::fromUtf8("entregadoCheckBox"));

        horizontalLayout_5->addWidget(entregadoCheckBox);

        recicladoCheckBox = new QCheckBox(groupBox);
        recicladoCheckBox->setObjectName(QString::fromUtf8("recicladoCheckBox"));

        horizontalLayout_5->addWidget(recicladoCheckBox);


        horizontalLayout_3->addWidget(groupBox);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(filterGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        desdeDateTimeEdit = new QDateTimeEdit(filterGroupBox);
        desdeDateTimeEdit->setObjectName(QString::fromUtf8("desdeDateTimeEdit"));
        desdeDateTimeEdit->setCalendarPopup(true);

        verticalLayout_2->addWidget(desdeDateTimeEdit);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(filterGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        hastaDateTimeEdit = new QDateTimeEdit(filterGroupBox);
        hastaDateTimeEdit->setObjectName(QString::fromUtf8("hastaDateTimeEdit"));
        hastaDateTimeEdit->setCalendarPopup(true);

        verticalLayout_3->addWidget(hastaDateTimeEdit);


        horizontalLayout_3->addLayout(verticalLayout_3);

        listaCheckBox = new QCheckBox(filterGroupBox);
        listaCheckBox->setObjectName(QString::fromUtf8("listaCheckBox"));

        horizontalLayout_3->addWidget(listaCheckBox);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_5->addWidget(filterGroupBox);


        horizontalLayout_4->addLayout(verticalLayout_5);


        verticalLayout->addLayout(horizontalLayout_4);

        tableWidget = new QTableWidget(wWorkList);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setSortingEnabled(true);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        printButton = new QPushButton(wWorkList);
        printButton->setObjectName(QString::fromUtf8("printButton"));

        horizontalLayout_6->addWidget(printButton);

        closeButton = new QPushButton(wWorkList);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout_6->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(wWorkList);
        QObject::connect(searchLineEdit, SIGNAL(returnPressed()), searchButton, SLOT(click()));

        QMetaObject::connectSlotsByName(wWorkList);
    } // setupUi

    void retranslateUi(QWidget *wWorkList)
    {
        wWorkList->setWindowTitle(QCoreApplication::translate("wWorkList", "Listado de Trabajos", nullptr));
        filterGroupBox->setTitle(QCoreApplication::translate("wWorkList", "Filtro", nullptr));
        label->setText(QCoreApplication::translate("wWorkList", "Buscar:", nullptr));
        searchButton->setText(QCoreApplication::translate("wWorkList", "Buscar", nullptr));
        clientCheckBox->setText(QCoreApplication::translate("wWorkList", "Cliente", nullptr));
        descriptionCheckBox->setText(QCoreApplication::translate("wWorkList", "Descripcion", nullptr));
        groupBox->setTitle(QCoreApplication::translate("wWorkList", "Estado", nullptr));
        recibidoCheckBox->setText(QCoreApplication::translate("wWorkList", "Recibido", nullptr));
        fotocopiandoCheckBox->setText(QCoreApplication::translate("wWorkList", "Fotocopiando", nullptr));
        anillandoCheckBox->setText(QCoreApplication::translate("wWorkList", "Anillando", nullptr));
        terminadoCheckBox->setText(QCoreApplication::translate("wWorkList", "Terminado", nullptr));
        entregadoCheckBox->setText(QCoreApplication::translate("wWorkList", "Entregado", nullptr));
        recicladoCheckBox->setText(QCoreApplication::translate("wWorkList", "Reciclado", nullptr));
        label_2->setText(QCoreApplication::translate("wWorkList", "Desde:", nullptr));
        label_3->setText(QCoreApplication::translate("wWorkList", "Hasta:", nullptr));
        listaCheckBox->setText(QCoreApplication::translate("wWorkList", "Lista", nullptr));
        printButton->setText(QCoreApplication::translate("wWorkList", "Imprimir", nullptr));
        closeButton->setText(QCoreApplication::translate("wWorkList", "Cerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wWorkList: public Ui_wWorkList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WWORKLIST_H
