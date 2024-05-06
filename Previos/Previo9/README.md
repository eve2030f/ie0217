
# Previo 9

Universidad de Costa Rica

Estructuras Abstractas de Datos y Algoritmos para Ingeniería IE0217

Profesor: Rafael Esteban Badilla Alvarado

**Estudiante: Evelyn Feng B82870**

I Semestre 2024


## Ejecución de los códigos

Para ejecutar los códigos del previo escriba en su VS Code:

|      Documento            |            Código                              |
| -------------             | -------------                                  |
| regex.cpp                 | g++ -o previo9.exe ./regex.cpp                 |
|                           | ./previo9.exe                                  |

### Resultado
true

true 

false

|      Documento            |            Código                              |
| -------------             | -------------                                  |
| Makefile  de estudiante   | mingw32-make                                   |
|                           |                                                |
| Makefile  de estudiante   | mingw32-make clean                             |
|                           |                                                |

### Resultado
g++ -Wall -std=c++11 -c main.cpp -o main.exe

g++ -Wall -std=c++11 -c estudiante.cpp -o estudiante.exe

g++ -Wall -std=c++11 -o gestion_estudiantes.exe main.exe estudiante.exe


|      Documento            |            Código                              |
| -------------             | -------------                                  |
| Makefile  de biblioteca   | mingw32-make    o  mingw32-make all            |
|                           |                                                |
| Makefile  de biblioteca   | mingw32-make clean                             |
|                           |                                                |

### Resultado
g++ -Wall -std=c++11 -c libro.cpp -o libro.exe

g++ -Wall -std=c++11 -c biblioteca.cpp -o biblioteca.exe

g++ -Wall -std=c++11 -c main.cpp -o main.exe

g++ -Wall -std=c++11 -o gestion_biblioteca.exe libro.exe biblioteca.exe main.exe





