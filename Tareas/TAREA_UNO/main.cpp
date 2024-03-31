//Tarea 1 B82870 Evelyn Feng

#include "funciones.hpp"
#include "ahorcado.hpp"

#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits> // Para limpiar el buffer de entrada

//void limpiarBufferEntrada() {
//    std::cin.clear(); // Limpiar el estado del flujo de entrada
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descartar caracteres restantes en el buffer de entrada
//}


int main() {
    Ahorcado juego;
    Dificultad dificultad = FACIL;
    std::vector<std::string> diccionario = {"payaso", "zapato", "doctor", "xilofono", "computadora", "esternocleidomastoideo", "otorinolaringologo"};

    int opcion;
    bool salir = false;

    while (!salir) {
        mostrarMenu(dificultad);
        std::cin >> opcion;
        // Limpiar el buffer de entrada después de leer la opcion del menu, evita los e
        limpiarBufferEntrada();

        switch (opcion) {
            case 1:
                std::cout << "\n Elige la dificultad:" << std::endl;
                std::cout << "1. Facil (7 intentos)" << std::endl;
                std::cout << "2. Intermedio (5 intentos)" << std::endl;
                std::cout << "3. Dificil (3 intentos)" << std::endl;
                std::cout << "Selecciona una opcion: ";
                int nivel;
                std::cin >> nivel;
                // limpia las entradas inválidas
                limpiarBufferEntrada();
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
                        std::cout << "\n Opcion invalida. Seleccionando dificultad Facil por defecto." << std::endl; //mensaje si ingresa opcion invalida ya sea letra o numero incorrecto
                        dificultad = FACIL;
                        break;
                }
                break;
            case 2:
                if (diccionario.empty()) {
                    std::cout << "El diccionario de palabras esta vacio. Por favor, agregue palabras antes de iniciar el juego." << std::endl;
                } else {
                    inicializaJuego(&juego, dificultad, &diccionario);
                    std::cout << "Iniciando juego  " << dificultadToString(dificultad) << std::endl;
                    while (!juegoTerminado(&juego)) {
                        mostrarEstadoJuego(&juego); //uso de puntero
                        char letra;
                        std::cout << "Ingrese una letra: ";
                        std::cin >> letra;
                        if (!isalpha(letra)) {
                            std::cout << "\nInvalido. Ingrese una letra." << std::endl; //mensaje de error si pone un numero en el juego
                            continue;
                        }
                        adivinarLetra(&juego, letra); //uso de puntero
                    }
                    if (juego.estadoActual == juego.palabraAAdivinar) {
                        std::cout << "FELICIDADES has adivinado la palabra!" << std::endl;
                    } else {
                        std::cout << "PERDISTE La palabra era: " << juego.palabraAAdivinar << std::endl;
                    }
                }
                break;
            case 3:
                agregarPalabra(&diccionario); //uso de puntero
                break;
            case 4:
                mostrarDiccionario(&diccionario); //uso de puntero
                break;
            case 5:
                salir = true;
                break;
            default:
                std::cout << "Opcion no valida. Por favor, seleccione una opcion valida del menu." << std::endl;
                break;
        }
    }

    return 0;
}