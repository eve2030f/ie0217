Universidad de Costa Rica

Estructuras Abstractas de Datos y Algoritmos para Ingeniería IE0217

# Tarea 1

Profesor: Rafael Esteban Badilla Alvarado

Estudiante: Evelyn Feng B82870

I Semestre 2024


## Parte Práctica - Juego Ahorcado

Para ejecutar el código siga las siguientes instrucciones digitando:
```
g++ -o ahorcado.exe .\main.cpp .\funciones.cpp

.\ahorcado.exe
````


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

•	C++ es un ejemplo de lenguaje compilado, óptimo para programas que requieren alta eficiencia y rendimiento, como sistemas operativos o aplicaciones de bajo nivel.
•	Un lenguaje interpretado es Python, adecuado para el desarrollo rápido de prototipos y aplicaciones web.
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
- Mostovoi, A. & Pinkas, L. (2020). Programación I. https://es.scribd.com/document/641831486/Programacion-I
