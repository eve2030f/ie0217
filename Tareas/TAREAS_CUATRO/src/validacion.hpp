//Tarea 3 Evelyn Feng Wu B82870
#ifndef VALIDACION_HPP
#define VALIDACION_HPP

#include <string>
#include <stdexcept>

/**
 * @file validacion.hpp
 * @brief Contiene la declaración de la clase ValidacionDeEntrada
 */

/**
 * @brief Clase para validar entradas de usuario
 */
class ValidacionDeEntrada {
public:
    /**
     * @brief Valida la dimensión de un tamaño.
     * @param tamano Tamaño a validar.
     * @throw std::invalid_argument si el tamaño es menor o igual a cero.
     */
    static void validarDimension(int tamano);

    /**
     * @brief Valida si una cadena representa un número válido.
     * @param str Cadena a validar.
     * @throw std::invalid_argument si la cadena no representa un número válido.
     */
    static void validarNumero(const std::string& str);
};

#endif
