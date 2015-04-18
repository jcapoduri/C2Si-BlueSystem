Neodymium Framework v0.1.00

Sinopsis:
OMR basado en Qt/c++, 

Metodo de uso:
Cada objecto que quiera ser guardado en una db, debe heredar de nd::dbInterface
debe implementar las funciones fields y setFieldValue
ademas en el constructor debe llenar la variable t_fieldNames con string correspondientes a los campos de la db a guardar
llenar la variable durante la construccion t_tablename, con el nombre de la tabla que guardara el objeto
setear valor para t_instanced, para lograr un objeto instanciado o no

existen 3 funciones fundamentales
commit - guardar datos en la db
update - actualizar objeto con datos de la db
erase - marcar el objeto como borrado

ademas de n funciones adicionales para un trabajo comodo
touch - modifica la fecha de modificacion de un objeto
raise - actualiza objetos con datos de la db, aun si estos han sido borrados
//retrieveList - regresa una lista donde un campo obedesca un criterio especifico

Objetos principales:
connection - asegura y manega las conecciones asi como las peticiones a las mismas y su sincronizacion
logger - manega la informacion de los eventos para guardarlos
base/interface - prove a los objetos de la posibilidad de guardarse
object - objeto standar, contiene todos los valores necesarios para transformalo en otros objetos del tipo dbInterface
utils
db
config