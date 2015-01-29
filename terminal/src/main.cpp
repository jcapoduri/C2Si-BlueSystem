#include <QApplication>
#include "mainwidget.h"

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(resources);

    QApplication a(argc, argv);

    QTranslator translator;
    translator.load("qt_es");
    a.installTranslator(&translator);
    QLocale::setDefault(QLocale(QLocale::Spanish, QLocale::Argentina));

    mainWidget *w = mainWidget::instance();    
    w->connectToDB();    
    w->show();    
    a.setQuitOnLastWindowClosed(false);
    a.setWindowIcon(QIcon(":/icons/graphics/casitaazul.ico"));
    return a.exec();
}
