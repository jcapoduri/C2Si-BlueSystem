#include "wbookswidget.h"
#include "ui_wbookswidget.h"
#include "connection.h"
#include "db.h"
#include "mainwidget.h"

wBooksWidget::wBooksWidget(business *current, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wBooksWidget)
{
    ui->setupUi(this);
    t_business = current;
    books *bk = t_business->booksAt(0);
    setComboBook(ui->primaryComboBox, t_business->retrieveBooks());
    setChosedBook(bk);
}

wBooksWidget::wBooksWidget(QWidget *parent):
    QWidget(parent),
    ui(new Ui::wBooksWidget)
{
     ui->setupUi(this);
}

wBooksWidget::~wBooksWidget()
{
    delete ui;
}

books *wBooksWidget::getChosedBook()
{
    if (t_comboboxes.isEmpty()) {
        return t_business->retrieveBookById(ui->primaryComboBox->itemData(ui->primaryComboBox->currentIndex(), Qt::UserRole).toInt());
    } else {
        return t_business->retrieveBookById(t_comboboxes.last()->itemData(t_comboboxes.last()->currentIndex(), Qt::UserRole).toInt());
    };
}

void wBooksWidget::setChosedBook(books *bk)
{    
    QList<books*>   bks;
    books*          b = bk;
    QComboBox*      box;
    int             i = 0;

    //retrieve books hierarchy tree
    while(b != 0){
        bks << b;
        if (b->parent() != 0) {
            b = this->t_business->retrieveBookById(b->parent()->internalID());
        }else{
            b = b->parent();
        };
    };

    b = bk;

    if (b->filesCount() != 0) {
        do {
            b = b->fileAt(0);
            bks.prepend(b);
        } while (b->filesCount() != 0);
    };

    //momentary disconnect comboboxes
    disconnect(ui->primaryComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(comboChanged(int)));

    b = bks.takeLast();

    setComboBook(ui->primaryComboBox, b);

    clearCombos();

    while(!bks.isEmpty()){        
        box = createComboBox(b);
        t_comboboxes << box;

        b = bks.takeLast();

        setComboBook(box, b);

        ui->comboLayout->addWidget(box);
        i++;
        connect(box, SIGNAL(currentIndexChanged(int)), this, SLOT(comboChanged(int)));
    };
    connect(ui->primaryComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(comboChanged(int)));
}

void wBooksWidget::comboChanged(int index)
{
    QComboBox* who = dynamic_cast<QComboBox*>(sender());
    quint64 id = who->itemData(who->currentIndex()).toInt();

    setChosedBook(t_business->retrieveBookById(id));

    emit currentBookChanged(getChosedBook());
}

void wBooksWidget::setCurrentBusiness(business *current)
{
    t_business = current;
    books *bk = t_business->booksAt(0);
    setComboBook(ui->primaryComboBox, t_business->retrieveBooks());
    setChosedBook(bk);

}

void wBooksWidget::setComboBook(QComboBox *cmb, books *bk)
{
    cmb->setCurrentIndex(cmb->findData(bk->internalID()));
}

void wBooksWidget::setComboBook(QComboBox *cmb, QList<books *> bk)
{
    books* b = 0;
    while (!bk.isEmpty()) {
        b = bk.takeFirst();
        cmb->addItem(QString("%1").arg(b->name()), b->internalID());
    };
    connect(cmb, SIGNAL(currentIndexChanged(int)), this, SLOT(comboChanged(int)));
}

void wBooksWidget::comboChanged(QComboBox *index)
{
    quint64 id = index->itemData(index->currentIndex()).toInt();

    setChosedBook(t_business->retrieveBookById(id));

    emit currentBookChanged(getChosedBook());
}

void wBooksWidget::clearCombos()
{
    QComboBox* current;
    while(!t_comboboxes.isEmpty()){
        current = t_comboboxes.takeFirst();
        ui->comboLayout->removeItem(ui->comboLayout->itemAt(ui->comboLayout->indexOf(current)));
        current->deleteLater();
    };
}

QComboBox *wBooksWidget::createComboBox(books *b)
{
    QComboBox* box = new QComboBox();
    books *bk;
    for(int i = 0; i < b->filesCount(); i++){
        bk = b->fileAt(i);
        box->addItem(QString("%1 - %2").arg(bk->number()).arg(bk->name()), bk->internalID());
    };    
    return box;
}
