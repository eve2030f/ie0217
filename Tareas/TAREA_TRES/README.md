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
Menu:
1. Agregar contacto
2. Obtener numero de telefono
3. Eliminar contacto de la memoria
4. Eliminar contacto del Cloud
5. Mostrar todos los contactos lista enlazada
6. Mostrar todos los contactos Cloud
7. Salir
Selecciona una opcion: //(Acá debe escribir un número del 1 al 7 dependiendo de la acción que desea realizar)
````
Selecciona **1.**

Le pedirá un nombre y al darle ENTER le pedira el número de teléfono a agregar.

````
Seleccione una opcion: 1

Ingrese el nombre del contacto: Amanda
Ingrese el numero de telefono: 2222-2222
Contacto insertado correctamente.
````

Selecciona **2.**

Se utiliza para buscar un número según el nombre. Se le pide un nombre completo y si existe el contacto se le despliega el número.

Selecciona **3.**

Elimina el contacto de almacenamiento de la memoria o de la memoria dinámica.

Selecciona **4.**

Elimina el contacto del Hash Table o Cloud. 

Selecciona **5.**

Muestra los contactos presentes en el almacenamiento de la memoria o de la memoria dinámica. Estos sí salen ordenados alfabéticamente.

Selecciona **6.**

Muestra los contactos presentes en el Hash Table o Cloud. Cabe destacar que, este print de la tabla hash es para proporcionar acceso rapido a los datos, por eso no salen ordenados alfabéticaente.

Selecciona **7.**

Sale del Menu.


## Link de Doxyfile por medio del Netlify haga click a:

https://6619536431528000a97406bd--friendly-valkyrie-c685a8.netlify.app/



## Parte Teórica

### 1.	¿Qué es un algoritmo y cuáles son sus características principales? 

Un algoritmo es un conjunto de instrucciones o reglas que se siguen para resolver un problema o realizar una tarea. Sus características principales incluyen:

•	Precisión y debe estar bien definido.
•	Debe terminar después de un número finito de pasos.
•	Determinismo que debe producir el mismo resultado cada vez que se ejecuta con las mismas entradas.
•	Eficiencia la resolución en un tiempo razonable y utilizando recursos adecuados.

### 2.	Explica la diferencia entre un algoritmo eficiente y uno ineficiente. 

Un algoritmo eficiente resuelve un problema en un tiempo razonable y utilizando la menor cantidad posible de recursos, como tiempo de ejecución y memoria. Por otro lado, un algoritmo ineficiente puede resolver el mismo problema, pero consume más recursos y/o tarda más tiempo en hacerlo. Para la industria puede resultar más caro.

### 3.	¿Qué es una estructura de datos y por qué son importantes? 
Una estructura de datos es una forma de organizar y almacenar datos en la memoria de una computadora para que puedan ser utilizados de manera eficiente. Estos permiten manipular grandes cantidades de datos de manera organizada y eficiente, lo que facilita el desarrollo de programas complejos.

### 4.	Describe las diferencias entre una estructura de datos estática y una dinámica. 

Una estructura de datos estática tiene un tamaño fijo que se determina en tiempo de compilación y no puede modificarse durante la ejecución del programa. Uuna estructura de datos dinámica puede cambiar de tamaño durante la ejecución del programa, lo que permite manejar datos de tamaño variable de manera más eficiente.

### 5.	¿Qué es la memoria dinámica y cómo se gestiona en lenguajes de programación como C++, explicando las operaciones que se pueden realizar? 

La memoria dinámica es un área de la memoria que se asigna y libera durante la ejecución del programa. En C++, se gestiona mediante operadores new y delete. Con new, se asigna memoria dinámicamente para almacenar objetos en el heap, y con delete, se libera la memoria asignada cuando ya no se necesita.

### 6.	¿Cuáles son las ventajas y desventajas de la memoria dinámica en comparación con la memoria estática? 

Las ventajas de la memoria dinámica incluyen:

•	Permite asignar memoria según sea necesario durante la ejecución del programa. Es flexible.
•	Es eficiente pues se asigna memoria solo cuando es necesaria.
•	Capacidad de manejar datos de tamaño variable.

Las desventajas de la memoria dinámica incluyen:

•	Mayor complejidad pues requiere una gestión manual de la memoria, lo que puede conducir a errores como fugas de memoria.
•	Riesgo de fragmentación de memoria si no se libera adecuadamente.

### 7.	Explique qué es un árbol binario y cuáles son sus principales características. 

Un árbol binario es una estructura de datos jerárquica en la que cada nodo tiene como máximo dos hijos, denominados hijo izquierdo y hijo derecho. Sus principales características incluyen:
•	Nodo raíz: El nodo superior del árbol.
•	Nodos internos: Nodos que tienen al menos un hijo.
•	Hojas: Nodos que no tienen hijos.
•	Profundidad: La longitud del camino desde la raíz hasta el nodo.
•	Altura: La longitud del camino más largo desde un nodo hasta una hoja.

### 8.	¿Qué es una cola (queue) y en qué situaciones se utiliza comúnmente?

Una cola (queue) es una estructura de datos que sigue el principio de "primero en entrar, primero en salir" (FIFO). Se utiliza comúnmente en situaciones donde los elementos deben ser procesados en el mismo orden en que llegaron, como la gestión de tareas en un sistema operativo.

### 9.	¿Cuál es la diferencia entre una cola (queue) y una pila (stack)? 

La principal diferencia entre una cola y una pila es el orden en que se agregan y eliminan los elementos. En una cola, los elementos se agregan al final y se eliminan del principio (FIFO), mientras que en una pila, los elementos se agregan y eliminan del mismo extremo (LIFO, último en entrar, primero en salir).

### 10.	Describe cómo funciona el algoritmo de inserción (insert) en una tabla hash.

En una tabla hash, el algoritmo de inserción calcula la posición (índice) en la tabla utilizando una función de dispersión (hash function) y luego inserta el elemento en esa posición. Si dos elementos tienen la misma posición, se resuelve mediante técnicas como encadenamiento o resolución de colisiones.

### 11.	¿Qué es la función de dispersión (hash function) y por qué es importante en las tablas hash? 

La función de dispersión (hash function) es una función que mapea los datos de entrada a un valor hash, que es un valor numérico que representa de manera única los datos de entrada. Es importante en las tablas hash porque determina la posición donde se almacenará un elemento en la tabla, lo que permite un acceso rápido a los datos.

### 12.	¿Cuál es la complejidad temporal promedio de búsqueda en una tabla hash bien implementada? 

En una tabla hash bien implementada, la complejidad temporal promedio de búsqueda es O(### 1) o constante. El tiempo necesario para buscar un elemento en la tabla no depende del tamaño de la tabla, sino de la eficiencia de la función de dispersión y la resolución de colisiones.

### 13.	Explica cómo se realiza la operación de inserción (push) en una pila (stack). 

En una pila (stack), la operación de inserción se realiza colocando un elemento en la parte superior de la pila. Esto se hace moviendo el puntero de la parte superior de la pila hacia arriba y colocando el nuevo elemento en esa posición.

### 14.	¿Cuál es la complejidad temporal de las operaciones de apilar (push) y desapilar (pop) en una pila? 

Tanto la operación de apilar (push) como la de desapilar (pop) en una pila tienen una complejidad temporal de O(### 1), es decir, constante. Estas operaciones involucran solo el acceso y la modificación del elemento en la parte superior de la pila, independientemente del tamaño total de la pila.

### 15.	Describe cómo funciona una lista enlazada y cuáles son sus ventajas y desventajas. 

Una lista enlazada es una estructura de datos en la que cada elemento de la lista está vinculado a su siguiente elemento mediante un puntero. Sus ventajas incluyen la capacidad de insertar y eliminar elementos de manera eficiente en cualquier posición de la lista, así como su flexibilidad para manejar datos de tamaño variable. Sin embargo, sus desventajas incluyen el mayor uso de memoria debido a los punteros adicionales y la necesidad de recorrer la lista para acceder a elementos específicos, lo que puede ser menos eficiente en comparación con estructuras de datos como los vectores.

### 16. ¿Qué es un nodo en una lista enlazada y qué contiene?

Un nodo en una lista enlazada es una estructura que contiene dos partes principales: un campo de datos para almacenar la información y un puntero que apunta al siguiente nodo en la lista.

### 17. ¿Cuál es la diferencia entre una lista enlazada simple y una lista enlazada doblemente enlazada?

La diferencia principal entre una lista enlazada simple y una lista enlazada doblemente enlazada radica en la cantidad de punteros que tiene cada nodo:

•	En una lista enlazada simple, cada nodo tiene un puntero que apunta al siguiente nodo en la lista.
•	En una lista enlazada doblemente enlazada, cada nodo tiene dos punteros: uno que apunta al siguiente nodo y otro que apunta al nodo anterior en la lista. Esto permite recorrer la lista en ambas direcciones.

### 18. ¿Cómo se realiza la eliminación (delete) de un nodo en una lista enlazada?

Para eliminar un nodo en una lista enlazada, primero se debe encontrar el nodo que se desea eliminar y luego ajustar los punteros para eliminarlo de la lista. El proceso es el siguiente:
•	Encontrar el nodo anterior al nodo que se va a eliminar.
•	Actualizar el puntero del nodo anterior para que apunte al nodo siguiente al que se va a eliminar.
•	Liberar la memoria ocupada por el nodo que se está eliminando.

### 19. ¿Cómo funciona el algoritmo de recorrido (traversal) en un árbol binario?

En un árbol binario, el algoritmo de recorrido (traversal) es un proceso de visitar todos los nodos del árbol de una manera específica. En un recorrido en árbol binario, se visitan los nodos en un orden específico, como preorden, en orden o postorden, y se realiza alguna operación en cada nodo visitado, como imprimir su valor.

### 20. ¿Cuál es la complejidad temporal del recorrido en preorden, en orden y en postorden en un árbol binario balanceado?

La complejidad temporal del recorrido en preorden, en orden y en postorden en un árbol binario balanceado es O(n), donde 'n' es el número de nodos en el árbol. Esto se debe a que, en el peor de los casos, cada nodo del árbol debe ser visitado una vez durante el recorrido.

### 21. Explique la diferencia entre la notación Big O (O) y la notación Omega () en el análisis de la complejidad temporal de los algoritmos. Proporcione un ejemplo de un algoritmo y determine su complejidad temporal utilizando ambas notaciones Big O y Omega.

La notación Big O (O) se utiliza para describir la cota superior asintótica de un algoritmo, es decir, describe el peor escenario posible en términos de tiempo de ejecución. Por otro lado, la notación Omega (Ω) se utiliza para describir la cota inferior asintótica, es decir, describe el mejor escenario posible en términos de tiempo de ejecución.
Por ejemplo, considera un algoritmo de búsqueda lineal en una lista no ordenada de tamaño 'n':

•	En el peor caso, si el elemento buscado está al final de la lista o no está presente, el algoritmo realizará n comparaciones. Por lo tanto, su complejidad temporal en el peor caso es O(n).
•	En el mejor caso, si el elemento buscado está en la primera posición de la lista, el algoritmo solo realizará una comparación. Por lo tanto, su complejidad temporal en el mejor caso es Ω(1).
