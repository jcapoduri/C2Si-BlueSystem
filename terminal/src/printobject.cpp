#include "printobject.h"
#include <QPrintDialog>
#include <QPainter>
#include <QPrintPreviewDialog>
#include <QPrinter>
#include <QPrintDialog>
#include <QTime>

printObject::printObject(QObject *parent) :
    QObject(parent)
{
}

void printObject::printJob(job *j)
{
    QPrinter *printer = new QPrinter(QPrinter::HighResolution);
    printer->setPageSize(QPrinter::A5);
    printer->setPaperSize(QPrinter::A5);
    printer->setOrientation(QPrinter::Portrait);
    printer->setFullPage(true);
    t_job = j;

    QPrintPreviewDialog dialog(printer);
    dialog.setWindowModality(Qt::ApplicationModal);
    connect(&dialog, SIGNAL(paintRequested(QPrinter* )), this, SLOT(paintJobRequest(QPrinter*)));
    dialog.exec();
    delete printer;
}

void printObject::printList(QList<wListWorkorder *> &list, QString title)
{
    QPrinter *printer = new QPrinter();
    printer->setPageSize(QPrinter::A4);
    //printer->setPaperSize(QPrinter::A4);
    printer->setOrientation(QPrinter::Portrait);
    printer->setFullPage(true);
    t_ww = &(list);
    t_title = title;

    QPrintPreviewDialog dialog(printer);
    dialog.setWindowModality(Qt::ApplicationModal);
    connect(&dialog, SIGNAL(paintRequested(QPrinter* )), this, SLOT(paintListRequest(QPrinter*)));
    dialog.exec();
    /*QPrintDialog dialog;

    if(dialog.exec() != QDialog::Accepted) return;

    QPrinter *printer = dialog.printer();
    paintListRequest(printer)*/;
}

void printObject::printWorkorder(workorder *w)
{

}

void printObject::printSQLModel(QSqlQueryModel* model, QString title)
{
    t_model = model;
    t_title = title;
    QPrinter *printer = new QPrinter();
    printer->setPageSize(QPrinter::A4);
    printer->setOrientation(QPrinter::Portrait);
    printer->setFullPage(true);

    QPrintPreviewDialog dialog(printer);
    dialog.setWindowModality(Qt::ApplicationModal);
    connect(&dialog, SIGNAL(paintRequested(QPrinter* )), this, SLOT(paintSqlModelRequest(QPrinter*)));
    dialog.exec();
    delete printer;
}

bool printObject::printModel(QAbstractItemModel *model, QString title)
{
    t_abs_model = model;
    t_title = title;
    QPrinter *printer = new QPrinter();
    printer->setPageSize(QPrinter::A4);
    printer->setOrientation(QPrinter::Portrait);
    printer->setFullPage(true);

    QPrintPreviewDialog dialog(printer);
    dialog.setWindowModality(Qt::ApplicationModal);
    connect(&dialog, SIGNAL(paintRequested(QPrinter* )), this, SLOT(paintModelRequest(QPrinter*)));
    return (dialog.exec() == QDialog::Accepted);
}

bool printObject::printTable(QTableWidget *model, QString title)
{
    t_table = model;
    t_title = title;
    QPrinter *printer = new QPrinter();
    printer->setPageSize(QPrinter::A4);
    printer->setOrientation(QPrinter::Portrait);
    printer->setFullPage(true);

    QPrintPreviewDialog dialog(printer);
    dialog.setWindowModality(Qt::ApplicationModal);
    connect(&dialog, SIGNAL(paintRequested(QPrinter* )), this, SLOT(paintTableRequest(QPrinter*)));
    return (dialog.exec() == QDialog::Accepted);
}

bool printObject::printOutOfOrder(int from, int howMany, business *bus)
{
    t_from = from;
    t_many = howMany;
    t_buss = bus;

    QPrinter *printer = new QPrinter(QPrinter::HighResolution);
    printer->setPageSize(QPrinter::A5);
    printer->setPaperSize(QPrinter::A5);
    printer->setOrientation(QPrinter::Portrait);
    printer->setFullPage(true);

    QPrintPreviewDialog dialog(printer);
    dialog.setWindowModality(Qt::ApplicationModal);
    connect(&dialog, SIGNAL(paintRequested(QPrinter* )), this, SLOT(paintOutOfOrderRequest(QPrinter*)));
    return (dialog.exec() == QDialog::Accepted);
}

void printObject::paintRequest(QPrinter *printer)
{
    QPrinter *p = new QPrinter(QPrinter::HighResolution);
    p->setOrientation(QPrinter::Landscape);
    p->setPageSize(QPrinter::A6);
    p->setPaperSize(QPrinter::A6);

    QPainter *painter = new QPainter();
    Ui::piworkorder *printiui = new Ui::piworkorder();
    Ui::pworkorder *printui = new Ui::pworkorder();
    QWidget *layout = new QWidget();
    QWidget *ilayout = new QWidget();

    /*QFont barcodefont = QFont("Code 128", 200, QFont::Normal);
    barcodefont.setLetterSpacing(QFont::AbsoluteSpacing,10.0);*/

    printui->setupUi(layout);
    printiui->setupUi(ilayout);
    printui->barcodeLabel->setText(toCode128(t_job->tablename()));
    //printui->barcodeLabel->setFont(barcodefont);

    //layout->resize(printer->pageRect().size());
    layout->resize(printer->pageRect().size().width(), printer->pageRect().size().height() / 2);
    ilayout->resize(printer->pageRect().size().width(), printer->pageRect().size().height() / 2);

    //guardo los datos en los layouts


    QPixmap picture;
    //painter->save();
    painter->begin(printer);

    picture = QPixmap::grabWidget(layout);
    //picture = picture.scaled(QSize(printer->paperRect().size().height(), printer->paperRect().size().width() / 2), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    //qDebug() << p->pageRect().size();
    int marginx = (printer->paperRect().width() - layout->size().width()) / 2;
    int marginy = (printer->paperRect().height() - layout->size().height() * 2) / 2;
    painter->drawPixmap(marginx, marginy, picture);
    painter->drawPixmap(marginx, marginy + +picture.height(), picture);

    //layout->render(painter);
    qDebug() << "layout size" << layout->size();

    painter->end();

    delete p;
}

void printObject::paintJobRequest(QPrinter *printer)
{
    QTime t;
    t.start();
    int marginx;
    int marginy;
    //creo printer para encontrar las medidas del papel
    qDebug() << "elapsed: " << t.elapsed();
    //QPrinter *p = new QPrinter();
    qDebug() << "elapsed: " << t.elapsed();
    //creo painter para imprimir
    QPainter *painter = new QPainter();
    qDebug() << "elapsed: " << t.elapsed();
    //creo el pixmap que hara de un widget una imagen
    QPixmap picture;
    //seteo impresora
    /*p->setOrientation(QPrinter::Landscape);
    p->setPageSize(QPrinter::A6);
    p->setPaperSize(QPrinter::A6);    
    qDebug() << "elapsed: " << t.elapsed();*/

    //inicio impresion
    painter->begin(printer);
    qDebug() << "after init elapsed: " << t.elapsed();

    qDebug() << "impreison inicializada";

    workorder* w;
    QWidget* item;
    qDebug() << "impresion count: " << t_job->workCount();
    for(int i = 0; i < t_job->workCount(); i++){
        qDebug() << "impresion workorder: " << i;
        qDebug() << "elapsed: " << t.elapsed();
        w = t_job->workAt(i);
        item = getInternalWorkOrders(w);
        qDebug() << "after getinternal elapsed: " << t.elapsed();
        item->resize(printer->pageRect().size().width(), printer->pageRect().size().height() / 2);
        qDebug() << "resize elapsed: " << t.elapsed();
        marginx = (printer->paperRect().width() - item->size().width()) / 2;
        marginy = (printer->paperRect().height() - item->size().height() * 2) / 2;
        qDebug() << "elapsed: " << t.elapsed();
        picture = QPixmap::grabWidget(item);
        qDebug() << "elapsed: " << t.elapsed();
        painter->drawPixmap(marginx, marginy, picture);
        qDebug() << "elapsed: " << t.elapsed();
        delete item; item = 0;
        item = getWorkOrders(w);
        item->resize(printer->pageRect().size().width(), printer->pageRect().size().height() / 2);
        qDebug() << "elapsed: " << t.elapsed();
        picture = QPixmap::grabWidget(item);
        qDebug() << "elapsed: " << t.elapsed();
        painter->drawPixmap(marginx, marginy + +picture.height(), picture);
        qDebug() << "elapsed: " << t.elapsed();
        delete item; item = 0;
        if(i < t_job->workCount() - 1) printer->newPage();
    };
    qDebug() << "impreison por finalizar";
    //termino impresion
    painter->end();
    qDebug() << "impresion finalizada";
    qDebug() << "elapsed: " << t.elapsed();
    //libero recursos
    delete painter;
}

void printObject::paintListRequest(QPrinter *printer)
{
    /*int marginx;
    int marginy;*/
    //creo painter para imprimir
    QPainter *painter = new QPainter();
    //creo el pixmap que hara de un widget una imagen
    QPixmap picture;
    //seteo impresora
    printer->setPageSize(QPrinter::A4);
    printer->setFullPage(true);

    Ui::plist *ui = new Ui::plist();
    QWidget *_widget = new QWidget();
    _widget->resize(printer->pageRect().size());
    ui->setupUi(_widget);

    ui->titleLabel->setText(t_title);
    ui->dateLabel->setText(QDateTime::currentDateTime().toString("d MMMM hh:mm"));

    painter->begin(printer);
    float _max_per_page = 17.0; // item per pages
    int _pages = (t_ww->length() / _max_per_page) + 1;
    qDebug() << _pages;
    _widget->resize(printer->pageRect().size());
    for(int _i = 1; _i <= _pages; _i++){
        ui->pageLabel->setText(QString("Pagina: %1/%2").arg(_i).arg(_pages));
        QLayoutItem* _item;
        while((_item = ui->scrollArea->widget()->layout()->takeAt(0)) != 0){
            //delete _item->widget();
            //delete _item;
            ui->scrollArea->widget()->layout()->removeItem(_item);
        };
        int _max = _max_per_page * _i;
        if(_max > t_ww->length()) _max = t_ww->length();
        int _init_j = (_max_per_page * (_i - 1));
        for(int _j = _init_j; _j < _max; _j++){
            ui->scrollArea->widget()->layout()->addWidget(t_ww->at(_j));
        };
        picture = QPixmap::grabWidget(_widget, _widget->rect());
        painter->drawPixmap(0, 0,  picture);
        if(_i != _pages) printer->newPage();
    };

    painter->end();


    delete ui;
    delete _widget;
}

void printObject::paintSqlModelRequest(QPrinter *printer)
{
    while(t_model->canFetchMore()) t_model->fetchMore();
    //creo painter para imprimir
    QPainter *painter = new QPainter();
    //creo el pixmap que hara de un widget una imagen
    QPixmap picture;
    //seteo impresora
    printer->setPageSize(QPrinter::A4);
    printer->setFullPage(true);

    Ui::pmodellist *ui = new Ui::pmodellist();
    QWidget *_widget = new QWidget();
    _widget->resize(printer->pageRect().size());
    ui->setupUi(_widget);

    ui->titleLabel->setText(t_title);
    ui->dateLabel->setText(QDateTime::currentDateTime().toString("d MMMM hh:mm"));

    painter->begin(printer);
    float _max_per_page = 31.0; // item per pages
    int _pages = (t_model->rowCount() / _max_per_page) + 1;
    qDebug() << "pages:" << _pages;
    ui->tableWidget->setColumnCount(t_model->columnCount());
    for(int _i = 0; _i < t_model->columnCount(); _i++){
        ui->tableWidget->setHorizontalHeaderItem(_i, new QTableWidgetItem(t_model->headerData(_i, Qt::Horizontal).toString()));
    };
    _widget->resize(printer->pageRect().size());
    for(int _i = 1; _i <= _pages; _i++){
        ui->pageLabel->setText(QString("Pagina: %1/%2").arg(_i).arg(_pages));
        ui->tableWidget->clear();
        ui->tableWidget->setRowCount(0);
        int _max = _max_per_page * _i;
        if(_max > t_model->rowCount()) _max = t_model->rowCount();
        qDebug() << "t";
        ui->tableWidget->setRowCount(_max);
        int _init_j = (_max_per_page * (_i - 1));
        for(int _j = _init_j; _j < _max; _j++){
            qDebug() << "t" << _j;
            for(int _k = 0; _k < t_model->columnCount(); _k++){
                qDebug() << "t" << _j << _k;
                ui->tableWidget->setItem(_j, _k, new QTableWidgetItem(t_model->data(t_model->index(_j, _k)).toString()));
            };
        };
        qDebug() << "t row cout:" << t_model->rowCount();
        picture = QPixmap::grabWidget(_widget, _widget->rect());
        painter->drawPixmap(0, 0,  picture);



        if(_i != _pages) printer->newPage();
    };

    painter->end();
    delete ui;
    delete _widget;
}

void printObject::paintModelRequest(QPrinter *printer)
{
    //while(t_model->canFetchMore()) t_model->fetchMore();
    //creo painter para imprimir
    QPainter *painter = new QPainter();
    //creo el pixmap que hara de un widget una imagen
    QPixmap picture;
    //seteo impresora
    printer->setPageSize(QPrinter::A4);
    printer->setFullPage(true);

    Ui::pmodellist *ui = new Ui::pmodellist();
    QWidget *_widget = new QWidget();
    _widget->resize(printer->pageRect().size());
    ui->setupUi(_widget);

    ui->titleLabel->setText(t_title);
    ui->dateLabel->setText(QDateTime::currentDateTime().toString("d MMMM hh:mm"));

    painter->begin(printer);
    float _max_per_page = 31.0; // item per pages
    int _pages = (t_abs_model->rowCount() / _max_per_page) + 1;
    qDebug() << "pages:" << _pages;
    ui->tableWidget->setColumnCount(t_abs_model->columnCount());
    for(int _i = 0; _i < t_abs_model->columnCount(); _i++){
        ui->tableWidget->setHorizontalHeaderItem(_i, new QTableWidgetItem(t_abs_model->headerData(_i, Qt::Horizontal).toString()));
    };
    _widget->resize(printer->pageRect().size());
    for(int _i = 1; _i <= _pages; _i++){
        ui->pageLabel->setText(QString("Pagina: %1/%2").arg(_i).arg(_pages));
        ui->tableWidget->clear();
        ui->tableWidget->setRowCount(0);
        int _max = _max_per_page * _i;
        if(_max > t_abs_model->rowCount()) _max = t_abs_model->rowCount();
        qDebug() << "t";
        ui->tableWidget->setRowCount(_max);
        int _init_j = (_max_per_page * (_i - 1));
        for(int _j = _init_j; _j < _max; _j++){
            qDebug() << "t" << _j;
            for(int _k = 0; _k < t_abs_model->columnCount(); _k++){
                qDebug() << "t" << _j << _k;
                ui->tableWidget->setItem(_j, _k, new QTableWidgetItem(t_abs_model->data(t_abs_model->index(_j, _k)).toString()));
            };
        };
        qDebug() << "t row cout:" << t_abs_model->rowCount();
        picture = QPixmap::grabWidget(_widget, _widget->rect());
        painter->drawPixmap(0, 0,  picture);



        if(_i != _pages) printer->newPage();
    };

    painter->end();
    delete ui;
    delete _widget;
}

void printObject::paintOutOfOrderRequest(QPrinter *printer)
{
    int marginx;
    int marginy;
    QPixmap picture;
    int business_number = 1000 - t_buss->internalID();
    QPainter *painter = new QPainter();
    Ui::piworkorder *ilayout = new Ui::piworkorder();
    Ui::pworkorder *layout = new Ui::pworkorder();
    QWidget *item = new QWidget();
    QWidget *iitem = new QWidget();

    ilayout->setupUi(iitem);
    layout->setupUi(item);
    painter->begin(printer);
    for(int num = t_from; num < t_many; num++){
        layout->barcodeLabel->setText(toCode128(QString("%1-%2").arg(business_number).arg(num)));
        layout->readableBarcodeLabel->setText(QString("%1-%2").arg(business_number).arg(num));
        ilayout->barcodeLabel->setText(toCode128(QString("%1-%2").arg(business_number).arg(num)));
        ilayout->readableBarcodeLabel->setText(QString("%1-%2").arg(business_number).arg(num));

        iitem->resize(printer->pageRect().size().width(), printer->pageRect().size().height() / 2);
        marginx = (printer->paperRect().width() - iitem->size().width()) / 2;
        marginy = (printer->paperRect().height() - iitem->size().height() * 2) / 2;
        picture = QPixmap::grabWidget(iitem);
        painter->drawPixmap(marginx, marginy, picture);
        item->resize(printer->pageRect().size().width(), printer->pageRect().size().height() / 2);
        picture = QPixmap::grabWidget(item);
        painter->drawPixmap(marginx, marginy + picture.height(), picture);
        if(num < t_many - 1) printer->newPage();
    };
    painter->end();
    /*delete item;
    delete iitem;
    delete layout;
    delete ilayout;*/
}

void printObject::paintTableRequest(QPrinter *printer)
{
    //while(t_model->canFetchMore()) t_model->fetchMore();
    //creo painter para imprimir
    QPainter *painter = new QPainter();
    //creo el pixmap que hara de un widget una imagen
    QPixmap picture;
    //seteo impresora
    printer->setPageSize(QPrinter::A4);
    printer->setFullPage(true);

    Ui::pmodellist *ui = new Ui::pmodellist();
    QWidget *_widget = new QWidget();
    _widget->resize(printer->pageRect().size());
    ui->setupUi(_widget);

    ui->titleLabel->setText(t_title);
    ui->dateLabel->setText(QDateTime::currentDateTime().toString("d MMMM hh:mm"));
    qDebug() << "test";
    painter->begin(printer);
    float _max_per_page = 31.0; // item per pages
    int _pages = (t_table->rowCount() / _max_per_page) + 1;
    qDebug() << "pages:" << _pages;
    ui->tableWidget->setColumnCount(t_table->columnCount());
    for(int _i = 0; _i < t_table->columnCount(); _i++){
        ui->tableWidget->setHorizontalHeaderItem(_i, new QTableWidgetItem(*(t_table->horizontalHeaderItem(_i))));
        //ui->tableWidget->setHorizontalHeaderItem(_i, t_table->horizontalHeaderItem(_i));
    };
    _widget->resize(printer->pageRect().size());
    for(int _i = 1; _i <= _pages; _i++){
        ui->pageLabel->setText(QString("Pagina: %1/%2").arg(_i).arg(_pages));
        ui->tableWidget->clear();
        ui->tableWidget->setRowCount(0);
        int _max = _max_per_page * _i;
        if(_max > t_table->rowCount()) _max = t_table->rowCount();
        qDebug() << "t";
        ui->tableWidget->setRowCount(_max);
        int _init_j = (_max_per_page * (_i - 1));
        for(int _j = _init_j; _j < _max; _j++){
            qDebug() << "t" << _j;
            for(int _k = 0; _k < t_table->columnCount(); _k++){
                qDebug() << "t" << _j << _k;
                ui->tableWidget->setItem(_j, _k, new QTableWidgetItem(*(t_table->item(_j, _k))));
                //ui->tableWidget->setItem(_j, _k, (t_table->itemAt(_j, _k)));
            };
        };
        qDebug() << "t row cout:" << t_table->rowCount();
        picture = QPixmap::grabWidget(_widget, _widget->rect());
        painter->drawPixmap(0, 0,  picture);



        if(_i != _pages) printer->newPage();
    };

    painter->end();
    delete ui;
    delete _widget;
}


QWidget *printObject::getInternalWorkOrders(workorder *w)
{
    Ui::piworkorder *item = new Ui::piworkorder();
    QWidget* _toRet = new QWidget();
    item->setupUi(_toRet);

    item->barcodeLabel->setText(toCode128(QString("%1-%2-%3").arg(w->bussiness()->internalID()).arg(t_job->internalID())).arg(w->internalID()));
    item->readableBarcodeLabel->setText(QString("%1-%2-%3").arg(w->bussiness()->internalID()).arg(t_job->internalID()).arg(w->internalID()));
    //item->readableBarcodeLabel->setText(toCode128(QString("%1-%2").arg(w->bussiness()->internalID()).arg(t_job->internalID())));
    item->worknameLabel->setText(w->descripcion());
    item->recibidoLabel->setText(user::getUserName(w->userOwner()->internalID()));

    item->nameLabel->setText(w->costumerName());
    item->nroLabel->setText(QString::number(w->copies()));
    item->fechaValueLabel->setText(w->deadLine().date().toString("dddd dd MMM"));
    item->horaValueLabel->setText(w->deadLine().time().toString());

    item->completeLabel->setText(w->doComplete() ? "SI" : "NO");
    //item->howToLabel->setText(w->howto());
    switch(w->howto()){
        case workorder::TwoinOneDF:
            item->howToLabel->setText("2 en 1 DF");
            break;
        case workorder::TwoinOneSF:
            item->howToLabel->setText("2 en 1 SF");
            break;
        case workorder::HHDF:
            item->howToLabel->setText("H por H DF");
            break;
        case workorder::HHSF:
            item->howToLabel->setText("H por H SF");
            break;
        case workorder::toDF:
            item->howToLabel->setText("pasar a DF");
            break;
        case workorder::toSF:
            item->howToLabel->setText("pasar a SF");
            break;
        case workorder::likeThat:
            item->howToLabel->setText("Como esta");
            break;
    };

    item->anilladoLabel->setText(w->conAnillado() ? "SI" : "NO");
    if(w->conAnillado()){
        if(w->anilladoHowTo() == workorder::Superior) item->anillarWhereLabel->setText("Superior");
        if(w->anilladoHowTo() == workorder::Lateral) item->anillarWhereLabel->setText("Lateral");
        if(w->anilladoHowTo() == workorder::Inferior) item->anillarWhereLabel->setText("Inferior");
    };
    item->fotocopiaValueLabel->setText(QString::number(w->totalFotocopias()));
    item->anilladoValueLabel->setText(QString::number(w->anillado()));
    item->sennaValueLabel->setText(QString::number(w->senna()));
    item->totalValueLabel->setText(QString::number(w->total()));

    item->plainTextEdit->setPlainText(w->observations());
    delete item;
    return _toRet;
}

QWidget *printObject::getWorkOrders(workorder *w)
{
    Ui::pworkorder *item = new Ui::pworkorder();
    QWidget* _toRet = new QWidget();
    item->setupUi(_toRet);

    item->barcodeLabel->setText(toCode128(QString("%1-%2-%3").arg(w->bussiness()->internalID()).arg(t_job->internalID())).arg(w->internalID()));
    item->readableBarcodeLabel->setText(QString("%1-%2-%3").arg(w->bussiness()->internalID()).arg(t_job->internalID()).arg(w->internalID()));

    item->nameLabel->setText(w->costumerName());
    item->nroJuegosLabel->setText(QString::number(w->copies()));

    item->fotocopiaValueLabel->setText(QString::number(w->totalFotocopias()));
    item->sennaValueLabel->setText(QString::number(w->senna()));
    item->anilladoValueLabel->setText(QString::number(w->anillado()));
    item->totalValueLabel->setText(QString::number(w->total()));

    item->fechaValueLabel->setText(w->deadLine().date().toString("dddd dd MMMM"));
    item->horaValueLabel->setText(w->deadLine().time().toString("hh:mm"));
    delete item;
    return _toRet;
}

printObject *printObject::instance()
{
    if(t_instance == 0){
        t_instance = new printObject();
    };
    return t_instance;
}

QString printObject::toCode128(QString value)
{
    int sum = 104;
    int j = 1;
    char c;
    for(int i = 0; i < value.count(); i++){
        c = value[i].toAscii();
        c = c - 32; //to cod128 value
        sum += c * j;
        j++;
    };
    //qDebug() << "sum:"<<sum;
    c = sum % 103;
    qDebug() << "c1:" << c;
    if(c < 95){
        c += 32;
    }else{
        c += 105;
    };
//    if(c > 94) c += 50;

    qDebug() << "c2:" << c;
    //"Ñ" + t_job->tablename() + "Ó"
    qDebug() << 'Ñ' + (value + c) + 'Ó';;
    return 'Ñ' + (value + c) + 'Ó';
    /*qDebug() << '\xCC' + (value + c) + '\xCE';;
    return '\xCC' + (value + c) + '\xCE';*/
    /*qDebug() << '\xCC' + value + '\xCE';
    return '\xCC' + value + '\xCE';*/
}

printObject* printObject::t_instance = 0;
