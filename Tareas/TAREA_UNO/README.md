##Universidad de Costa Rica

Estructuras Abstractas de Datos y Algoritmos para Ingeniería IE0217

#Tarea 1

Profesor: Rafael Esteban Badilla Alvarado

Estudiante: Evelyn Feng B82870

I Semestre 2024

##Parte 1.

1.	¿Cuál es la principal diferencia entre C y C++?

La principal diferencia es que C++ es un lenguaje de programación orientado a objetos, mientras que C es más procedimental o ejecución de procedimientos. C++ es más complejo.
2.	Explique el propósito y el uso de los siguientes comandos de Git: git init, git add, git commit, git push, git pull, git clone, git branch, git merge.

git init: Inicializa un nuevo repositorio Git.

git add: Agrega cambios al área de preparación.

git commit: Registra los cambios en el repositorio. Se puede modificar o agregar el nombre del cambio a realizar.

git push: Sube los cambios locales (computadora). al repositorio remoto(GitHub).

git pull: Obtiene los cambios del repositorio remoto (GitHub) y los fusiona con el repositorio local (computadora).

git clone: Clona un repositorio remoto (GitHub) en el repositorio local (computadora).

git branch: Lista, crea o elimina ramas.

git merge: Fusiona una rama con otra, usualmente cuando hay un pul request.

3.	¿Qué es Git y cuál es su propósito en el desarrollo de software?

Git es un sistema de control de versiones distribuido de fuente abierta que permite a los desarrolladores colaborar en proyectos de software y rastrear cambios en el código fuente a lo largo del tiempo. Facilita las actividades en GitHub.

4.	¿Qué es un conflicto de fusión (merge conflict) en Git y cómo se resuelve?

Un conflicto de fusión ocurre cuando Git no puede fusionar automáticamente los cambios de dos ramas diferentes. No puede decidir cuál es la versión correcta del código para mantener en el resultado. Para resolverse manualmente editando el archivo afectado para resolver los conflictos y luego realizando un git add y commit para completar la fusión. Existen indicadores como <<<<<<<, ======= y >>>>>>>, que se utilizan para separar las diferentes versiones del código en conflicto. (GitHub, 2024)

5.	¿Qué es un archivo .gitignore y para qué se utiliza?

Un archivo .gitignore especifica los archivos y directorios que Git debe ignorar al realizar operaciones como git add o git commit.

6.	¿Qué es una solicitud de extracción (pull request) en GitHub y cómo se utiliza?

Un pull request es una solicitud para fusionar cambios de una rama de características (feature branch) en la rama principal (main branch) del repositorio. Se utiliza para revisar y discutir los cambios antes de fusionarlos.

7.	¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado? Proporcione ejemplos de situaciones en las que sería más óptimo utilizar un lenguaje compilado y otras en las que sería más adecuado un lenguaje interpretado.

La diferencia principal entre un lenguaje de programación compilado y uno interpretado es que los lenguajes compilados se traducen completamente a lenguaje de máquina antes de ejecutarse, mientras que los lenguajes interpretados se traducen línea por línea durante la ejecución.

•	C++ es un ejemplo de lenguaje compilado, óptimo para programas que requieren alta eficiencia y rendimiento, como sistemas operativos o aplicaciones de bajo nivel.
•	Un lenguaje interpretado es Python, adecuado para el desarrollo rápido de prototipos y aplicaciones web.

8.	Explique qué es un linker en el contexto de un lenguaje de programación compilado. ¿Cuál es su función principal y por qué es esencial en el proceso de compilación?

Un linker es una herramienta que une varios archivos objeto y bibliotecas generados durante la compilación en un único ejecutable. Su función principal es resolver las referencias a símbolos y enlazar las funciones utilizadas en diferentes partes del código. Por ejemplo, desde main.cpp con void saludar() puedo llamar a la función saludar() definida con un void en el archivo función.cpp. 

9.	Describa el flujo de trabajo básico en Git para agregar cambios a un repositorio.

El flujo de trabajo básico en Git para agregar cambios a un repositorio implica los siguientes pasos:
•	Modificar los archivos en el directorio de trabajo.
•	Agregar los archivos modificados al área de preparación con git add.
•	Confirmar los cambios al repositorio con git commit.
•	Subir los cambios al repositorio remoto con git push
•	Para obtener lOS cambios más recientes del repertorio git pull

10.	Defina qué significa inicializar y declarar una variable.

Inicializar una variable significa asignarle un valor inicial (int num = 10) . Declarar una variable significa especificar su tipo y nombre en el programa (double num2).

11.	¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?

La sobrecarga de funciones en C++ permite definir múltiples funciones con el mismo nombre pero con diferentes parámetros. Esto facilita la reutilización del nombre de función y hace que el código sea más fácil de entender.



##Parte Práctica - Juego Ahorcado

Para ejecutar el código siga las siguientes instrucciones digitando:
```
g++ -o ahorcado.exe .\main.cpp .\funciones.cpp

.\ahorcado.exe
````
