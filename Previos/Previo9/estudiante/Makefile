#Previo 9 Evelyn Feng Wu B82870

##Nombre del programa de salida, ejecutable final - nombre de variable
TARGET= gestion_estudiantes.exe

##Compilador de C++

CXX= g++

##Opciones de compilacion - define bandera de compilacion
#todas las warnings al compilar con Wall y con distintos compiladores

CXXFLAGS= -Wall -std=c++11

##Lista de archivos

SOURCES= main.cpp estudiante.cpp

##Lista de archivos generados a partir de SOURCES
# de sources todos los archivos cpp crean mismo nombre .exe

OBJECTS=$(SOURCES:.cpp=.exe)

##Regla para compilar los archivos fuente en archivos objeto
#regla para todos los archivos .exe la dependencia es el archivo cpp, para cada uno tiene las banderas para compilar
#$< es .cpp  -o $@ es .exe

%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

##Regla para compilar el programa a partir de los objetos
#target final final a ejecutar, lo que se genera, objects exe y cxflags banderas

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

#Regla para limpiar archivos generados
#target.exe y los otros dos exe

clean:
	del $(TARGET) $(OBJECTS)

##make=borra los ejecutables
## make compila
## ./gestion_estudiantes.exe para ejecutar el programa