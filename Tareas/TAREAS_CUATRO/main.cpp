//Tarea 3 Evelyn Feng Wu B82870
// Calculadora de matrices usando templates
#include <iostream>
#include <vector>
#include <stdexcept>
#include <cctype> // Para la función isdigit

//crea el template
template<typename T>

//crea la clase matriz que cada una tiene columnas y filas
class Matriz {
private:
    int filas; //numero de filas y columnas son enteros
    int columnas;
    std::vector<std::vector<T>> datos; //variable T

public:
    Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
        datos.resize(filas, std::vector<T>(columnas));
    }

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
       
        
            // Verificar si el valor ingresado no es un número
            if (!std::isdigit(valor)) {
                throw std::invalid_argument("La cantidad de elementos ingresados no coincide con las dimensiones de la matriz.");
            }
        }
        // Verificar si se ingresaron suficientes elementos
        if (elementosIngresados != filas * columnas) {
            throw std::invalid_argument("Error: Debe ingresar solo números.");
        }

        int k = 0;
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                datos[i][j] = valores[k++];
            }
        }
        std::cin.ignore();

    }




        // Método para mostrar la matriz
    void mostrarMatriz() const {
        for (const auto& fila : datos) {
            for (const auto& elemento : fila) {
                std::cout << elemento << " ";
            }
            std::cout << std::endl;
        }
    }

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
            throw std::invalid_argument("El numero de columnas de la primera matriz no coincide con el numero de filas de la segunda matriz");
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

    friend std::ostream& operator<<(std::ostream& os, const Matriz<T>& matriz) {
        for (const auto& fila : matriz.datos) {
            for (const auto& elem : fila) {
                os << elem << ",";
            }
            os << std::endl;
        }
        return os;
    }
};

class ValidadorDeEntrada {
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

int main() {
    int filas, columnas;
    std::string input_filas, input_columnas;

    std::cout << "Ingrese el número de filas: ";
    std::cin >> input_filas;
    std::cout << "Ingrese el número de columnas: ";
    std::cin >> input_columnas;

    try {
        ValidadorDeEntrada::validarNumero(input_filas);
        ValidadorDeEntrada::validarNumero(input_columnas);
        filas = std::stoi(input_filas);
        columnas = std::stoi(input_columnas);
        ValidadorDeEntrada::validarDimension(filas);
        ValidadorDeEntrada::validarDimension(columnas);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    Matriz<double> matrizA(filas, columnas);
    Matriz<double> matrizB(filas, columnas);


    matrizA.llenarMatriz("A");
    std::cin.ignore();
    matrizB.llenarMatriz("B");
    std::cin.ignore();

    // Mostrar las matrices ingresadas
    std::cout << "Matriz A:\n";
    matrizA.mostrarMatriz();
    std::cout << "\nMatriz B:\n";
    matrizB.mostrarMatriz();


    try {
        Matriz<double> suma = matrizA + matrizB;
        std::cout << "La suma de las matrices es:\n" << suma;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error al sumar matrices: " << e.what() << std::endl;
    }

    try {
        Matriz<double> resta = matrizA - matrizB;
        std::cout << "La resta de las matrices es:\n" << resta;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error al restar matrices: " << e.what() << std::endl;
    }

    try {
        Matriz<double> multiplicacion = matrizA * matrizB;
        std::cout << "El producto de las matrices es:\n" << multiplicacion;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error al multiplicar matrices: " << e.what() << std::endl;
    }

    return 0;
}