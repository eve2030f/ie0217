//Laboratorio 5 B82870 Evelyn Feng 

#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include <iostream>
#include <vector>
#include <algorithm> //biblioteca para las funciones de ordenamiento, manipulacion y busqueda de datos con todos los operadores
#include <string>
//estructura
//clase Libro 
class Libro {
public:
//atributos publicos
    std::string titulo; //crea variables publicas tipo string
    std::string autor;
    int anioPublicacion; //crea variable publica int

    Libro(std::string t, std::string a, int anio) : titulo(t), autor(a), anioPublicacion(anio) {} // constructor: a la clase libro le asigna los variables publicas

    bool operator<(const Libro& l) const {
        return anioPublicacion < l.anioPublicacion; //booleano para comparar los años de publicacion de los libros
    }
};


class Biblioteca {  
private:
    std::vector<Libro> libros; //en la clase biblioteca se almacenan los libros como variables privadas

public:
//funciones utilizadas en el codigo

    void agregarLibro(const Libro& libro) ;

    void mostrarLibros() ;

    void ordenarLibrosPorAnio() ;

    std::vector<Libro>::iterator buscarLibroPorTitulo(const std::string& titulo) ;

    std::vector<Libro>::iterator end() ;
};

#endif