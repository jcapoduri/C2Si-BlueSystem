#include <QDebug>
#include "uibookwidget.h"
#include "ui_wbookswidget.h"

uiBookWidget::uiBookWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::uiBookWidget)
{
    ui->setupUi(this);
}

uiBookWidget::~uiBookWidget()
{
    delete ui;
}

QJsonObject uiBookWidget::getChosedBook()
{
    QComboBox* box = comboboxes.last();
    return retrieveBookById(box->itemData(box->currentIndex()).toInt(), business.value("books").toArray());
}

void uiBookWidget::setChosedBook(QJsonObject bk)
{

    QList<QJsonObject>  books = treeByBook(bk);
    QJsonObject         book;
    QComboBox*          box;
    int                 i = 0;

    disconnect(ui->primaryComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(comboChanged(int)));
    //take the first from the book tree
    book = books.takeLast();
    ui->primaryComboBox->setCurrentIndex(ui->primaryComboBox->findData(book.value("id").toString().toInt()));
    comboChanged(ui->primaryComboBox);

    while(!books.isEmpty()) {
        box = comboboxes.at(i);
        book = books.takeLast();
        box->setCurrentIndex(box->findData(book.value("id").toString().toInt()));
        comboChanged(box);
        i++;
    };

    connect(ui->primaryComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(comboChanged(int)));
}

void uiBookWidget::setCurrentBusiness(QJsonObject bus)
{
    business = bus;
    QJsonArray books = business.value("books").toArray();
    QJsonObject book;

    for(int i = 0; i < books.count(); i++){
        book = books.at(i).toObject();
        ui->primaryComboBox->addItem(book.value("name").toString(), book.value("id").toString().toInt());
    };
    connect(ui->primaryComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(comboChanged(int)));

    quint64 id = ui->primaryComboBox->itemData(ui->primaryComboBox->currentIndex()).toInt();

    QList<QComboBox *> toAdd = createComboBoxes(retrieveBookById(id, business.value("books").toArray()));
    //qDebug() << "libro: " << t_business->retrieveBookById(id)->internalID();
    QComboBox* who;
    foreach(who, toAdd){
        ui->comboLayout->addWidget(who);
        comboboxes << who;
    }
}

void uiBookWidget::comboChanged(QComboBox *index)
{
    QComboBox* who = index;
    if(ui->primaryComboBox == who){
        qDebug() << "first combo";
        while(!comboboxes.isEmpty()){
            who = comboboxes.takeFirst();
            ui->comboLayout->removeItem(ui->comboLayout->itemAt(ui->comboLayout->indexOf(who)));
            who->deleteLater();
        };
        //who = ui->primaryComboBox;
    }else{
        //who = index;
        bool find = false;
        int  idx = 0;
        while(!find && idx < comboboxes.count()){
            if(comboboxes[idx] == who)
                find = true;
            else
                idx++;
        };
        for(int i = comboboxes.count() - 1; i > idx; i--){
            who = comboboxes.takeAt(i);
            ui->comboLayout->removeItem(ui->comboLayout->itemAt(ui->comboLayout->indexOf(who)));
            delete who;
        };
    };
    who = index;
    quint64 id = who->itemData(who->currentIndex()).toInt();

    QJsonObject     obj = retrieveBookById(id, business.value("books").toArray());
    QList<QComboBox *> toAdd = createComboBoxes(obj);
    foreach(who, toAdd){
        ui->comboLayout->addWidget(who);
        comboboxes << who;
    };
}

QList<QComboBox *> uiBookWidget::createComboBoxes(QJsonObject books)
{
    QList<QComboBox*>   retu;
    QJsonArray          books_arr;
    books_arr = books.value("folder").toArray();

    if(books_arr.count() == 0) return retu; else{
        QComboBox*      box = new QComboBox();
        QJsonObject     book;
        for(int i = 0; i < books_arr.count(); i++){
            book = books_arr.at(i).toObject();
            box->addItem(QString("%1 - %2").arg(book.value("number").toString()).arg(book.value("name").toString()), book.value("id").toString().toInt());
        };
        connect(box, SIGNAL(currentIndexChanged(int)), this, SLOT(comboChanged(int)));
        retu << box;
        retu << createComboBoxes(books_arr.at(0).toObject());
    };
    return retu;
}

QJsonObject uiBookWidget::retrieveBookById(quint16 id, QJsonArray arr)
{
    QJsonObject ret;
    QJsonObject tmp_arr;

    for(int i = 0; i < arr.count(); i++) {
        tmp_arr = arr.at(i).toObject();
        if (tmp_arr.value("id").toString().toInt() == id) {
            ret = tmp_arr;
            break;
        } else {
            tmp_arr = retrieveBookById(tmp_arr.value("id").toString().toInt(), tmp_arr.value("folder").toArray());
            if(!tmp_arr.isEmpty()) {
                ret = tmp_arr;
                break;
            };
        };
    };
    return ret;
}

QList<QJsonObject> uiBookWidget::treeByBook(QJsonObject book, QJsonArray tree)
{
    QJsonObject         tmp_obj;
    QList<QJsonObject>  list;

    for(int i = 0; i < tree.count(); i++) {
        tmp_obj = tree.at(i).toObject();
        if (tmp_obj.value("id").toString().toInt() == book.value("id").toString().toInt()) {
            list << tmp_obj;
            break;
        } else {
            list = treeByBook(book, tmp_obj.value("folder").toArray());
            if(!list.isEmpty()) {
                list << tmp_obj;
                break;
            };
        };
    };

    return list;
}


void uiBookWidget::comboChanged(int index)
{
    Q_UNUSED(index);
    QComboBox* who = dynamic_cast<QComboBox*>(sender());
    comboChanged(who);
}
