//Tarea 3 Evelyn Feng Wu B82870
// Calculadora de matrices usando templates
#include <iostream>
#include <vector>
#include <stdexcept>
#include <cctype> // Para la función isdigit
#include <random> // Para generación de números aleatorios
#include <chrono> // Para semilla aleatoria basada en el tiempo actual

// Clase para validar la entrada del usuario
class ValidacionDeEntrada {
public:
    static void validarDimension(int tamano) {
        if (tamano <= 0) {
            throw std::invalid_argument("Las dimensiones deben ser números positivos mayores a 0");
        }
    }

    static void validarElementosIngresados(int elementosIngresados, int totalElementos) {
        if (elementosIngresados != totalElementos) {
            throw std::invalid_argument("Error: Debe ingresar la cantidad correcta de elementos.");
        }
    }

    static void validarSeparacionComas() {
        char siguienteCaracter;
        std::cin >> siguienteCaracter;
        if (siguienteCaracter != ',') {
            throw std::invalid_argument("Error: Los elementos deben estar separados por comas.");
        }
    }

    static void validarNumero(const std::string& str) {
        for (char c : str) {
            if (!std::isdigit(c)) {
                throw std::invalid_argument("Debe ingresar solo números");
            }
        }
    }
};

// Crear el template
template<typename T>

// Crear la clase matriz que cada una tiene columnas y filas
class Matriz {
private:
    int filas; // Número de filas
    int columnas; // Número de columnas
    std::vector<std::vector<T>> datos; // Datos de la matriz

public:
    // Constructor
    Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
        datos.resize(filas, std::vector<T>(columnas));
    }

    // Método para llenar la matriz con valores ingresados por el usuario
    void llenarMatriz(const std::string& nombreMatriz) {
        ValidacionDeEntrada::validarDimension(filas * columnas);

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

            ValidacionDeEntrada::validarSeparacionComas();
        }

        // Verificar si se ingresaron suficientes elementos
        ValidacionDeEntrada::validarElementosIngresados(elementosIngresados, filas * columnas);
        std::cin.ignore();

        int k = 0;
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                datos[i][j] = valores[k++];
            }
        }
    }
