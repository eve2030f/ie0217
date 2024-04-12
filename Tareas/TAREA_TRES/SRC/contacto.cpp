//Tarea 3 Evelyn F. B82870
/**
 * @file contacto.cpp
 * 
 * @author Evelyn Feng
 * @date 12/4/24
 * @license MIT License
 * Este programa está sujeto a los términos y condiciones de la licencia resente en el archivo 'licencia.txt'.
 */

#include "contacto.hpp"

/**
 * @brief Constructor de la clase Contacto.
 * 
 * @param nombre Nombre del contacto.
 * @param telefono Teléfono del contacto.
 */
Contacto::Contacto(const std::string& nombre, const std::string& telefono) 
    : nombre(nombre), /**< Nombre del contacto */
      telefono(telefono), /**< Teléfono del contacto */
      siguiente(nullptr) /**< Puntero al siguiente contacto en la lista */
{
    // No se requieren más acciones en el constructor.
}
