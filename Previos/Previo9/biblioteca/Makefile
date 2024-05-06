#Previo 9 Evelyn Feng Wu B82870

##Nombre programa de salida
TARGET= gestion_biblioteca.exe

#objetivo predeterminado
#por defecto makefile busca el q se llame all o el que se va a ejecutar 

all:$(TARGET)

#Compilador de C++

CXX= g++

##opciones de compilacion

CXXFLAGS= -Wall -std=c++11

##Lista de Archivos Fuente

SOURCES= libro.cpp biblioteca.cpp main.cpp

##Lista de archivos objeto generado a partir de archivos fuente

OBJECTS= $(SOURCES:.cpp=.exe)

#Regla para compilar el programa a partir de los archivo objeto
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

##Regla para compilar archivos fuente en archivso objeto

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

##Regla para limpiar los archivos generados

.PHONY: clean

clean:
	del $(TARGET) $(OBJECTS)

##./gestion_biblioteca.exe para ejecutar el programa
##mingw32-make para compilar
##make clean para borrar el ejecutable