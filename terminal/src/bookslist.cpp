#include "bookslist.h"

booksList::booksList(business *b, QObject *parent) :
    QObject(parent),
    _business(b),
    _workorder_lister(b, this)
{
    _workorder_lister.addState(workorder::Waiting);
    _workorder_lister.addState(workorder::Fotocopiando);
    _workorder_lister.addState(workorder::Anillando);
    _workorder_lister.setFromDate(QDateTime::currentDateTime().addYears(-1));
    _workorder_lister.setToDate(QDateTime::currentDateTime().addYears(1));
}

QPair<books, booksList::booksWorks> booksList::item(){    
    //QPair<books, booksList::booksWorks> return_pair;
    books bk = _currentStrip.keys().at(_index);
    //return_pair.second = _currentStrip.value(return_pair.first);
    return qMakePair(books(bk), _currentStrip.value(bk));
    //return return_pair;
}

bool booksList::query()
{
    _currentStrip.clear();
    _workorder_lister.query();
    job        *current_job;
    if(_workorder_lister.first()){
        do{
            //only select from lista
            //qDebug() << ;
            workorder w = _workorder_lister.item();
            if(!w.lista()) continue;
            qDebug() << "lista!";
            booksWorks work;
            current_job = job::fromWorkorder(&(w));
            //qDebug() << current_job;
            books bk  = *(current_job->currentBook());
            if(_currentStrip.contains(bk))
                work = _currentStrip.value(bk);

            if(w.doComplete())
                work.first.append(w);
            else
                work.second.append(w);
            _currentStrip.insert(bk, work);
            delete current_job;
        }while(_workorder_lister.next());
    };
    /*qDebug() << _currentStrip.count();
    for(int i = 0; i < _currentStrip.count(); i++){
        qDebug() << _currentStrip.keys().at(i).internalID();
    };*/
    emit queryDone();
}
