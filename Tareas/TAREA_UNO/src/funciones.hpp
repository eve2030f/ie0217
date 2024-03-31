//Tarea 1 B82870 Evelyn Feng

//Llama a las funciones, si no estan aca no funciona si las llama en el main

#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include "ahorcado.hpp"
#include <vector>

/**
 * @file funciones.hpp
 * @brief Contiene las declaraciones de las funciones auxiliares para el juego de ahorcado.
 */

/**
 * @brief Convierte un valor de la enumeración Dificultad a su representación en formato de cadena.
 * 
 * @param dificultad La dificultad a convertir.
 * @return std::string La representación en formato de cadena de la dificultad.
 */
std::string dificultadToString(Dificultad dificultad);

/**
 * @brief Muestra el menú del juego de ahorcado, permitiendo al jugador elegir la dificultad.
 * 
 * @param dificultad La dificultad seleccionada por el jugador.
 */
void mostrarMenu(Dificultad dificultad);

/**
 * @brief Agrega una nueva palabra al diccionario del juego.
 * 
 * @param diccionario Un puntero al diccionario donde se agregará la palabra.
 */
void agregarPalabra(std::vector<std::string>* diccionario);

/**
 * @brief Muestra todas las palabras del diccionario.
 * 
 * @param diccionario Un puntero al diccionario que se mostrará.
 */
void mostrarDiccionario(const std::vector<std::string>* diccionario);

/**
 * @brief Inicializa un juego de ahorcado con la dificultad especificada y el diccionario de palabras.
 * 
 * @param juego Un puntero al juego de ahorcado que se inicializará.
 * @param dificultad La dificultad del juego.
 * @param diccionario Un puntero al diccionario de palabras.
 */
void inicializaJuego(Ahorcado* juego, Dificultad dificultad, const std::vector<std::string>* diccionario);

/**
 * @brief Muestra el estado actual del juego de ahorcado.
 * 
 * @param juego Un puntero al juego de ahorcado que se mostrará.
 */
void mostrarEstadoJuego(const Ahorcado* juego);

/**
 * @brief Intenta adivinar una letra en el juego de ahorcado.
 * 
 * @param juego Un puntero al juego de ahorcado en el que se realizará la adivinanza.
 * @param letra La letra que se está intentando adivinar.
 */
void adivinarLetra(Ahorcado* juego, char letra);

/**
 * @brief Verifica si el juego de ahorcado ha terminado.
 * 
 * @param juego Un puntero al juego de ahorcado que se verificará.
 * @return true Si el juego ha terminado.
 * @return false Si el juego aún no ha terminado.
 */
bool juegoTerminado(const Ahorcado* juego);

/**
 * @brief Limpia el buffer de entrada del flujo de entrada estándar.
 */
void limpiarBufferEntrada();

#endif 

