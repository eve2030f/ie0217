# Tarea 4

Universidad de Costa Rica

Estructuras Abstractas de Datos y Algoritmos para Ingeniería IE0217

Profesor: Rafael Esteban Badilla Alvarado

**Estudiante: Evelyn Feng B82870**

I Semestre 2024


## Parte Práctica - Calculadora de matrices

Se dividió el código en validacion.cpp, validacion.hpp, matriz.hpp, matriz.cpp y main1.cpp pero a pesar de las correcciones, diferentes formas de definir el std::complex e incluso la instanciación explíscita seguía saliendo el mismo error. Por ello se prefirió utilizar el código completo main.cpp para visualizar los resultados.

Con la separación y ejecutando el codigo con:
````
g++ -o ./tarea4.exe ./main1.cpp ./validacion.cpp ./matriz.cpp
./tarea4.exe
````
Salía el error que no se pudo arreglar: 
````
In file included from ./main1.cpp:7:
./matriz.cpp: In instantiation of 'void Matriz<T>::llenarMatrizAleatoria2() [with T = int]':
./matriz.cpp:110:16:   required from here
./matriz.cpp:100:32: error: cannot convert 'std::complex<float>' to '__gnu_cxx::__alloc_traits<std::allocator<int>, int>::value_type' {aka 'int'} in assignment
  100 |             datos[i][j] = std::complex<float>(realPart, imagPart);
      |                                ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
      |                                |
      |                                std::complex<float>
./matriz.cpp: In instantiation of 'void Matriz<T>::llenarMatrizAleatoria2() [with T = float]':
./matriz.cpp:111:16:   required from here
./matriz.cpp:100:32: error: cannot convert 'std::complex<float>' to '__gnu_cxx::__alloc_traits<std::allocator<float>, float>::value_type' {aka 'float'} in assignment
  100 |             datos[i][j] = std::complex<float>(realPart, imagPart);
      |                                ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
      |                                |
      |                                std::complex<float>

````

Sin embargo, se puede ejecutar el codigo completo de la siguiente manera:

````
g++ -o tarea4.exe ./main.cpp
./tarea4

o bien,  ./tarea4.exe
````


Con ello, se obtiene el resultado del menu junto con un ejemplo de la ejecución siguiente:

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

https://663847b5e4a6425b54d2a5c0--rad-monstera-5eee87.netlify.app/


## Parte Teórica

### 1. Templates:

1. Definición de Templates: 

Los templates en C++ son una característica que permite escribir código genérico que puede trabajar con cualquier tipo de dato y estructura. Esto se logra mediante la definición de funciones o clases que contienen parámetros de tipo genérico, los cuales se especifican cuando se utilizan. Por ejemplo:

````
template<typename T>
T suma(T a, T b) {
    return a + b;
}

int main() {
    int resultado1 = suma(5, 3);        // Llama a la función suma<int>(5, 3)
    double resultado2 = suma(3.5, 2.1); // Llama a la función suma<double>(3.5, 2.1)
    return 0;
}
````

2. Sobrecarga de Plantillas: 

La sobrecarga de funciones con plantillas en C++ se realiza definiendo múltiplas versiones de la función con los mismos nombres pero con diferentes tipos de parámetros. El compilador seleccionará automáticamente la versión que mejor coincida con los argumentos proporcionados. Por ejemplo:
````
template<typename T>
T suma(T a, T b) {
    return a + b;
}

template<typename T>
T suma(T a, T b, T c) {
    return a + b + c;
}

int main() {
    int resultado1 = suma(5, 3);         // Llama a la función suma<int>(5, 3)
    double resultado2 = suma(3.5, 2.1);  // Llama a la función suma<double>(3.5, 2.1)
    int resultado3 = suma(1, 2, 3);      // Llama a la función suma<int>(1, 2, 3)
    return 0;
}
````
3. Plantillas de Clases: 

Las plantillas también se pueden utilizar en la definición de clases en C++. Esto permite definir clases que trabajen con tipos de datos genéricos. Por ejemplo:
````
template<typename T>
class Contenedor {
private:
    T dato;
public:
    Contenedor(T valor) : dato(valor) {}
    T obtenerDato() const { return dato; }
};

int main() {
    Contenedor<int> cont1(5);       // Instancia de Contenedor para int
    Contenedor<double> cont2(3.14); // Instancia de Contenedor para double
    return 0;
}
````

### 2. Excepciones:
4. Manejo de Excepciones: 

Los bloques **try, catch y throw** se utilizan para manejar excepciones en C++.
try: Se utiliza para envolver el código que puede lanzar una excepción.
catch: Se utiliza para manejar la excepción lanzada en el bloque try.
throw: Se utiliza para lanzar una excepción explícitamente.
Ejemplo:
````
try {
    // Código que puede lanzar una excepción
    throw std::runtime_error("Ocurrió un error");
} catch (const std::runtime_error& e) {
    // Manejo de la excepción
    std::cerr << "Error: " << e.what() << std::endl;
}
````
5. Excepciones Estándar: 

Algunas excepciones estándar proporcionadas por C++ son **std::runtime_error, std::logic_error y std::invalid_argument.**

-std::runtime_error: Se utiliza para errores que ocurren durante la ejecución del programa.

-std::logic_error: Se utiliza para errores de lógica en el programa.

-std::invalid_argument: Se utiliza para indicar un argumento inválido pasado a una función.
````
void dividir(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Divisor no puede ser cero");
    }
    std::cout << "Resultado: " << a / b << std::endl;
}
````

6. Política de Manejo de Excepciones: 

Una política de manejo de excepciones se refiere a la forma en que un programa maneja las excepciones. Es importante considerarla al diseñar software para garantizar un manejo adecuado de errores y para que el programa sea robusto y pueda recuperarse de situaciones inesperadas.

7. Noexcept: 

La palabra clave noexcept se utiliza en C++ para especificar que una función no lanzará ninguna excepción. Esto puede ayudar al compilador a realizar optimizaciones y también proporciona información útil al usuario de la función.

8. Diferencia entre std::logic_error y std::runtime_error:

 std::logic_error se utiliza para errores de lógica en el programa, mientras que std::runtime_error se utiliza para errores que ocurren durante la ejecución del programa.

9. Excepción No Capturada: 

Cuando una excepción no es capturada, el programa termina abruptamente y puede imprimir un mensaje de error en la consola, indicando qué excepción no fue manejada. Esto puede resultar en un comportamiento no deseado o en una terminación inesperada del programa.

### 3. STL (Standard Template Library):

10. Contenedores STL: 

Algunos contenedores de la STL son std::vector, std::list, std::map, std::set y std::queue. Cada uno de ellos tiene sus propias características y es apropiado para diferentes situaciones.

-std::vector: Se utiliza cuando se necesita una colección de elementos que puede crecer o reducir de tamaño de manera eficiente.

-std::list: Se utiliza cuando se necesita una lista enlazada doblemente conectada.

-std::map: Se utiliza para asociar claves con valores únicos.

-std::set: Se utiliza para almacenar elementos únicos en orden ascendente.

-std::queue: Se utiliza para implementar una cola FIFO (First In First Out).

11. Iteradores en STL: 

Los iteradores en la STL son objetos que se utilizan para recorrer secuencias de elementos en contenedores. Se utilizan para acceder a los elementos y para realizar operaciones como inserción, eliminación y búsqueda en los contenedores.

12. Algoritmos STL: 
Algunos algoritmos de la STL son std::sort, std::find y std::transform.

-std::sort: Se utiliza para ordenar los elementos en un contenedor.

-std::find: Se utiliza para buscar un elemento en un contenedor.

-std::transform: Se utiliza para aplicar una operación a cada elemento en un rango y almacenar el resultado en otro rango.

13. Algoritmos Personalizados: 

Se pueden utilizar algoritmos personalizados con la STL definiendo funciones o functors que implementen el comportamiento deseado y luego pasándolos como argumentos a las funciones de la STL, como std::sort o std::transform. Esto permite reutilizar código y aprovechar la flexibilidad de la STL.
