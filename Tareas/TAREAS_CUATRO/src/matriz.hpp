//Tarea 4 Evelyn Feng Wu B82870
// Calculadora de matrices usando templates
/**
 * @file matriz.hpp
 * 
 * @author Evelyn Feng
 * @date 5/5/24
 * @license MIT License
  * @brief* Este programa está sujeto a los términos y condiciones de la licencia resente en el archivo 'licencia.txt'.
 
 
 */
 /**
 * @file matriz.hpp
 * @brief Implementación de la clase Matriz
 */

#include <random> // Para generación de números aleatorios
#include <chrono> // Para semilla aleatoria basada en el tiempo actual
#include <complex>
#include <type_traits> // Para std::enable_if y std::is_same 
 /**
 * @brief Clase que representa una matriz.
 * @tparam T Tipo de elementos de la matriz.
 */
 template<typename T>
// Crear la clase matriz que cada una tiene columnas y filas
class Matriz {
private:
    int filas; // Numero de filas
    int columnas; // Numero de columnas
    std::vector<std::vector<T>> datos; // Datos de la matriz

public:
    /**
     * @brief Constructor de la clase Matriz.
     * @param filas Número de filas de la matriz.
     * @param columnas Número de columnas de la matriz.
     */   
    Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
        datos.resize(filas, std::vector<T>(columnas));
    }

    /**
     * @brief Destructor de la clase Matriz.
     */
    ~Matriz() {}

    /**
     * @brief Método para llenar la matriz con valores ingresados por el usuario.
     * @param nombreMatriz Nombre de la matriz para mostrar en los mensajes.
     * @throw std::invalid_argument si hay errores en la entrada del usuario.
     */
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
                throw std::invalid_argument("Error: Los elementos deben estar separados por comas. La dimension de elementos es incorrecta.");
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


    /**
     * @brief Método para mostrar la matriz.
     */
    void mostrarMatriz() const {
        for (const auto& fila : datos) {
            for (const auto& elemento : fila) {
                std::cout << elemento << " ";
            }
            std::cout << std::endl;
        }
    }

    /**
     * @brief Método para llenar la matriz con valores aleatorios.
     */
    void llenarMatrizAleatoria() {
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
     /**
     * @brief Método para llenar la matriz con valores aleatorios complejos.
     */
void llenarMatrizAleatoria2() {
    // Semilla aleatoria basada en el tiempo actual
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    // Distribucion de numeros aleatorios para las partes real e imaginaria
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
  /**
     * @brief Operaciones con matrices
     */

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
 /**
     * @brief Sobrecarga del operador de resta para matrices.
     */
    Matriz<T> operator-(const Matriz<T>& otra) const {
        if (filas != otra.filas || columnas != otra.columnas) {
            throw std::invalid_argument("Las matrices no tienen las mismas dimensiones");
        }
        Matriz<T> resultado1(filas, columnas);
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                resultado1.datos[i][j] = datos[i][j] - otra.datos[i][j];
            }
        }
        return resultado1;
    }
  /**
     * @brief Sobrecarga del operador de multiplicación para matrices.
     */
    Matriz<T> operator*(const Matriz<T>& otra) const {
        if (columnas != otra.filas) {
            throw std::invalid_argument("El numero de columnas de la primera matriz no coincide con el numero de filas de la segunda matriz");
        }
        Matriz<T> resultado2(filas, otra.columnas);
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < otra.columnas; ++j) {
                resultado2.datos[i][j] = 0;
                for (int k = 0; k < columnas; ++k) {
                    resultado2.datos[i][j] += datos[i][k] * otra.datos[k][j];
                }
            }
        }
        return resultado2;
    }
 /**
     * @brief Función para sumar dos matrices.
     */

    void sumarMatrices(const Matriz<T>& otra) {
        try {
            *this = *this + otra;
            std::cout << "La suma de las matrices es:\n";
            mostrarMatriz();
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error al sumar matrices: " << e.what() << std::endl;
        }
    }

/**
     * @brief Función para restar dos matrices.
     */
    void restarMatrices(const Matriz<T>& otra) {
        try {
            *this = *this - otra;
            std::cout << "La resta de las matrices es:\n";
            mostrarMatriz();
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error al restar matrices: " << e.what() << std::endl;
        }
    }

   /**
     * @brief Función para multiplicar dos matrices.
     */
    void multiplicarMatrices(const Matriz<T>& otra) {
        try {
            *this = *this * otra;
            std::cout << "El producto de las matrices es:\n";
            mostrarMatriz();
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error al multiplicar matrices: " << e.what() << std::endl;
        }
    }
};
