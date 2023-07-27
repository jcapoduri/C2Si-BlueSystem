/********************************************************************************
** Form generated from reading UI file 'wbusiness.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBUSINESS_H
#define UI_WBUSINESS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wBusiness
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *nombreLabel;
    QLineEdit *nombreLineEdit;
    QLabel *dueOLabel;
    QLineEdit *dueOLineEdit;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QLabel *telefonoLabel;
    QLineEdit *telefonoLineEdit;
    QLabel *direcciNLabel;
    QLineEdit *direcciNLineEdit;
    QLabel *simpleFazLabel;
    QDoubleSpinBox *simpleFazDoubleSpinBox;
    QLabel *dobleFazLabel;
    QDoubleSpinBox *dobleFazDoubleSpinBox;
    QLabel *impSimpleFazLabel;
    QDoubleSpinBox *impSimpleFazDoubleSpinBox;
    QLabel *impDoubleFazLabel;
    QDoubleSpinBox *impDoubleFazDoubleSpinBox;
    QLabel *colorImpSimpleFazLabel;
    QDoubleSpinBox *colorImpSimpleFazDoubleSpinBox;
    QLabel *colorImpDoblleFazLabel;
    QDoubleSpinBox *colorImpDoblleFazDoubleSpinBox;
    QLabel *copiaColSimpleFazLabel;
    QDoubleSpinBox *copiaColSimpleFazDoubleSpinBox;
    QLabel *copiaColDobleFazLabel;
    QDoubleSpinBox *copiaColDobleFazDoubleSpinBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *addButton;
    QToolButton *delButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QListWidget *anilladoListWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *anilladoAddButton;
    QToolButton *anilladoDelButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *wBusiness)
    {
        if (wBusiness->objectName().isEmpty())
            wBusiness->setObjectName(QString::fromUtf8("wBusiness"));
        wBusiness->resize(613, 409);
        verticalLayout_2 = new QVBoxLayout(wBusiness);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        nombreLabel = new QLabel(wBusiness);
        nombreLabel->setObjectName(QString::fromUtf8("nombreLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nombreLabel);

        nombreLineEdit = new QLineEdit(wBusiness);
        nombreLineEdit->setObjectName(QString::fromUtf8("nombreLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nombreLineEdit);

        dueOLabel = new QLabel(wBusiness);
        dueOLabel->setObjectName(QString::fromUtf8("dueOLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, dueOLabel);

        dueOLineEdit = new QLineEdit(wBusiness);
        dueOLineEdit->setObjectName(QString::fromUtf8("dueOLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, dueOLineEdit);

        emailLabel = new QLabel(wBusiness);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, emailLabel);

        emailLineEdit = new QLineEdit(wBusiness);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, emailLineEdit);

        telefonoLabel = new QLabel(wBusiness);
        telefonoLabel->setObjectName(QString::fromUtf8("telefonoLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, telefonoLabel);

        telefonoLineEdit = new QLineEdit(wBusiness);
        telefonoLineEdit->setObjectName(QString::fromUtf8("telefonoLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, telefonoLineEdit);

        direcciNLabel = new QLabel(wBusiness);
        direcciNLabel->setObjectName(QString::fromUtf8("direcciNLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, direcciNLabel);

        direcciNLineEdit = new QLineEdit(wBusiness);
        direcciNLineEdit->setObjectName(QString::fromUtf8("direcciNLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, direcciNLineEdit);

        simpleFazLabel = new QLabel(wBusiness);
        simpleFazLabel->setObjectName(QString::fromUtf8("simpleFazLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, simpleFazLabel);

        simpleFazDoubleSpinBox = new QDoubleSpinBox(wBusiness);
        simpleFazDoubleSpinBox->setObjectName(QString::fromUtf8("simpleFazDoubleSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(simpleFazDoubleSpinBox->sizePolicy().hasHeightForWidth());
        simpleFazDoubleSpinBox->setSizePolicy(sizePolicy);
        simpleFazDoubleSpinBox->setDecimals(3);
        simpleFazDoubleSpinBox->setMaximum(999.990000000000009);

        formLayout->setWidget(5, QFormLayout::FieldRole, simpleFazDoubleSpinBox);

        dobleFazLabel = new QLabel(wBusiness);
        dobleFazLabel->setObjectName(QString::fromUtf8("dobleFazLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, dobleFazLabel);

        dobleFazDoubleSpinBox = new QDoubleSpinBox(wBusiness);
        dobleFazDoubleSpinBox->setObjectName(QString::fromUtf8("dobleFazDoubleSpinBox"));
        sizePolicy.setHeightForWidth(dobleFazDoubleSpinBox->sizePolicy().hasHeightForWidth());
        dobleFazDoubleSpinBox->setSizePolicy(sizePolicy);
        dobleFazDoubleSpinBox->setDecimals(3);
        dobleFazDoubleSpinBox->setMaximum(999.990000000000009);

        formLayout->setWidget(6, QFormLayout::FieldRole, dobleFazDoubleSpinBox);

        impSimpleFazLabel = new QLabel(wBusiness);
        impSimpleFazLabel->setObjectName(QString::fromUtf8("impSimpleFazLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, impSimpleFazLabel);

        impSimpleFazDoubleSpinBox = new QDoubleSpinBox(wBusiness);
        impSimpleFazDoubleSpinBox->setObjectName(QString::fromUtf8("impSimpleFazDoubleSpinBox"));
        sizePolicy.setHeightForWidth(impSimpleFazDoubleSpinBox->sizePolicy().hasHeightForWidth());
        impSimpleFazDoubleSpinBox->setSizePolicy(sizePolicy);
        impSimpleFazDoubleSpinBox->setDecimals(3);
        impSimpleFazDoubleSpinBox->setMaximum(999.990000000000009);

        formLayout->setWidget(7, QFormLayout::FieldRole, impSimpleFazDoubleSpinBox);

        impDoubleFazLabel = new QLabel(wBusiness);
        impDoubleFazLabel->setObjectName(QString::fromUtf8("impDoubleFazLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, impDoubleFazLabel);

        impDoubleFazDoubleSpinBox = new QDoubleSpinBox(wBusiness);
        impDoubleFazDoubleSpinBox->setObjectName(QString::fromUtf8("impDoubleFazDoubleSpinBox"));
        sizePolicy.setHeightForWidth(impDoubleFazDoubleSpinBox->sizePolicy().hasHeightForWidth());
        impDoubleFazDoubleSpinBox->setSizePolicy(sizePolicy);
        impDoubleFazDoubleSpinBox->setDecimals(3);
        impDoubleFazDoubleSpinBox->setMaximum(999.990000000000009);

        formLayout->setWidget(8, QFormLayout::FieldRole, impDoubleFazDoubleSpinBox);

        colorImpSimpleFazLabel = new QLabel(wBusiness);
        colorImpSimpleFazLabel->setObjectName(QString::fromUtf8("colorImpSimpleFazLabel"));

        formLayout->setWidget(9, QFormLayout::LabelRole, colorImpSimpleFazLabel);

        colorImpSimpleFazDoubleSpinBox = new QDoubleSpinBox(wBusiness);
        colorImpSimpleFazDoubleSpinBox->setObjectName(QString::fromUtf8("colorImpSimpleFazDoubleSpinBox"));
        sizePolicy.setHeightForWidth(colorImpSimpleFazDoubleSpinBox->sizePolicy().hasHeightForWidth());
        colorImpSimpleFazDoubleSpinBox->setSizePolicy(sizePolicy);
        colorImpSimpleFazDoubleSpinBox->setDecimals(3);
        colorImpSimpleFazDoubleSpinBox->setMaximum(999.990000000000009);

        formLayout->setWidget(9, QFormLayout::FieldRole, colorImpSimpleFazDoubleSpinBox);

        colorImpDoblleFazLabel = new QLabel(wBusiness);
        colorImpDoblleFazLabel->setObjectName(QString::fromUtf8("colorImpDoblleFazLabel"));

        formLayout->setWidget(10, QFormLayout::LabelRole, colorImpDoblleFazLabel);

        colorImpDoblleFazDoubleSpinBox = new QDoubleSpinBox(wBusiness);
        colorImpDoblleFazDoubleSpinBox->setObjectName(QString::fromUtf8("colorImpDoblleFazDoubleSpinBox"));
        sizePolicy.setHeightForWidth(colorImpDoblleFazDoubleSpinBox->sizePolicy().hasHeightForWidth());
        colorImpDoblleFazDoubleSpinBox->setSizePolicy(sizePolicy);
        colorImpDoblleFazDoubleSpinBox->setDecimals(3);
        colorImpDoblleFazDoubleSpinBox->setMaximum(999.990000000000009);

        formLayout->setWidget(10, QFormLayout::FieldRole, colorImpDoblleFazDoubleSpinBox);

        copiaColSimpleFazLabel = new QLabel(wBusiness);
        copiaColSimpleFazLabel->setObjectName(QString::fromUtf8("copiaColSimpleFazLabel"));

        formLayout->setWidget(11, QFormLayout::LabelRole, copiaColSimpleFazLabel);

        copiaColSimpleFazDoubleSpinBox = new QDoubleSpinBox(wBusiness);
        copiaColSimpleFazDoubleSpinBox->setObjectName(QString::fromUtf8("copiaColSimpleFazDoubleSpinBox"));
        sizePolicy.setHeightForWidth(copiaColSimpleFazDoubleSpinBox->sizePolicy().hasHeightForWidth());
        copiaColSimpleFazDoubleSpinBox->setSizePolicy(sizePolicy);
        copiaColSimpleFazDoubleSpinBox->setDecimals(3);
        copiaColSimpleFazDoubleSpinBox->setMaximum(999.990000000000009);

        formLayout->setWidget(11, QFormLayout::FieldRole, copiaColSimpleFazDoubleSpinBox);

        copiaColDobleFazLabel = new QLabel(wBusiness);
        copiaColDobleFazLabel->setObjectName(QString::fromUtf8("copiaColDobleFazLabel"));

        formLayout->setWidget(12, QFormLayout::LabelRole, copiaColDobleFazLabel);

        copiaColDobleFazDoubleSpinBox = new QDoubleSpinBox(wBusiness);
        copiaColDobleFazDoubleSpinBox->setObjectName(QString::fromUtf8("copiaColDobleFazDoubleSpinBox"));
        sizePolicy.setHeightForWidth(copiaColDobleFazDoubleSpinBox->sizePolicy().hasHeightForWidth());
        copiaColDobleFazDoubleSpinBox->setSizePolicy(sizePolicy);
        copiaColDobleFazDoubleSpinBox->setDecimals(3);
        copiaColDobleFazDoubleSpinBox->setMaximum(999.990000000000009);

        formLayout->setWidget(12, QFormLayout::FieldRole, copiaColDobleFazDoubleSpinBox);


        horizontalLayout_2->addLayout(formLayout);

        groupBox = new QGroupBox(wBusiness);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addButton = new QToolButton(groupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/graphics/list-add-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);

        horizontalLayout->addWidget(addButton);

        delButton = new QToolButton(groupBox);
        delButton->setObjectName(QString::fromUtf8("delButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/graphics/list-remove-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        delButton->setIcon(icon1);

        horizontalLayout->addWidget(delButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(wBusiness);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        anilladoListWidget = new QListWidget(groupBox_2);
        anilladoListWidget->setObjectName(QString::fromUtf8("anilladoListWidget"));
        anilladoListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        anilladoListWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_3->addWidget(anilladoListWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        anilladoAddButton = new QToolButton(groupBox_2);
        anilladoAddButton->setObjectName(QString::fromUtf8("anilladoAddButton"));
        anilladoAddButton->setIcon(icon);

        horizontalLayout_3->addWidget(anilladoAddButton);

        anilladoDelButton = new QToolButton(groupBox_2);
        anilladoDelButton->setObjectName(QString::fromUtf8("anilladoDelButton"));
        anilladoDelButton->setIcon(icon1);

        horizontalLayout_3->addWidget(anilladoDelButton);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_2->addWidget(groupBox_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(wBusiness);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(wBusiness);

        QMetaObject::connectSlotsByName(wBusiness);
    } // setupUi

    void retranslateUi(QWidget *wBusiness)
    {
        wBusiness->setWindowTitle(QCoreApplication::translate("wBusiness", "Form", nullptr));
        nombreLabel->setText(QCoreApplication::translate("wBusiness", "Nombre:", nullptr));
        dueOLabel->setText(QCoreApplication::translate("wBusiness", "Due\303\261o:", nullptr));
        emailLabel->setText(QCoreApplication::translate("wBusiness", "Email:", nullptr));
        telefonoLabel->setText(QCoreApplication::translate("wBusiness", "Telefono:", nullptr));
        direcciNLabel->setText(QCoreApplication::translate("wBusiness", "Direcci\303\263n:", nullptr));
        simpleFazLabel->setText(QCoreApplication::translate("wBusiness", "simple faz:", nullptr));
        dobleFazLabel->setText(QCoreApplication::translate("wBusiness", "doble faz:", nullptr));
        impSimpleFazLabel->setText(QCoreApplication::translate("wBusiness", "imp. simple faz", nullptr));
        impDoubleFazLabel->setText(QCoreApplication::translate("wBusiness", "imp.double faz", nullptr));
        colorImpSimpleFazLabel->setText(QCoreApplication::translate("wBusiness", "color imp. simple faz", nullptr));
        colorImpDoblleFazLabel->setText(QCoreApplication::translate("wBusiness", "color imp. doblle faz", nullptr));
        copiaColSimpleFazLabel->setText(QCoreApplication::translate("wBusiness", "copia col. simple faz", nullptr));
        copiaColDobleFazLabel->setText(QCoreApplication::translate("wBusiness", "copia col. doble  faz", nullptr));
        groupBox->setTitle(QCoreApplication::translate("wBusiness", "Usuarios Validos", nullptr));
        addButton->setText(QCoreApplication::translate("wBusiness", "...", nullptr));
        delButton->setText(QCoreApplication::translate("wBusiness", "...", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("wBusiness", "Anillado:", nullptr));
        anilladoAddButton->setText(QCoreApplication::translate("wBusiness", "...", nullptr));
        anilladoDelButton->setText(QCoreApplication::translate("wBusiness", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wBusiness: public Ui_wBusiness {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBUSINESS_H
