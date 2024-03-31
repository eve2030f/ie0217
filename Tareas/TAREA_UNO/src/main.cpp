//Tarea 1 B82870 Evelyn Feng

#include "funciones.hpp"
#include "ahorcado.hpp"

#include <algorithm> // Para utilizar std::transform
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits> // Para limpiar el buffer de entrada


int main() {
    Ahorcado juego;
    Dificultad dificultad = FACIL;
    //Palabras predeterminadas en el diccionario
    std::vector<std::string> diccionario = {"risa", "boca", "payaso", "zapato", "doctor", "xilofono", "computadora", "esternocleidomastoideo", "otorinolaringologo"};
    std::vector<char> letrasAdivinadas; // Declarar el vector de letras adivinadas

    int opcion;
    bool salir = false;

    while (!salir) {
        juego.intentosRealizados.clear(); //limpiar letras almacenadas en la variable al inicio de cada partida
        mostrarMenu(dificultad);
        std::cin >> opcion;
        // Limpiar el buffer de entrada después de leer la opcion del menu
        limpiarBufferEntrada();

        switch (opcion) {
            case 1: // elige la dificultad
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
            case 2: //se selecicona aleatoriamente una palabra del diccionario
                if (diccionario.empty()) {
                    std::cout << "El diccionario de palabras esta vacio. Por favor, agregue palabras antes de iniciar el juego." << std::endl;
                } else {
                    inicializaJuego(&juego, dificultad, &diccionario);
                    std::cout << "Iniciando juego  " << dificultadToString(dificultad) << std::endl; //comienza el jeugo
                    while (!juegoTerminado(&juego)) {
                        mostrarEstadoJuego(&juego); //uso de puntero
                        char letra;
                        std::cout << "Ingrese una letra: "; //ingrese letra para el juego
                        std::cin >> letra;
                        limpiarBufferEntrada();
                        if (!isalpha(letra)) {
                            std::cout << "\n Invalido. Ingrese una letra." << std::endl; //mensaje de error si pone un numero en el juego
                            continue;
                        }
                        adivinarLetra(&juego, letra); //uso de puntero
                    }
                    if (juego.estadoActual == juego.palabraAAdivinar) {
                        std::cout << "FELICIDADES has adivinado la palabra!" << std::endl; //gana la partida
                        letrasAdivinadas.clear(); // Limpiar el vector de letras adivinadas
                    } else {
                        std::cout << "\nUltima oportunidad, intente adivinar la palabra completa: " << std::endl; //si no logro adivinar se le da ulitma oportunidad de adivinar la palabra completa
                        std::string intentoPalabra;
                        std::cout << "Ingrese la palabra completa: ";
                        std::cin >> intentoPalabra;
                        // Convertir la palabra ingresada a mayúsculas
                        std::transform(intentoPalabra.begin(), intentoPalabra.end(), intentoPalabra.begin(), ::tolower);
                        limpiarBufferEntrada(); // Limpiar el buffer de entrada antes de la próxima entrada
                        // Valida si se ingresó un número en lugar de una palabra
                        if (std::any_of(intentoPalabra.begin(), intentoPalabra.end(), ::isdigit)) {
                        std::cout << "Ingresaste un número en lugar de una palabra." << std::endl; //mensaje de error
                        break;
                    }

                        if (intentoPalabra == juego.palabraAAdivinar) {
                            std::cout << "FELICIDADES Has adivinado la palabra!" << std::endl; //gana si adivina la palabra
                            letrasAdivinadas.clear(); // Limpiar el vector de letras adivinadas
                        } else {
                            std::cout << "GAME OVER! \nLa palabra era: " << juego.palabraAAdivinar << std::endl; //pierde el juego, no adivino letras o palabra
                            letrasAdivinadas.clear(); // Limpiar el vector de letras adivinadas
                        }
                    }
                }
                break;
            case 3:
                agregarPalabra(&diccionario); //uso de puntero para agregar palabra a diccionario
                break;
            case 4:
                mostrarDiccionario(&diccionario); //uso de puntero para mostrar palabras del diccionario
                break;
            case 5:
                salir = true;
                break;
            default:
                std::cout << "Opcion no valida. Por favor, seleccione una opcion valida del menu." << std::endl; //error si no ingresa una opcion valida para el menu 
                break;
        }
    }

    return 0;
}
