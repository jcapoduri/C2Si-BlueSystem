#ifndef NEODYMIUM_H
#define NEODYMIUM_H
#include <QObject>
#include <QSqlQuery>
#include "interface.h"
#include "object.h"
#include "config.h"
#include "logger.h"
#include "relation.h"
#include "connection.h"

#endif // NEODYMIUM_H

namespace nd{
    class neodymium : QObject{
        Q_OBJECT
        public:
            static neodymium*  instance();
        public slots:
            bool start(){
                    nd::connection::instance();
                    nd::config::instance();
                    nd::logger::instance();
                    return true;
                }
            bool stop(){
                    nd::connection::deleteLater();
                    return true;
                }
        private:
            neodymium(){}
            static neodymium* t_instance;
    };
    /*bool start(){
        nd::connection::instance();
        nd::logger::instance();
    }
    bool stop(){

    }*/


}
