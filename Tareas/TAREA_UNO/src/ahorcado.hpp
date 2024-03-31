//Tarea 1 B82870 Evelyn Feng
/**
 * @file ahorcado.hpp
 * @brief Definición de la estructura Ahorcado y la enumeración Dificultad para el juego del ahorcado.
 * 
 * Este archivo contiene la definición de la estructura Ahorcado y la enumeración Dificultad, que son utilizadas
 * para representar el estado y las dificultades del juego del ahorcado.
 * 
 * @author Evelyn Feng
 * @date 31/3/24
 * @license MIT License
 * Este programa está sujeto a los términos y condiciones de la licencia resente en el archivo 'licencia.txt'.
 */
#ifndef AHORCADO_HPP
#define AHORCADO_HPP

#include <string>

/**
 * @file ahorcado.hpp
 * @brief Contiene la definición de la estructura Ahorcado y el enum Dificultad para el juego de ahorcado.
 */

/**
 * @brief Enumeración para representar las dificultades del juego de ahorcado.
 */
enum Dificultad {
    FACIL, 
    INTERMEDIO, 
    DIFICIL 
};

/**
 * @brief Estructura para representar el juego de ahorcado.
 */
struct Ahorcado {
    std::string palabraAAdivinar; ///< Palabra a adivinar
    std::string estadoActual; ///< Estado actual de la palabra adivinada
    int intentosMax; ///< Número máximo de intentos permitidos
    int intentos; ///< Número de intentos realizados
    std::string intentosRealizados; ///< Letras intentadas
    Dificultad dificultad; ///< Dificultad del juego
};

#endif 
