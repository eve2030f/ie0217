//Tarea 1 B82870 Evelyn Feng

//indica lo que realiza cada funcion
#include "funciones.hpp"
#include <iostream>
#include <cstdlib> // Para utilizar rand() random
#include <ctime> // Para inicializar la  generación de números aleatorios
#include <limits> // Para limpiar el buffer de entrada

//casos de dificultad del juego
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

//lo que muestra el menu
void mostrarMenu(Dificultad dificultad) {
    std::cout << "\nMENU:" << std::endl;
    std::cout << "1. Elegir la dificultad del juego." << std::endl;
    std::cout << "2. Inicia el juego. Dificultad: " << dificultadToString(dificultad) << std::endl;
    std::cout << "3. Agregar palabras al diccionario." << std::endl;
    std::cout << "4. Ver diccionario de palabras." << std::endl;
    std::cout << "5. Salir del programa." << std::endl;
    std::cout << "Selecciona una opcion: ";
}

//funcion para agregar palabra al dicc.
void agregarPalabra(std::vector<std::string>* diccionario) {
    std::string palabra;
    std::cout << "\nIngrese la palabra que desea agregar al diccionario: ";
    std::cin >> palabra;
    // Convertir la palabra a minúscula
    for (char& c : palabra) {
        c = std::tolower(c);
    }
    diccionario->push_back(palabra);
    std::cout << "Palabra agregada exitosamente." << std::endl;
}

//funcion para mostrar palabras del diccionario
void mostrarDiccionario(const std::vector<std::string>* diccionario) {
    std::cout << "\nPalabras del diccionario:" << std::endl;
    for (const auto& palabra : *diccionario) {
        std::cout << palabra << std::endl;
    }
}

//funcion para iniciar el juego
void inicializaJuego(Ahorcado* juego, Dificultad dificultad, const std::vector<std::string>*diccionario) {
    srand(time(nullptr));
    int indice = rand() % diccionario->size();
    juego->palabraAAdivinar = (*diccionario)[indice];
    juego->estadoActual = std::string(juego->palabraAAdivinar.length(), '_');
    switch (dificultad) {
        case FACIL:
            juego->intentosMax = 7;
            break;
        case INTERMEDIO:
            juego->intentosMax = 5;
            break;
        case DIFICIL:
            juego->intentosMax = 3;
            break;
        default:
            juego->intentosMax = 7; //default es facil
    }
    juego->intentos = 0;
    juego->dificultad = dificultad;
}

//muestra con _ _ _ las letras completadas o faltantes, los intentos restantes y los permitidos o el maximo de acuerdo a la dificultad
void mostrarEstadoJuego(const Ahorcado* juego) {
    std::cout << "\nPalabra a adivinar: " << juego->estadoActual << std::endl;
    std::cout << "Intentos restantes: " << juego->intentosMax - juego->intentos << std::endl;
    std::cout << "Intentos permitidos: " << juego->intentosMax << std::endl;
}

//funcion para ir llenando casillas _ _ _
void adivinarLetra(Ahorcado* juego, char letra) {
    // Verificar si la letra ya ha sido intentada antes
    if (juego->intentosRealizados.find(letra) != std::string::npos) {
        std::cout << "Ya has intentado la letra '" << letra << "'. Ingrese otra letra." << std::endl;
        return;
    }

    // Convertir la letra ingresada a minúscula
    letra = std::tolower(letra);
    //agrega letra adivinada al estado actual
    bool letraAdivinada = false;
    for (size_t i = 0; i < juego->palabraAAdivinar.length(); ++i) {
        if (juego->palabraAAdivinar[i] == letra) {
            juego->estadoActual[i] = letra;
            letraAdivinada = true;
        }
    }
    if (!letraAdivinada) {
        ++juego->intentos;
    }
     // Agregar la letra a la lista de intentos realizados
    juego->intentosRealizados += letra;

}

void limpiarBufferEntrada() { // limpia en caso de que escriban numeros cunado se deben poner letras
    std::cin.clear(); // Limpiar el estado del flujo de entrada
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descartar caracteres restantes en el buffer de entrada
}

bool juegoTerminado(const Ahorcado* juego) { //termina el juego si la palabra es diferente a la palabra a adivinar (pierde) o si es igual (gana)
    if (juego->estadoActual == juego->palabraAAdivinar || juego->intentos >= juego->intentosMax) {
        return true;
    }
    return false;
}
