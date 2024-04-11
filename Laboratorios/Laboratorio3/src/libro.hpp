//Laboratorio 3 B82870 Evelyn Feng 
//Estructura

#ifndef LIBRO_HPP// SI LLEGA Y NO ENCUENTRA EL DOC SE BRINCA EL DEF
#define LIBRO_HPP 

// Libreria o biblioteca
#include <iostream>
#include <string>
using namespace std;

struct Libro {
    string titulo; // 3 miembros tipcos
    string autor;
    string genero;
    Libro* siguiente;  //puntero llamado sigueinte a una estructura de ese tipo
};

#endif
