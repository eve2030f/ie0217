//Tarea 1 B82870 Evelyn Feng

//indica lo que realiza cada funcion
#include "funciones.hpp"
#include <iostream>
#include <cstdlib> // Para utilizar rand() random
#include <ctime> // Para inicializar la  generación de números aleatorios
#include <limits> // Para limpiar el buffer de entrada

std::string dificultadToString(Dificultad dificultad) {
    switch (dificultad) {
        case FACIL:
            return "Facil";
        case INTERMEDIO:
            return "Intermedio";
        case DIFICIL:
            return "Dificil";
        default:
            return "Desconocida";
    }
}

void mostrarMenu(Dificultad dificultad) {
    std::cout << "\nMENU:" << std::endl;
    std::cout << "1. Elegir la dificultad del juego." << std::endl;
    std::cout << "2. Inicia el juego. Dificultad: " << dificultadToString(dificultad) << std::endl;
    std::cout << "3. Agregar palabras al diccionario." << std::endl;
    std::cout << "4. Ver diccionario de palabras." << std::endl;
    std::cout << "5. Salir del programa." << std::endl;
    std::cout << "Selecciona una opcion: ";
}

void agregarPalabra(std::vector<std::string>& diccionario) {
    std::string palabra;
    std::cout << "\nIngrese la palabra que desea agregar al diccionario: ";
    std::cin >> palabra;
    diccionario.push_back(palabra);
    std::cout << "Palabra agregada exitosamente." << std::endl;
}

void mostrarDiccionario(const std::vector<std::string>& diccionario) {
    std::cout << "\nPalabras del diccionario:" << std::endl;
    for (const auto& palabra : diccionario) {
        std::cout << palabra << std::endl;
    }
}

void inicializaJuego(Ahorcado& juego, Dificultad dificultad, const std::vector<std::string>& diccionario) {
    srand(time(nullptr));
    int indice = rand() % diccionario.size();
    juego.palabraAAdivinar = diccionario[indice];
    juego.estadoActual = std::string(juego.palabraAAdivinar.length(), '_');
    switch (dificultad) {
        case FACIL:
            juego.intentosMax = 7;
            break;
        case INTERMEDIO:
            juego.intentosMax = 5;
            break;
        case DIFICIL:
            juego.intentosMax = 3;
            break;
        default:
            juego.intentosMax = 7;
    }
    juego.intentos = 0;
    juego.dificultad = dificultad;
}

void mostrarEstadoJuego(const Ahorcado& juego) {
    std::cout << "Palabra a adivinar: " << juego.estadoActual << std::endl;
    std::cout << "Intentos restantes: " << juego.intentosMax - juego.intentos << std::endl;
    std::cout << "Intentos permitidos: " << juego.intentosMax << std::endl;
}

void adivinarLetra(Ahorcado& juego, char letra) {
    bool letraAdivinada = false;
    for (size_t i = 0; i < juego.palabraAAdivinar.length(); ++i) {
        if (juego.palabraAAdivinar[i] == letra) {
            juego.estadoActual[i] = letra;
            letraAdivinada = true;
        }
    }
    if (!letraAdivinada) {
        ++juego.intentos;
    }
}

void limpiarBufferEntrada() {
    std::cin.clear(); // Limpiar el estado del flujo de entrada
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descartar caracteres restantes en el buffer de entrada
}

bool juegoTerminado(const Ahorcado& juego) {
    if (juego.estadoActual == juego.palabraAAdivinar || juego.intentos >= juego.intentosMax) {
        return true;
    }
    return false;
}
