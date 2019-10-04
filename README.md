
C2Si-BlueSystem
===============

## Instalacion
- Instalar WAMP.net (preferentemente en el disco D:\Wamp)
- Instalar MySql (ultima version), poner password unico a root
- Ir a D:\Wamp\bin\[carpeta de sql] y editar el archivo my.conf
- Agregar la siguiente linea: 
  - sql-mode="NO_AUTO_VALUE_ON_ZERO"
- Iniciar el servidor
- Correr los scripts schema.sql y data.sql de la carpeta schema dentro del sistema

