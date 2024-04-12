#ifndef AGENDA_HPP
#define AGENDA_HPP

#include <string>
#include "contacto.hpp"

class Agenda {
private:
    Contacto* primer_contacto;
    static const int TAMANO_TABLA = 50;
    Contacto* tabla[TAMANO_TABLA];

    size_t funcion_hash(const std::string& nombre);
    
public:
    Agenda();
    ~Agenda();
    void agregarOrdenado(const std::string& nombre, const std::string& telefono);

    void agregar(const std::string& nombre, const std::string& telefono);
    std::string obtener(const std::string& nombre);
    void eliminar(const std::string& nombre);
    void eliminar2(const std::string& nombre);
    void mostrarListaEnlazada();
    void mostrarTablaHash();
};

#endif /* AGENDA_HPP */
