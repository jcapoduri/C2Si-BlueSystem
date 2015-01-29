/********************************************************************************
** Form generated from reading UI file 'wbusiness.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBUSINESS_H
#define UI_WBUSINESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            wBusiness->setObjectName(QStringLiteral("wBusiness"));
        wBusiness->resize(613, 409);
        verticalLayout_2 = new QVBoxLayout(wBusiness);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        nombreLabel = new QLabel(wBusiness);
        nombreLabel->setObjectName(QStringLiteral("nombreLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nombreLabel);

        nombreLineEdit = new QLineEdit(wBusiness);
        nombreLineEdit->setObjectName(QStringLiteral("nombreLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nombreLineEdit);

        dueOLabel = new QLabel(wBusiness);
        dueOLabel->setObjectName(QStringLiteral("dueOLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, dueOLabel);

        dueOLineEdit = new QLineEdit(wBusiness);
        dueOLineEdit->setObjectName(QStringLiteral("dueOLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, dueOLineEdit);

        emailLabel = new QLabel(wBusiness);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, emailLabel);

        emailLineEdit = new QLineEdit(wBusiness);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, emailLineEdit);

        telefonoLabel = new QLabel(wBusiness);
        telefonoLabel->setObjectName(QStringLiteral("telefonoLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, telefonoLabel);

        telefonoLineEdit = new QLineEdit(wBusiness);
        telefonoLineEdit->setObjectName(QStringLiteral("telefonoLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, telefonoLineEdit);

        direcciNLabel = new QLabel(wBusiness);
        direcciNLabel->setObjectName(QStringLiteral("direcciNLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, direcciNLabel);

        direcciNLineEdit = new QLineEdit(wBusiness);
        direcciNLineEdit->setObjectName(QStringLiteral("direcciNLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, direcciNLineEdit);

        simpleFazLabel = new QLabel(wBusiness);
        simpleFazLabel->setObjectName(QStringLiteral("simpleFazLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, simpleFazLabel);

        simpleFazDoubleSpinBox = new QDoubleSpinBox(wBusiness);
        simpleFazDoubleSpinBox->setObjectName(QStringLiteral("simpleFazDoubleSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(simpleFazDoubleSpinBox->sizePolicy().hasHeightForWidth());
        simpleFazDoubleSpinBox->setSizePolicy(sizePolicy);
        simpleFazDoubleSpinBox->setDecimals(3);
        simpleFazDoubleSpinBox->setMaximum(999.99);

        formLayout->setWidget(5, QFormLayout::FieldRole, simpleFazDoubleSpinBox);

        dobleFazLabel = new QLabel(wBusiness);
        dobleFazLabel->setObjectName(QStringLiteral("dobleFazLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, dobleFazLabel);

        dobleFazDoubleSpinBox = new QDoubleSpinBox(wBusiness);
        dobleFazDoubleSpinBox->setObjectName(QStringLiteral("dobleFazDoubleSpinBox"));
        sizePolicy.setHeightForWidth(dobleFazDoubleSpinBox->sizePolicy().hasHeightForWidth());
        dobleFazDoubleSpinBox->setSizePolicy(sizePolicy);
        dobleFazDoubleSpinBox->setDecimals(3);
        dobleFazDoubleSpinBox->setMaximum(999.99);

        formLayout->setWidget(6, QFormLayout::FieldRole, dobleFazDoubleSpinBox);

        impSimpleFazLabel = new QLabel(wBusiness);
        impSimpleFazLabel->setObjectName(QStringLiteral("impSimpleFazLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, impSimpleFazLabel);

        impSimpleFazDoubleSpinBox = new QDoubleSpinBox(wBusiness);
        impSimpleFazDoubleSpinBox->setObjectName(QStringLiteral("impSimpleFazDoubleSpinBox"));
        sizePolicy.setHeightForWidth(impSimpleFazDoubleSpinBox->sizePolicy().hasHeightForWidth());
        impSimpleFazDoubleSpinBox->setSizePolicy(sizePolicy);
        impSimpleFazDoubleSpinBox->setDecimals(3);
        impSimpleFazDoubleSpinBox->setMaximum(999.99);

        formLayout->setWidget(7, QFormLayout::FieldRole, impSimpleFazDoubleSpinBox);

        impDoubleFazLabel = new QLabel(wBusiness);
        impDoubleFazLabel->setObjectName(QStringLiteral("impDoubleFazLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, impDoubleFazLabel);

        impDoubleFazDoubleSpinBox = new QDoubleSpinBox(wBusiness);
        impDoubleFazDoubleSpinBox->setObjectName(QStringLiteral("impDoubleFazDoubleSpinBox"));
        sizePolicy.setHeightForWidth(impDoubleFazDoubleSpinBox->sizePolicy().hasHeightForWidth());
        impDoubleFazDoubleSpinBox->setSizePolicy(sizePolicy);
        impDoubleFazDoubleSpinBox->setDecimals(3);
        impDoubleFazDoubleSpinBox->setMaximum(999.99);

        formLayout->setWidget(8, QFormLayout::FieldRole, impDoubleFazDoubleSpinBox);

        colorImpSimpleFazLabel = new QLabel(wBusiness);
        colorImpSimpleFazLabel->setObjectName(QStringLiteral("colorImpSimpleFazLabel"));

        formLayout->setWidget(9, QFormLayout::LabelRole, colorImpSimpleFazLabel);

        colorImpSimpleFazDoubleSpinBox = new QDoubleSpinBox(wBusiness);
        colorImpSimpleFazDoubleSpinBox->setObjectName(QStringLiteral("colorImpSimpleFazDoubleSpinBox"));
        sizePolicy.setHeightForWidth(colorImpSimpleFazDoubleSpinBox->sizePolicy().hasHeightForWidth());
        colorImpSimpleFazDoubleSpinBox->setSizePolicy(sizePolicy);
        colorImpSimpleFazDoubleSpinBox->setDecimals(3);
        colorImpSimpleFazDoubleSpinBox->setMaximum(999.99);

        formLayout->setWidget(9, QFormLayout::FieldRole, colorImpSimpleFazDoubleSpinBox);

        colorImpDoblleFazLabel = new QLabel(wBusiness);
        colorImpDoblleFazLabel->setObjectName(QStringLiteral("colorImpDoblleFazLabel"));

        formLayout->setWidget(10, QFormLayout::LabelRole, colorImpDoblleFazLabel);

        colorImpDoblleFazDoubleSpinBox = new QDoubleSpinBox(wBusiness);
        colorImpDoblleFazDoubleSpinBox->setObjectName(QStringLiteral("colorImpDoblleFazDoubleSpinBox"));
        sizePolicy.setHeightForWidth(colorImpDoblleFazDoubleSpinBox->sizePolicy().hasHeightForWidth());
        colorImpDoblleFazDoubleSpinBox->setSizePolicy(sizePolicy);
        colorImpDoblleFazDoubleSpinBox->setDecimals(3);
        colorImpDoblleFazDoubleSpinBox->setMaximum(999.99);

        formLayout->setWidget(10, QFormLayout::FieldRole, colorImpDoblleFazDoubleSpinBox);

        copiaColSimpleFazLabel = new QLabel(wBusiness);
        copiaColSimpleFazLabel->setObjectName(QStringLiteral("copiaColSimpleFazLabel"));

        formLayout->setWidget(11, QFormLayout::LabelRole, copiaColSimpleFazLabel);

        copiaColSimpleFazDoubleSpinBox = new QDoubleSpinBox(wBusiness);
        copiaColSimpleFazDoubleSpinBox->setObjectName(QStringLiteral("copiaColSimpleFazDoubleSpinBox"));
        sizePolicy.setHeightForWidth(copiaColSimpleFazDoubleSpinBox->sizePolicy().hasHeightForWidth());
        copiaColSimpleFazDoubleSpinBox->setSizePolicy(sizePolicy);
        copiaColSimpleFazDoubleSpinBox->setDecimals(3);
        copiaColSimpleFazDoubleSpinBox->setMaximum(999.99);

        formLayout->setWidget(11, QFormLayout::FieldRole, copiaColSimpleFazDoubleSpinBox);

        copiaColDobleFazLabel = new QLabel(wBusiness);
        copiaColDobleFazLabel->setObjectName(QStringLiteral("copiaColDobleFazLabel"));

        formLayout->setWidget(12, QFormLayout::LabelRole, copiaColDobleFazLabel);

        copiaColDobleFazDoubleSpinBox = new QDoubleSpinBox(wBusiness);
        copiaColDobleFazDoubleSpinBox->setObjectName(QStringLiteral("copiaColDobleFazDoubleSpinBox"));
        sizePolicy.setHeightForWidth(copiaColDobleFazDoubleSpinBox->sizePolicy().hasHeightForWidth());
        copiaColDobleFazDoubleSpinBox->setSizePolicy(sizePolicy);
        copiaColDobleFazDoubleSpinBox->setDecimals(3);
        copiaColDobleFazDoubleSpinBox->setMaximum(999.99);

        formLayout->setWidget(12, QFormLayout::FieldRole, copiaColDobleFazDoubleSpinBox);


        horizontalLayout_2->addLayout(formLayout);

        groupBox = new QGroupBox(wBusiness);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addButton = new QToolButton(groupBox);
        addButton->setObjectName(QStringLiteral("addButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/graphics/list-add-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);

        horizontalLayout->addWidget(addButton);

        delButton = new QToolButton(groupBox);
        delButton->setObjectName(QStringLiteral("delButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/graphics/list-remove-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        delButton->setIcon(icon1);

        horizontalLayout->addWidget(delButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(wBusiness);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        anilladoListWidget = new QListWidget(groupBox_2);
        anilladoListWidget->setObjectName(QStringLiteral("anilladoListWidget"));
        anilladoListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        anilladoListWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_3->addWidget(anilladoListWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        anilladoAddButton = new QToolButton(groupBox_2);
        anilladoAddButton->setObjectName(QStringLiteral("anilladoAddButton"));
        anilladoAddButton->setIcon(icon);

        horizontalLayout_3->addWidget(anilladoAddButton);

        anilladoDelButton = new QToolButton(groupBox_2);
        anilladoDelButton->setObjectName(QStringLiteral("anilladoDelButton"));
        anilladoDelButton->setIcon(icon1);

        horizontalLayout_3->addWidget(anilladoDelButton);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_2->addWidget(groupBox_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(wBusiness);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(wBusiness);

        QMetaObject::connectSlotsByName(wBusiness);
    } // setupUi

    void retranslateUi(QWidget *wBusiness)
    {
        wBusiness->setWindowTitle(QApplication::translate("wBusiness", "Form", 0));
        nombreLabel->setText(QApplication::translate("wBusiness", "Nombre:", 0));
        dueOLabel->setText(QApplication::translate("wBusiness", "Due\303\261o:", 0));
        emailLabel->setText(QApplication::translate("wBusiness", "Email:", 0));
        telefonoLabel->setText(QApplication::translate("wBusiness", "Telefono:", 0));
        direcciNLabel->setText(QApplication::translate("wBusiness", "Direcci\303\263n:", 0));
        simpleFazLabel->setText(QApplication::translate("wBusiness", "simple faz:", 0));
        dobleFazLabel->setText(QApplication::translate("wBusiness", "doble faz:", 0));
        impSimpleFazLabel->setText(QApplication::translate("wBusiness", "imp. simple faz", 0));
        impDoubleFazLabel->setText(QApplication::translate("wBusiness", "imp.double faz", 0));
        colorImpSimpleFazLabel->setText(QApplication::translate("wBusiness", "color imp. simple faz", 0));
        colorImpDoblleFazLabel->setText(QApplication::translate("wBusiness", "color imp. doblle faz", 0));
        copiaColSimpleFazLabel->setText(QApplication::translate("wBusiness", "copia col. simple faz", 0));
        copiaColDobleFazLabel->setText(QApplication::translate("wBusiness", "copia col. doble  faz", 0));
        groupBox->setTitle(QApplication::translate("wBusiness", "Usuarios Validos", 0));
        addButton->setText(QApplication::translate("wBusiness", "...", 0));
        delButton->setText(QApplication::translate("wBusiness", "...", 0));
        groupBox_2->setTitle(QApplication::translate("wBusiness", "Anillado:", 0));
        anilladoAddButton->setText(QApplication::translate("wBusiness", "...", 0));
        anilladoDelButton->setText(QApplication::translate("wBusiness", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class wBusiness: public Ui_wBusiness {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBUSINESS_H
