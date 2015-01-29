/********************************************************************************
** Form generated from reading UI file 'wbackupdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBACKUPDIALOG_H
#define UI_WBACKUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_wBackupDialog
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QProgressBar *progressBar;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *wBackupDialog)
    {
        if (wBackupDialog->objectName().isEmpty())
            wBackupDialog->setObjectName(QStringLiteral("wBackupDialog"));
        wBackupDialog->setWindowModality(Qt::ApplicationModal);
        wBackupDialog->resize(605, 193);
        wBackupDialog->setAcceptDrops(false);
        wBackupDialog->setModal(true);
        verticalLayout = new QVBoxLayout(wBackupDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(wBackupDialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(wBackupDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        progressBar = new QProgressBar(wBackupDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximum(0);
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(wBackupDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(wBackupDialog);

        QMetaObject::connectSlotsByName(wBackupDialog);
    } // setupUi

    void retranslateUi(QDialog *wBackupDialog)
    {
        wBackupDialog->setWindowTitle(QApplication::translate("wBackupDialog", "Backup", 0));
        label->setText(QApplication::translate("wBackupDialog", "Progreso:", 0));
    } // retranslateUi

};

namespace Ui {
    class wBackupDialog: public Ui_wBackupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBACKUPDIALOG_H
