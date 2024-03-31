# Tarea 1

Universidad de Costa Rica

Estructuras Abstractas de Datos y Algoritmos para Ingeniería IE0217

Profesor: Rafael Esteban Badilla Alvarado

**Estudiante: Evelyn Feng B82870**

I Semestre 2024


## Parte Práctica - Juego Ahorcado

Para ejecutar el código siga las siguientes instrucciones digitando:
```
g++ -o ahorcado.exe .\main.cpp .\funciones.cpp

.\ahorcado.exe
````

Una vez digitado el código se le desplegará un Menú de opciones donde podrá realizar una de las siguientes funciones:
````
MENU:
1. Elegir la dificultad del juego. 
2. Inicia el juego. Dificultad: Facil
3. Agregar palabras al diccionario.
4. Ver diccionario de palabras.
5. Salir del programa.
Selecciona una opcion: //(Acá debe escribir 1, 2, 3 o 4 dependiendo de la acción que desea realizar)
````
Selecciona **1.**

Hay tres dificultades para adivinar la palabra. Los intentos a la derecha son los permitidos de acuerdo a la dificultad.
````
 Elige la dificultad:
1. Facil (7 intentos)
2. Intermedio (5 intentos)
3. Dificil (3 intentos)
Selecciona una opcion: (Acá debe ingresar 1, 2 o 3 de acuerdo a la dificultad deseada)
````
Selecciona **2.**

_INICIA EL JUEGO_

Se le despliega una palabra aleatoria del diccionario y debe ingresar una letra y darle ENTER, y así sucesivamente hasta adivinar la palabra o quedarse sin intentos.
Cada vez que adivina una letra se le resta intentos restantes si está mala o se agrega en las casillas correspondientes de Palabra a adivinar si está buena. En caso de quedarse sin intentos tiene una última oportunidad de adivinar la palabra completa. En caso de ingresar la misma letra dos veces le sale un mensaje de error. ¡Buena suerte jugando!

````
Palabra a adivinar: _ _ _ _ _ _
Intentos restantes: 7
Intentos permitidos: 7
Ingrese una letra:
````

````
Ultima oportunidad, intente adivinar la palabra completa:
Ingrese la palabra completa:
````

Selecciona **3.**

Se le despliega:
````
"Ingrese la palabra que desea agregar al diccionario:" (Acá debe escribr la palabra a ingresar. No poner números porque le sale error.)
````
Selecciona **4.**

Se le despliegan las palabras presentes en el diccionario

Selecciona **5.**

Sale del Menú 


## Link de Doxyfile por medio del Netlify haga click a:

https://proyectie0217b82870.netlify.app/


## Parte Teórica

### 1.	¿Cuál es la principal diferencia entre C y C++?

La principal diferencia es que C++ es un lenguaje de programación orientado a objetos, mientras que C es más procedimental o ejecución de procedimientos. C++ es más complejo.

### 2.	Explique el propósito y el uso de los siguientes comandos de Git: git init, git add, git commit, git push, git pull, git clone, git branch, git merge.

_git init_: Inicializa un nuevo repositorio Git.

_git add_: Agrega cambios al área de preparación.

_git commit_: Registra los cambios en el repositorio. Se puede modificar o agregar el nombre del cambio a realizar.

_git push_: Sube los cambios locales (computadora). al repositorio remoto(GitHub).

_git pull_: Obtiene los cambios del repositorio remoto (GitHub) y los fusiona con el repositorio local (computadora).

_git clone_: Clona un repositorio remoto (GitHub) en el repositorio local (computadora).

_git branch_: Lista, crea o elimina ramas.

_git merge_: Fusiona una rama con otra, usualmente cuando hay un pul request.

### 3.	¿Qué es Git y cuál es su propósito en el desarrollo de software?

Git es un sistema de control de versiones distribuido de fuente abierta que permite a los desarrolladores colaborar en proyectos de software y rastrear cambios en el código fuente a lo largo del tiempo. Facilita las actividades en GitHub.

### 4.	¿Qué es un conflicto de fusión (merge conflict) en Git y cómo se resuelve?

Un conflicto de fusión ocurre cuando Git no puede fusionar automáticamente los cambios de dos ramas diferentes. No puede decidir cuál es la versión correcta del código para mantener en el resultado. Para resolverse manualmente editando el archivo afectado para resolver los conflictos y luego realizando un git add y commit para completar la fusión. Existen indicadores como <<<<<<<, ======= y >>>>>>>, que se utilizan para separar las diferentes versiones del código en conflicto. (GitHub, 2024)

### 5.	¿Qué es un archivo .gitignore y para qué se utiliza?

Un archivo .gitignore especifica los archivos y directorios que Git debe ignorar al realizar operaciones como git add o git commit.

### 6.	¿Qué es una solicitud de extracción (pull request) en GitHub y cómo se utiliza?

Un pull request es una solicitud para fusionar cambios de una rama de características (feature branch) en la rama principal (main branch) del repositorio. Se utiliza para revisar y discutir los cambios antes de fusionarlos.

### 7.	¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado? Proporcione ejemplos de situaciones en las que sería más óptimo utilizar un lenguaje compilado y otras en las que sería más adecuado un lenguaje interpretado.

La diferencia principal entre un lenguaje de programación compilado y uno interpretado es que los lenguajes compilados se traducen completamente a lenguaje de máquina antes de ejecutarse, mientras que los lenguajes interpretados se traducen línea por línea durante la ejecución.

- C++ es un ejemplo de lenguaje compilado, óptimo para programas que requieren alta eficiencia y rendimiento, como sistemas operativos o aplicaciones de bajo nivel.
- Un lenguaje interpretado es Python, adecuado para el desarrollo rápido de prototipos y aplicaciones web.
### 8.	Explique qué es un linker en el contexto de un lenguaje de programación compilado. ¿Cuál es su función principal y por qué es esencial en el proceso de compilación?

Un linker es una herramienta que une varios archivos objeto y bibliotecas generados durante la compilación en un único ejecutable. Su función principal es resolver las referencias a símbolos y enlazar las funciones utilizadas en diferentes partes del código. Por ejemplo, desde main.cpp con void saludar() puedo llamar a la función saludar() definida con un void en el archivo función.cpp. 

### 9.	Describa el flujo de trabajo básico en Git para agregar cambios a un repositorio.

El flujo de trabajo básico en Git para agregar cambios a un repositorio implica los siguientes pasos:
•	Modificar los archivos en el directorio de trabajo.
•	Agregar los archivos modificados al área de preparación con git add.
•	Confirmar los cambios al repositorio con git commit.
•	Subir los cambios al repositorio remoto con git push
•	Para obtener lOS cambios más recientes del repertorio git pull

### 10.	Defina qué significa inicializar y declarar una variable.

Inicializar una variable significa asignarle un valor inicial (int num = 10) . Declarar una variable significa especificar su tipo y nombre en el programa (double num2).

### 11.	¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?

La sobrecarga de funciones en C++ permite definir múltiples funciones con el mismo nombre pero con diferentes parámetros. Esto facilita la reutilización del nombre de función y hace que el código sea más fácil de entender.

### 12.	¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.

Un puntero es una variable que almacena la dirección de memoria de otra variable. Se utiliza para acceder y manipular datos indirectamente. Un ejemplo de la vida real donde se puede utilizar punteros es en los sistemas de registros de personas. Por ejemplo, en el código siguiente podemos acceder a la dirección y nombre de la persona con punteros, esto, a un nivel más complejo, puede ser utilizado en el Registro Nacional.
´´´´
#include <iostream>
#include <string>

struct Estudiante {
    std::string nombre;
    int edad;
    std::string direccion;
};

int main() {
    // Crear un estudiante
    Estudiante estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 20;
    estudiante1.direccion = "Calle Principal, Ciudad";

    // Crear un puntero al estudiante
    Estudiante* punteroEstudiante = &estudiante1;

    // Accede a la dirección de memoria del estudiante
    std::cout << "Dirección de memoria del estudiante: " << punteroEstudiante << std::endl;

    // Accede al nombre del estudiante a través del puntero
    std::cout << "Nombre del estudiante: " << punteroEstudiante->nombre << std::endl;

    return 0;
}

´´´´
### 13.	¿Qué es un branch (rama) en Git y cómo se utiliza?

Un branch o rama en Git es una línea independiente de desarrollo que permite a los desarrolladores trabajar en funcionalidades separadas sin afectar la rama principal del repositorio. Se utiliza con comandos como git branch para ver dónde se está trabajando y git checkout para cambiar entre ramas.

### 14.	¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?

La principal diferencia entre un bucle do-while y un bucle while es que un bucle do-while ejecuta su cuerpo de una vez, incluso si la condición es falsa desde el principio. El while lo ejecuta si cumple con la condición inicial.

### 15.	Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en C++. Describa el propósito específico de cada tipo de archivo.

Es útil dividir el código en archivos .hpp, .cpp y main.cpp en C++ para una mejor organización del código, así si su código lo ocupan ver otros desarrolladores es sencillo para ellos también entenderlo. El main.cpp contiene la función principal main(), .hpp contiene las declaraciones de las clases y funciones, y el .cpp contiene las definiciones de las clases y funciones.

### 16.	¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales.

Las variables que se crean en C++ se almacenan en la memoria de la computadora. La diferencia entre el almacenamiento de variables locales y globales es que las variables locales se almacenan en la pila o un tamaño de memoria limitado y las variables globales se almacenan en la memoria estática. Las variables locales son aquellas declaradas dentro de una función o bloque de código y solo son visibles dentro de ese ámbito, por lo que se eliminan cuando acaba la función. Las variables globales son aquellas declaradas fuera de cualquier función o bloque de código y son visibles en todo el archivo en el que se declaran, así como en otros archivos si se declaran como extern. Estas se inicializan solo una vez antes de comenzar la ejecución. (Universidad Carlos III de Madrid, 2017)

### 17.	¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?

Pasar parámetros por valor copia el valor de la variable original, por referencia pasa la dirección de memoria de la variable original y por puntero pasa un puntero que apunta a la dirección de memoria de la variable original.

### 18.	Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero.

Inicialmente apunta a la primera posición del arreglo [0] . Se accede a todos los datos del arreglo mediante un for y un *(ptr + i) para acceder a cada elemento. 
´´´´
#include <iostream>
int main() {
    int arreglo[] = {10, 20, 30, 40, 50}; // Declaración de un arreglo de enteros

    // Acceso a los elementos del arreglo
    int* ptr = arreglo; // El puntero ptr apunta al primer elemento del arreglo
    for (int i = 0; i < 5; ++i) {
        std::cout << "Elemento " << i << ": " << *(ptr + i) << std::endl; // Acceso al elemento i del arreglo
    }

    return 0;
  ´´´´
### 19.	Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos.

Los punteros dobles en C++ se utilizan para apuntar a punteros. Estos punteros se suelen utilizar en el manejo o devolución de matrices complejas y dinámicas. También,si se necesita modificar un puntero dentro de una función y desea que los cambios sean visibles fuera de la función se pueden utilizar este tipo de punteros. Además, se pueden utilizar para mantener un puntero a un bloque de memoria que contiene punteros a filas individuales de la matriz. Esto es útil cuando la longitud de las filas puede variar o cuando la matriz es multidimensional.

### 20.	¿Para qué se utiliza la directiva #ifndef?

La directiva #ifndef se utiliza en C++ para evitar la inclusión repetida de un archivo de encabezado en un programa. #ifndef significa “si no está definido”. Se coloca al principio del archivo de encabezado, si el identificador especificado no está definido, el contenido entre #ifndef y #endif se incluirá en el código; así evitamos la inclusión múltiple de archivos de encabezado y problemas de redefinició.

### 21.	¿Qué es el puntero this en C++?

El puntero this se utiliza dentro de una clase para referirse al objeto en el que se está ejecutando el código. Este apunta al objeto actual. 

### 22.	¿Cuál es la diferencia entre un arreglo y una lista en C++?

Un arreglo almacena una colección de elementos del mismo tipo de datos en una ubicación contigua de memoria. Tienen tamaño fijo y están indexados por números enteros. 
Una lista o lista enlazada es una estructura de datos que permite almacenar y manipular elementos de forma dinámica. La lista se implementa usando std::list.

### 23.	¿Investigue qué es un memory leak?

Un memory leak o fuga de memoria es un problema común en la programación donde un programa asigna memoria dinámicamente pero no la libera adecuadamente después de su uso. Esto conduce a un agotamiento gradual de la memoria disponible en el sistema. Además, puede conllevar a la fragmentación de la memoria y a la acumulación de grandes números de páginas en su mayoría llenas de basura en la memoria real y en el espacio de la página. Para corregirlo puede utilizar delete (IBM, 2023).



## Formato _Markdown_

Markdown nació como una herramienta de conversión de texto plano a HTML. Fue creada en 2004 por John Gruber y se distribuye de manera gratuita bajo una licencia BSD. Markdown es un lenguaje que permite crear contenido con una manera sencilla de escribir y manteniendo siemrpe un diseño legible. Permite simplificar la escritura añadiendo formatos tales como negritas, cursivas o enlaces utilizando puro texto; de este modo facilita, simplifica y hace más eficiente la escritura al evitar distracciones. Este tipo de formato es compatible con todas las plataformas a utilizar y es una manera de mantener todo el contenido accesible desde cualquier dispositivo (smartphones, ordenadores de escritorio, tablets…) (Cristóbal, 2016).

Algunos ejemplos de cómo dar formato con símbolos en Markdown son los siguientes:
```
# Título/encabezado principal
## Título/encabezado secundario
### Título/encabezado terciario
aaa Texto
** ** Negrita
_ _ Cursiva
*** *** Todo en negrita y cursiva
~~ ~~ Tachado
<sub> </sub> Subíndice
````
Github (2024)

## Convención mayormente utilizada en C++ para nombrar variables, clases, etc.

En C++, segun Mostovoi y Pinkas (2020), la convención más comúnmente utilizada para nombrar variables, clases, etc., es conocida como el "camelCase". Esta convención tiene que ver con al forma de escribir  las variables, clases, funciones o atributos pues estas se realizan por palabras compuestas (dos o más palabras juntas), sin espacios y con cada palabra comenzando con mayúscula, a excepción de la primera letra de la primera palabra dependiendo del tipo de estructura. Algunos ejemplos del "camelCase" en C++ son:

- Variables: intentosRealizados, estadoActual, registroDeEntrada.

- Clases: MiClase, Persona, IngresoDeDatos.

- Funciones: calcularPromedio, imprimirMensaje, obtenerResultado.
  
- Atributos: edad, dificultad

Algunos de estos ejemplos son utilizados en el programa. Siguiendo esta convención, los nombres son más legibles y fáciles de entender para otros programadores o usuarios, lo que facilita la colaboración en proyectos de código abierto o en equipos de desarrollo.

## Referencias
- Cristóbal, J. (2016). Qué es Markdown. https://markdown.es/
- Github. (2024). Sintaxis de escritura y formato básicos. https://docs.github.com/es/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax
- IBM. (2023). Programas de fuga de memoria. https://www.ibm.com/docs/es/aix/7.3?topic=performance-memory-leaking-programs
- Mostovoi, A. & Pinkas, L. (2020). Programación I. https://es.scribd.com/document/641831486/Programacion-I
- Universidad Carlos III de Madrid. (2017). Arquitectura de Sistemas. https://www.it.uc3m.es/pbasanta/asng/course_notes/index_es.html
