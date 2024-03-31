//Tarea 1 B82870 Evelyn Feng

//Llama a las funciones

#ifndef FUNCIONES_HPP //si no esta definido entonces ejecute, para evitar errores de definicion
#define FUNCIONES_HPP

#include "ahorcado.hpp"
#include <vector>

std::string dificultadToString(Dificultad dificultad);
void mostrarMenu(Dificultad dificultad);
void agregarPalabra(std::vector<std::string>& diccionario);
void mostrarDiccionario(const std::vector<std::string>& diccionario);
void inicializaJuego(Ahorcado& juego, Dificultad dificultad, const std::vector<std::string>& diccionario);
void mostrarEstadoJuego(const Ahorcado& juego);
void adivinarLetra(Ahorcado& juego, char letra);
bool juegoTerminado(const Ahorcado& juego);
#endif

