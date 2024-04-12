//Tarea 3 Evelyn F. B82870

#ifndef CONTACTO_HPP
#define CONTACTO_HPP

#include <string>

class Contacto {
public:
    std::string nombre;
    std::string telefono;
    Contacto* siguiente;

    Contacto(const std::string& nombre, const std::string& telefono);
};

#endif /* CONTACTO_HPP */
