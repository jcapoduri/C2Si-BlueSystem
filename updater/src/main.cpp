#include <QtGui/QApplication>
#include <QDebug>
#include "widget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    //if(a.arguments().contains("-clearupdates")) w.clearUpdates();
    qDebug() << a.arguments();
    int _program_at = a.arguments().indexOf("-program");
    if(_program_at != -1) w.setPageFolder(a.arguments().at(_program_at + 1) + "/");
    _program_at = a.arguments().indexOf("-output");
    if(_program_at != -1) w.setUpdateFolder(a.arguments().at(_program_at + 1) + "/");
    if(a.arguments().contains("-fromscratch")){
        w.restoreFromScrath();
    }else{
        w.performeUpdate();
    };

    return a.exec();
}
