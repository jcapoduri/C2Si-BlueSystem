#include "wlistclient.h"

wListClient::wListClient(QWidget *parent) :
    wList(parent)
{
    filter = "done = 0 AND NOT(kind = 2)";
    t_title = "Listado de trabajos de Clientes";
}

/*void wListClient::print()
{

}*/
