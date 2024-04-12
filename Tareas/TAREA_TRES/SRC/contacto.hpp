//Tarea 3 Evelyn F. B82870
/**
 * @file funciones.cpp
 * 
 * @author Evelyn Feng
 * @date 12/4/24
 * @license MIT License
 * Este programa está sujeto a los términos y condiciones de la licencia resente en el archivo 'licencia.txt'.
 */

#ifndef CONTACTO_HPP
#define CONTACTO_HPP

#include <string>

/**
 * @brief Clase que representa un contacto en la agenda.
 */
class Contacto {
public:
    std::string nombre; /**< Nombre del contacto */
    std::string telefono; /**< Teléfono del contacto */
    Contacto* siguiente; /**< Puntero al siguiente contacto en la lista */

    /**
     * @brief Constructor de la clase Contacto.
     * 
     * @param nombre Nombre del contacto.
     * @param telefono Teléfono del contacto.
     */
    Contacto(const std::string& nombre, const std::string& telefono);
};

#endif /* CONTACTO_HPP */
