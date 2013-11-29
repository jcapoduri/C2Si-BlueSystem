#include "manager.h"

manager::manager(QJsonValue init_data, QObject *parent) :
    QObject(parent)
{
    // initializating nd for the application
    solution = new nd::solution(init_data);
    app = solution->startApp("pc");
    bar = 0;
}

void manager::setBar(){
    if (!bar) {
        bar = new bluebar();
        bar->setAttribute(Qt::WA_DeleteOnClose);
    };
    bar->show();
}
