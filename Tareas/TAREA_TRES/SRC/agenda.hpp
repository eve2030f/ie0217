//Tarea 3 Evelyn F. B82870
/**
 * @file agenda.hpp
 * 
 * @author Evelyn Feng
 * @date 12/4/24
 * @license MIT License
 * Este programa está sujeto a los términos y condiciones de la licencia resente en el archivo 'licencia.txt'.
 */
#ifndef AGENDA_HPP
#define AGENDA_HPP

#include <iostream>
#include <string>
#include "contacto.hpp"

using namespace std;

class Agenda {
private:
    Contacto* primer_contacto;
    static const int TAMANO_TABLA = 50;
    Contacto* tabla[TAMANO_TABLA];

    size_t funcion_hash(const string& nombre);
    void agregarOrdenado(const string& nombre, const string& telefono);

public:
    Agenda();
    ~Agenda();

    void agregar(const string& nombre, const string& telefono);
    string obtener(const string& nombre);
    void eliminar(const string& nombre);
    void eliminar2(const string& nombre);
    void mostrarListaEnlazada();
    void mostrarTablaHash();
};

#endif // AGENDA_HPP