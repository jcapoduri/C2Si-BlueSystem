/********************************************************************************
** Form generated from reading UI file 'wworklist.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WWORKLIST_H
#define UI_WWORKLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            wWorkList->setObjectName(QStringLiteral("wWorkList"));
        wWorkList->resize(851, 461);
        verticalLayout = new QVBoxLayout(wWorkList);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        filterGroupBox = new QGroupBox(wWorkList);
        filterGroupBox->setObjectName(QStringLiteral("filterGroupBox"));
        verticalLayout_4 = new QVBoxLayout(filterGroupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(filterGroupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        searchLineEdit = new QLineEdit(filterGroupBox);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));

        horizontalLayout->addWidget(searchLineEdit);

        searchButton = new QPushButton(filterGroupBox);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/graphics/edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon);

        horizontalLayout->addWidget(searchButton);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        clientCheckBox = new QCheckBox(filterGroupBox);
        clientCheckBox->setObjectName(QStringLiteral("clientCheckBox"));

        horizontalLayout_2->addWidget(clientCheckBox);

        descriptionCheckBox = new QCheckBox(filterGroupBox);
        descriptionCheckBox->setObjectName(QStringLiteral("descriptionCheckBox"));

        horizontalLayout_2->addWidget(descriptionCheckBox);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox = new QGroupBox(filterGroupBox);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_5 = new QHBoxLayout(groupBox);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        recibidoCheckBox = new QCheckBox(groupBox);
        recibidoCheckBox->setObjectName(QStringLiteral("recibidoCheckBox"));
        recibidoCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(recibidoCheckBox);

        fotocopiandoCheckBox = new QCheckBox(groupBox);
        fotocopiandoCheckBox->setObjectName(QStringLiteral("fotocopiandoCheckBox"));
        fotocopiandoCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(fotocopiandoCheckBox);

        anillandoCheckBox = new QCheckBox(groupBox);
        anillandoCheckBox->setObjectName(QStringLiteral("anillandoCheckBox"));
        anillandoCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(anillandoCheckBox);

        terminadoCheckBox = new QCheckBox(groupBox);
        terminadoCheckBox->setObjectName(QStringLiteral("terminadoCheckBox"));
        terminadoCheckBox->setChecked(false);

        horizontalLayout_5->addWidget(terminadoCheckBox);

        entregadoCheckBox = new QCheckBox(groupBox);
        entregadoCheckBox->setObjectName(QStringLiteral("entregadoCheckBox"));

        horizontalLayout_5->addWidget(entregadoCheckBox);

        recicladoCheckBox = new QCheckBox(groupBox);
        recicladoCheckBox->setObjectName(QStringLiteral("recicladoCheckBox"));

        horizontalLayout_5->addWidget(recicladoCheckBox);


        horizontalLayout_3->addWidget(groupBox);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(filterGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        desdeDateTimeEdit = new QDateTimeEdit(filterGroupBox);
        desdeDateTimeEdit->setObjectName(QStringLiteral("desdeDateTimeEdit"));
        desdeDateTimeEdit->setCalendarPopup(true);

        verticalLayout_2->addWidget(desdeDateTimeEdit);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(filterGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        hastaDateTimeEdit = new QDateTimeEdit(filterGroupBox);
        hastaDateTimeEdit->setObjectName(QStringLiteral("hastaDateTimeEdit"));
        hastaDateTimeEdit->setCalendarPopup(true);

        verticalLayout_3->addWidget(hastaDateTimeEdit);


        horizontalLayout_3->addLayout(verticalLayout_3);

        listaCheckBox = new QCheckBox(filterGroupBox);
        listaCheckBox->setObjectName(QStringLiteral("listaCheckBox"));

        horizontalLayout_3->addWidget(listaCheckBox);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_5->addWidget(filterGroupBox);


        horizontalLayout_4->addLayout(verticalLayout_5);


        verticalLayout->addLayout(horizontalLayout_4);

        tableWidget = new QTableWidget(wWorkList);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        printButton = new QPushButton(wWorkList);
        printButton->setObjectName(QStringLiteral("printButton"));

        horizontalLayout_6->addWidget(printButton);

        closeButton = new QPushButton(wWorkList);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayout_6->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(wWorkList);

        QMetaObject::connectSlotsByName(wWorkList);
    } // setupUi

    void retranslateUi(QWidget *wWorkList)
    {
        wWorkList->setWindowTitle(QApplication::translate("wWorkList", "Listado de Trabajos", 0));
        filterGroupBox->setTitle(QApplication::translate("wWorkList", "Filtro", 0));
        label->setText(QApplication::translate("wWorkList", "Buscar:", 0));
        searchButton->setText(QApplication::translate("wWorkList", "Buscar", 0));
        clientCheckBox->setText(QApplication::translate("wWorkList", "Cliente", 0));
        descriptionCheckBox->setText(QApplication::translate("wWorkList", "Descripcion", 0));
        groupBox->setTitle(QApplication::translate("wWorkList", "Estado", 0));
        recibidoCheckBox->setText(QApplication::translate("wWorkList", "Recibido", 0));
        fotocopiandoCheckBox->setText(QApplication::translate("wWorkList", "Fotocopiando", 0));
        anillandoCheckBox->setText(QApplication::translate("wWorkList", "Anillando", 0));
        terminadoCheckBox->setText(QApplication::translate("wWorkList", "Terminado", 0));
        entregadoCheckBox->setText(QApplication::translate("wWorkList", "Entregado", 0));
        recicladoCheckBox->setText(QApplication::translate("wWorkList", "Reciclado", 0));
        label_2->setText(QApplication::translate("wWorkList", "Desde:", 0));
        label_3->setText(QApplication::translate("wWorkList", "Hasta:", 0));
        listaCheckBox->setText(QApplication::translate("wWorkList", "Lista", 0));
        printButton->setText(QApplication::translate("wWorkList", "Imprimir", 0));
        closeButton->setText(QApplication::translate("wWorkList", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class wWorkList: public Ui_wWorkList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WWORKLIST_H
