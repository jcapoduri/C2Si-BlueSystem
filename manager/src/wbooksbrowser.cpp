#include "wbooksbrowser.h"
#include "ui_wbooksbrowser.h"
#include "wbooks.h"

wBooksBrowser::wBooksBrowser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wBooksBrowser)
{
    ui->setupUi(this);
    t_business = nd::db::select<business>().all();

    for(int i = 0; i < t_business.count(); i++){
        ui->businessComboBox->addItem(t_business[i].name());
    };

    connect(ui->addButton, SIGNAL(clicked()), this, SLOT(add()));
    connect(ui->modButton, SIGNAL(clicked()), this, SLOT(mod()));
    connect(ui->delButton, SIGNAL(clicked()), this, SLOT(del()));
    connect(ui->addSonButton, SIGNAL(clicked()), this, SLOT(addSon()));

    connect(ui->businessComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(businessSelected()));
    businessSelected();
    refresh();
}

wBooksBrowser::~wBooksBrowser()
{
    delete ui;
}

void wBooksBrowser::businessSelected()
{
    t_current = &(t_business[ui->businessComboBox->currentIndex()]);
    refresh();
}

void wBooksBrowser::add()
{
    wBooks* form = new wBooks(t_current);
    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);
    connect(form, SIGNAL(updated(books*)), this, SLOT(bookAdded(books*)));
    form->show();
}

void wBooksBrowser::addSon()
{
    wBooks* form = new wBooks(t_current);
    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);
    connect(form, SIGNAL(updated(books*)), this, SLOT(sonBookAdded(books*)));
    form->show();
}

void wBooksBrowser::mod()
{
    QModelIndexList list = ui->treeWidget->selectionModel()->selectedRows(0);
    if(!list.isEmpty()){
        wBooks* form = new wBooks(t_current, t_current->retrieveBookById(list.at(0).data(Qt::UserRole).toInt()));
        form->setAttribute(Qt::WA_DeleteOnClose);
        form->setWindowModality(Qt::ApplicationModal);
        //connect(form, SIGNAL(updated(books*)), this, SLOT(bookAdded(books*)));
        connect(form, SIGNAL(updated(books*)), this, SLOT(refresh()));
        form->show();
    };
}

void wBooksBrowser::del()
{
    QModelIndexList list = ui->treeWidget->selectionModel()->selectedRows(0);
    if(!list.isEmpty()){
        books* bk = t_current->retrieveBookById(list.at(0).data(Qt::UserRole).toInt());
        t_current->removeBooks(bk);
        refresh();
    };
}

void wBooksBrowser::bookAdded(books *bk)
{
    qDebug() << bk;
    t_current->addbooks(bk);
    bk->commit(0);
    t_current->commit(0);
    refresh();
}

void wBooksBrowser::sonBookAdded(books *bk)
{
    QModelIndexList list = ui->treeWidget->selectionModel()->selectedRows(0);
    if(!list.isEmpty()){
        qDebug() << "user role: " << list.at(0).data(Qt::UserRole).toInt();
        books* pbk = t_current->retrieveBookById(list.at(0).data(Qt::UserRole).toInt());
        qDebug() << "add book added" << pbk->internalID();
        pbk->addBook(bk);
        bk->commit(0);
        //t_current->commit(0);
        refresh();
    }else{
        bk->erase(0);
        delete bk;
    };
}

void wBooksBrowser::refresh()
{
    ui->treeWidget->clear();
    ui->treeWidget->setHeaderLabels(QStringList() << "Numero" << "Nombre");
    int i;
    for(i = 0; i < t_current->booksCount(); i++){
        ui->treeWidget->addTopLevelItem(createItem(t_current->booksAt(i)));
    };
}

QTreeWidgetItem *wBooksBrowser::createItem(books *bk)
{
    QTreeWidgetItem* item = new QTreeWidgetItem(QStringList() << QString::number(bk->number()) << bk->name());
    int i;
    for(int i = 0; i < bk->filesCount(); i++){
        item->addChild(createItem(bk->fileAt(i)));
    };
    item->setData(0, Qt::UserRole, bk->internalID());
    return item;
}
