/********************************************************************************
** Form generated from reading UI file 'wworkorder.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WWORKORDER_H
#define UI_WWORKORDER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wworkorder
{
public:
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *completeYesButton;
    QRadioButton *completeNoButton;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QComboBox *estadoComboBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *d2En1DFLabel;
    QLabel *d2En1SFLabel;
    QLabel *hHDFLabel;
    QLabel *hHSFLabel;
    QLabel *pasarDFLabel;
    QLabel *pasarSFLabel;
    QLabel *comoEstaLabel;
    QCheckBox *d2En1DFCheckBox;
    QCheckBox *comoEstaCheckBox;
    QCheckBox *pasarSFCheckBox;
    QCheckBox *pasarDFCheckBox;
    QCheckBox *hHSFCheckBox;
    QCheckBox *hHDFCheckBox;
    QCheckBox *d2En1SFCheckBox;
    QCheckBox *ignoreCheckBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QSpinBox *outOfOrderSpinBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *pagesTableWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QToolButton *addButton;
    QToolButton *delButton;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout_2;
    QLabel *nombreLabel;
    QLabel *nroJuegosLabel;
    QSpinBox *nroJuegosSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *nombreLineEdit;
    QPushButton *deleteButton;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *anilladoGroupBox;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout;
    QRadioButton *bottomButton;
    QRadioButton *superiorRadioButton;
    QRadioButton *leftRadioButton;
    QFrame *frame;
    QRadioButton *rightRadioButton;
    QCheckBox *abrochadoCheckBox;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_7;
    QFormLayout *formLayout_4;
    QLabel *simpleFazLabel;
    QSpinBox *simpleFazSpinBox;
    QLabel *doubleFazLabel;
    QSpinBox *doubleFazSpinBox;
    QLabel *imprSimpleFazLabel;
    QSpinBox *imprSimpleFazSpinBox;
    QLabel *imprDoubleFazLabel;
    QSpinBox *imprDoubleFazSpinBox;
    QLabel *imprColorSFLabel;
    QSpinBox *imprColorSFSpinBox;
    QLabel *imprColorDFLabel;
    QSpinBox *imprColorDFSpinBox;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout_3;
    QLabel *costoSFLabel;
    QDoubleSpinBox *costoSFDoubleSpinBox;
    QLabel *costoDFLabel;
    QDoubleSpinBox *costoDFDoubleSpinBox;
    QLabel *costoAnilladoLabel;
    QDoubleSpinBox *costoAnilladoDoubleSpinBox;
    QLabel *seALabel;
    QDoubleSpinBox *seADoubleSpinBox;
    QLabel *tOTALLabel;
    QDoubleSpinBox *tOTALDoubleSpinBox;
    QLabel *imprSFLabel;
    QDoubleSpinBox *imprSFDoubleSpinBox;
    QLabel *imprDFLabel;
    QDoubleSpinBox *imprDFDoubleSpinBox;
    QLabel *colorSFLabel;
    QDoubleSpinBox *colorSFDoubleSpinBox;
    QLabel *colorDFLabel;
    QDoubleSpinBox *colorDFDoubleSpinBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *observationTextEdit;

    void setupUi(QWidget *wworkorder)
    {
        if (wworkorder->objectName().isEmpty())
            wworkorder->setObjectName(QString::fromUtf8("wworkorder"));
        wworkorder->resize(849, 549);
        horizontalLayout_5 = new QHBoxLayout(wworkorder);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(wworkorder);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        completeYesButton = new QRadioButton(wworkorder);
        completeYesButton->setObjectName(QString::fromUtf8("completeYesButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(completeYesButton->sizePolicy().hasHeightForWidth());
        completeYesButton->setSizePolicy(sizePolicy1);
        completeYesButton->setChecked(true);

        horizontalLayout->addWidget(completeYesButton);

        completeNoButton = new QRadioButton(wworkorder);
        completeNoButton->setObjectName(QString::fromUtf8("completeNoButton"));
        sizePolicy1.setHeightForWidth(completeNoButton->sizePolicy().hasHeightForWidth());
        completeNoButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(completeNoButton);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        label_2 = new QLabel(wworkorder);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(label_2);

        estadoComboBox = new QComboBox(wworkorder);
        estadoComboBox->setObjectName(QString::fromUtf8("estadoComboBox"));

        horizontalLayout_6->addWidget(estadoComboBox);


        verticalLayout_4->addLayout(horizontalLayout_6);

        groupBox = new QGroupBox(wworkorder);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        d2En1DFLabel = new QLabel(groupBox);
        d2En1DFLabel->setObjectName(QString::fromUtf8("d2En1DFLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, d2En1DFLabel);

        d2En1SFLabel = new QLabel(groupBox);
        d2En1SFLabel->setObjectName(QString::fromUtf8("d2En1SFLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, d2En1SFLabel);

        hHDFLabel = new QLabel(groupBox);
        hHDFLabel->setObjectName(QString::fromUtf8("hHDFLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, hHDFLabel);

        hHSFLabel = new QLabel(groupBox);
        hHSFLabel->setObjectName(QString::fromUtf8("hHSFLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, hHSFLabel);

        pasarDFLabel = new QLabel(groupBox);
        pasarDFLabel->setObjectName(QString::fromUtf8("pasarDFLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, pasarDFLabel);

        pasarSFLabel = new QLabel(groupBox);
        pasarSFLabel->setObjectName(QString::fromUtf8("pasarSFLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, pasarSFLabel);

        comoEstaLabel = new QLabel(groupBox);
        comoEstaLabel->setObjectName(QString::fromUtf8("comoEstaLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, comoEstaLabel);

        d2En1DFCheckBox = new QCheckBox(groupBox);
        d2En1DFCheckBox->setObjectName(QString::fromUtf8("d2En1DFCheckBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, d2En1DFCheckBox);

        comoEstaCheckBox = new QCheckBox(groupBox);
        comoEstaCheckBox->setObjectName(QString::fromUtf8("comoEstaCheckBox"));
        comoEstaCheckBox->setChecked(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, comoEstaCheckBox);

        pasarSFCheckBox = new QCheckBox(groupBox);
        pasarSFCheckBox->setObjectName(QString::fromUtf8("pasarSFCheckBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, pasarSFCheckBox);

        pasarDFCheckBox = new QCheckBox(groupBox);
        pasarDFCheckBox->setObjectName(QString::fromUtf8("pasarDFCheckBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, pasarDFCheckBox);

        hHSFCheckBox = new QCheckBox(groupBox);
        hHSFCheckBox->setObjectName(QString::fromUtf8("hHSFCheckBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, hHSFCheckBox);

        hHDFCheckBox = new QCheckBox(groupBox);
        hHDFCheckBox->setObjectName(QString::fromUtf8("hHDFCheckBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, hHDFCheckBox);

        d2En1SFCheckBox = new QCheckBox(groupBox);
        d2En1SFCheckBox->setObjectName(QString::fromUtf8("d2En1SFCheckBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, d2En1SFCheckBox);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout_4->addWidget(groupBox);

        ignoreCheckBox = new QCheckBox(wworkorder);
        ignoreCheckBox->setObjectName(QString::fromUtf8("ignoreCheckBox"));

        verticalLayout_4->addWidget(ignoreCheckBox);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, -1, -1);
        label_3 = new QLabel(wworkorder);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        outOfOrderSpinBox = new QSpinBox(wworkorder);
        outOfOrderSpinBox->setObjectName(QString::fromUtf8("outOfOrderSpinBox"));
        outOfOrderSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        outOfOrderSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        outOfOrderSpinBox->setMaximum(999999999);

        horizontalLayout_8->addWidget(outOfOrderSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_8);

        groupBox_3 = new QGroupBox(wworkorder);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pagesTableWidget = new QTableWidget(groupBox_3);
        pagesTableWidget->setObjectName(QString::fromUtf8("pagesTableWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pagesTableWidget->sizePolicy().hasHeightForWidth());
        pagesTableWidget->setSizePolicy(sizePolicy3);
        pagesTableWidget->setMinimumSize(QSize(256, 0));
        pagesTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        pagesTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        pagesTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_3->addWidget(pagesTableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        addButton = new QToolButton(groupBox_3);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/graphics/list-add-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);

        horizontalLayout_2->addWidget(addButton);

        delButton = new QToolButton(groupBox_3);
        delButton->setObjectName(QString::fromUtf8("delButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/graphics/list-remove-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        delButton->setIcon(icon1);

        horizontalLayout_2->addWidget(delButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(groupBox_3);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        nombreLabel = new QLabel(wworkorder);
        nombreLabel->setObjectName(QString::fromUtf8("nombreLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, nombreLabel);

        nroJuegosLabel = new QLabel(wworkorder);
        nroJuegosLabel->setObjectName(QString::fromUtf8("nroJuegosLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, nroJuegosLabel);

        nroJuegosSpinBox = new QSpinBox(wworkorder);
        nroJuegosSpinBox->setObjectName(QString::fromUtf8("nroJuegosSpinBox"));
        sizePolicy1.setHeightForWidth(nroJuegosSpinBox->sizePolicy().hasHeightForWidth());
        nroJuegosSpinBox->setSizePolicy(sizePolicy1);
        nroJuegosSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nroJuegosSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        nroJuegosSpinBox->setMinimum(1);
        nroJuegosSpinBox->setMaximum(9999);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, nroJuegosSpinBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, 0, -1);
        nombreLineEdit = new QLineEdit(wworkorder);
        nombreLineEdit->setObjectName(QString::fromUtf8("nombreLineEdit"));

        horizontalLayout_7->addWidget(nombreLineEdit);

        deleteButton = new QPushButton(wworkorder);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        horizontalLayout_7->addWidget(deleteButton);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, horizontalLayout_7);


        horizontalLayout_4->addLayout(formLayout_2);


        verticalLayout_8->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        anilladoGroupBox = new QGroupBox(wworkorder);
        anilladoGroupBox->setObjectName(QString::fromUtf8("anilladoGroupBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(200);
        sizePolicy4.setHeightForWidth(anilladoGroupBox->sizePolicy().hasHeightForWidth());
        anilladoGroupBox->setSizePolicy(sizePolicy4);
        anilladoGroupBox->setMinimumSize(QSize(160, 200));
        anilladoGroupBox->setCheckable(true);
        anilladoGroupBox->setChecked(false);
        verticalLayout_6 = new QVBoxLayout(anilladoGroupBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        bottomButton = new QRadioButton(anilladoGroupBox);
        bottomButton->setObjectName(QString::fromUtf8("bottomButton"));

        gridLayout->addWidget(bottomButton, 2, 1, 1, 1);

        superiorRadioButton = new QRadioButton(anilladoGroupBox);
        superiorRadioButton->setObjectName(QString::fromUtf8("superiorRadioButton"));

        gridLayout->addWidget(superiorRadioButton, 0, 1, 1, 1);

        leftRadioButton = new QRadioButton(anilladoGroupBox);
        leftRadioButton->setObjectName(QString::fromUtf8("leftRadioButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(leftRadioButton->sizePolicy().hasHeightForWidth());
        leftRadioButton->setSizePolicy(sizePolicy5);
        leftRadioButton->setChecked(true);

        gridLayout->addWidget(leftRadioButton, 1, 2, 1, 1);

        frame = new QFrame(anilladoGroupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy6);
        frame->setMinimumSize(QSize(60, 100));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(2);

        gridLayout->addWidget(frame, 1, 1, 1, 1);

        rightRadioButton = new QRadioButton(anilladoGroupBox);
        rightRadioButton->setObjectName(QString::fromUtf8("rightRadioButton"));

        gridLayout->addWidget(rightRadioButton, 1, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        abrochadoCheckBox = new QCheckBox(anilladoGroupBox);
        abrochadoCheckBox->setObjectName(QString::fromUtf8("abrochadoCheckBox"));

        verticalLayout_6->addWidget(abrochadoCheckBox);


        horizontalLayout_3->addWidget(anilladoGroupBox);

        groupBox_5 = new QGroupBox(wworkorder);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_7 = new QVBoxLayout(groupBox_5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        simpleFazLabel = new QLabel(groupBox_5);
        simpleFazLabel->setObjectName(QString::fromUtf8("simpleFazLabel"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, simpleFazLabel);

        simpleFazSpinBox = new QSpinBox(groupBox_5);
        simpleFazSpinBox->setObjectName(QString::fromUtf8("simpleFazSpinBox"));
        sizePolicy1.setHeightForWidth(simpleFazSpinBox->sizePolicy().hasHeightForWidth());
        simpleFazSpinBox->setSizePolicy(sizePolicy1);
        simpleFazSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        simpleFazSpinBox->setMaximum(9999);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, simpleFazSpinBox);

        doubleFazLabel = new QLabel(groupBox_5);
        doubleFazLabel->setObjectName(QString::fromUtf8("doubleFazLabel"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, doubleFazLabel);

        doubleFazSpinBox = new QSpinBox(groupBox_5);
        doubleFazSpinBox->setObjectName(QString::fromUtf8("doubleFazSpinBox"));
        sizePolicy1.setHeightForWidth(doubleFazSpinBox->sizePolicy().hasHeightForWidth());
        doubleFazSpinBox->setSizePolicy(sizePolicy1);
        doubleFazSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleFazSpinBox->setMaximum(9999);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, doubleFazSpinBox);

        imprSimpleFazLabel = new QLabel(groupBox_5);
        imprSimpleFazLabel->setObjectName(QString::fromUtf8("imprSimpleFazLabel"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, imprSimpleFazLabel);

        imprSimpleFazSpinBox = new QSpinBox(groupBox_5);
        imprSimpleFazSpinBox->setObjectName(QString::fromUtf8("imprSimpleFazSpinBox"));
        sizePolicy1.setHeightForWidth(imprSimpleFazSpinBox->sizePolicy().hasHeightForWidth());
        imprSimpleFazSpinBox->setSizePolicy(sizePolicy1);
        imprSimpleFazSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        imprSimpleFazSpinBox->setMaximum(9999);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, imprSimpleFazSpinBox);

        imprDoubleFazLabel = new QLabel(groupBox_5);
        imprDoubleFazLabel->setObjectName(QString::fromUtf8("imprDoubleFazLabel"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, imprDoubleFazLabel);

        imprDoubleFazSpinBox = new QSpinBox(groupBox_5);
        imprDoubleFazSpinBox->setObjectName(QString::fromUtf8("imprDoubleFazSpinBox"));
        sizePolicy1.setHeightForWidth(imprDoubleFazSpinBox->sizePolicy().hasHeightForWidth());
        imprDoubleFazSpinBox->setSizePolicy(sizePolicy1);
        imprDoubleFazSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        imprDoubleFazSpinBox->setMaximum(9999);

        formLayout_4->setWidget(3, QFormLayout::FieldRole, imprDoubleFazSpinBox);

        imprColorSFLabel = new QLabel(groupBox_5);
        imprColorSFLabel->setObjectName(QString::fromUtf8("imprColorSFLabel"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, imprColorSFLabel);

        imprColorSFSpinBox = new QSpinBox(groupBox_5);
        imprColorSFSpinBox->setObjectName(QString::fromUtf8("imprColorSFSpinBox"));
        sizePolicy1.setHeightForWidth(imprColorSFSpinBox->sizePolicy().hasHeightForWidth());
        imprColorSFSpinBox->setSizePolicy(sizePolicy1);
        imprColorSFSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        imprColorSFSpinBox->setMaximum(9999);

        formLayout_4->setWidget(4, QFormLayout::FieldRole, imprColorSFSpinBox);

        imprColorDFLabel = new QLabel(groupBox_5);
        imprColorDFLabel->setObjectName(QString::fromUtf8("imprColorDFLabel"));

        formLayout_4->setWidget(5, QFormLayout::LabelRole, imprColorDFLabel);

        imprColorDFSpinBox = new QSpinBox(groupBox_5);
        imprColorDFSpinBox->setObjectName(QString::fromUtf8("imprColorDFSpinBox"));
        sizePolicy1.setHeightForWidth(imprColorDFSpinBox->sizePolicy().hasHeightForWidth());
        imprColorDFSpinBox->setSizePolicy(sizePolicy1);
        imprColorDFSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        imprColorDFSpinBox->setMaximum(9999);

        formLayout_4->setWidget(5, QFormLayout::FieldRole, imprColorDFSpinBox);


        verticalLayout_7->addLayout(formLayout_4);


        horizontalLayout_3->addWidget(groupBox_5);

        groupBox_4 = new QGroupBox(wworkorder);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        costoSFLabel = new QLabel(groupBox_4);
        costoSFLabel->setObjectName(QString::fromUtf8("costoSFLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, costoSFLabel);

        costoSFDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        costoSFDoubleSpinBox->setObjectName(QString::fromUtf8("costoSFDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(costoSFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        costoSFDoubleSpinBox->setSizePolicy(sizePolicy1);
        costoSFDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        costoSFDoubleSpinBox->setDecimals(3);
        costoSFDoubleSpinBox->setMaximum(9999.989999999999782);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, costoSFDoubleSpinBox);

        costoDFLabel = new QLabel(groupBox_4);
        costoDFLabel->setObjectName(QString::fromUtf8("costoDFLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, costoDFLabel);

        costoDFDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        costoDFDoubleSpinBox->setObjectName(QString::fromUtf8("costoDFDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(costoDFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        costoDFDoubleSpinBox->setSizePolicy(sizePolicy1);
        costoDFDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        costoDFDoubleSpinBox->setDecimals(3);
        costoDFDoubleSpinBox->setMaximum(9999.989999999999782);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, costoDFDoubleSpinBox);

        costoAnilladoLabel = new QLabel(groupBox_4);
        costoAnilladoLabel->setObjectName(QString::fromUtf8("costoAnilladoLabel"));

        formLayout_3->setWidget(6, QFormLayout::LabelRole, costoAnilladoLabel);

        costoAnilladoDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        costoAnilladoDoubleSpinBox->setObjectName(QString::fromUtf8("costoAnilladoDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(costoAnilladoDoubleSpinBox->sizePolicy().hasHeightForWidth());
        costoAnilladoDoubleSpinBox->setSizePolicy(sizePolicy1);
        costoAnilladoDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        costoAnilladoDoubleSpinBox->setDecimals(3);
        costoAnilladoDoubleSpinBox->setMaximum(9999.989999999999782);

        formLayout_3->setWidget(6, QFormLayout::FieldRole, costoAnilladoDoubleSpinBox);

        seALabel = new QLabel(groupBox_4);
        seALabel->setObjectName(QString::fromUtf8("seALabel"));

        formLayout_3->setWidget(7, QFormLayout::LabelRole, seALabel);

        seADoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        seADoubleSpinBox->setObjectName(QString::fromUtf8("seADoubleSpinBox"));
        sizePolicy1.setHeightForWidth(seADoubleSpinBox->sizePolicy().hasHeightForWidth());
        seADoubleSpinBox->setSizePolicy(sizePolicy1);
        seADoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        seADoubleSpinBox->setDecimals(3);
        seADoubleSpinBox->setMaximum(9999.989999999999782);

        formLayout_3->setWidget(7, QFormLayout::FieldRole, seADoubleSpinBox);

        tOTALLabel = new QLabel(groupBox_4);
        tOTALLabel->setObjectName(QString::fromUtf8("tOTALLabel"));

        formLayout_3->setWidget(8, QFormLayout::LabelRole, tOTALLabel);

        tOTALDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        tOTALDoubleSpinBox->setObjectName(QString::fromUtf8("tOTALDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(tOTALDoubleSpinBox->sizePolicy().hasHeightForWidth());
        tOTALDoubleSpinBox->setSizePolicy(sizePolicy1);
        tOTALDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tOTALDoubleSpinBox->setDecimals(3);
        tOTALDoubleSpinBox->setMaximum(9999.989999999999782);

        formLayout_3->setWidget(8, QFormLayout::FieldRole, tOTALDoubleSpinBox);

        imprSFLabel = new QLabel(groupBox_4);
        imprSFLabel->setObjectName(QString::fromUtf8("imprSFLabel"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, imprSFLabel);

        imprSFDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        imprSFDoubleSpinBox->setObjectName(QString::fromUtf8("imprSFDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(imprSFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        imprSFDoubleSpinBox->setSizePolicy(sizePolicy1);
        imprSFDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        imprSFDoubleSpinBox->setDecimals(3);
        imprSFDoubleSpinBox->setMaximum(9999.989999999999782);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, imprSFDoubleSpinBox);

        imprDFLabel = new QLabel(groupBox_4);
        imprDFLabel->setObjectName(QString::fromUtf8("imprDFLabel"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, imprDFLabel);

        imprDFDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        imprDFDoubleSpinBox->setObjectName(QString::fromUtf8("imprDFDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(imprDFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        imprDFDoubleSpinBox->setSizePolicy(sizePolicy1);
        imprDFDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        imprDFDoubleSpinBox->setDecimals(3);
        imprDFDoubleSpinBox->setMaximum(9999.989999999999782);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, imprDFDoubleSpinBox);

        colorSFLabel = new QLabel(groupBox_4);
        colorSFLabel->setObjectName(QString::fromUtf8("colorSFLabel"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, colorSFLabel);

        colorSFDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        colorSFDoubleSpinBox->setObjectName(QString::fromUtf8("colorSFDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(colorSFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        colorSFDoubleSpinBox->setSizePolicy(sizePolicy1);
        colorSFDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        colorSFDoubleSpinBox->setDecimals(3);
        colorSFDoubleSpinBox->setMaximum(9999.989999999999782);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, colorSFDoubleSpinBox);

        colorDFLabel = new QLabel(groupBox_4);
        colorDFLabel->setObjectName(QString::fromUtf8("colorDFLabel"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, colorDFLabel);

        colorDFDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        colorDFDoubleSpinBox->setObjectName(QString::fromUtf8("colorDFDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(colorDFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        colorDFDoubleSpinBox->setSizePolicy(sizePolicy1);
        colorDFDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        colorDFDoubleSpinBox->setDecimals(3);
        colorDFDoubleSpinBox->setMaximum(9999.989999999999782);

        formLayout_3->setWidget(5, QFormLayout::FieldRole, colorDFDoubleSpinBox);


        verticalLayout_5->addLayout(formLayout_3);


        horizontalLayout_3->addWidget(groupBox_4);


        verticalLayout_8->addLayout(horizontalLayout_3);

        groupBox_2 = new QGroupBox(wworkorder);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        observationTextEdit = new QPlainTextEdit(groupBox_2);
        observationTextEdit->setObjectName(QString::fromUtf8("observationTextEdit"));

        verticalLayout->addWidget(observationTextEdit);


        verticalLayout_8->addWidget(groupBox_2);


        horizontalLayout_5->addLayout(verticalLayout_8);


        retranslateUi(wworkorder);
        QObject::connect(completeNoButton, SIGNAL(clicked(bool)), groupBox_3, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(wworkorder);
    } // setupUi

    void retranslateUi(QWidget *wworkorder)
    {
        wworkorder->setWindowTitle(QCoreApplication::translate("wworkorder", "Form", nullptr));
        label->setText(QCoreApplication::translate("wworkorder", "Completo:", nullptr));
        completeYesButton->setText(QCoreApplication::translate("wworkorder", "Si", nullptr));
        completeNoButton->setText(QCoreApplication::translate("wworkorder", "No", nullptr));
        label_2->setText(QCoreApplication::translate("wworkorder", "Estado:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("wworkorder", "Trabajo", nullptr));
        d2En1DFLabel->setText(QCoreApplication::translate("wworkorder", "2 en 1 D/F", nullptr));
        d2En1SFLabel->setText(QCoreApplication::translate("wworkorder", "2 en 1 S/F", nullptr));
        hHDFLabel->setText(QCoreApplication::translate("wworkorder", "H/H D/F", nullptr));
        hHSFLabel->setText(QCoreApplication::translate("wworkorder", "H/H S/F", nullptr));
        pasarDFLabel->setText(QCoreApplication::translate("wworkorder", "Pasar D/F", nullptr));
        pasarSFLabel->setText(QCoreApplication::translate("wworkorder", "Pasar S/F", nullptr));
        comoEstaLabel->setText(QCoreApplication::translate("wworkorder", "Como esta", nullptr));
        ignoreCheckBox->setText(QCoreApplication::translate("wworkorder", "Ignorar (no avisar si llega la hora de entrega)", nullptr));
        label_3->setText(QCoreApplication::translate("wworkorder", "Orden Sin sistema:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("wworkorder", "Paginas: ", nullptr));
        addButton->setText(QCoreApplication::translate("wworkorder", "...", nullptr));
        delButton->setText(QCoreApplication::translate("wworkorder", "...", nullptr));
        nombreLabel->setText(QCoreApplication::translate("wworkorder", "Nombre:", nullptr));
        nroJuegosLabel->setText(QCoreApplication::translate("wworkorder", "Nro Juegos", nullptr));
        deleteButton->setText(QCoreApplication::translate("wworkorder", "Eliminar Trabajo", nullptr));
        anilladoGroupBox->setTitle(QCoreApplication::translate("wworkorder", "Anillado", nullptr));
        bottomButton->setText(QCoreApplication::translate("wworkorder", "de Abajo", nullptr));
        superiorRadioButton->setText(QCoreApplication::translate("wworkorder", "Superior", nullptr));
        leftRadioButton->setText(QCoreApplication::translate("wworkorder", "Lateral", nullptr));
        rightRadioButton->setText(QCoreApplication::translate("wworkorder", "Lateral derecho", nullptr));
        abrochadoCheckBox->setText(QCoreApplication::translate("wworkorder", "Abrochado", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("wworkorder", "Cantidades", nullptr));
        simpleFazLabel->setText(QCoreApplication::translate("wworkorder", "simple faz:", nullptr));
        doubleFazLabel->setText(QCoreApplication::translate("wworkorder", "double faz:", nullptr));
        imprSimpleFazLabel->setText(QCoreApplication::translate("wworkorder", "impr. simple faz:", nullptr));
        imprDoubleFazLabel->setText(QCoreApplication::translate("wworkorder", "impr. double faz:", nullptr));
        imprColorSFLabel->setText(QCoreApplication::translate("wworkorder", "impr. color SF:", nullptr));
        imprColorDFLabel->setText(QCoreApplication::translate("wworkorder", "impr. color DF:", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("wworkorder", "Costos:", nullptr));
        costoSFLabel->setText(QCoreApplication::translate("wworkorder", "costo SF:", nullptr));
        costoDFLabel->setText(QCoreApplication::translate("wworkorder", "costo DF:", nullptr));
        costoAnilladoLabel->setText(QCoreApplication::translate("wworkorder", "costo Anillado:", nullptr));
        seALabel->setText(QCoreApplication::translate("wworkorder", "se\303\261a:", nullptr));
        tOTALLabel->setText(QCoreApplication::translate("wworkorder", "TOTAL:", nullptr));
        imprSFLabel->setText(QCoreApplication::translate("wworkorder", "impr SF:", nullptr));
        imprDFLabel->setText(QCoreApplication::translate("wworkorder", "impr DF:", nullptr));
        colorSFLabel->setText(QCoreApplication::translate("wworkorder", "color SF:", nullptr));
        colorDFLabel->setText(QCoreApplication::translate("wworkorder", "color DF:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("wworkorder", "Observaciones:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wworkorder: public Ui_wworkorder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WWORKORDER_H
