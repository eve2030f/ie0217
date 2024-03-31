//Tarea 1 B82870 Evelyn Feng

/**
 * @file main.cpp
 * @brief Contiene la función main del juego de ahorcado.
 */

#include "funciones.hpp"
#include "ahorcado.hpp"

#include <algorithm> // Para utilizar std::transform
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits> // Para limpiar el buffer de entrada

/**
 * @brief Función principal que inicia el juego de ahorcado.
 * 
 * @return int El código de salida del programa.
 */
int main() {
    Ahorcado juego; ///< Variable para representar el juego de ahorcado
    Dificultad dificultad = FACIL; ///< Dificultad predeterminada del juego
    std::vector<std::string> diccionario = {"risa", "boca", "payaso", "zapato", "doctor", "xilofono", "computadora", "esternocleidomastoideo", "otorinolaringologo"}; ///< Palabras predeterminadas en el diccionario
    std::vector<char> letrasAdivinadas; ///< Vector de letras adivinadas

    int opcion; ///< Opción seleccionada por el usuario
    bool salir = false; ///< Bandera para controlar la salida del bucle del menú

    // Bucle principal del menú
    while (!salir) {
        juego.intentosRealizados.clear(); // Limpiar letras almacenadas al inicio de cada partida
        mostrarMenu(dificultad); // Mostrar el menú del juego
        std::cin >> opcion; // Leer la opción seleccionada por el usuario
        // Limpiar el buffer de entrada después de leer la opción del menú
        limpiarBufferEntrada();

        switch (opcion) {
            case 1: // Seleccionar la dificultad
                std::cout << "\n Elige la dificultad:" << std::endl;
                std::cout << "1. Facil (7 intentos)" << std::endl;
                std::cout << "2. Intermedio (5 intentos)" << std::endl;
                std::cout << "3. Dificil (3 intentos)" << std::endl;
                std::cout << "Selecciona una opcion: ";
                int nivel; // Variable para almacenar la dificultad seleccionada
                std::cin >> nivel; // Leer la dificultad seleccionada por el usuario
                // Limpiar las entradas inválidas
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
                        std::cout << "\n Opcion invalida. Seleccionando dificultad Facil por defecto." << std::endl; // Mensaje si se ingresa una opción inválida
                        dificultad = FACIL;
                        break;
                }
                break;
            case 2: // Iniciar una nueva partida
                if (diccionario.empty()) {
                    std::cout << "El diccionario de palabras esta vacio. Por favor, agregue palabras antes de iniciar el juego." << std::endl;
                } else {
                    inicializaJuego(&juego, dificultad, &diccionario);
                    std::cout << "Iniciando juego  " << dificultadToString(dificultad) << std::endl; // Comienza el juego
                    while (!juegoTerminado(&juego)) {
                        mostrarEstadoJuego(&juego); // Mostrar el estado actual del juego
                        char letra;
                        std::cout << "Ingrese una letra: "; // Ingrese una letra para el juego
                        std::cin >> letra;
                        limpiarBufferEntrada();
                        if (!isalpha(letra)) {
                            std::cout << "\n Invalido. Ingrese una letra." << std::endl; // Mensaje de error si se ingresa un número en el juego
                            continue;
                        }
                        adivinarLetra(&juego, letra); // Intentar adivinar la letra ingresada
                    }
                    if (juego.estadoActual == juego.palabraAAdivinar) {
                        std::cout << "FELICIDADES has adivinado la palabra!" << std::endl; // Gana la partida
                        letrasAdivinadas.clear(); // Limpiar el vector de letras adivinadas
                    } else {
                        std::cout << "\nUltima oportunidad, intente adivinar la palabra completa: " << std::endl; // Si no logra adivinar, se le da una última oportunidad para adivinar la palabra completa
                        std::string intentoPalabra;
                        std::cout << "Ingrese la palabra completa: ";
                        std::cin >> intentoPalabra;
                        // Convertir la palabra ingresada a minúsculas
                        std::transform(intentoPalabra.begin(), intentoPalabra.end(), intentoPalabra.begin(), ::tolower);
                        limpiarBufferEntrada(); // Limpiar el buffer de entrada antes de la próxima entrada
                        // Validar si se ingresó un número en lugar de una palabra
                        if (std::any_of(intentoPalabra.begin(), intentoPalabra.end(), ::isdigit)) {
                            std::cout << "Ingresaste un número en lugar de una palabra." << std::endl; // Mensaje de error
                            break;
                        }

                        if (intentoPalabra == juego.palabraAAdivinar) {
                            std::cout << "FELICIDADES Has adivinado la palabra!" << std::endl; // Gana si adivina la palabra
                            letrasAdivinadas.clear(); // Limpiar el vector de letras adivinadas
                        } else {
                            std::cout << "GAME OVER! \nLa palabra era: " << juego.palabraAAdivinar << std::endl; // Pierde el juego si no adivina letras o la palabra completa
                            letrasAdivinadas.clear(); // Limpiar el vector de letras adivinadas
                        }
                    }
                }
                break;
            case 3:
                agregarPalabra(&diccionario); // Agregar una palabra al diccionario
                break;
            case 4:
                mostrarDiccionario(&diccionario); // Mostrar las palabras del diccionario
                break;
            case 5:
                salir = true; // Salir del juego
                break;
            default:
                std::cout << "Opcion no valida. Por favor, seleccione una opcion valida del menu." << std::endl; // Error si no se ingresa una opción válida para el menú
                break;
        }
    }

    return 0;
}
