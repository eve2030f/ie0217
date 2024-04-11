//Laboratorio 3 B82870 Evelyn Feng 

#ifndef PRINCIPAL_HPP// SI LLEGA Y NO ENCUENTRA EL DOC SE BRINCA EL DEF
#define PRINCIPAL_HPP 

#include "libro.hpp"

void agregarLibro(Libro*& lista);
//se asume q es entero int &lista, puntero de lista q es un entero x referencia, referencia a una var libropuntero
//crea nueva var libro puntero a traves del bew : reserva memoria dinamica en heap, creado con new pointer
//se asigna con memoria dinamica

void mostrarLibros(Libro* lista);
//muestra los libros ingresados o devuleve mensaje si no hay ninguno agregado

void liberarMemoria(Libro*& lista);
//LIEBRA UNO POR UNO LA MEMORIA, LIBRO PUNTERO DIFERENTE A NULO, SE LLEVA ELEMENTO (puntero), lo deja temporal
//una vez guardado lo sobreescribe para q este pase a ser el ultimo. 
//una vez actualizado desaparece de estructura pero sige en memoria asi q hace el delete para borrarlo
//lista solo guarda un libro, nuevo libro es la lista enlazada

#endif