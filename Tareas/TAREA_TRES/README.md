# Tarea 3

Universidad de Costa Rica

Estructuras Abstractas de Datos y Algoritmos para Ingeniería IE0217

Profesor: Rafael Esteban Badilla Alvarado

**Estudiante: Evelyn Feng B82870**

I Semestre 2024


## Parte Práctica - Lista de contactos 

Para ejecutar el código siga las siguientes instrucciones digitando:
```
g++ -o out.exe ./principal2.cpp ./agenda.cpp ./contacto.cpp

./out.exe
````

Una vez digitado el código se le desplegará un Menú de opciones donde podrá realizar una de las siguientes funciones:
````
MENU:
Menú Principal:
1. Mostrar Informacion General
2. Comparar Paises
3. Agregar Nuevo Pais
4. Eliminar Pais
5. Salir
Seleccione una opcion:
Selecciona una opcion: //(Acá debe escribir 1, 2, 3 o 4 dependiendo de la acción que desea realizar)
````
Selecciona **1.**

Muestra la información general de acuerdo a lo solicitado en la tarea donde se despliega desde la información general del país hasta las características de cada país.

Selecciona **2.**

Compara dos países de acuerdo a una característica selecta, devuelve verdadero si son tipos de países iguales y false si son diferentes (En desarrollo vrs Primer mundo).

Selecciona **3.**

Agrega un nuevo país.

Selecciona **4.**

Elimina un país existente.

Selecciona **5.**

Sale del Menú.


Menu:
1. Agregar contacto
2. Obtener numero de telefono
3. Eliminar contacto de la memoria
4. Eliminar contacto del Cloud
5. Mostrar todos los contactos lista enlazada
6. Mostrar todos los contactos Cloud
7. Salir
Seleccione una opcion: 1

Ingrese el nombre del contacto: Amanda
Ingrese el numero de telefono: 2222222
Contacto insertado correctamente.

Menu:
1. Agregar contacto
2. Obtener numero de telefono
3. Eliminar contacto de la memoria
4. Eliminar contacto del Cloud
5. Mostrar todos los contactos lista enlazada
6. Mostrar todos los contactos Cloud
7. Salir
Seleccione una opcion: 1

Ingrese el nombre del contacto: Roty Mop
Ingrese el numero de telefono: 12312334
Contacto insertado correctamente.

Menu:
1. Agregar contacto
2. Obtener numero de telefono
3. Eliminar contacto de la memoria
4. Eliminar contacto del Cloud
5. Mostrar todos los contactos lista enlazada
6. Mostrar todos los contactos Cloud
7. Salir
Seleccione una opcion: 5

Contactos almacenados (Lista Enlazada o memoria):
Nombre: Amanda, Telefono: 2222222
Nombre: Juan Gonzales, Telefono: 8234-1234
Nombre: Maria Flores, Telefono: 8855-5678
Nombre: Pedro Calderon, Telefono: 6012-9876
Nombre: Roty Mop, Telefono: 12312334

Menu:
1. Agregar contacto
2. Obtener numero de telefono
3. Eliminar contacto de la memoria
4. Eliminar contacto del Cloud
5. Mostrar todos los contactos lista enlazada
6. Mostrar todos los contactos Cloud
7. Salir
Seleccione una opcion: 6

Contactos almacenados (Tabla Hash o Cloud):
Indice 0: (Nombre: Juan Gonzales, Telefono: 8234-1234)
Indice 1: (Nombre: Amanda, Telefono: 2222222)
Indice 4: (Nombre: Pedro Calderon, Telefono: 6012-9876)
Indice 46: (Nombre: Maria Flores, Telefono: 8855-5678)
Indice 49: (Nombre: Roty Mop, Telefono: 12312334)

Menu:
1. Agregar contacto
2. Obtener numero de telefono
3. Eliminar contacto de la memoria
4. Eliminar contacto del Cloud
5. Mostrar todos los contactos lista enlazada
6. Mostrar todos los contactos Cloud
7. Salir
Seleccione una opcion: 3

Ingrese el nombre del contacto a eliminar: Amanda
Contacto eliminado correctamente.

Menu:
1. Agregar contacto
2. Obtener numero de telefono
3. Eliminar contacto de la memoria
4. Eliminar contacto del Cloud
5. Mostrar todos los contactos lista enlazada
6. Mostrar todos los contactos Cloud
7. Salir
Seleccione una opcion: 5

Contactos almacenados (Lista Enlazada o memoria):
Nombre: Juan Gonzales, Telefono: 8234-1234
Nombre: Maria Flores, Telefono: 8855-5678
Nombre: Pedro Calderon, Telefono: 6012-9876
Nombre: Roty Mop, Telefono: 12312334

Menu:
1. Agregar contacto
2. Obtener numero de telefono
3. Eliminar contacto de la memoria
4. Eliminar contacto del Cloud
5. Mostrar todos los contactos lista enlazada
6. Mostrar todos los contactos Cloud
7. Salir
Seleccione una opcion: 4

Ingrese el nombre del contacto a eliminar: Juan Gonzales
Contacto eliminado correctamente.

Menu:
1. Agregar contacto
2. Obtener numero de telefono
3. Eliminar contacto de la memoria
4. Eliminar contacto del Cloud
5. Mostrar todos los contactos lista enlazada
6. Mostrar todos los contactos Cloud
7. Salir
Seleccione una opcion: 6

Contactos almacenados (Tabla Hash o Cloud):
Indice 1: (Nombre: Amanda, Telefono: 2222222)
Indice 4: (Nombre: Pedro Calderon, Telefono: 6012-9876)
Indice 46: (Nombre: Maria Flores, Telefono: 8855-5678)
Indice 49: (Nombre: Roty Mop, Telefono: 12312334)

Menu:
1. Agregar contacto
2. Obtener numero de telefono
3. Eliminar contacto de la memoria
4. Eliminar contacto del Cloud
5. Mostrar todos los contactos lista enlazada
6. Mostrar todos los contactos Cloud
7. Salir
Seleccione una opcion: 2

Ingrese el nombre del contacto: Pedro Calderon
Numero de telefono de Pedro Calderon: 6012-9876

Menu:
1. Agregar contacto
2. Obtener numero de telefono
3. Eliminar contacto de la memoria
4. Eliminar contacto del Cloud
5. Mostrar todos los contactos lista enlazada
6. Mostrar todos los contactos Cloud
7. Salir
Seleccione una opcion: 7
Saliendo del programa.