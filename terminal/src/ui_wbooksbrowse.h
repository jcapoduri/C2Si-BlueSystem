/********************************************************************************
** Form generated from reading UI file 'wbooksbrowse.ui'
**
** Created: Fri 27. Jul 14:35:33 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBOOKSBROWSE_H
#define UI_WBOOKSBROWSE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wBooksBrowse
{
public:

    void setupUi(QWidget *wBooksBrowse)
    {
        if (wBooksBrowse->objectName().isEmpty())
            wBooksBrowse->setObjectName(QString::fromUtf8("wBooksBrowse"));
        wBooksBrowse->resize(473, 178);

        retranslateUi(wBooksBrowse);

        QMetaObject::connectSlotsByName(wBooksBrowse);
    } // setupUi

    void retranslateUi(QWidget *wBooksBrowse)
    {
        wBooksBrowse->setWindowTitle(QApplication::translate("wBooksBrowse", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class wBooksWidget: public Ui_wBooksBrowse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBOOKSBROWSE_H
