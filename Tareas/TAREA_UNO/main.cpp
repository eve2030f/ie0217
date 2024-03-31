//Tarea 1 B82870 Evelyn Feng

#include "funciones.hpp"
#include "ahorcado.hpp"

#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>


int main() {
    Ahorcado juego;
    Dificultad dificultad = FACIL;
    std::vector<std::string> diccionario = {"payaso", "zapato", "doctor", "xilofono", "computadora", "esternocleidomastoideo", "otorinolaringologo"};

    int opcion;
    bool salir = false;

    while (!salir) {
        mostrarMenu(dificultad);
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "\nElige la dificultad:" << std::endl;
                std::cout << "1. Facil (7 intentos)" << std::endl;
                std::cout << "2. Intermedio (5 intentos)" << std::endl;
                std::cout << "3. Dificil (3 intentos)" << std::endl;
                std::cout << "Selecciona una opcion: ";
                int nivel;
                std::cin >> nivel;
                switch (nivel) {
                    case 1:
                        dificultad = FACIL;
                        break;
                    case 2:
                        dificultad = INTERMEDIO;
                        break;
                    case 3:
                        dificultad = DIFICIL;
                        break;
                    default:
                        std::cout << "Opcion invalida. Seleccionando dificultad Facil por defecto." << std::endl;
                        dificultad = FACIL;
                        break;
                }
                break;
            case 2:
                if (diccionario.empty()) {
                    std::cout << "El diccionario de palabras esta vacio. Por favor, agregue palabras antes de iniciar el juego." << std::endl;
                } else {
                    inicializaJuego(juego, dificultad, diccionario);
                    std::cout << "Iniciando juego..." << dificultadToString(dificultad) << std::endl;
                    while (!juegoTerminado(juego)) {
                        mostrarEstadoJuego(juego);
                        char letra;
                        std::cout << "Ingrese una letra: ";
                        std::cin >> letra;
                        if (!isalpha(letra)) {
                            std::cout << "Entrada invalida. Por favor, ingrese una letra." << std::endl;
                            continue;
                        }
                        adivinarLetra(juego, letra);
                    }
                    if (juego.estadoActual == juego.palabraAAdivinar) {
                        std::cout << "¡Felicidades, has adivinado la palabra!" << std::endl;
                    } else {
                        std::cout << "¡Lo siento, has perdido! La palabra era: " << juego.palabraAAdivinar << std::endl;
                    }
                }
                break;
            case 3:
                agregarPalabra(diccionario);
                break;
            case 4:
                mostrarDiccionario(diccionario);
                break;
            case 5:
                salir = true;
                break;
            default:
                std::cout << "Opción no válida. Por favor, seleccione una opción válida del menú." << std::endl;
                break;
        }
    }

    return 0;
}