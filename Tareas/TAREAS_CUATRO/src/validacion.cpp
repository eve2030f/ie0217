//Tarea 3 Evelyn Feng Wu B82870

#include "validacion.hpp"
#include <cctype>

/**
 * @file validacion.cpp
 * @brief Contiene la implementación de las funciones de validación de entradas de usuario.
 */

/**
 * @brief Valida la dimensión de un tamaño.
 * @param tamano Tamaño a validar.
 * @throw std::invalid_argument si el tamaño es menor o igual a cero.
 */
void ValidacionDeEntrada::validarDimension(int tamano) {
    if (tamano <= 0) {
        throw std::invalid_argument("Las dimensiones deben ser numeros positivos mayores a 0");
    }
}

/**
 * @brief Valida si una cadena representa un número válido.
 * @param str Cadena a validar.
 * @throw std::invalid_argument si la cadena no representa un número válido.
 */
void ValidacionDeEntrada::validarNumero(const std::string& str) {
    for (char c : str) {
        if (!std::isdigit(c)) {
            throw std::invalid_argument("Debe ingresar solo numeros. Revisar la cantidad de valores digitados.");
        }
    }
}