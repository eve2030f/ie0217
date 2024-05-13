# Tarea 5

Universidad de Costa Rica

Estructuras Abstractas de Datos y Algoritmos para Ingeniería IE0217

Profesor: Rafael Esteban Badilla Alvarado

**Estudiante: Evelyn Feng B82870**

I Semestre 2024


## Parte Práctica - Validador de correo electronico

Para correr todo el código con el makefile utilice el siguiente código:

````
mingw32-make all 
o
mingw32-make 
````
El resultado sería el siguiente:
````
PS C:\Users\MONICA\Downloads\ESTRUCTURAS_ABS\ie0217\Tareas\TAREA_CINCO> mingw32-make all  
"Compilando src/funciones.cpp..."
"Compilando src/main.cpp..."
"Compilando el ejecutable..."
"Ejecutando el programa..."
----- MENU -----
1. Validar correo electronico
2. Salir
Ingrese su opcion:
````

Si desea solo compilar el programa para que se cree los documentos funciones.o, main.o y tarea5.exe escriba en su terminal:
````
mingw32-make build
````
Para ejecutar el código escriba:
````
mingw32-make run
````
El resultado sería el siguiente:

````
----- MENU -----
1. Validar correo electronico
2. Salir
````

La opción 1. le permite ingresar un correo electrónico que una vez ingresado y oprimido ENTER lo verifica automáticamente ya sea tirándole error con excepciones o indicando que la dirección es válida. 


Finalmente, para lmpiar los documentos puede utilizar el comando:
````
mingw32-make clean
````
Seguido de dos s, ENTER, s y ENTER para borrar los archivos dentro de la carpeta obj y luego los de la carpeta bin.
````
"Limpiando el directorio..."
del obj bin
C:\Users\MONICA\Downloads\ESTRUCTURAS_ABS\ie0217\Tareas\TAREA_CINCO\obj\*, ¿Está seguro (S/N)? s
C:\Users\MONICA\Downloads\ESTRUCTURAS_ABS\ie0217\Tareas\TAREA_CINCO\bin\*, ¿Está seguro (S/N)? s
````

A continuación, se muestra un ejemplo del validador de correos electrónicos:
````
----- MENU -----
1. Validar correo electronico
2. Salir
Ingrese su opcion: 1
Ingrese una direccion de correo electronico: asdasd.com
Error: La direccion de correo electronico debe contener el caracter '@'.
----- MENU -----
1. Validar correo electronico
2. Salir
Ingrese su opcion: 1
Ingrese una direccion de correo electronico: asvdajsdasbdkas@gmail.com
La direccion de correo electronico es valida.
----- MENU -----
1. Validar correo electronico
2. Salir
Ingrese su opcion: 1
Ingrese una direccion de correo electronico: -asnbdash@gmial.com
Error: El nombre no debe comenzar ni terminar con un punto, guion o guion bajo.
----- MENU -----
1. Validar correo electronico
2. Salir
Ingrese su opcion: 1
Ingrese una direccion de correo electronico: holaA23@gmail.ucr.ac.cr
La direccion de correo electronico es valida.

````
## Link de Doxyfile por medio del Netlify:

https://6641b14ed531b66679f14f01--regal-boba-b82516.netlify.app/

## Parte Teórica
### Expresiones Regulares
### 1. ¿Qué es una expresión regular y cuál es su propósito en programación?

Una expresión regular, regex o regexp es una secuencia de caracteres o patrones utilizados para un patrón de búsqueda. Se utilizan en programación para buscar y manipular cadenas de texto de manera eficiente. Nos permiten realizar búsquedas, sustituciones, validaciones, etc., basadas en ese patrón.

### 2. ¿Qué significan los caracteres especiales . y * en una expresión regular?

El carácter "." (punto) coincide con cualquier carácter excepto el salto de línea. El "*" (asterisco) indica que el elemento precedente puede aparecer cero o más veces en la cadena.

### 3. ¿Cómo se pueden agrupar subexpresiones en una expresión regular?

Las subexpresiones se pueden agrupar utilizando paréntesis. Esto permite aplicar operadores a grupos completos de caracteres.

### 4. ¿Qué función cumple la barra invertida \ en una expresión regular?

La barra invertida se utiliza para escapar caracteres especiales en una expresión regular o para denotar secuencias especiales como el principio de una línea o el final de una palabra. La expresión \. coincidirá con un punto literal en el texto.

### 5. Explique cómo se pueden capturar coincidencias usando paréntesis en una expresión regular.

Al usar paréntesis en una expresión regular, se pueden capturar subcadenas coincidentes. Estas subcadenas se pueden recuperar posteriormente para su uso en el programa. Con (ab)+ coincidirá con "ab", "abab", "ababab", etc.

### 6. ¿Cuál es la diferencia entre \d y \D en una expresión regular?

"\d" coincide con un dígito decimal (0-9), mientras que "\D" coincide con cualquier carácter que no sea un dígito decimal.

### 7. ¿Cómo se representa una clase de caracteres en una expresión regular?

Una clase de caracteres se representa encerrando los caracteres deseados entre corchetes []. Por ejemplo, [a-z] coincide con cualquier letra minúscula.

### 8. ¿Cuál es el propósito del modificador $ en una expresión regular?

El modificador "$" se utiliza para indicar el final de una cadena en una expresión regular.

### 9. Describa cómo validar una dirección de correo electrónico usando expresiones regulares en C++.

Para validar una dirección de correo electrónico, se puede usar una expresión regular que coincida con el formato estándar de una dirección de correo electrónico. Luego, se puede verificar si la entrada del usuario coincide con este patrón. Por ejemplo:

````
ejemplo@gmail.com

([a-zA-Z0-9_.+-]+)@gmail.com

En vez de "ejemplo", "gmail" o "com" puede haber cualquier signo de +, -, . o _, así como cualquier letra en mayúscola o minúscula o cualquier número del 0 al 9. Debe ser separado por un @ entre el "ejemplo" y el "gmail" y un punto entre el "gmail" y el "com".

````

### 10. Discuta las implicaciones de rendimiento de utilizar expresiones regulares en aplicaciones de software. ¿Qué técnicas se pueden aplicar para optimizar una expresión regular compleja, especialmente en contextos donde el tiempo de ejecución es crítico?

El uso de expresiones regulares puede tener implicaciones de rendimiento, ya que algunas expresiones pueden ser costosas en términos de tiempo de ejecución, especialmente en cadenas de texto largas. Para optimizar una expresión regular compleja se pueden aplicar técnicas como la simplificación del patrón, la limitación de la búsqueda y la optimización de la implementación.

### 11. ¿Qué es un Makefile y cuál es su función en un proyecto de C++?

Un Makefile es un archivo de configuración utilizado en proyectos de software, especialmente en proyectos de C++, para decidir qué partes de un programa grande se compilan y enlazan el código fuente del proyecto.

### 12. ¿Cuál es la diferencia entre una regla implícita y una regla explícita en un Makefile?

Una regla implícita es una regla predefinida en un Makefile que especifica cómo se compila un tipo particular de archivo fuente en un archivo objeto. Una regla explícita, por otro lado, es una regla definida por el usuario para especificar cómo compilar un archivo específico.

### 13. Explique el propósito de las macros (variables) en un Makefile.

Las macros en un Makefile se utilizan para definir variables que pueden ser referenciadas en todo el archivo, permitiendo así una configuración más flexible y facilita la modificación del comportamiento del Makefile.

### 14. ¿Qué es un objetivo (target) en un Makefile y cómo se define?

Un objetivo en un Makefile es el resultado que se desea lograr al ejecutar el Makefile. Se define especificando el nombre del archivo que se desea generar y las dependencias que deben cumplirse antes de que el objetivo pueda ser alcanzado. Por ejemplo:
````
##Nombre del programa de salida, ejecutable final - nombre de variable
TARGET= gestion_estudiantes.exe
````

### 15. ¿Por qué es útil dividir un proyecto de C++ en múltiples archivos fuente y cómo ayuda el uso de Makefiles en este enfoque?

Dividir un proyecto de C++ en múltiples archivos fuente ayuda a organizar y mantener el código de manera más efectiva. El uso de Makefiles en este enfoque permite compilar cada archivo fuente por separado y luego enlazar los archivos objeto resultantes en un programa ejecutable.

### 16. ¿Cómo se pueden definir dependencias entre los archivos fuente en un Makefile?

Se pueden definir en un Makefile mediante reglas que indican qué archivos objeto deben generarse antes de poder compilar un archivo fuente específico.

### 17. Explique cómo se puede compilar un proyecto en diferentes sistemas operativos usando un solo Makefile.

Se puede compilar un proyecto en diferentes sistemas operativos utilizando un solo Makefile al escribir reglas que se adapten a las diferencias en la compilación y el enlazado entre sistemas operativos.

### 18. ¿Cuál es el propósito de los comandos clean y all en un Makefile?

El comando "clean" en un Makefile se utiliza para eliminar los archivos generados durante la compilación, como archivos objeto y ejecutables. El comando "all" se utiliza para compilar todos los objetivos especificados en el Makefile.

### 19. Describa cómo se pueden pasar argumentos desde la línea de comandos a un Makefile.

Los argumentos de la línea de comandos se pueden pasar a un Makefile utilizando variables especiales como $(ARGV) dentro del Makefile. Estas variables capturan los argumentos proporcionados al Makefile al ejecutarlo desde la línea de comandos.

### 20. Proporcione un ejemplo de una regla en un Makefile que compile un archivo fuente .cpp a un archivo objeto .o.
````
### Regla para compilar un archivo fuente .cpp a un archivo objeto .o
### Se asume que el archivo fuente se llama "source.cpp" y el archivo objeto "source.o"

source.o: source.cpp
    g++ -c source.cpp -o source.o
````

## Makefile

### 1. ¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un Makefile?

Las variables en un Makefile se utilizan para definir configuraciones y opciones que se utilizarán durante el proceso de compilación y enlazado del programa.

- CC:  se utiliza para especificar el compilador a utilizar. Por ejemplo, "CC = gcc" especifica que se utilizará el compilador GCC.

- CFLAGS: se utiliza para especificar las opciones del compilador. Por ejemplo, "-Wall" para activar todos los avisos y "-O2" para habilitar la optimización de nivel 2.

- CXXFLAGS: similar a CFLAGS, pero específico para el compilador de C++ (g++).

- LDFLAGS:  se utiliza para especificar las opciones del enlazador. Por ejemplo, "-lm" para enlazar con la biblioteca matemática estándar y "-L" para especificar directorios de bibliotecas.

### 2. ¿De qué se compone una regla en un Makefile?

Se compone de tres partes principales: los objetivos, los prerequisitos y las recetas. Los objetivos son los archivos (o acciones) que se desean construir, los prerequisitos son los archivos necesarios para construir los objetivos y las recetas son las acciones que deben llevarse a cabo para construir los objetivos utilizando los prerequisitos.

### 3. Defina qué es un target y cómo se relaciona con sus prerequisitos.

Un target (objetivo) en un Makefile es el archivo que se desea construir. Se relaciona con sus prerequisitos, que son los archivos necesarios para construir el objetivo. Si algún prerequisito ha sido modificado más recientemente que el objetivo, o si el objetivo no existe, se ejecutan las acciones asociadas con el objetivo para construirlo.

### 4. ¿Para qué se utiliza la bandera -I, -c y -o del compilador gcc?

- -I: especifica directorios de inclusión para buscar archivos de encabezado. Por ejemplo, "-I /usr/include" agrega "/usr/include" al camino de búsqueda de archivos de encabezado.

- -c: indica al compilador que genere solo archivos objeto (*.o) sin enlazarlos para crear un ejecutable.

- -o: especifica el nombre del archivo de salida generado por el compilador. Por ejemplo, "-o archivo.o" especifica que el archivo de salida se llamará "archivo.o".

### 5. ¿Cómo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?

Las variables en un Makefile se definen utilizando la sintaxis "nombre = valor". Por ejemplo, "CC = gcc" define la variable CC con el valor gcc. Las variables se utilizan colocando el nombre de la variable entre $( ) o ${ } en el Makefile. Por ejemplo, "$(CC)" se expandirá al valor de la variable CC. Las variables son útiles para definir configuraciones comunes que se pueden reutilizar en todo el Makefile y facilitan la modificación de la configuración del compilador u otras opciones.

### 6. ¿Qué utilidad tiene un @ en un Makefile?

El símbolo "@" en un Makefile se utiliza para silenciar la salida de la línea de comando que está siendo ejecutada. Por ejemplo, "@echo 'Compilando...'" no mostrará "Compilando..." en la salida estándar mientras se ejecuta el Makefile.

### 7. ¿Para qué se utiliza .PHONY en un Makefile?

La directiva ".PHONY" en un Makefile se utiliza para especificar objetivos que no son archivos reales. Esto evita conflictos si hay archivos con el mismo nombre que el objetivo en el directorio. Por ejemplo, si tienes un objetivo llamado "clean" que elimina archivos, podría haber un archivo real llamado "clean" en el directorio, y sin ".PHONY", make no lo reconocería correctamente. Con ".PHONY", se asegura de que "clean" se ejecute siempre como una regla y no se confunda con un archivo real.
