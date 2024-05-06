//Tarea 3 Evelyn Feng Wu B82870

#include "matriz.hpp"
#include <random> // Para generación de números aleatorios
#include <chrono> // Para semilla aleatoria basada en el tiempo actual
#include <complex>

/**
 * @file matriz.cpp
 * @brief Implementación de la clase Matriz
 */

// Constructor
template<typename T>
Matriz<T>::Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
    datos.resize(filas, std::vector<T>(columnas));
}

// Destructor
template<typename T>
Matriz<T>::~Matriz() {}

// Método para llenar la matriz con valores ingresados por el usuario
template<typename T>
void Matriz<T>::llenarMatriz(const std::string& nombreMatriz) {
    std::cout << "Ingrese los elementos de la matriz " << nombreMatriz << " (separados por comas): ";
    std::vector<T> valores;
    valores.reserve(filas * columnas); // Reservar espacio suficiente para evitar realocaciones

    int elementosIngresados = 0;
    T valor;

    while (std::cin >> valor) {
        valores.push_back(valor);
        elementosIngresados++;

        // Verificar si se ha ingresado la cantidad correcta de elementos
        if (elementosIngresados == filas * columnas) {
            break;
        }

        // Verificar que el siguiente caracter sea una coma
        char siguienteCaracter;
        std::cin >> siguienteCaracter;
        if (siguienteCaracter != ',') {
            throw std::invalid_argument("Error: Los elementos deben estar separados por comas. La dimensión de elementos es incorrecta.");
        }
    }

    // Verificar si se ingresaron suficientes elementos
    if (elementosIngresados != filas * columnas) {
        throw std::invalid_argument("Error: Debe ingresar solo números.");
    }
    std::cin.ignore();
    int k = 0;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            datos[i][j] = valores[k++];
        }
    }
}

// Método para mostrar la matriz
template<typename T>
void Matriz<T>::mostrarMatriz() const {
    for (const auto& fila : datos) {
        for (const auto& elemento : fila) {
            std::cout << elemento << " ";
        }
        std::cout << std::endl;
    }
}

// Método para llenar la matriz con valores aleatorios
template<typename T>
void Matriz<T>::llenarMatrizAleatoria() {
    // Semilla aleatoria basada en el tiempo actual
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    // Distribución de números aleatorios
    std::uniform_real_distribution<float> distribution(1.0f, 100.0f);
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            datos[i][j] = distribution(generator);
        }
    }
}

// Método para llenar la matriz con valores aleatorios para números complejos
template<typename T>
void Matriz<T>::llenarMatrizAleatoria2() {
    // Semilla aleatoria basada en el tiempo actual
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    // Distribución de números aleatorios para las partes real e imaginaria
    std::uniform_real_distribution<float> realDistribution(1.0f, 100.0f);
    std::uniform_real_distribution<float> imagDistribution(1.0f, 100.0f);

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            float realPart = realDistribution(generator);
            float imagPart = imagDistribution(generator);
            datos[i][j] = std::complex<float>(realPart, imagPart);
        }
    }
}

// Instanciación explícita de las plantillas para los tipos int y float
template class Matriz<std::complex<float>>;
template class Matriz<int>;
template class Matriz<float>;
