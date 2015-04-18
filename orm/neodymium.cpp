#include "neodymium.h"

using namespace nd;

neodymium* neodymium::t_instance = 0;


neodymium* neodymium::instance(){
    if(neodymium::t_instance == 0) neodymium::t_instance = new neodymium();
    return neodymium::t_instance;
}
