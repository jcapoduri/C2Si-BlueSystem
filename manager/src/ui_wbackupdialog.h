/********************************************************************************
** Form generated from reading UI file 'wbackupdialog.ui'
**
** Created: Sat 2. Feb 03:25:03 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBACKUPDIALOG_H
#define UI_WBACKUPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QVBoxLayout>

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
            wBackupDialog->setObjectName(QString::fromUtf8("wBackupDialog"));
        wBackupDialog->setWindowModality(Qt::ApplicationModal);
        wBackupDialog->resize(605, 193);
        wBackupDialog->setAcceptDrops(false);
        wBackupDialog->setModal(true);
        verticalLayout = new QVBoxLayout(wBackupDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(wBackupDialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(wBackupDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        progressBar = new QProgressBar(wBackupDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximum(0);
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(wBackupDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(wBackupDialog);

        QMetaObject::connectSlotsByName(wBackupDialog);
    } // setupUi

    void retranslateUi(QDialog *wBackupDialog)
    {
        wBackupDialog->setWindowTitle(QApplication::translate("wBackupDialog", "Backup", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("wBackupDialog", "Progreso:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class wBackupDialog: public Ui_wBackupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBACKUPDIALOG_H
