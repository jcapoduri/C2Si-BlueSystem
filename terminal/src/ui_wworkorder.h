/********************************************************************************
** Form generated from reading UI file 'wworkorder.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WWORKORDER_H
#define UI_WWORKORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QRadioButton *d2En1DFRadioButton;
    QLabel *d2En1SFLabel;
    QLabel *hHDFLabel;
    QLabel *hHSFLabel;
    QLabel *pasarDFLabel;
    QLabel *pasarSFLabel;
    QLabel *comoEstaLabel;
    QRadioButton *d2En1SFRadioButton;
    QRadioButton *hHDFRadioButton;
    QRadioButton *hHSFRadioButton;
    QRadioButton *pasarDFRadioButton;
    QRadioButton *pasarSFRadioButton;
    QRadioButton *comoEstaRadioButton;
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
    QRadioButton *superiorRadioButton;
    QFrame *frame;
    QRadioButton *leftRadioButton;
    QRadioButton *bottomButton;
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
            wworkorder->setObjectName(QStringLiteral("wworkorder"));
        wworkorder->resize(849, 549);
        horizontalLayout_5 = new QHBoxLayout(wworkorder);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(wworkorder);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        completeYesButton = new QRadioButton(wworkorder);
        completeYesButton->setObjectName(QStringLiteral("completeYesButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(completeYesButton->sizePolicy().hasHeightForWidth());
        completeYesButton->setSizePolicy(sizePolicy1);
        completeYesButton->setChecked(true);

        horizontalLayout->addWidget(completeYesButton);

        completeNoButton = new QRadioButton(wworkorder);
        completeNoButton->setObjectName(QStringLiteral("completeNoButton"));
        sizePolicy1.setHeightForWidth(completeNoButton->sizePolicy().hasHeightForWidth());
        completeNoButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(completeNoButton);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        label_2 = new QLabel(wworkorder);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(label_2);

        estadoComboBox = new QComboBox(wworkorder);
        estadoComboBox->setObjectName(QStringLiteral("estadoComboBox"));

        horizontalLayout_6->addWidget(estadoComboBox);


        verticalLayout_4->addLayout(horizontalLayout_6);

        groupBox = new QGroupBox(wworkorder);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        d2En1DFLabel = new QLabel(groupBox);
        d2En1DFLabel->setObjectName(QStringLiteral("d2En1DFLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, d2En1DFLabel);

        d2En1DFRadioButton = new QRadioButton(groupBox);
        d2En1DFRadioButton->setObjectName(QStringLiteral("d2En1DFRadioButton"));

        formLayout->setWidget(0, QFormLayout::FieldRole, d2En1DFRadioButton);

        d2En1SFLabel = new QLabel(groupBox);
        d2En1SFLabel->setObjectName(QStringLiteral("d2En1SFLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, d2En1SFLabel);

        hHDFLabel = new QLabel(groupBox);
        hHDFLabel->setObjectName(QStringLiteral("hHDFLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, hHDFLabel);

        hHSFLabel = new QLabel(groupBox);
        hHSFLabel->setObjectName(QStringLiteral("hHSFLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, hHSFLabel);

        pasarDFLabel = new QLabel(groupBox);
        pasarDFLabel->setObjectName(QStringLiteral("pasarDFLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, pasarDFLabel);

        pasarSFLabel = new QLabel(groupBox);
        pasarSFLabel->setObjectName(QStringLiteral("pasarSFLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, pasarSFLabel);

        comoEstaLabel = new QLabel(groupBox);
        comoEstaLabel->setObjectName(QStringLiteral("comoEstaLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, comoEstaLabel);

        d2En1SFRadioButton = new QRadioButton(groupBox);
        d2En1SFRadioButton->setObjectName(QStringLiteral("d2En1SFRadioButton"));

        formLayout->setWidget(1, QFormLayout::FieldRole, d2En1SFRadioButton);

        hHDFRadioButton = new QRadioButton(groupBox);
        hHDFRadioButton->setObjectName(QStringLiteral("hHDFRadioButton"));

        formLayout->setWidget(2, QFormLayout::FieldRole, hHDFRadioButton);

        hHSFRadioButton = new QRadioButton(groupBox);
        hHSFRadioButton->setObjectName(QStringLiteral("hHSFRadioButton"));

        formLayout->setWidget(3, QFormLayout::FieldRole, hHSFRadioButton);

        pasarDFRadioButton = new QRadioButton(groupBox);
        pasarDFRadioButton->setObjectName(QStringLiteral("pasarDFRadioButton"));

        formLayout->setWidget(4, QFormLayout::FieldRole, pasarDFRadioButton);

        pasarSFRadioButton = new QRadioButton(groupBox);
        pasarSFRadioButton->setObjectName(QStringLiteral("pasarSFRadioButton"));

        formLayout->setWidget(5, QFormLayout::FieldRole, pasarSFRadioButton);

        comoEstaRadioButton = new QRadioButton(groupBox);
        comoEstaRadioButton->setObjectName(QStringLiteral("comoEstaRadioButton"));
        comoEstaRadioButton->setChecked(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, comoEstaRadioButton);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout_4->addWidget(groupBox);

        ignoreCheckBox = new QCheckBox(wworkorder);
        ignoreCheckBox->setObjectName(QStringLiteral("ignoreCheckBox"));

        verticalLayout_4->addWidget(ignoreCheckBox);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, -1, -1);
        label_3 = new QLabel(wworkorder);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_8->addWidget(label_3);

        outOfOrderSpinBox = new QSpinBox(wworkorder);
        outOfOrderSpinBox->setObjectName(QStringLiteral("outOfOrderSpinBox"));
        outOfOrderSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        outOfOrderSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        outOfOrderSpinBox->setMaximum(999999999);

        horizontalLayout_8->addWidget(outOfOrderSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_8);

        groupBox_3 = new QGroupBox(wworkorder);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pagesTableWidget = new QTableWidget(groupBox_3);
        pagesTableWidget->setObjectName(QStringLiteral("pagesTableWidget"));
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
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        addButton = new QToolButton(groupBox_3);
        addButton->setObjectName(QStringLiteral("addButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/graphics/list-add-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);

        horizontalLayout_2->addWidget(addButton);

        delButton = new QToolButton(groupBox_3);
        delButton->setObjectName(QStringLiteral("delButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/graphics/list-remove-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        delButton->setIcon(icon1);

        horizontalLayout_2->addWidget(delButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(groupBox_3);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        nombreLabel = new QLabel(wworkorder);
        nombreLabel->setObjectName(QStringLiteral("nombreLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, nombreLabel);

        nroJuegosLabel = new QLabel(wworkorder);
        nroJuegosLabel->setObjectName(QStringLiteral("nroJuegosLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, nroJuegosLabel);

        nroJuegosSpinBox = new QSpinBox(wworkorder);
        nroJuegosSpinBox->setObjectName(QStringLiteral("nroJuegosSpinBox"));
        sizePolicy1.setHeightForWidth(nroJuegosSpinBox->sizePolicy().hasHeightForWidth());
        nroJuegosSpinBox->setSizePolicy(sizePolicy1);
        nroJuegosSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nroJuegosSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        nroJuegosSpinBox->setMinimum(1);
        nroJuegosSpinBox->setMaximum(9999);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, nroJuegosSpinBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, 0, -1);
        nombreLineEdit = new QLineEdit(wworkorder);
        nombreLineEdit->setObjectName(QStringLiteral("nombreLineEdit"));

        horizontalLayout_7->addWidget(nombreLineEdit);

        deleteButton = new QPushButton(wworkorder);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        horizontalLayout_7->addWidget(deleteButton);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, horizontalLayout_7);


        horizontalLayout_4->addLayout(formLayout_2);


        verticalLayout_8->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        anilladoGroupBox = new QGroupBox(wworkorder);
        anilladoGroupBox->setObjectName(QStringLiteral("anilladoGroupBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(200);
        sizePolicy4.setHeightForWidth(anilladoGroupBox->sizePolicy().hasHeightForWidth());
        anilladoGroupBox->setSizePolicy(sizePolicy4);
        anilladoGroupBox->setMinimumSize(QSize(160, 200));
        anilladoGroupBox->setCheckable(true);
        anilladoGroupBox->setChecked(false);
        verticalLayout_6 = new QVBoxLayout(anilladoGroupBox);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        superiorRadioButton = new QRadioButton(anilladoGroupBox);
        superiorRadioButton->setObjectName(QStringLiteral("superiorRadioButton"));

        gridLayout->addWidget(superiorRadioButton, 0, 0, 1, 1);

        frame = new QFrame(anilladoGroupBox);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy5);
        frame->setMinimumSize(QSize(60, 100));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(2);

        gridLayout->addWidget(frame, 1, 0, 1, 1);

        leftRadioButton = new QRadioButton(anilladoGroupBox);
        leftRadioButton->setObjectName(QStringLiteral("leftRadioButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(leftRadioButton->sizePolicy().hasHeightForWidth());
        leftRadioButton->setSizePolicy(sizePolicy6);
        leftRadioButton->setChecked(true);

        gridLayout->addWidget(leftRadioButton, 1, 1, 1, 1);

        bottomButton = new QRadioButton(anilladoGroupBox);
        bottomButton->setObjectName(QStringLiteral("bottomButton"));

        gridLayout->addWidget(bottomButton, 2, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout);


        horizontalLayout_3->addWidget(anilladoGroupBox);

        groupBox_5 = new QGroupBox(wworkorder);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_7 = new QVBoxLayout(groupBox_5);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        simpleFazLabel = new QLabel(groupBox_5);
        simpleFazLabel->setObjectName(QStringLiteral("simpleFazLabel"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, simpleFazLabel);

        simpleFazSpinBox = new QSpinBox(groupBox_5);
        simpleFazSpinBox->setObjectName(QStringLiteral("simpleFazSpinBox"));
        sizePolicy1.setHeightForWidth(simpleFazSpinBox->sizePolicy().hasHeightForWidth());
        simpleFazSpinBox->setSizePolicy(sizePolicy1);
        simpleFazSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        simpleFazSpinBox->setMaximum(9999);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, simpleFazSpinBox);

        doubleFazLabel = new QLabel(groupBox_5);
        doubleFazLabel->setObjectName(QStringLiteral("doubleFazLabel"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, doubleFazLabel);

        doubleFazSpinBox = new QSpinBox(groupBox_5);
        doubleFazSpinBox->setObjectName(QStringLiteral("doubleFazSpinBox"));
        sizePolicy1.setHeightForWidth(doubleFazSpinBox->sizePolicy().hasHeightForWidth());
        doubleFazSpinBox->setSizePolicy(sizePolicy1);
        doubleFazSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleFazSpinBox->setMaximum(9999);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, doubleFazSpinBox);

        imprSimpleFazLabel = new QLabel(groupBox_5);
        imprSimpleFazLabel->setObjectName(QStringLiteral("imprSimpleFazLabel"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, imprSimpleFazLabel);

        imprSimpleFazSpinBox = new QSpinBox(groupBox_5);
        imprSimpleFazSpinBox->setObjectName(QStringLiteral("imprSimpleFazSpinBox"));
        sizePolicy1.setHeightForWidth(imprSimpleFazSpinBox->sizePolicy().hasHeightForWidth());
        imprSimpleFazSpinBox->setSizePolicy(sizePolicy1);
        imprSimpleFazSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        imprSimpleFazSpinBox->setMaximum(9999);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, imprSimpleFazSpinBox);

        imprDoubleFazLabel = new QLabel(groupBox_5);
        imprDoubleFazLabel->setObjectName(QStringLiteral("imprDoubleFazLabel"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, imprDoubleFazLabel);

        imprDoubleFazSpinBox = new QSpinBox(groupBox_5);
        imprDoubleFazSpinBox->setObjectName(QStringLiteral("imprDoubleFazSpinBox"));
        sizePolicy1.setHeightForWidth(imprDoubleFazSpinBox->sizePolicy().hasHeightForWidth());
        imprDoubleFazSpinBox->setSizePolicy(sizePolicy1);
        imprDoubleFazSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        imprDoubleFazSpinBox->setMaximum(9999);

        formLayout_4->setWidget(3, QFormLayout::FieldRole, imprDoubleFazSpinBox);

        imprColorSFLabel = new QLabel(groupBox_5);
        imprColorSFLabel->setObjectName(QStringLiteral("imprColorSFLabel"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, imprColorSFLabel);

        imprColorSFSpinBox = new QSpinBox(groupBox_5);
        imprColorSFSpinBox->setObjectName(QStringLiteral("imprColorSFSpinBox"));
        sizePolicy1.setHeightForWidth(imprColorSFSpinBox->sizePolicy().hasHeightForWidth());
        imprColorSFSpinBox->setSizePolicy(sizePolicy1);
        imprColorSFSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        imprColorSFSpinBox->setMaximum(9999);

        formLayout_4->setWidget(4, QFormLayout::FieldRole, imprColorSFSpinBox);

        imprColorDFLabel = new QLabel(groupBox_5);
        imprColorDFLabel->setObjectName(QStringLiteral("imprColorDFLabel"));

        formLayout_4->setWidget(5, QFormLayout::LabelRole, imprColorDFLabel);

        imprColorDFSpinBox = new QSpinBox(groupBox_5);
        imprColorDFSpinBox->setObjectName(QStringLiteral("imprColorDFSpinBox"));
        sizePolicy1.setHeightForWidth(imprColorDFSpinBox->sizePolicy().hasHeightForWidth());
        imprColorDFSpinBox->setSizePolicy(sizePolicy1);
        imprColorDFSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        imprColorDFSpinBox->setMaximum(9999);

        formLayout_4->setWidget(5, QFormLayout::FieldRole, imprColorDFSpinBox);


        verticalLayout_7->addLayout(formLayout_4);


        horizontalLayout_3->addWidget(groupBox_5);

        groupBox_4 = new QGroupBox(wworkorder);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        costoSFLabel = new QLabel(groupBox_4);
        costoSFLabel->setObjectName(QStringLiteral("costoSFLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, costoSFLabel);

        costoSFDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        costoSFDoubleSpinBox->setObjectName(QStringLiteral("costoSFDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(costoSFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        costoSFDoubleSpinBox->setSizePolicy(sizePolicy1);
        costoSFDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        costoSFDoubleSpinBox->setDecimals(3);
        costoSFDoubleSpinBox->setMaximum(9999.99);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, costoSFDoubleSpinBox);

        costoDFLabel = new QLabel(groupBox_4);
        costoDFLabel->setObjectName(QStringLiteral("costoDFLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, costoDFLabel);

        costoDFDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        costoDFDoubleSpinBox->setObjectName(QStringLiteral("costoDFDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(costoDFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        costoDFDoubleSpinBox->setSizePolicy(sizePolicy1);
        costoDFDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        costoDFDoubleSpinBox->setDecimals(3);
        costoDFDoubleSpinBox->setMaximum(9999.99);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, costoDFDoubleSpinBox);

        costoAnilladoLabel = new QLabel(groupBox_4);
        costoAnilladoLabel->setObjectName(QStringLiteral("costoAnilladoLabel"));

        formLayout_3->setWidget(6, QFormLayout::LabelRole, costoAnilladoLabel);

        costoAnilladoDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        costoAnilladoDoubleSpinBox->setObjectName(QStringLiteral("costoAnilladoDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(costoAnilladoDoubleSpinBox->sizePolicy().hasHeightForWidth());
        costoAnilladoDoubleSpinBox->setSizePolicy(sizePolicy1);
        costoAnilladoDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        costoAnilladoDoubleSpinBox->setDecimals(3);
        costoAnilladoDoubleSpinBox->setMaximum(9999.99);

        formLayout_3->setWidget(6, QFormLayout::FieldRole, costoAnilladoDoubleSpinBox);

        seALabel = new QLabel(groupBox_4);
        seALabel->setObjectName(QStringLiteral("seALabel"));

        formLayout_3->setWidget(7, QFormLayout::LabelRole, seALabel);

        seADoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        seADoubleSpinBox->setObjectName(QStringLiteral("seADoubleSpinBox"));
        sizePolicy1.setHeightForWidth(seADoubleSpinBox->sizePolicy().hasHeightForWidth());
        seADoubleSpinBox->setSizePolicy(sizePolicy1);
        seADoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        seADoubleSpinBox->setDecimals(3);
        seADoubleSpinBox->setMaximum(9999.99);

        formLayout_3->setWidget(7, QFormLayout::FieldRole, seADoubleSpinBox);

        tOTALLabel = new QLabel(groupBox_4);
        tOTALLabel->setObjectName(QStringLiteral("tOTALLabel"));

        formLayout_3->setWidget(8, QFormLayout::LabelRole, tOTALLabel);

        tOTALDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        tOTALDoubleSpinBox->setObjectName(QStringLiteral("tOTALDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(tOTALDoubleSpinBox->sizePolicy().hasHeightForWidth());
        tOTALDoubleSpinBox->setSizePolicy(sizePolicy1);
        tOTALDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tOTALDoubleSpinBox->setDecimals(3);
        tOTALDoubleSpinBox->setMaximum(9999.99);

        formLayout_3->setWidget(8, QFormLayout::FieldRole, tOTALDoubleSpinBox);

        imprSFLabel = new QLabel(groupBox_4);
        imprSFLabel->setObjectName(QStringLiteral("imprSFLabel"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, imprSFLabel);

        imprSFDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        imprSFDoubleSpinBox->setObjectName(QStringLiteral("imprSFDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(imprSFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        imprSFDoubleSpinBox->setSizePolicy(sizePolicy1);
        imprSFDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        imprSFDoubleSpinBox->setDecimals(3);
        imprSFDoubleSpinBox->setMaximum(9999.99);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, imprSFDoubleSpinBox);

        imprDFLabel = new QLabel(groupBox_4);
        imprDFLabel->setObjectName(QStringLiteral("imprDFLabel"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, imprDFLabel);

        imprDFDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        imprDFDoubleSpinBox->setObjectName(QStringLiteral("imprDFDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(imprDFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        imprDFDoubleSpinBox->setSizePolicy(sizePolicy1);
        imprDFDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        imprDFDoubleSpinBox->setDecimals(3);
        imprDFDoubleSpinBox->setMaximum(9999.99);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, imprDFDoubleSpinBox);

        colorSFLabel = new QLabel(groupBox_4);
        colorSFLabel->setObjectName(QStringLiteral("colorSFLabel"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, colorSFLabel);

        colorSFDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        colorSFDoubleSpinBox->setObjectName(QStringLiteral("colorSFDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(colorSFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        colorSFDoubleSpinBox->setSizePolicy(sizePolicy1);
        colorSFDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        colorSFDoubleSpinBox->setDecimals(3);
        colorSFDoubleSpinBox->setMaximum(9999.99);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, colorSFDoubleSpinBox);

        colorDFLabel = new QLabel(groupBox_4);
        colorDFLabel->setObjectName(QStringLiteral("colorDFLabel"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, colorDFLabel);

        colorDFDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        colorDFDoubleSpinBox->setObjectName(QStringLiteral("colorDFDoubleSpinBox"));
        sizePolicy1.setHeightForWidth(colorDFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        colorDFDoubleSpinBox->setSizePolicy(sizePolicy1);
        colorDFDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        colorDFDoubleSpinBox->setDecimals(3);
        colorDFDoubleSpinBox->setMaximum(9999.99);

        formLayout_3->setWidget(5, QFormLayout::FieldRole, colorDFDoubleSpinBox);


        verticalLayout_5->addLayout(formLayout_3);


        horizontalLayout_3->addWidget(groupBox_4);


        verticalLayout_8->addLayout(horizontalLayout_3);

        groupBox_2 = new QGroupBox(wworkorder);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        observationTextEdit = new QPlainTextEdit(groupBox_2);
        observationTextEdit->setObjectName(QStringLiteral("observationTextEdit"));

        verticalLayout->addWidget(observationTextEdit);


        verticalLayout_8->addWidget(groupBox_2);


        horizontalLayout_5->addLayout(verticalLayout_8);


        retranslateUi(wworkorder);
        QObject::connect(completeNoButton, SIGNAL(clicked(bool)), groupBox_3, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(wworkorder);
    } // setupUi

    void retranslateUi(QWidget *wworkorder)
    {
        wworkorder->setWindowTitle(QApplication::translate("wworkorder", "Form", 0));
        label->setText(QApplication::translate("wworkorder", "Completo:", 0));
        completeYesButton->setText(QApplication::translate("wworkorder", "Si", 0));
        completeNoButton->setText(QApplication::translate("wworkorder", "No", 0));
        label_2->setText(QApplication::translate("wworkorder", "Estado:", 0));
        groupBox->setTitle(QApplication::translate("wworkorder", "Trabajo", 0));
        d2En1DFLabel->setText(QApplication::translate("wworkorder", "2 en 1 D/F", 0));
        d2En1SFLabel->setText(QApplication::translate("wworkorder", "2 en 1 S/F", 0));
        hHDFLabel->setText(QApplication::translate("wworkorder", "H/H D/F", 0));
        hHSFLabel->setText(QApplication::translate("wworkorder", "H/H S/F", 0));
        pasarDFLabel->setText(QApplication::translate("wworkorder", "Pasar D/F", 0));
        pasarSFLabel->setText(QApplication::translate("wworkorder", "Pasar S/F", 0));
        comoEstaLabel->setText(QApplication::translate("wworkorder", "Como esta", 0));
        ignoreCheckBox->setText(QApplication::translate("wworkorder", "Ignorar (no avisar si llega la hora de entrega)", 0));
        label_3->setText(QApplication::translate("wworkorder", "Orden Sin sistema:", 0));
        groupBox_3->setTitle(QApplication::translate("wworkorder", "Paginas: ", 0));
        addButton->setText(QApplication::translate("wworkorder", "...", 0));
        delButton->setText(QApplication::translate("wworkorder", "...", 0));
        nombreLabel->setText(QApplication::translate("wworkorder", "Nombre:", 0));
        nroJuegosLabel->setText(QApplication::translate("wworkorder", "Nro Juegos", 0));
        deleteButton->setText(QApplication::translate("wworkorder", "Eliminar Trabajo", 0));
        anilladoGroupBox->setTitle(QApplication::translate("wworkorder", "Anillado", 0));
        superiorRadioButton->setText(QApplication::translate("wworkorder", "Superior", 0));
        leftRadioButton->setText(QApplication::translate("wworkorder", "Lateral", 0));
        bottomButton->setText(QApplication::translate("wworkorder", "de Abajo", 0));
        groupBox_5->setTitle(QApplication::translate("wworkorder", "Cantidades", 0));
        simpleFazLabel->setText(QApplication::translate("wworkorder", "simple faz:", 0));
        doubleFazLabel->setText(QApplication::translate("wworkorder", "double faz:", 0));
        imprSimpleFazLabel->setText(QApplication::translate("wworkorder", "impr. simple faz:", 0));
        imprDoubleFazLabel->setText(QApplication::translate("wworkorder", "impr. double faz:", 0));
        imprColorSFLabel->setText(QApplication::translate("wworkorder", "impr. color SF:", 0));
        imprColorDFLabel->setText(QApplication::translate("wworkorder", "impr. color DF:", 0));
        groupBox_4->setTitle(QApplication::translate("wworkorder", "Costos:", 0));
        costoSFLabel->setText(QApplication::translate("wworkorder", "costo SF:", 0));
        costoDFLabel->setText(QApplication::translate("wworkorder", "costo DF:", 0));
        costoAnilladoLabel->setText(QApplication::translate("wworkorder", "costo Anillado:", 0));
        seALabel->setText(QApplication::translate("wworkorder", "se\303\261a:", 0));
        tOTALLabel->setText(QApplication::translate("wworkorder", "TOTAL:", 0));
        imprSFLabel->setText(QApplication::translate("wworkorder", "impr SF:", 0));
        imprDFLabel->setText(QApplication::translate("wworkorder", "impr DF:", 0));
        colorSFLabel->setText(QApplication::translate("wworkorder", "color SF:", 0));
        colorDFLabel->setText(QApplication::translate("wworkorder", "color DF:", 0));
        groupBox_2->setTitle(QApplication::translate("wworkorder", "Observaciones:", 0));
    } // retranslateUi

};

namespace Ui {
    class wworkorder: public Ui_wworkorder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WWORKORDER_H
