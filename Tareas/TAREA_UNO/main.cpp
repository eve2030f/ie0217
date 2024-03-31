//Tarea 1 B82870 Evelyn Feng

#include "funciones.hpp"
#include "ahorcado.hpp"

#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

int main() {
    std::vector<std::string> diccionario;
    Ahorcado juego;
    Dificultad dificultad = FACIL;

    mostrarMenu(dificultad); // Mostrar el menú al inicio

    // Ejemplo de uso de las funciones
    inicializaJuego(juego, dificultad, diccionario);
    mostrarEstadoJuego(juego);

    // Bucle del juego
    while (!juegoTerminado(juego)) {
        // Solicitar al usuario que ingrese una letra
        char letraIngresada;
        std::cout << "Ingrese una letra: ";
        std::cin >> letraIngresada;
        // Limpiar el buffer de entrada
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        // Verificar si la letra ya se intentó
        if (juego.intentosRealizados.find(letraIngresada) != std::string::npos) {
            std::cout << "Esta letra ya fue ingresada. Por favor, intente con otra.\n";
            continue; // Saltar a la próxima iteración del bucle
        }

        // Adivinar la letra
        adivinarLetra(juego, letraIngresada);
        mostrarEstadoJuego(juego);
    }

    // Mostrar mensaje de victoria o derrota
    if (juego.estadoActual == juego.palabraAAdivinar) {
        std::cout << "¡Felicidades! Has adivinado la palabra correctamente.\n";
    } else {
        std::cout << "Lo siento, has agotado todos tus intentos. La palabra era: " << juego.palabraAAdivinar << "\n";
    }

    return 0;
}
