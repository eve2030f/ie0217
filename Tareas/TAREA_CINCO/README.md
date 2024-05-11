# Tarea 5

Universidad de Costa Rica

Estructuras Abstractas de Datos y Algoritmos para Ingeniería IE0217

Profesor: Rafael Esteban Badilla Alvarado

**Estudiante: Evelyn Feng B82870**

I Semestre 2024


## Parte Práctica - Calculadora de matrices


## Link de Doxyfile por medio del Netlify:




## Parte Teórica

1. ¿Qué es una expresión regular y cuál es su propósito en programación?

Una expresión regular es una secuencia de caracteres que define un patrón de búsqueda. Se utilizan en programación para buscar y manipular cadenas de texto de manera eficiente, permitiendo realizar operaciones como búsqueda, sustitución, validación, etc., basadas en ese patrón.

2. ¿Qué significan los caracteres especiales . y * en una expresión regular?

En una expresión regular, el carácter "." (punto) coincide con cualquier carácter excepto el salto de línea. El "*" (asterisco) indica que el elemento precedente puede aparecer cero o más veces en la cadena.

3. ¿Cómo se pueden agrupar subexpresiones en una expresión regular?

Las subexpresiones se pueden agrupar utilizando paréntesis. Esto permite aplicar operadores a grupos completos de caracteres en lugar de a caracteres individuales.

4. ¿Qué función cumple la barra invertida \ en una expresión regular?

La barra invertida "" se utiliza para escapar caracteres especiales en una expresión regular o para denotar secuencias especiales como el principio de una línea o el final de una palabra.

5. xplique cómo se pueden capturar coincidencias usando paréntesis en una expresión regular.

Al usar paréntesis en una expresión regular, se pueden capturar subcadenas coincidentes. Estas subcadenas se pueden recuperar posteriormente para su uso en el programa.

6. ¿Cuál es la diferencia entre \d y \D en una expresión regular?

"\d" coincide con un dígito decimal (0-9), mientras que "\D" coincide con cualquier carácter que no sea un dígito decimal.

7. ¿Cómo se representa una clase de caracteres en una expresión regular?

Una clase de caracteres se representa encerrando los caracteres deseados entre corchetes []. Por ejemplo, [a-z] coincide con cualquier letra minúscula.

8. ¿Cuál es el propósito del modificador $ en una expresión regular?

El modificador "$" se utiliza para indicar el final de una cadena en una expresión regular.

9. Describa cómo validar una dirección de correo electrónico usando expresiones regulares en C++.

Para validar una dirección de correo electrónico en C++ usando expresiones regulares, se puede usar una expresión regular que coincida con el formato estándar de una dirección de correo electrónico. Luego, se puede verificar si la entrada del usuario coincide con este patrón.

10. Discuta las implicaciones de rendimiento de utilizar expresiones regulares en aplicaciones de software. ¿Qué técnicas se pueden aplicar para optimizar una expresión regular compleja, especialmente en contextos donde el tiempo de ejecución es crítico?

El uso de expresiones regulares puede tener implicaciones de rendimiento, ya que algunas expresiones pueden ser costosas en términos de tiempo de ejecución, especialmente en cadenas de texto largas. Para optimizar una expresión regular compleja, se pueden aplicar técnicas como la simplificación del patrón, la limitación de la búsqueda y la optimización de la implementación.

11. ¿Qué es un Makefile y cuál es su función en un proyecto de C++?

Un Makefile es un archivo de configuración utilizado en proyectos de software, especialmente en proyectos de C++, para definir cómo se compila y enlaza el código fuente del proyecto.

12. ¿Cuál es la diferencia entre una regla implícita y una regla explícita en un Makefile?

Una regla implícita es una regla predefinida en un Makefile que especifica cómo se compila un tipo particular de archivo fuente en un archivo objeto. Una regla explícita, por otro lado, es una regla definida por el usuario para especificar cómo compilar un archivo específico.

13. Explique el propósito de las macros (variables) en un Makefile.

Las macros en un Makefile se utilizan para definir variables que pueden ser referenciadas en todo el archivo. Esto permite una configuración más flexible y facilita la modificación del comportamiento del Makefile.

14. ¿Qué es un objetivo (target) en un Makefile y cómo se define?

Un objetivo en un Makefile es el resultado que se desea lograr al ejecutar el Makefile. Se define especificando el nombre del archivo que se desea generar y las dependencias que deben cumplirse antes de que el objetivo pueda ser alcanzado.

15. ¿Por qué es útil dividir un proyecto de C++ en múltiples archivos fuente y cómo ayuda el uso de Makefiles en este enfoque?

Dividir un proyecto de C++ en múltiples archivos fuente ayuda a organizar y mantener el código de manera más efectiva. El uso de Makefiles en este enfoque permite compilar cada archivo fuente por separado y luego enlazar los archivos objeto resultantes en un programa ejecutable.

16. ¿Cómo se pueden definir dependencias entre los archivos fuente en un Makefile?

Las dependencias entre archivos fuente se pueden definir en un Makefile mediante reglas que indican qué archivos objeto deben generarse antes de poder compilar un archivo fuente específico.

17. Explique cómo se puede compilar un proyecto en diferentes sistemas operativos usando un solo Makefile.

Se puede compilar un proyecto en diferentes sistemas operativos utilizando un solo Makefile al escribir reglas que se adapten a las diferencias en la compilación y el enlazado entre sistemas operativos.
¿
18. Cuál es el propósito de los comandos clean y all en un Makefile?

El comando "clean" en un Makefile se utiliza para eliminar los archivos generados durante la compilación, como archivos objeto y ejecutables. El comando "all" se utiliza para compilar todos los objetivos especificados en el Makefile.

19. Describa cómo se pueden pasar argumentos desde la línea de comandos a un Makefile.

Los argumentos de la línea de comandos se pueden pasar a un Makefile utilizando variables especiales como $(ARGV) dentro del Makefile. Estas variables capturan los argumentos proporcionados al Makefile al ejecutarlo desde la línea de comandos.

20. Proporcione un ejemplo de una regla en un Makefile que compile un archivo fuente .cpp a un archivo objeto .o.
````
# Regla para compilar un archivo fuente .cpp a un archivo objeto .o
# Se asume que el archivo fuente se llama "source.cpp" y el archivo objeto "source.o"

source.o: source.cpp
    g++ -c source.cpp -o source.o
````