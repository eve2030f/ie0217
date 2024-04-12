//Tarea 3 Evelyn F. B82870

#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include "contacto.hpp"

// Definición de la clase Agenda
class Agenda {
private:
    Contacto* primer_contacto; // Puntero al primer contacto en la lista enlazada
    static const int TAMANO_TABLA = 50; // Tamaño de la tabla hash
    Contacto* tabla[TAMANO_TABLA]; // Tabla hash para almacenar los contactos

    // Función hash para calcular el índice en la tabla hash
    size_t funcion_hash(const std::string& nombre);

    // Función para agregar un contacto en orden alfabético en la lista enlazada
    void agregarOrdenado(const std::string& nombre, const std::string& telefono);

public:
    // Constructor
    Agenda();

    // Destructor
    ~Agenda();

    void agregar(const std::string& nombre, const std::string& telefono);

    std::string obtener(const std::string& nombre);

    void eliminar(const std::string& nombre); //para lista

    void eliminar2(const std::string& nombre); //para hash

    void mostrarListaEnlazada();

    void mostrarTablaHash();
};

#endif
