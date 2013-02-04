#include "wlistlista.h"

wListLista::wListLista(QWidget *parent) :
    wList(parent)
{
    filter = "done = 0 AND kind = 2";
    t_title = "Listado de trabajos de Lista";
}

/*void wListLista::print()
{

}
*/
