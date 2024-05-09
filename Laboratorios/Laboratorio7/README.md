# Laboratorio 7 REGULAR EXPRESIONS Y MAKEFILES

Universidad de Costa Rica

Estructuras Abstractas de Datos y Algoritmos para Ingeniería IE0217

Profesor: Rafael Esteban Badilla Alvarado

**Estudiante: Evelyn Feng B82870**

I Semestre 2024


## Ejecución de los códigos

Para compilar los códigos del laboratorio escriba en su VS Code:
```
mingw32-make
````
## Resultado

````
g++ -Wall -std=c++11 -c src/main.cpp -o bin/main.exe

g++ -Wall -std=c++11 -c src/text_processor.cpp -o bin/text_processor.exe

g++ -Wall -std=c++11 bin/main.exe bin/text_processor.exe -o bin/textprocessor -lstdc++fs
````

Luego de compilar se utiliza el codigo siguiente para ejecutar textprocessor y crear el output.txt :
```
./bin/textprocessor -f data/input.txt -o data/output.txt -search "foo" -replace "bar"
````
## Nota importante
Se debe crear un archivo input.txt. En este caso yo creé un archivo con el siguiente texto:
````
Hola mundo foo foo foo foo
````
Se obtiene el siguiente resultado en un archivo output.txt creado por la ejecución del código:

## Resultado
````
Hola mundo bar bar bar bar
````

Finalmente se limpia los archivos creados con 

```
mingw32-make clean
````