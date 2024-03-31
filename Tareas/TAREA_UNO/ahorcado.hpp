//Tarea 1 B82870 Evelyn Feng

//Estrucutra del juego: AHORCADO

#ifndef AHORCADO_HPP //si no esta definido entonces ejecute, para evitar errores de definicion
#define AHORCADO_HPP

#include <string>
#include <iostream>


enum Dificultad { FACIL, INTERMEDIO, DIFICIL }; // enumera la dificultad

//estructura del juego
struct Ahorcado {
    std::string palabraAAdivinar; //palabra a adivinar 
    std::string estadoActual; //estado actual de la palabra adivinada
    int intentosMax; //intentos maximos
    int intentos; //intentos realizados
    std::string intentosRealizados;// Las letras intentadas
    Dificultad dificultad; //llama a las dificultades
};


#endif
