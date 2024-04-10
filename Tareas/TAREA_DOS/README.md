# Tarea 2

Universidad de Costa Rica

Estructuras Abstractas de Datos y Algoritmos para Ingeniería IE0217

Profesor: Rafael Esteban Badilla Alvarado

**Estudiante: Evelyn Feng B82870**

I Semestre 2024


## Parte Práctica - 

Para ejecutar el código siga las siguientes instrucciones digitando:
```
g++ -o a.exe .\main.cpp .\funciones.cpp

.\a.exe
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


## Link de Doxyfile por medio del Netlify haga click a:

https://6609df56b87aa3125843464e--proyectoie0217b82870ef.netlify.app



## Parte Teórica

1.	¿Qué es la programación orientada a objetos y cuáles son sus principales principios? 

La programación orientada a objetos es un paradigma de programación que se basa en el concepto de "objetos", que solucionan problemas de complejidad de software, reutilización del código, seguridad de software, abstracción y encapsulamienteo y demás. Sus principales principios son:

•	Abstracción
•	Encapsulamiento
•	Herencia
•	Polimorfismo

2.	Explique el concepto de ocultamiento de datos y cómo se logra en C++

 El ocultamiento de datos es un principio de OOP que implica que los detalles internos de un objeto no deben ser accesibles desde el exterior. Esto se logra utilizando los modificadores de acceso public, private y protected.

3.	¿Cuál es la diferencia entre una clase y un objeto en C++? 

Una clase es una plantilla para crear objetos, define los atributos y métodos comunes a los objetos de ese tipo. Un objeto es una instancia específica de una clase, que tiene sus propios valores de atributos y puede llamar a sus propios métodos.

4.	¿Qué es el polimorfismo y cómo se logra en C++?

 El polimorfismo es la capacidad de los objetos de una clase para responder de manera diferente a la misma función según su tipo. Se logra mediante funciones virtuales y la sobrecarga de operadores.

5.	¿Qué significa el término encapsulamiento en el contexto de la OOP? 

El encapsulamiento es el principio de OOP que implica ocultar los detalles internos de un objeto y solo exponer una interfaz para interactuar con él.

6.	¿Cuál es el propósito del constructor y el destructor en una clase de C++? 

El constructor se utiliza para inicializar un objeto cuando se crea y el destructor se utiliza para liberar recursos asignados al objeto cuando ya no se necesita.

7.	¿Investigue cómo se define una clase abstracta en C++ y cuál es su función? 

Una clase abstracta se define utilizando la palabra clave virtual en uno o más métodos. No se pueden crear instancias de una clase abstracta, pero puede ser utilizada como una interfaz para clases derivadas.

8.	¿Investigue qué es un constructor de copia y para qué se utiliza en C++? 

Un constructor de copia es un constructor que crea un nuevo objeto a partir de otro objeto del mismo tipo. Se utiliza para inicializar un objeto a partir de otro objeto existente.

9.	¿Investigue qué es el polimorfismo estático y dinámico en C++ y cómo se diferencian? 

El polimorfismo estático se resuelve en tiempo de compilación, mientras que el polimorfismo dinámico se resuelve en tiempo de ejecución utilizando la tabla de funciones virtuales (vtable).

10.	¿Qué son las clases anidadas y cuál es su utilidad en C++? 

Las clases anidadas son clases definidas dentro de otras clases. Pueden acceder a los miembros privados de la clase externa y proporcionar una estructura más organizada y modular.

11.	En el contexto de la programación orientada a objetos en C++, ¿cómo se pueden utilizar los punteros para trabajar con objetos y clases? 

Los punteros pueden utilizarse para crear y manipular objetos dinámicamente, permitiendo una gestión más eficiente de la memoria y la implementación de estructuras de datos complejas.

12.	¿Qué es una función prototipo? 

Un función prototipo es una declaración de la firma de una función antes de su definición. Se utiliza para permitir que las funciones se llamen entre sí en cualquier orden en un programa.

13.	Explique los diferentes tipos de miembros que existen en la OOP

En la programación orientada a objetos (OOP), los miembros se refieren a las variables y funciones asociadas a una clase. Los diferentes tipos de miembros en OOP son:

•	Atributos o variables miembro: Representan el estado de un objeto y almacenan datos.
•	Métodos o funciones miembro: Definen el comportamiento de un objeto y pueden manipular los atributos de la clase.

14.	¿Qué es un memory leak? 

Un memory leak (fuga de memoria) ocurre cuando un programa asigna memoria dinámicamente pero no la libera cuando ya no es necesaria. Esto conduce a una pérdida gradual de memoria disponible y puede causar problemas de rendimiento y estabilidad en el programa.

15.	¿Qué es y cuál es la importancia de la herencia multinivel, múltiple y jerárquica en C++?

•	Herencia multinivel: Permite que una clase herede de otra clase que a su vez hereda de otra clase. Esto ayuda a organizar y reutilizar el código de manera más eficiente.
•	Herencia múltiple: Permite que una clase herede de múltiples clases base. Esto facilita la reutilización de código al permitir que una clase tenga características de varias clases.
•	Herencia jerárquica: Es cuando una clase base tiene múltiples clases derivadas. Esto proporciona una estructura organizada para representar relaciones entre objetos.

16.	¿Qué es la composición y cómo se implementa en C++?

La composición es una técnica en la que un objeto contiene otros objetos como parte de su estado. Se implementa creando instancias de otras clases dentro de la clase actual y utilizándolas para proporcionar funcionalidad adicional.

17.	¿Qué es la sobreescritura de funciones en C++ y cuándo es bueno usarla? 

La sobreescritura de funciones es cuando una clase derivada redefine una función miembro que ya está definida en una clase base. Esto permite que las clases derivadas proporcionen su propia implementación de una función heredada. Es útil cuando se necesita un comportamiento específico para una función en una clase derivada.

18.	¿Qué es un método y un atributo y cuál es la diferencia entre ellos?

•	Atributo: También llamado variable miembro, representa el estado de un objeto y almacena datos.
•	Método: También llamado función miembro, define el comportamiento de un objeto y puede manipular los atributos de la clase. La diferencia principal es que los atributos representan datos mientras que los métodos representan comportamiento.

19.	¿Qué es el constructor y el destructor en una clase?

•	Constructor: Es un método especial que se llama automáticamente cuando se crea un objeto de una clase. Se utiliza para inicializar el objeto y puede aceptar parámetros para configurar el estado inicial del objeto.
•	Destructor: Es un método especial que se llama automáticamente cuando un objeto se elimina. Se utiliza para liberar recursos asignados al objeto, como memoria dinámica o conexiones de red.

20.	¿Qué es la sobrecarga de operadores en C++ y cómo se utiliza? 

La sobrecarga de operadores es una técnica que permite redefinir el comportamiento de los operadores integrados de C++ para tipos de datos personalizados. Se utiliza para proporcionar una sintaxis intuitiva y expresiva al trabajar con objetos de clases definidas por el usuario. Por ejemplo, considere una función print que toma un argumento std::string. Esta función puede realizar tareas muy diferentes a una función que toma un argumento de tipo double. La sobrecarga le impide tener que usar varios nombres como print_string o print_double.



## Referencias
- Clases con Esteban Badilla. (2024). Introducción al lenguaje de programación C++

