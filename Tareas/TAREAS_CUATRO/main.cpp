//Tarea 3 Evelyn Feng Wu B82870
// Calculadora de matrices usando templates
#include <iostream>
#include <vector>
#include <stdexcept>
#include <cctype> // Para la función isdigit
#include <random> // Para generación de números aleatorios
#include <chrono> // Para semilla aleatoria basada en el tiempo actual
#include <complex> // Para números complejos

// Clase para validar la entrada del usuario
class ValidacionDeEntrada {
public:
    static void validarDimension(int tamano) {
        if (tamano <= 0) {
            throw std::invalid_argument("Las dimensiones deben ser números positivos mayores a 0");
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
                throw std::invalid_argument("Error: Los elementos deben estar separados por comas.");
            }
       
        }
            // Verificar si el valor ingresado no es un número
           // if (!std::isdigit(valor)) {
           //     throw std::invalid_argument("La cantidad de elementos ingresados no coincide con las dimensiones de la matriz.");
           // }
        
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
    void mostrarMatriz() const {
        for (const auto& fila : datos) {
            for (const auto& elemento : fila) {
                std::cout << elemento << ",";
            }
            std::cout << std::endl;
        }
    }

    // Método para llenar la matriz con valores aleatorios
    void llenarMatrizAleatoria() {
        // Semilla aleatoria basada en el tiempo actual
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::default_random_engine generator(seed);

        // Distribución de números según el tipo de datos
        std::uniform_int_distribution<int> intDistribution(1, 100);
        std::uniform_real_distribution<double> doubleDistribution(1.0, 100.0);

        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                if (typeid(T) == typeid(int)) {
                    datos[i][j] = intDistribution(generator);
                } else if (typeid(T) == typeid(double)) {
                    datos[i][j] = doubleDistribution(generator);
                }
            }
        }
    }

    // Operaciones con matrices
    Matriz<T> operator+(const Matriz<T>& otra) const {
        if (filas != otra.filas || columnas != otra.columnas) {
            throw std::invalid_argument("Las matrices no tienen las mismas dimensiones");
        }
        Matriz<T> resultado(filas, columnas);
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                resultado.datos[i][j] = datos[i][j] + otra.datos[i][j];
            }
        }
        return resultado;
    }

    Matriz<T> operator-(const Matriz<T>& otra) const {
        if (filas != otra.filas || columnas != otra.columnas) {
            throw std::invalid_argument("Las matrices no tienen las mismas dimensiones");
        }
        Matriz<T> resultado(filas, columnas);
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                resultado.datos[i][j] = datos[i][j] - otra.datos[i][j];
            }
        }
        return resultado;
    }

    Matriz<T> operator*(const Matriz<T>& otra) const {
        if (columnas != otra.filas) {
            throw std::invalid_argument("El número de columnas de la primera matriz no coincide con el número de filas de la segunda matriz");
        }
        Matriz<T> resultado(filas, otra.columnas);
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < otra.columnas; ++j) {
                resultado.datos[i][j] = 0;
                for (int k = 0; k < columnas; ++k) {
                    resultado.datos[i][j] += datos[i][k] * otra.datos[k][j];
                }
            }
        }
        return resultado;
    }

    // Función para sumar dos matrices
    void sumarMatrices(const Matriz<T>& matrizA, const Matriz<T>& matrizB) {
        try {
            Matriz<T> suma = matrizA + matrizB;
            std::cout << "La suma de las matrices es:\n";
            suma.mostrarMatriz();
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error al sumar matrices: " << e.what() << std::endl;
        }
    }

    // Función para restar dos matrices
    void restarMatrices(const Matriz<T>& matrizA, const Matriz<T>& matrizB) {
        try {
            Matriz<T> resta = matrizA - matrizB;
            std::cout << "La resta de las matrices es:\n";
            resta.mostrarMatriz();
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error al restar matrices: " << e.what() << std::endl;
        }
    }

    // Función para multiplicar dos matrices
    void multiplicarMatrices(const Matriz<T>& matrizA, const Matriz<T>& matrizB) {
        try {
            Matriz<T> multiplicacion = matrizA * matrizB;
            std::cout << "El producto de las matrices es:\n";
            multiplicacion.mostrarMatriz();
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error al multiplicar matrices: " << e.what() << std::endl;
        }
    }
};

int main() {
    int filas, columnas;
    std::string input_filas, input_columnas;

    Matriz<double> matrizA(0, 0);
    Matriz<double> matrizB(0, 0);

    // Menú principal
    while (true) {
        std::cout << "\n--- Menu ---\n";
        std::cout << "1. Ingresar tamaño de matrices y valores\n";
        std::cout << "2. Generar datos aleatorios para las matrices\n";
        std::cout << "3. Mostrar matrices ingresadas\n";
        std::cout << "4. Realizar operaciones\n";
        std::cout << "5. Finalizar programa\n";
        std::cout << "Ingrese su opción: ";

        int opcion;
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                std::cout << "Ingrese el número de filas: ";
                std::cin >> input_filas;
                std::cout << "Ingrese el número de columnas: ";
                std::cin >> input_columnas;

                try {
                    ValidacionDeEntrada::validarNumero(input_filas);
                    ValidacionDeEntrada::validarNumero(input_columnas);
                    filas = std::stoi(input_filas);
                    columnas = std::stoi(input_columnas);
                    ValidacionDeEntrada::validarDimension(filas);
                    ValidacionDeEntrada::validarDimension(columnas);
                } catch (const std::invalid_argument& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                    break;
                }

                matrizA = Matriz<double>(filas, columnas);
                matrizB = Matriz<double>(filas, columnas);


                matrizA.llenarMatriz("A");
                matrizB.llenarMatriz("B");


                break;
            }
            case 2: {
                matrizA.llenarMatrizAleatoria();
                matrizB.llenarMatrizAleatoria();
                std::cout << "Datos aleatorios generados para las matrices.\n";
                break;
            }
            case 3: {
                std::cout << "Matriz A:\n";
                matrizA.mostrarMatriz();
                std::cout << "\nMatriz B:\n";
                matrizB.mostrarMatriz();
                break;
            }
            case 4: {
                // Submenú para operaciones
                while (true) {
                    std::cout << "\n--- Operaciones ---\n";
                    std::cout << "1. Suma de matrices\n";
                    std::cout << "2. Resta de matrices\n";
                    std::cout << "3. Multiplicación de matrices\n";
                    std::cout << "4. Volver al menú principal\n";
                    std::cout << "Ingrese su opción: ";

                    int opcionOperacion;
                    std::cin >> opcionOperacion;

                    switch (opcionOperacion) {
                        case 1: {
                            matrizA.sumarMatrices(matrizA, matrizB);
                            break;
                        }
                        case 2: {
                            matrizA.restarMatrices(matrizA, matrizB);
                            break;
                        }
                        case 3: {
                            matrizA.multiplicarMatrices(matrizA, matrizB);
                            break;
                        }
                        case 4: {
                            break; // Salir del submenú
                        }
                        default: {
                            std::cout << "Opción inválida. Inténtelo de nuevo.\n";
                            break;
                        }
                    }

                    if (opcionOperacion == 4) {
                        break; // Salir del submenú
                    }
                }
                break;
            }
            case 5: {
                std::cout << "Saliendo del programa.\n";
                return 0;
            }
            default: {
                std::cout << "Opción inválida. Inténtelo de nuevo.\n";
                break;
            }
        }
    }

    return 0;
}
