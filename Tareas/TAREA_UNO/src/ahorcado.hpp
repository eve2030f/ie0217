//Tarea 1 B82870 Evelyn Feng

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
