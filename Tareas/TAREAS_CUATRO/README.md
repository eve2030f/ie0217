# Tarea 3

Universidad de Costa Rica

Estructuras Abstractas de Datos y Algoritmos para Ingeniería IE0217

Profesor: Rafael Esteban Badilla Alvarado

**Estudiante: Evelyn Feng B82870**

I Semestre 2024


## Parte Práctica - Calculadora de matrices

Para ejecutar el código siga las siguientes instrucciones digitando:

````
g++ -o ./tarea4.exe ./main1.cpp ./validacion.cpp ./matriz.cpp
./tarea4.exe
````
El resultado del menu junto con un ejemplo de la ejecución sería el siguiente:
1. Seleccione el tipo de variable, de lo contrario, si comienza con la opción 2 le va a tirar un error de que debe seleccionar el tipo de variable antes de iniciar. 
````
--- Menu ---
1. Seleccionar tipo de variable
2. Ingresar tamano de matrices y valores
3. Generar datos aleatorios para las matrices
4. Mostrar matrices ingresadas
5. Realizar operaciones
6. Finalizar programa
Ingrese su opcion: 1
Seleccione el tipo de variable:
1. Entero
2. Flotante
3. Complejo
2
````
2. Se puede seleccionar el ingreso manual de la matriz con la **opción 2** o que genere una aleatoria con la **opción 3** de acuerdo a la variable seleccionada (float, entero o complejo). El número complejo sale como (real,imaginario), siendo cada uno de estos un valor.

Ingreso de la amtriz manual:
Debe ser de acuerdo a la dimensión de la matriz valor de fila * columna y separado por comas. Ejemplo de matriz 2x2. Dimensión 2*2= 4 y en formato **2,3,4,5** (números pegados y separados por comas). Además, se le seguirá pidiendo los elementos de la matriz hasta que los ponga correctamente.

*Nota: En caso de poner 2 y enter se le va a pedir como mínimo y por default la cantidad de elementos de la dimensión por lo que si la dimensión es 4, el sistema seguirá esperando 3 valores más.*

3. Seleccione la **opción 4** para visualizar los valores de las matrices.

4. Seleccione la **opción 5**, seguida de la operación que desea realizar.

5. Seleccione la **opción 6** para salir.

````
--- Menu ---
1. Seleccionar tipo de variable
2. Ingresar tamano de matrices y valores
3. Generar datos aleatorios para las matrices
4. Mostrar matrices ingresadas
5. Realizar operaciones
6. Finalizar programa
Ingrese su opcion: 2
Ingrese el numero de filas: 2
Ingrese el numero de columnas: 2
Ingrese los elementos de la matriz A (separados por comas): 2 
2 2 2 2 
Error: Error: Los elementos deben estar separados por comas.

--- Menu ---
1. Seleccionar tipo de variable
2. Ingresar tamano de matrices y valores
3. Generar datos aleatorios para las matrices
4. Mostrar matrices ingresadas
5. Realizar operaciones
6. Finalizar programa
Ingrese su opcion: 2
Ingrese el numero de filas: 2
Ingrese el numero de columnas: 2
Ingrese los elementos de la matriz A (separados por comas): 2,2,2,2,2
Ingrese los elementos de la matriz B (separados por comas): 2,2,2
Error: Error: Los elementos deben estar separados por comas. La dimension de elementos es incorrecta.

--- Menu ---
1. Seleccionar tipo de variable
2. Ingresar tamano de matrices y valores
3. Generar datos aleatorios para las matrices
4. Mostrar matrices ingresadas
5. Realizar operaciones
6. Finalizar programa
Ingrese su opcion: 2
Ingrese el numero de filas: 2
Ingrese el numero de columnas: 2
Ingrese los elementos de la matriz A (separados por comas): 2,2,2,2
Ingrese los elementos de la matriz B (separados por comas): 2,2,2,2

--- Menu ---
1. Seleccionar tipo de variable
2. Ingresar tamano de matrices y valores
3. Generar datos aleatorios para las matrices
4. Mostrar matrices ingresadas
5. Realizar operaciones
6. Finalizar programa
**Ingrese su opcion: 4**
Matriz A:
2 2
2 2
Matriz B:
2 2
2 2

--- Menu ---
1. Seleccionar tipo de variable
2. Ingresar tamano de matrices y valores
3. Generar datos aleatorios para las matrices
4. Mostrar matrices ingresadas
5. Realizar operaciones
6. Finalizar programa
Ingrese su opcion: 5
Operaciones disponibles:
1. Sumar matrices
2. Restar matrices
3. Multiplicar matrices
Ingrese su opcion: 3
El producto de las matrices es:
8 8
8 8

--- Menu ---
1. Seleccionar tipo de variable
2. Ingresar tamano de matrices y valores
3. Generar datos aleatorios para las matrices
4. Mostrar matrices ingresadas
5. Realizar operaciones
6. Finalizar programa
Ingrese su opcion: 1
Seleccione el tipo de variable:
1. Entero
2. Flotante
3. Complejo
3

--- Menu ---
1. Seleccionar tipo de variable
2. Ingresar tamano de matrices y valores
3. Generar datos aleatorios para las matrices
4. Mostrar matrices ingresadas
5. Realizar operaciones
6. Finalizar programa
Ingrese su opcion: 3
Ingrese el numero de filas: 2
Ingrese el numero de columnas: 2
Datos aleatorios generados para las matrices.

--- Menu ---
1. Seleccionar tipo de variable
2. Ingresar tamano de matrices y valores
3. Generar datos aleatorios para las matrices
4. Mostrar matrices ingresadas
5. Realizar operaciones
6. Finalizar programa
Ingrese su opcion: 4
Matriz A:
(66.4253,11.1119) (67.8394,17.3976)
(77.8034,73.8345) (94.438,76.3584)
Matriz B:
(70.0669,33.6447) (2.99579,82.3039)
(78.399,84.5439) (6.29798,43.1112)

--- Menu ---
1. Seleccionar tipo de variable
2. Ingresar tamano de matrices y valores
3. Generar datos aleatorios para las matrices
4. Mostrar matrices ingresadas
5. Realizar operaciones
6. Finalizar programa
Ingrese su opcion: 6
Saliendo del programa.

````
## Link de Doxyfile por medio del Netlify:





## Parte Teórica