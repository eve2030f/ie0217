//Tarea 3 Evelyn F. B82870

#ifndef CONTACTO_HPP
#define CONTACTO_HPP

#include <string>

// Definición de la clase Contacto
class Contacto {
public:
    std::string nombre;
    std::string telefono;
    Contacto* siguiente; // Puntero al siguiente contacto en la lista enlazada

    // Constructor que inicializa los datos del contacto
    Contacto(const std::string& nombre, const std::string& telefono);
};

#endif
