#include "wworkbooklist.h"
#include "ui_wworkbooklist.h"

wWorkBookList::wWorkBookList(QWidget *parent) :
    QWidget(parent),
    _book_lister(mainWidget::currentBusiness()),
    ui(new Ui::wWorkBookList)
{
    ui->setupUi(this);
    search();
}

wWorkBookList::~wWorkBookList()
{
    delete ui;
}

void wWorkBookList::search()
{
    _book_lister.query();

    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(0);
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setRowCount(_book_lister.count());

    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Libro" << "Compeltos" << "Parciales");
    int row = 0;
    qDebug() << "be1";
    QPair<books, booksList::booksWorks> pair;
    if(_book_lister.first()){
        do{
            //ui->tableWidget->setRowCount(row+1);
            pair =_book_lister.item();
            /*qDebug() << pair.first.name();
            qDebug() << QString::number(pair.second.first.length());
            qDebug() << QString::number(pair.second.second.length());*/
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(pair.first.name()));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString("%1").arg(pair.second.first.length())));
            ui->tableWidget->setItem(row++, 2, new QTableWidgetItem(QString("%1").arg(pair.second.second.length())));
        }while(_book_lister.next());
    };
    ui->tableWidget->resizeColumnsToContents();
}
