/********************************************************************************
** Form generated from reading UI file 'workorderForm.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKORDERFORM_H
#define UI_WORKORDERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *clientRadioButton;
    QRadioButton *fileRadioButton;
    QRadioButton *ownRadioButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *worknameLineEdit;
    QGroupBox *infoGroupBox;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *anilladoGroupBox;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_2;
    QRadioButton *superiorRadioButton;
    QFrame *frame;
    QRadioButton *leftRadioButton;
    QRadioButton *bottomButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *justLikeThatRadioButton;
    QRadioButton *TwoIn1DFRadioButton;
    QRadioButton *TwoIn1SFRadioButton;
    QRadioButton *HHDFRadioButton;
    QRadioButton *HHSFRadioButton;
    QRadioButton *toDFRadioButton;
    QRadioButton *toSFRadioButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QSpinBox *fotoColorDFSpinBox;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_9;
    QSpinBox *fotoSFSpinBox;
    QLabel *label_13;
    QSpinBox *imprSFSpinBox;
    QDoubleSpinBox *fotoSFDoubleSpinBox;
    QDoubleSpinBox *fotoDFDoubleSpinBox;
    QLabel *label_12;
    QDoubleSpinBox *fotoColorDoubleSpinBox;
    QDoubleSpinBox *imprColorSFDoubleSpinBox;
    QSpinBox *imprDFSpinBox;
    QSpinBox *imprColorSFSpinBox;
    QSpinBox *fotoColorSFSpinBox;
    QDoubleSpinBox *imprDFDoubleSpinBox;
    QSpinBox *imprColorDFSpinBox;
    QDoubleSpinBox *imprSFDoubleSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *fotoColorSFDoubleSpinBox;
    QSpinBox *fotoDFSpinBox;
    QDoubleSpinBox *imprColorDFDoubleSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *closeButton;
    QPushButton *saveButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(804, 487);
        verticalLayout_3 = new QVBoxLayout(Form);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        clientRadioButton = new QRadioButton(Form);
        clientRadioButton->setObjectName(QStringLiteral("clientRadioButton"));

        horizontalLayout_2->addWidget(clientRadioButton);

        fileRadioButton = new QRadioButton(Form);
        fileRadioButton->setObjectName(QStringLiteral("fileRadioButton"));

        horizontalLayout_2->addWidget(fileRadioButton);

        ownRadioButton = new QRadioButton(Form);
        ownRadioButton->setObjectName(QStringLiteral("ownRadioButton"));

        horizontalLayout_2->addWidget(ownRadioButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        worknameLineEdit = new QLineEdit(Form);
        worknameLineEdit->setObjectName(QStringLiteral("worknameLineEdit"));

        horizontalLayout->addWidget(worknameLineEdit);


        verticalLayout_3->addLayout(horizontalLayout);

        infoGroupBox = new QGroupBox(Form);
        infoGroupBox->setObjectName(QStringLiteral("infoGroupBox"));
        infoGroupBox->setFlat(false);
        horizontalLayout_4 = new QHBoxLayout(infoGroupBox);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        anilladoGroupBox = new QGroupBox(infoGroupBox);
        anilladoGroupBox->setObjectName(QStringLiteral("anilladoGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(200);
        sizePolicy.setHeightForWidth(anilladoGroupBox->sizePolicy().hasHeightForWidth());
        anilladoGroupBox->setSizePolicy(sizePolicy);
        anilladoGroupBox->setMinimumSize(QSize(160, 200));
        anilladoGroupBox->setCheckable(true);
        anilladoGroupBox->setChecked(false);
        verticalLayout_6 = new QVBoxLayout(anilladoGroupBox);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        superiorRadioButton = new QRadioButton(anilladoGroupBox);
        superiorRadioButton->setObjectName(QStringLiteral("superiorRadioButton"));

        gridLayout_2->addWidget(superiorRadioButton, 0, 0, 1, 1);

        frame = new QFrame(anilladoGroupBox);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(60, 100));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(2);

        gridLayout_2->addWidget(frame, 1, 0, 1, 1);

        leftRadioButton = new QRadioButton(anilladoGroupBox);
        leftRadioButton->setObjectName(QStringLiteral("leftRadioButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leftRadioButton->sizePolicy().hasHeightForWidth());
        leftRadioButton->setSizePolicy(sizePolicy2);
        leftRadioButton->setChecked(true);

        gridLayout_2->addWidget(leftRadioButton, 1, 1, 1, 1);

        bottomButton = new QRadioButton(anilladoGroupBox);
        bottomButton->setObjectName(QStringLiteral("bottomButton"));

        gridLayout_2->addWidget(bottomButton, 2, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout_2);


        horizontalLayout_4->addWidget(anilladoGroupBox);

        groupBox_2 = new QGroupBox(infoGroupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        justLikeThatRadioButton = new QRadioButton(groupBox_2);
        justLikeThatRadioButton->setObjectName(QStringLiteral("justLikeThatRadioButton"));

        verticalLayout->addWidget(justLikeThatRadioButton);

        TwoIn1DFRadioButton = new QRadioButton(groupBox_2);
        TwoIn1DFRadioButton->setObjectName(QStringLiteral("TwoIn1DFRadioButton"));

        verticalLayout->addWidget(TwoIn1DFRadioButton);

        TwoIn1SFRadioButton = new QRadioButton(groupBox_2);
        TwoIn1SFRadioButton->setObjectName(QStringLiteral("TwoIn1SFRadioButton"));

        verticalLayout->addWidget(TwoIn1SFRadioButton);

        HHDFRadioButton = new QRadioButton(groupBox_2);
        HHDFRadioButton->setObjectName(QStringLiteral("HHDFRadioButton"));

        verticalLayout->addWidget(HHDFRadioButton);

        HHSFRadioButton = new QRadioButton(groupBox_2);
        HHSFRadioButton->setObjectName(QStringLiteral("HHSFRadioButton"));

        verticalLayout->addWidget(HHSFRadioButton);

        toDFRadioButton = new QRadioButton(groupBox_2);
        toDFRadioButton->setObjectName(QStringLiteral("toDFRadioButton"));

        verticalLayout->addWidget(toDFRadioButton);

        toSFRadioButton = new QRadioButton(groupBox_2);
        toSFRadioButton->setObjectName(QStringLiteral("toSFRadioButton"));

        verticalLayout->addWidget(toSFRadioButton);


        horizontalLayout_4->addWidget(groupBox_2);

        groupBox = new QGroupBox(infoGroupBox);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        fotoColorDFSpinBox = new QSpinBox(groupBox);
        fotoColorDFSpinBox->setObjectName(QStringLiteral("fotoColorDFSpinBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(fotoColorDFSpinBox->sizePolicy().hasHeightForWidth());
        fotoColorDFSpinBox->setSizePolicy(sizePolicy3);
        fotoColorDFSpinBox->setMaximum(999);

        gridLayout->addWidget(fotoColorDFSpinBox, 1, 3, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        fotoSFSpinBox = new QSpinBox(groupBox);
        fotoSFSpinBox->setObjectName(QStringLiteral("fotoSFSpinBox"));
        sizePolicy3.setHeightForWidth(fotoSFSpinBox->sizePolicy().hasHeightForWidth());
        fotoSFSpinBox->setSizePolicy(sizePolicy3);
        fotoSFSpinBox->setMaximum(999);

        gridLayout->addWidget(fotoSFSpinBox, 2, 1, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 0, 4, 1, 1);

        imprSFSpinBox = new QSpinBox(groupBox);
        imprSFSpinBox->setObjectName(QStringLiteral("imprSFSpinBox"));
        sizePolicy3.setHeightForWidth(imprSFSpinBox->sizePolicy().hasHeightForWidth());
        imprSFSpinBox->setSizePolicy(sizePolicy3);
        imprSFSpinBox->setMaximum(999);

        gridLayout->addWidget(imprSFSpinBox, 4, 1, 1, 1);

        fotoSFDoubleSpinBox = new QDoubleSpinBox(groupBox);
        fotoSFDoubleSpinBox->setObjectName(QStringLiteral("fotoSFDoubleSpinBox"));
        sizePolicy3.setHeightForWidth(fotoSFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        fotoSFDoubleSpinBox->setSizePolicy(sizePolicy3);
        fotoSFDoubleSpinBox->setMaximum(9999.99);

        gridLayout->addWidget(fotoSFDoubleSpinBox, 2, 2, 1, 1);

        fotoDFDoubleSpinBox = new QDoubleSpinBox(groupBox);
        fotoDFDoubleSpinBox->setObjectName(QStringLiteral("fotoDFDoubleSpinBox"));
        sizePolicy3.setHeightForWidth(fotoDFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        fotoDFDoubleSpinBox->setSizePolicy(sizePolicy3);
        fotoDFDoubleSpinBox->setMaximum(9999.99);

        gridLayout->addWidget(fotoDFDoubleSpinBox, 1, 2, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 0, 3, 1, 1);

        fotoColorDoubleSpinBox = new QDoubleSpinBox(groupBox);
        fotoColorDoubleSpinBox->setObjectName(QStringLiteral("fotoColorDoubleSpinBox"));
        sizePolicy3.setHeightForWidth(fotoColorDoubleSpinBox->sizePolicy().hasHeightForWidth());
        fotoColorDoubleSpinBox->setSizePolicy(sizePolicy3);
        fotoColorDoubleSpinBox->setMaximum(9999.99);

        gridLayout->addWidget(fotoColorDoubleSpinBox, 1, 4, 1, 1);

        imprColorSFDoubleSpinBox = new QDoubleSpinBox(groupBox);
        imprColorSFDoubleSpinBox->setObjectName(QStringLiteral("imprColorSFDoubleSpinBox"));
        sizePolicy3.setHeightForWidth(imprColorSFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        imprColorSFDoubleSpinBox->setSizePolicy(sizePolicy3);
        imprColorSFDoubleSpinBox->setMaximum(9999.99);

        gridLayout->addWidget(imprColorSFDoubleSpinBox, 4, 4, 1, 1);

        imprDFSpinBox = new QSpinBox(groupBox);
        imprDFSpinBox->setObjectName(QStringLiteral("imprDFSpinBox"));
        sizePolicy3.setHeightForWidth(imprDFSpinBox->sizePolicy().hasHeightForWidth());
        imprDFSpinBox->setSizePolicy(sizePolicy3);
        imprDFSpinBox->setMaximum(999);

        gridLayout->addWidget(imprDFSpinBox, 3, 1, 1, 1);

        imprColorSFSpinBox = new QSpinBox(groupBox);
        imprColorSFSpinBox->setObjectName(QStringLiteral("imprColorSFSpinBox"));
        sizePolicy3.setHeightForWidth(imprColorSFSpinBox->sizePolicy().hasHeightForWidth());
        imprColorSFSpinBox->setSizePolicy(sizePolicy3);
        imprColorSFSpinBox->setMaximum(999);

        gridLayout->addWidget(imprColorSFSpinBox, 4, 3, 1, 1);

        fotoColorSFSpinBox = new QSpinBox(groupBox);
        fotoColorSFSpinBox->setObjectName(QStringLiteral("fotoColorSFSpinBox"));
        sizePolicy3.setHeightForWidth(fotoColorSFSpinBox->sizePolicy().hasHeightForWidth());
        fotoColorSFSpinBox->setSizePolicy(sizePolicy3);
        fotoColorSFSpinBox->setMaximum(999);

        gridLayout->addWidget(fotoColorSFSpinBox, 2, 3, 1, 1);

        imprDFDoubleSpinBox = new QDoubleSpinBox(groupBox);
        imprDFDoubleSpinBox->setObjectName(QStringLiteral("imprDFDoubleSpinBox"));
        sizePolicy3.setHeightForWidth(imprDFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        imprDFDoubleSpinBox->setSizePolicy(sizePolicy3);
        imprDFDoubleSpinBox->setMaximum(9999.99);

        gridLayout->addWidget(imprDFDoubleSpinBox, 3, 2, 1, 1);

        imprColorDFSpinBox = new QSpinBox(groupBox);
        imprColorDFSpinBox->setObjectName(QStringLiteral("imprColorDFSpinBox"));
        sizePolicy3.setHeightForWidth(imprColorDFSpinBox->sizePolicy().hasHeightForWidth());
        imprColorDFSpinBox->setSizePolicy(sizePolicy3);
        imprColorDFSpinBox->setMaximum(999);

        gridLayout->addWidget(imprColorDFSpinBox, 3, 3, 1, 1);

        imprSFDoubleSpinBox = new QDoubleSpinBox(groupBox);
        imprSFDoubleSpinBox->setObjectName(QStringLiteral("imprSFDoubleSpinBox"));
        sizePolicy3.setHeightForWidth(imprSFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        imprSFDoubleSpinBox->setSizePolicy(sizePolicy3);
        imprSFDoubleSpinBox->setMaximum(9999.99);

        gridLayout->addWidget(imprSFDoubleSpinBox, 4, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        fotoColorSFDoubleSpinBox = new QDoubleSpinBox(groupBox);
        fotoColorSFDoubleSpinBox->setObjectName(QStringLiteral("fotoColorSFDoubleSpinBox"));
        sizePolicy3.setHeightForWidth(fotoColorSFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        fotoColorSFDoubleSpinBox->setSizePolicy(sizePolicy3);
        fotoColorSFDoubleSpinBox->setMaximum(9999.99);

        gridLayout->addWidget(fotoColorSFDoubleSpinBox, 2, 4, 1, 1);

        fotoDFSpinBox = new QSpinBox(groupBox);
        fotoDFSpinBox->setObjectName(QStringLiteral("fotoDFSpinBox"));
        sizePolicy3.setHeightForWidth(fotoDFSpinBox->sizePolicy().hasHeightForWidth());
        fotoDFSpinBox->setSizePolicy(sizePolicy3);
        fotoDFSpinBox->setMaximum(999);

        gridLayout->addWidget(fotoDFSpinBox, 1, 1, 1, 1);

        imprColorDFDoubleSpinBox = new QDoubleSpinBox(groupBox);
        imprColorDFDoubleSpinBox->setObjectName(QStringLiteral("imprColorDFDoubleSpinBox"));
        sizePolicy3.setHeightForWidth(imprColorDFDoubleSpinBox->sizePolicy().hasHeightForWidth());
        imprColorDFDoubleSpinBox->setSizePolicy(sizePolicy3);
        imprColorDFDoubleSpinBox->setMaximum(9999.99);

        gridLayout->addWidget(imprColorDFDoubleSpinBox, 3, 4, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        doubleSpinBox = new QDoubleSpinBox(groupBox);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setMaximum(999.99);

        horizontalLayout_3->addWidget(doubleSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addWidget(groupBox);


        verticalLayout_3->addWidget(infoGroupBox);

        verticalSpacer = new QSpacerItem(20, 114, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        closeButton = new QPushButton(Form);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayout_5->addWidget(closeButton);

        saveButton = new QPushButton(Form);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout_5->addWidget(saveButton);


        verticalLayout_3->addLayout(horizontalLayout_5);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        clientRadioButton->setText(QApplication::translate("Form", "Del cliente", 0));
        fileRadioButton->setText(QApplication::translate("Form", "Archivo", 0));
        ownRadioButton->setText(QApplication::translate("Form", "Libro escaneado", 0));
        label->setText(QApplication::translate("Form", "Nombre Trabajo:", 0));
        infoGroupBox->setTitle(QApplication::translate("Form", "Information:", 0));
        anilladoGroupBox->setTitle(QApplication::translate("Form", "Anillado", 0));
        superiorRadioButton->setText(QApplication::translate("Form", "Superior", 0));
        leftRadioButton->setText(QApplication::translate("Form", "Lateral", 0));
        bottomButton->setText(QApplication::translate("Form", "de Abajo", 0));
        groupBox_2->setTitle(QApplication::translate("Form", "Trabajo", 0));
        justLikeThatRadioButton->setText(QApplication::translate("Form", "Como esta", 0));
        TwoIn1DFRadioButton->setText(QApplication::translate("Form", "2 en 1 D/F", 0));
        TwoIn1SFRadioButton->setText(QApplication::translate("Form", "2  en 1 S/F", 0));
        HHDFRadioButton->setText(QApplication::translate("Form", "H/H D/F", 0));
        HHSFRadioButton->setText(QApplication::translate("Form", "H/H S/F", 0));
        toDFRadioButton->setText(QApplication::translate("Form", "Pasar D/F", 0));
        toSFRadioButton->setText(QApplication::translate("Form", "Pasar S/F", 0));
        groupBox->setTitle(QApplication::translate("Form", "Costos", 0));
        label_7->setText(QApplication::translate("Form", "Costo", 0));
        label_6->setText(QApplication::translate("Form", "Foto SF", 0));
        label_8->setText(QApplication::translate("Form", "B/N", 0));
        label_5->setText(QApplication::translate("Form", "Foto DF", 0));
        label_9->setText(QApplication::translate("Form", "Impr DF", 0));
        label_13->setText(QApplication::translate("Form", "Costo", 0));
        label_12->setText(QApplication::translate("Form", "Color", 0));
        label_2->setText(QApplication::translate("Form", "Impr SF", 0));
        label_3->setText(QApplication::translate("Form", "Anillado", 0));
        closeButton->setText(QApplication::translate("Form", "Cerrar", 0));
        saveButton->setText(QApplication::translate("Form", "Salvar", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKORDERFORM_H
