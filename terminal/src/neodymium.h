#ifndef NEODYMIUM_H
#define NEODYMIUM_H
#include <QObject>
#include "ndbinterface.h"
#include "ndbobject.h"
#include "nconfig.h"
#include "nlog.h"
#include "nconnection.h"
#include "user.h"

#endif // NEODYMIUM_H

namespace nd{
    class neodymium : QObject{
        Q_OBJECT
        public:
            static neodymium*  instance(){
                if(neodymium::t_instance == 0) neodymium::t_instance = new neodymium();
                return neodymium::t_instance;
            }
        public slots:
            bool start(){
                    nd::connection::instance();
                    nd::logger::instance();
                    nd::config::instance();
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
    neodymium* neodymium::t_instance = 0;
    /*bool start(){
        nd::connection::instance();
        nd::logger::instance();
    }
    bool stop(){

    }*/
}
