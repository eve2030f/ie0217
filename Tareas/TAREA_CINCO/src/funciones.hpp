//Tarea 5 Evelyn Feng Wu B82870
// Expresiones regulares para validar un correo electronico



/**
 * @file funciones.hpp
 * 
 * @author Evelyn Feng
 * @date 5/12/24
 * @license MIT License
  * @brief* funciones.hpp contiene las definiciones de las expresiones regulares para validar un correo electronico. Este programa está sujeto a los términos y condiciones de la licencia resente en el archivo 'licencia.txt'.
 
 
 */

#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include <iostream> // Biblioteca estándar de entrada y salida de datos
#include <string>
#include <stdexcept> // Biblioteca estándar para excepciones
#include <regex> // Biblioteca estándar para expresiones regulares

/**
 * @brief Clase para validar direcciones de correo electrónico.
 * 
 * Esta clase proporciona funciones para validar la estructura de una dirección de correo electrónico
 * según ciertos criterios específicos.
 */
class ValidadorEmail {
public:
    /**
     * @brief Valida una dirección de correo electrónico.
     * 
     * Esta función verifica que la dirección de correo electrónico cumpla con ciertos requisitos,
     * incluyendo la estructura del nombre de usuario, el dominio y la extensión.
     * 
     * @param correo La dirección de correo electrónico a validar.
     * @throws std::invalid_argument si la dirección de correo electrónico no cumple con los requisitos.
     */
    void validarCorreo(const std::string& correo);

private:
    /**
     * @brief Valida el nombre de usuario en una dirección de correo electrónico.
     * 
     * Esta función verifica que el nombre de usuario cumpla con ciertos requisitos,
     * como longitud, caracteres especiales permitidos, etc.
     * 
     * @param nombre El nombre de usuario a validar.
     * @throws std::invalid_argument si el nombre de usuario no cumple con los requisitos.
     */
    void validarNombre(const std::string& nombre);

    /**
     * @brief Valida el dominio en una dirección de correo electrónico.
     * 
     * Esta función verifica que el dominio cumpla con ciertos requisitos,
     * como longitud, caracteres especiales permitidos, etc.
     * 
     * @param dominio El dominio a validar.
     * @throws std::invalid_argument si el dominio no cumple con los requisitos.
     */
    void validarDominio(const std::string& dominio);

    /**
     * @brief Valida la extensión en una dirección de correo electrónico.
     * 
     * Esta función verifica que la extensión cumpla con ciertos requisitos,
     * como longitud, caracteres permitidos, etc.
     * 
     * @param extension La extensión a validar.
     * @throws std::invalid_argument si la extensión no cumple con los requisitos.
     */
    void validarExtension(const std::string& extension);
};

#endif // FUNCIONES_HPP
