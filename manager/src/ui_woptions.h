/********************************************************************************
** Form generated from reading UI file 'woptions.ui'
**
** Created: Thu 20. Sep 20:19:28 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WOPTIONS_H
#define UI_WOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_woptions
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *woptions)
    {
        if (woptions->objectName().isEmpty())
            woptions->setObjectName(QString::fromUtf8("woptions"));
        woptions->resize(400, 300);
        buttonBox = new QDialogButtonBox(woptions);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(woptions);
        QObject::connect(buttonBox, SIGNAL(accepted()), woptions, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), woptions, SLOT(reject()));

        QMetaObject::connectSlotsByName(woptions);
    } // setupUi

    void retranslateUi(QDialog *woptions)
    {
        woptions->setWindowTitle(QApplication::translate("woptions", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class woptions: public Ui_woptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WOPTIONS_H
